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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"


extern "C" {static int slot_QNetworkConfiguration_StateFlags___bool__(PyObject *);}
static int slot_QNetworkConfiguration_StateFlags___bool__(PyObject *sipSelf)
{
    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNetworkConfiguration::StateFlags::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration::StateFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkConfiguration_StateFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNetworkConfiguration::StateFlags::Int() != a0->operator QNetworkConfiguration::StateFlags::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"
            sipReleaseType(const_cast<QNetworkConfiguration::StateFlags *>(a0),sipType_QNetworkConfiguration_StateFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkConfiguration_StateFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration::StateFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkConfiguration_StateFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNetworkConfiguration::StateFlags::Int() == a0->operator QNetworkConfiguration::StateFlags::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"
            sipReleaseType(const_cast<QNetworkConfiguration::StateFlags *>(a0),sipType_QNetworkConfiguration_StateFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkConfiguration_StateFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkConfiguration_StateFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QNetworkConfiguration::StateFlags(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"

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


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration::StateFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkConfiguration_StateFlags, &a0, &a0State, &a1))
        {
            QNetworkConfiguration::StateFlags*sipRes;

            sipRes = new QNetworkConfiguration::StateFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QNetworkConfiguration_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkConfiguration_StateFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QNetworkConfiguration::StateFlags(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"

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


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration::StateFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkConfiguration_StateFlags, &a0, &a0State, &a1))
        {
            QNetworkConfiguration::StateFlags*sipRes;

            sipRes = new QNetworkConfiguration::StateFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QNetworkConfiguration_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkConfiguration_StateFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QNetworkConfiguration::StateFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration::StateFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkConfiguration_StateFlags, &a0, &a0State, &a1))
        {
            QNetworkConfiguration::StateFlags*sipRes;

            sipRes = new QNetworkConfiguration::StateFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QNetworkConfiguration_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___invert__(PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___invert__(PyObject *sipSelf)
{
    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QNetworkConfiguration::StateFlags*sipRes;

            sipRes = new QNetworkConfiguration::StateFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkConfiguration_StateFlags___int__(PyObject *);}
static PyObject *slot_QNetworkConfiguration_StateFlags___int__(PyObject *sipSelf)
{
    QNetworkConfiguration::StateFlags *sipCpp = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration_StateFlags));

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
extern "C" {static void release_QNetworkConfiguration_StateFlags(void *, int);}
static void release_QNetworkConfiguration_StateFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipCppV);
}


extern "C" {static void assign_QNetworkConfiguration_StateFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkConfiguration_StateFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkConfiguration::StateFlags *>(sipSrc);
}


extern "C" {static void *array_QNetworkConfiguration_StateFlags(SIP_SSIZE_T);}
static void *array_QNetworkConfiguration_StateFlags(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkConfiguration::StateFlags[sipNrElem];
}


extern "C" {static void *copy_QNetworkConfiguration_StateFlags(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkConfiguration_StateFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkConfiguration::StateFlags(reinterpret_cast<const QNetworkConfiguration::StateFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkConfiguration_StateFlags(sipSimpleWrapper *);}
static void dealloc_QNetworkConfiguration_StateFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkConfiguration_StateFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkConfiguration_StateFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkConfiguration_StateFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkConfiguration::StateFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNetworkConfiguration::StateFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QNetworkConfiguration::StateFlags(a0);

            return sipCpp;
        }
    }

    {
        const QNetworkConfiguration::StateFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNetworkConfiguration_StateFlags, &a0, &a0State))
        {
            sipCpp = new QNetworkConfiguration::StateFlags(*a0);
            sipReleaseType(const_cast<QNetworkConfiguration::StateFlags *>(a0),sipType_QNetworkConfiguration_StateFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNetworkConfiguration_StateFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNetworkConfiguration_StateFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNetworkConfiguration::StateFlags **sipCppPtr = reinterpret_cast<QNetworkConfiguration::StateFlags **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNetworkConfiguration::StateFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkConfiguration_StateFlag)) ||
            sipCanConvertToType(sipPy, sipType_QNetworkConfiguration_StateFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkConfiguration_StateFlag)))
{
    *sipCppPtr = new QNetworkConfiguration::StateFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNetworkConfiguration::StateFlags *>(sipConvertToType(sipPy, sipType_QNetworkConfiguration_StateFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQNetworkConfigurationStateFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkConfiguration_StateFlags[] = {
    {(void *)slot_QNetworkConfiguration_StateFlags___bool__, bool_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___ne__, ne_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___eq__, eq_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___ixor__, ixor_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___xor__, xor_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___ior__, ior_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___or__, or_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___iand__, iand_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___and__, and_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___invert__, invert_slot},
    {(void *)slot_QNetworkConfiguration_StateFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNetworkConfiguration_StateFlags, "\1QNetworkConfiguration.StateFlags()\n"
    "QNetworkConfiguration.StateFlags(Union[QNetworkConfiguration.StateFlags, QNetworkConfiguration.StateFlag])\n"
    "QNetworkConfiguration.StateFlags(QNetworkConfiguration.StateFlags)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QNetworkConfiguration_StateFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNetworkConfiguration__StateFlags,
        {0}
    },
    {
        sipNameNr_StateFlags,
        {56, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkConfiguration_StateFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkConfiguration_StateFlags,
    init_type_QNetworkConfiguration_StateFlags,
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
    dealloc_QNetworkConfiguration_StateFlags,
    assign_QNetworkConfiguration_StateFlags,
    array_QNetworkConfiguration_StateFlags,
    copy_QNetworkConfiguration_StateFlags,
    release_QNetworkConfiguration_StateFlags,
    0,
    convertTo_QNetworkConfiguration_StateFlags,
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
