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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"


extern "C" {static int slot_QNetworkProxy_Capabilities___bool__(PyObject *);}
static int slot_QNetworkProxy_Capabilities___bool__(PyObject *sipSelf)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNetworkProxy::Capabilities::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy::Capabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNetworkProxy::Capabilities::Int() != a0->operator QNetworkProxy::Capabilities::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"
            sipReleaseType(const_cast<QNetworkProxy::Capabilities *>(a0),sipType_QNetworkProxy_Capabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkProxy_Capabilities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy::Capabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNetworkProxy::Capabilities::Int() == a0->operator QNetworkProxy::Capabilities::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"
            sipReleaseType(const_cast<QNetworkProxy::Capabilities *>(a0),sipType_QNetworkProxy_Capabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkProxy_Capabilities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QNetworkProxy::Capabilities(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"

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


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___xor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkProxy_Capabilities, &a0, &a0State, &a1))
        {
            QNetworkProxy::Capabilities*sipRes;

            sipRes = new QNetworkProxy::Capabilities((*a0 ^ a1));
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___ior__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QNetworkProxy::Capabilities(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"

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


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___or__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkProxy_Capabilities, &a0, &a0State, &a1))
        {
            QNetworkProxy::Capabilities*sipRes;

            sipRes = new QNetworkProxy::Capabilities((*a0 | a1));
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___iand__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QNetworkProxy::Capabilities::operator&=(a0);

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


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___and__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkProxy_Capabilities, &a0, &a0State, &a1))
        {
            QNetworkProxy::Capabilities*sipRes;

            sipRes = new QNetworkProxy::Capabilities((*a0 & a1));
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___invert__(PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___invert__(PyObject *sipSelf)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;


    {
        {
            QNetworkProxy::Capabilities*sipRes;

            sipRes = new QNetworkProxy::Capabilities(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___int__(PyObject *);}
static PyObject *slot_QNetworkProxy_Capabilities___int__(PyObject *sipSelf)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

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
extern "C" {static void release_QNetworkProxy_Capabilities(void *, int);}
static void release_QNetworkProxy_Capabilities(void *sipCppV,int)
{
    delete reinterpret_cast<QNetworkProxy::Capabilities *>(sipCppV);
}


extern "C" {static void assign_QNetworkProxy_Capabilities(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkProxy_Capabilities(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkProxy::Capabilities *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkProxy::Capabilities *>(sipSrc);
}


extern "C" {static void *array_QNetworkProxy_Capabilities(SIP_SSIZE_T);}
static void *array_QNetworkProxy_Capabilities(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkProxy::Capabilities[sipNrElem];
}


extern "C" {static void *copy_QNetworkProxy_Capabilities(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkProxy_Capabilities(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkProxy::Capabilities(reinterpret_cast<const QNetworkProxy::Capabilities *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkProxy_Capabilities(sipSimpleWrapper *);}
static void dealloc_QNetworkProxy_Capabilities(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkProxy_Capabilities(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkProxy_Capabilities(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkProxy_Capabilities(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkProxy::Capabilities *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNetworkProxy::Capabilities();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QNetworkProxy::Capabilities(a0);

            return sipCpp;
        }
    }

    {
        const QNetworkProxy::Capabilities* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            sipCpp = new QNetworkProxy::Capabilities(*a0);
            sipReleaseType(const_cast<QNetworkProxy::Capabilities *>(a0),sipType_QNetworkProxy_Capabilities,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNetworkProxy_Capabilities(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNetworkProxy_Capabilities(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNetworkProxy::Capabilities **sipCppPtr = reinterpret_cast<QNetworkProxy::Capabilities **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNetworkProxy::Capabilities is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capability)) ||
            sipCanConvertToType(sipPy, sipType_QNetworkProxy_Capabilities, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capability)))
{
    *sipCppPtr = new QNetworkProxy::Capabilities(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNetworkProxy::Capabilities *>(sipConvertToType(sipPy, sipType_QNetworkProxy_Capabilities, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNetwork/sipQtNetworkQNetworkProxyCapabilities.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkProxy_Capabilities[] = {
    {(void *)slot_QNetworkProxy_Capabilities___bool__, bool_slot},
    {(void *)slot_QNetworkProxy_Capabilities___ne__, ne_slot},
    {(void *)slot_QNetworkProxy_Capabilities___eq__, eq_slot},
    {(void *)slot_QNetworkProxy_Capabilities___ixor__, ixor_slot},
    {(void *)slot_QNetworkProxy_Capabilities___xor__, xor_slot},
    {(void *)slot_QNetworkProxy_Capabilities___ior__, ior_slot},
    {(void *)slot_QNetworkProxy_Capabilities___or__, or_slot},
    {(void *)slot_QNetworkProxy_Capabilities___iand__, iand_slot},
    {(void *)slot_QNetworkProxy_Capabilities___and__, and_slot},
    {(void *)slot_QNetworkProxy_Capabilities___invert__, invert_slot},
    {(void *)slot_QNetworkProxy_Capabilities___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNetworkProxy_Capabilities, "\1QNetworkProxy.Capabilities()\n"
    "QNetworkProxy.Capabilities(Union[QNetworkProxy.Capabilities, QNetworkProxy.Capability])\n"
    "QNetworkProxy.Capabilities(QNetworkProxy.Capabilities)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QNetworkProxy_Capabilities = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxy__Capabilities,
        {0}
    },
    {
        sipNameNr_Capabilities,
        {72, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxy_Capabilities,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkProxy_Capabilities,
    init_type_QNetworkProxy_Capabilities,
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
    dealloc_QNetworkProxy_Capabilities,
    assign_QNetworkProxy_Capabilities,
    array_QNetworkProxy_Capabilities,
    copy_QNetworkProxy_Capabilities,
    release_QNetworkProxy_Capabilities,
    0,
    convertTo_QNetworkProxy_Capabilities,
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
