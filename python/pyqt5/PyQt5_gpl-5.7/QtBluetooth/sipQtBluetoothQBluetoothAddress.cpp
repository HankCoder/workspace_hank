/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtBluetooth.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qbluetoothaddress.sip"
#include <qbluetoothaddress.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAddress.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAddress.cpp"


PyDoc_STRVAR(doc_QBluetoothAddress_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QBluetoothAddress_isNull(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothAddress_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothAddress, sipName_isNull, doc_QBluetoothAddress_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothAddress_clear, "clear(self)");

extern "C" {static PyObject *meth_QBluetoothAddress_clear(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothAddress_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothAddress, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothAddress, sipName_clear, doc_QBluetoothAddress_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothAddress_toUInt64, "toUInt64(self) -> int");

extern "C" {static PyObject *meth_QBluetoothAddress_toUInt64(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothAddress_toUInt64(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothAddress, &sipCpp))
        {
            quint64 sipRes;

            sipRes = sipCpp->toUInt64();

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothAddress, sipName_toUInt64, doc_QBluetoothAddress_toUInt64);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothAddress_toString, "toString(self) -> str");

extern "C" {static PyObject *meth_QBluetoothAddress_toString(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothAddress_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothAddress, sipName_toString, doc_QBluetoothAddress_toString);

    return NULL;
}


extern "C" {static PyObject *slot_QBluetoothAddress___ge__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothAddress___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothAddress *sipCpp = reinterpret_cast<QBluetoothAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothAddress, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QBluetoothAddress::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ge_slot,sipType_QBluetoothAddress,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothAddress___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothAddress___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothAddress *sipCpp = reinterpret_cast<QBluetoothAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothAddress::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ne_slot,sipType_QBluetoothAddress,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothAddress___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothAddress___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothAddress *sipCpp = reinterpret_cast<QBluetoothAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothAddress::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,eq_slot,sipType_QBluetoothAddress,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothAddress___lt__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothAddress___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothAddress *sipCpp = reinterpret_cast<QBluetoothAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothAddress::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,lt_slot,sipType_QBluetoothAddress,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QBluetoothAddress(void *, int);}
static void release_QBluetoothAddress(void *sipCppV,int)
{
    delete reinterpret_cast<QBluetoothAddress *>(sipCppV);
}


extern "C" {static void assign_QBluetoothAddress(void *, SIP_SSIZE_T, const void *);}
static void assign_QBluetoothAddress(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBluetoothAddress *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBluetoothAddress *>(sipSrc);
}


extern "C" {static void *array_QBluetoothAddress(SIP_SSIZE_T);}
static void *array_QBluetoothAddress(SIP_SSIZE_T sipNrElem)
{
    return new QBluetoothAddress[sipNrElem];
}


extern "C" {static void *copy_QBluetoothAddress(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothAddress(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBluetoothAddress(reinterpret_cast<const QBluetoothAddress *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetoothAddress(sipSimpleWrapper *);}
static void dealloc_QBluetoothAddress(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetoothAddress(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBluetoothAddress(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothAddress(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBluetoothAddress *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QBluetoothAddress();

            return sipCpp;
        }
    }

    {
        quint64 a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "o", &a0))
        {
            sipCpp = new QBluetoothAddress(a0);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QBluetoothAddress(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QBluetoothAddress* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBluetoothAddress, &a0))
        {
            sipCpp = new QBluetoothAddress(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBluetoothAddress[] = {
    {(void *)slot_QBluetoothAddress___ge__, ge_slot},
    {(void *)slot_QBluetoothAddress___ne__, ne_slot},
    {(void *)slot_QBluetoothAddress___eq__, eq_slot},
    {(void *)slot_QBluetoothAddress___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBluetoothAddress[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QBluetoothAddress_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothAddress_clear)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QBluetoothAddress_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothAddress_isNull)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QBluetoothAddress_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothAddress_toString)},
    {SIP_MLNAME_CAST(sipName_toUInt64), meth_QBluetoothAddress_toUInt64, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothAddress_toUInt64)}
};

PyDoc_STRVAR(doc_QBluetoothAddress, "\1QBluetoothAddress()\n"
    "QBluetoothAddress(int)\n"
    "QBluetoothAddress(str)\n"
    "QBluetoothAddress(QBluetoothAddress)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetoothAddress = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothAddress,
        {0}
    },
    {
        sipNameNr_QBluetoothAddress,
        {0, 0, 1},
        4, methods_QBluetoothAddress,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothAddress,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QBluetoothAddress,
    init_type_QBluetoothAddress,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QBluetoothAddress,
    assign_QBluetoothAddress,
    array_QBluetoothAddress,
    copy_QBluetoothAddress,
    release_QBluetoothAddress,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
