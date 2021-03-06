// This implements the public API provided by PyQt to external packages.
//
// Copyright (c) 2013 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt5.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


#include <QByteArray>
#include <QHash>

#include "qpycore_chimera.h"
#include "qpycore_public_api.h"
#include "qpycore_pyqtboundsignal.h"
#include "qpycore_pyqtsignal.h"
#include "qpycore_types.h"


// Convert a Python argv list to a conventional C argc count and argv array.
char **pyqt5_from_argv_list(PyObject *argv_list, int &argc)
{
    argc = PyList_GET_SIZE(argv_list);

    // Allocate space for two copies of the argument pointers, plus the
    // terminating NULL.
    char **argv = new char *[2 * (argc + 1)];

    // Convert the list.
    for (int a = 0; a < argc; ++a)
    {
        PyObject *arg_obj = PyList_GET_ITEM(argv_list, a);
        const char *arg = sipString_AsLatin1String(&arg_obj);

        if (arg)
        {
            arg = qstrdup(arg);
            Py_DECREF(arg_obj);
        }
        else
        {
            // Try not to mess up Qt's argument parsing by simply missing out
            // the argument.
            arg = "unknown";
        }

        argv[a] = argv[a + argc + 1] = const_cast<char *>(arg);
    }

    argv[argc + argc + 1] = argv[argc] = NULL;

    return argv;
}


// Get the receiver object and slot signature for a connection.
sipErrorState pyqt5_get_connection_parts(PyObject *slot, QObject *transmitter,
        const char *signal_signature, bool single_shot, QObject **receiver,
        QByteArray &slot_signature)
{ 
    static QHash<QByteArray, const Chimera::Signature *> cache;

    QByteArray key(signal_signature);
    const Chimera::Signature *parsed_signal_signature = cache.value(key);

    if (!parsed_signal_signature)
    {
        parsed_signal_signature = Chimera::parse(key, "a signal argument");

        if (!parsed_signal_signature)
            return sipErrorFail;

        cache.insert(key, parsed_signal_signature);
    }

    return qpycore_get_receiver_slot_signature(slot, transmitter,
            parsed_signal_signature, single_shot, receiver, slot_signature);
}



// Get the transmitter object and signal signature from a bound signal.
sipErrorState pyqt5_get_pyqtsignal_parts(PyObject *signal,
        QObject **transmitter, QByteArray &signal_signature)
{
    if (PyObject_TypeCheck(signal, &qpycore_pyqtBoundSignal_Type))
    {
        qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)signal;

        *transmitter = bs->bound_qobject;
        signal_signature = bs->unbound_signal->signature->signature;

        return sipErrorNone;
    }

    return sipErrorContinue;
}


// Get the receiver object and slot signature from a decorated callable.
sipErrorState pyqt5_get_pyqtslot_parts(PyObject *slot, QObject **receiver,
        QByteArray &slot_signature)
{
    // Get the QObject.
    PyObject *py_receiver = PyMethod_Self(slot);

    if (!py_receiver)
        return sipErrorContinue;

    void *qobj;
    int is_err = 0;

    qobj = sipForceConvertToType(py_receiver, sipType_QObject, 0,
            SIP_NO_CONVERTORS, 0, &is_err);

    if (is_err)
        return sipErrorContinue;

    *receiver = reinterpret_cast<QObject *>(qobj);

    // Get the decoration.
    PyObject *decorations = PyObject_GetAttr(slot, qpycore_signature_attr_name);

    if (!decorations)
        return sipErrorContinue;

    // Use the first one ignoring any others.
    Chimera::Signature *sig = Chimera::Signature::fromPyObject(
            PyList_GET_ITEM(decorations, 0));
    Py_DECREF(decorations);

    slot_signature = sig->signature;
    slot_signature.prepend('1');

    return sipErrorNone;
}


// Get the signature string for a bound or unbound signal.
sipErrorState pyqt5_get_signal_signature(PyObject *signal,
        const QObject *transmitter, QByteArray &signal_signature)
{
    qpycore_pyqtSignal *ps;

    if (PyObject_TypeCheck(signal, &qpycore_pyqtBoundSignal_Type))
    {
        qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)signal;

        if (bs->bound_qobject != transmitter)
        {
            PyErr_SetString(PyExc_ValueError,
                    "signal is bound to a different QObject");
            return sipErrorFail;
        }

        ps = bs->unbound_signal;
    }
    else if (PyObject_TypeCheck(signal, &qpycore_pyqtSignal_Type))
    {
        ps = (qpycore_pyqtSignal *)signal;
    }
    else
    {
        return sipErrorContinue;
    }

    signal_signature = ps->signature->signature;

    return sipErrorNone;
}


// Register a convertor function that converts a QVariant to a Python object.
void pyqt5_register_from_qvariant_convertor(
        bool (*convertor)(const QVariant &, PyObject **))
{
    Chimera::registeredFromQVariantConvertors.append(convertor);
}


// Register a convertor function that converts a Python object to a QVariant.
void pyqt5_register_to_qvariant_convertor(
        bool (*convertor)(PyObject *, QVariant &, bool *))
{
    Chimera::registeredToQVariantConvertors.append(convertor);
}


// Register a convertor function that converts a Python object to the
// pre-allocated data of a QVariant with a specific meta-type.
void pyqt5_register_to_qvariant_data_convertor(
        bool (*convertor)(PyObject *, void *, int, bool *))
{
    Chimera::registeredToQVariantDataConvertors.append(convertor);
}


// Remove arguments from the Python argv list that have been removed from the
// C argv array.
void pyqt5_update_argv_list(PyObject *argv_list, int argc, char **argv)
{
    for (int a = 0, na = 0; a < argc; ++a)
    {
        // See if it was removed.
        if (argv[na] == argv[a + argc + 1])
            ++na;
        else
            PyList_SetSlice(argv_list, na, na + 1, 0);
    }
}


// Get the QMetaObject instance for a Python type.
const QMetaObject *pyqt5_get_qmetaobject(PyTypeObject *type)
{
    return ((pyqtWrapperType *)type)->metaobject->mo;
}
