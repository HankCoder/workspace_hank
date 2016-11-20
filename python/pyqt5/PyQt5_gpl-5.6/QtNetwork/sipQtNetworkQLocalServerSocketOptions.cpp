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

#include "sipAPIQtNetwork.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNetwork/qlocalserver.sip"
#include <qlocalserver.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNetwork/qlocalserver.sip"
#include <qlocalserver.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"


extern "C" {static int slot_QLocalServer_SocketOptions___bool__(PyObject *);}
static int slot_QLocalServer_SocketOptions___bool__(PyObject *sipSelf)
{
    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLocalServer::SocketOptions::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLocalServer::SocketOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocalServer_SocketOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLocalServer::SocketOptions::Int() != a0->operator QLocalServer::SocketOptions::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"
            sipReleaseType(const_cast<QLocalServer::SocketOptions *>(a0),sipType_QLocalServer_SocketOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QLocalServer_SocketOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLocalServer::SocketOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocalServer_SocketOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLocalServer::SocketOptions::Int() == a0->operator QLocalServer::SocketOptions::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"
            sipReleaseType(const_cast<QLocalServer::SocketOptions *>(a0),sipType_QLocalServer_SocketOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QLocalServer_SocketOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocalServer_SocketOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QLocalServer::SocketOptions(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocalServer::SocketOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocalServer_SocketOptions, &a0, &a0State, &a1))
        {
            QLocalServer::SocketOptions*sipRes;

            sipRes = new QLocalServer::SocketOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QLocalServer_SocketOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocalServer_SocketOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocalServer_SocketOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QLocalServer::SocketOptions(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocalServer::SocketOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocalServer_SocketOptions, &a0, &a0State, &a1))
        {
            QLocalServer::SocketOptions*sipRes;

            sipRes = new QLocalServer::SocketOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QLocalServer_SocketOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocalServer_SocketOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocalServer_SocketOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QLocalServer::SocketOptions::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocalServer::SocketOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocalServer_SocketOptions, &a0, &a0State, &a1))
        {
            QLocalServer::SocketOptions*sipRes;

            sipRes = new QLocalServer::SocketOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QLocalServer_SocketOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocalServer_SocketOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___invert__(PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___invert__(PyObject *sipSelf)
{
    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QLocalServer::SocketOptions*sipRes;

            sipRes = new QLocalServer::SocketOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QLocalServer_SocketOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLocalServer_SocketOptions___int__(PyObject *);}
static PyObject *slot_QLocalServer_SocketOptions___int__(PyObject *sipSelf)
{
    QLocalServer::SocketOptions *sipCpp = reinterpret_cast<QLocalServer::SocketOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocalServer_SocketOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLocalServer_SocketOptions(void *, int);}
static void release_QLocalServer_SocketOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QLocalServer::SocketOptions *>(sipCppV);
}


extern "C" {static void assign_QLocalServer_SocketOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QLocalServer_SocketOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLocalServer::SocketOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLocalServer::SocketOptions *>(sipSrc);
}


extern "C" {static void *array_QLocalServer_SocketOptions(SIP_SSIZE_T);}
static void *array_QLocalServer_SocketOptions(SIP_SSIZE_T sipNrElem)
{
    return new QLocalServer::SocketOptions[sipNrElem];
}


extern "C" {static void *copy_QLocalServer_SocketOptions(const void *, SIP_SSIZE_T);}
static void *copy_QLocalServer_SocketOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLocalServer::SocketOptions(reinterpret_cast<const QLocalServer::SocketOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLocalServer_SocketOptions(sipSimpleWrapper *);}
static void dealloc_QLocalServer_SocketOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLocalServer_SocketOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLocalServer_SocketOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLocalServer_SocketOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLocalServer::SocketOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QLocalServer::SocketOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QLocalServer::SocketOptions(a0);

            return sipCpp;
        }
    }

    {
        const QLocalServer::SocketOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QLocalServer_SocketOptions, &a0, &a0State))
        {
            sipCpp = new QLocalServer::SocketOptions(*a0);
            sipReleaseType(const_cast<QLocalServer::SocketOptions *>(a0),sipType_QLocalServer_SocketOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QLocalServer_SocketOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLocalServer_SocketOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QLocalServer::SocketOptions **sipCppPtr = reinterpret_cast<QLocalServer::SocketOptions **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLocalServer::SocketOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLocalServer_SocketOption)) ||
            sipCanConvertToType(sipPy, sipType_QLocalServer_SocketOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLocalServer_SocketOption)))
{
    *sipCppPtr = new QLocalServer::SocketOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLocalServer::SocketOptions *>(sipConvertToType(sipPy, sipType_QLocalServer_SocketOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQLocalServerSocketOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLocalServer_SocketOptions[] = {
    {(void *)slot_QLocalServer_SocketOptions___bool__, bool_slot},
    {(void *)slot_QLocalServer_SocketOptions___ne__, ne_slot},
    {(void *)slot_QLocalServer_SocketOptions___eq__, eq_slot},
    {(void *)slot_QLocalServer_SocketOptions___ixor__, ixor_slot},
    {(void *)slot_QLocalServer_SocketOptions___xor__, xor_slot},
    {(void *)slot_QLocalServer_SocketOptions___ior__, ior_slot},
    {(void *)slot_QLocalServer_SocketOptions___or__, or_slot},
    {(void *)slot_QLocalServer_SocketOptions___iand__, iand_slot},
    {(void *)slot_QLocalServer_SocketOptions___and__, and_slot},
    {(void *)slot_QLocalServer_SocketOptions___invert__, invert_slot},
    {(void *)slot_QLocalServer_SocketOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QLocalServer_SocketOptions, "\1QLocalServer.SocketOptions()\n"
    "QLocalServer.SocketOptions(Union[QLocalServer.SocketOptions, QLocalServer.SocketOption])\n"
    "QLocalServer.SocketOptions(QLocalServer.SocketOptions)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QLocalServer_SocketOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLocalServer__SocketOptions,
        {0}
    },
    {
        sipNameNr_SocketOptions,
        {44, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLocalServer_SocketOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLocalServer_SocketOptions,
    init_type_QLocalServer_SocketOptions,
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
    dealloc_QLocalServer_SocketOptions,
    assign_QLocalServer_SocketOptions,
    array_QLocalServer_SocketOptions,
    copy_QLocalServer_SocketOptions,
    release_QLocalServer_SocketOptions,
    0,
    convertTo_QLocalServer_SocketOptions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
