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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qbluetoothdeviceinfo.sip"
#include <qbluetoothdeviceinfo.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qbluetoothdeviceinfo.sip"
#include <qbluetoothdeviceinfo.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"


extern "C" {static int slot_QBluetoothDeviceInfo_ServiceClasses___bool__(PyObject *);}
static int slot_QBluetoothDeviceInfo_ServiceClasses___bool__(PyObject *sipSelf)
{
    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetoothDeviceInfo::ServiceClasses::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo::ServiceClasses* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBluetoothDeviceInfo_ServiceClasses, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetoothDeviceInfo::ServiceClasses::Int() != a0->operator QBluetoothDeviceInfo::ServiceClasses::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"
            sipReleaseType(const_cast<QBluetoothDeviceInfo::ServiceClasses *>(a0),sipType_QBluetoothDeviceInfo_ServiceClasses,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ne_slot,sipType_QBluetoothDeviceInfo_ServiceClasses,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo::ServiceClasses* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBluetoothDeviceInfo_ServiceClasses, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetoothDeviceInfo::ServiceClasses::Int() == a0->operator QBluetoothDeviceInfo::ServiceClasses::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"
            sipReleaseType(const_cast<QBluetoothDeviceInfo::ServiceClasses *>(a0),sipType_QBluetoothDeviceInfo_ServiceClasses,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,eq_slot,sipType_QBluetoothDeviceInfo_ServiceClasses,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceInfo_ServiceClasses)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QBluetoothDeviceInfo::ServiceClasses(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"

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


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___xor__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothDeviceInfo::ServiceClasses* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetoothDeviceInfo_ServiceClasses, &a0, &a0State, &a1))
        {
            QBluetoothDeviceInfo::ServiceClasses*sipRes;

            sipRes = new QBluetoothDeviceInfo::ServiceClasses((*a0 ^ a1));
            sipReleaseType(a0,sipType_QBluetoothDeviceInfo_ServiceClasses,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceInfo_ServiceClasses,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___ior__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceInfo_ServiceClasses)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QBluetoothDeviceInfo::ServiceClasses(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"

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


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___or__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothDeviceInfo::ServiceClasses* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetoothDeviceInfo_ServiceClasses, &a0, &a0State, &a1))
        {
            QBluetoothDeviceInfo::ServiceClasses*sipRes;

            sipRes = new QBluetoothDeviceInfo::ServiceClasses((*a0 | a1));
            sipReleaseType(a0,sipType_QBluetoothDeviceInfo_ServiceClasses,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceInfo_ServiceClasses,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___iand__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceInfo_ServiceClasses)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QBluetoothDeviceInfo::ServiceClasses::operator&=(a0);

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


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___and__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothDeviceInfo::ServiceClasses* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetoothDeviceInfo_ServiceClasses, &a0, &a0State, &a1))
        {
            QBluetoothDeviceInfo::ServiceClasses*sipRes;

            sipRes = new QBluetoothDeviceInfo::ServiceClasses((*a0 & a1));
            sipReleaseType(a0,sipType_QBluetoothDeviceInfo_ServiceClasses,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceInfo_ServiceClasses,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___invert__(PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___invert__(PyObject *sipSelf)
{
    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

    if (!sipCpp)
        return 0;


    {
        {
            QBluetoothDeviceInfo::ServiceClasses*sipRes;

            sipRes = new QBluetoothDeviceInfo::ServiceClasses(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceInfo_ServiceClasses,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___int__(PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo_ServiceClasses___int__(PyObject *sipSelf)
{
    QBluetoothDeviceInfo::ServiceClasses *sipCpp = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo_ServiceClasses));

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
extern "C" {static void release_QBluetoothDeviceInfo_ServiceClasses(void *, int);}
static void release_QBluetoothDeviceInfo_ServiceClasses(void *sipCppV,int)
{
    delete reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipCppV);
}


extern "C" {static void assign_QBluetoothDeviceInfo_ServiceClasses(void *, SIP_SSIZE_T, const void *);}
static void assign_QBluetoothDeviceInfo_ServiceClasses(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBluetoothDeviceInfo::ServiceClasses *>(sipSrc);
}


extern "C" {static void *array_QBluetoothDeviceInfo_ServiceClasses(SIP_SSIZE_T);}
static void *array_QBluetoothDeviceInfo_ServiceClasses(SIP_SSIZE_T sipNrElem)
{
    return new QBluetoothDeviceInfo::ServiceClasses[sipNrElem];
}


extern "C" {static void *copy_QBluetoothDeviceInfo_ServiceClasses(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothDeviceInfo_ServiceClasses(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBluetoothDeviceInfo::ServiceClasses(reinterpret_cast<const QBluetoothDeviceInfo::ServiceClasses *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetoothDeviceInfo_ServiceClasses(sipSimpleWrapper *);}
static void dealloc_QBluetoothDeviceInfo_ServiceClasses(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetoothDeviceInfo_ServiceClasses(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBluetoothDeviceInfo_ServiceClasses(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothDeviceInfo_ServiceClasses(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBluetoothDeviceInfo::ServiceClasses *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QBluetoothDeviceInfo::ServiceClasses();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QBluetoothDeviceInfo::ServiceClasses(a0);

            return sipCpp;
        }
    }

    {
        const QBluetoothDeviceInfo::ServiceClasses* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QBluetoothDeviceInfo_ServiceClasses, &a0, &a0State))
        {
            sipCpp = new QBluetoothDeviceInfo::ServiceClasses(*a0);
            sipReleaseType(const_cast<QBluetoothDeviceInfo::ServiceClasses *>(a0),sipType_QBluetoothDeviceInfo_ServiceClasses,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QBluetoothDeviceInfo_ServiceClasses(PyObject *, void **, int *, PyObject *);}
static int convertTo_QBluetoothDeviceInfo_ServiceClasses(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QBluetoothDeviceInfo::ServiceClasses **sipCppPtr = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QBluetoothDeviceInfo::ServiceClasses is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceInfo_ServiceClass)) ||
            sipCanConvertToType(sipPy, sipType_QBluetoothDeviceInfo_ServiceClasses, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceInfo_ServiceClass)))
{
    *sipCppPtr = new QBluetoothDeviceInfo::ServiceClasses(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QBluetoothDeviceInfo::ServiceClasses *>(sipConvertToType(sipPy, sipType_QBluetoothDeviceInfo_ServiceClasses, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBluetoothDeviceInfo_ServiceClasses[] = {
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___bool__, bool_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___ne__, ne_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___eq__, eq_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___ixor__, ixor_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___xor__, xor_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___ior__, ior_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___or__, or_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___iand__, iand_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___and__, and_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___invert__, invert_slot},
    {(void *)slot_QBluetoothDeviceInfo_ServiceClasses___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QBluetoothDeviceInfo_ServiceClasses, "\1QBluetoothDeviceInfo.ServiceClasses()\n"
    "QBluetoothDeviceInfo.ServiceClasses(Union[QBluetoothDeviceInfo.ServiceClasses, QBluetoothDeviceInfo.ServiceClass])\n"
    "QBluetoothDeviceInfo.ServiceClasses(QBluetoothDeviceInfo.ServiceClasses)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetoothDeviceInfo_ServiceClasses = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothDeviceInfo__ServiceClasses,
        {0}
    },
    {
        sipNameNr_ServiceClasses,
        {9, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothDeviceInfo_ServiceClasses,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QBluetoothDeviceInfo_ServiceClasses,
    init_type_QBluetoothDeviceInfo_ServiceClasses,
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
    dealloc_QBluetoothDeviceInfo_ServiceClasses,
    assign_QBluetoothDeviceInfo_ServiceClasses,
    array_QBluetoothDeviceInfo_ServiceClasses,
    copy_QBluetoothDeviceInfo_ServiceClasses,
    release_QBluetoothDeviceInfo_ServiceClasses,
    0,
    convertTo_QBluetoothDeviceInfo_ServiceClasses,
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
