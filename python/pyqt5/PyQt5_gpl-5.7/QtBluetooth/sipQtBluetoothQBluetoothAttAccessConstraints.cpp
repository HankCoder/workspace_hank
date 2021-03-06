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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qbluetooth.sip"
#include <qbluetooth.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qbluetooth.sip"
#include <qbluetooth.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"


extern "C" {static int slot_QBluetooth_AttAccessConstraints___bool__(PyObject *);}
static int slot_QBluetooth_AttAccessConstraints___bool__(PyObject *sipSelf)
{
    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetooth::AttAccessConstraints::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetooth::AttAccessConstraints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBluetooth_AttAccessConstraints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetooth::AttAccessConstraints::Int() != a0->operator QBluetooth::AttAccessConstraints::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"
            sipReleaseType(const_cast<QBluetooth::AttAccessConstraints *>(a0),sipType_QBluetooth_AttAccessConstraints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ne_slot,sipType_QBluetooth_AttAccessConstraints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetooth::AttAccessConstraints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBluetooth_AttAccessConstraints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetooth::AttAccessConstraints::Int() == a0->operator QBluetooth::AttAccessConstraints::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"
            sipReleaseType(const_cast<QBluetooth::AttAccessConstraints *>(a0),sipType_QBluetooth_AttAccessConstraints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,eq_slot,sipType_QBluetooth_AttAccessConstraints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetooth_AttAccessConstraints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QBluetooth::AttAccessConstraints(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"

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


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetooth::AttAccessConstraints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetooth_AttAccessConstraints, &a0, &a0State, &a1))
        {
            QBluetooth::AttAccessConstraints*sipRes;

            sipRes = new QBluetooth::AttAccessConstraints((*a0 ^ a1));
            sipReleaseType(a0,sipType_QBluetooth_AttAccessConstraints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetooth_AttAccessConstraints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetooth_AttAccessConstraints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QBluetooth::AttAccessConstraints(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"

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


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___or__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetooth::AttAccessConstraints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetooth_AttAccessConstraints, &a0, &a0State, &a1))
        {
            QBluetooth::AttAccessConstraints*sipRes;

            sipRes = new QBluetooth::AttAccessConstraints((*a0 | a1));
            sipReleaseType(a0,sipType_QBluetooth_AttAccessConstraints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetooth_AttAccessConstraints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetooth_AttAccessConstraints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QBluetooth::AttAccessConstraints::operator&=(a0);

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


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___and__(PyObject *,PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetooth::AttAccessConstraints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetooth_AttAccessConstraints, &a0, &a0State, &a1))
        {
            QBluetooth::AttAccessConstraints*sipRes;

            sipRes = new QBluetooth::AttAccessConstraints((*a0 & a1));
            sipReleaseType(a0,sipType_QBluetooth_AttAccessConstraints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetooth_AttAccessConstraints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___invert__(PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___invert__(PyObject *sipSelf)
{
    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

    if (!sipCpp)
        return 0;


    {
        {
            QBluetooth::AttAccessConstraints*sipRes;

            sipRes = new QBluetooth::AttAccessConstraints(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QBluetooth_AttAccessConstraints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBluetooth_AttAccessConstraints___int__(PyObject *);}
static PyObject *slot_QBluetooth_AttAccessConstraints___int__(PyObject *sipSelf)
{
    QBluetooth::AttAccessConstraints *sipCpp = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetooth_AttAccessConstraints));

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
extern "C" {static void release_QBluetooth_AttAccessConstraints(void *, int);}
static void release_QBluetooth_AttAccessConstraints(void *sipCppV,int)
{
    delete reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipCppV);
}


extern "C" {static void assign_QBluetooth_AttAccessConstraints(void *, SIP_SSIZE_T, const void *);}
static void assign_QBluetooth_AttAccessConstraints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBluetooth::AttAccessConstraints *>(sipSrc);
}


extern "C" {static void *array_QBluetooth_AttAccessConstraints(SIP_SSIZE_T);}
static void *array_QBluetooth_AttAccessConstraints(SIP_SSIZE_T sipNrElem)
{
    return new QBluetooth::AttAccessConstraints[sipNrElem];
}


extern "C" {static void *copy_QBluetooth_AttAccessConstraints(const void *, SIP_SSIZE_T);}
static void *copy_QBluetooth_AttAccessConstraints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBluetooth::AttAccessConstraints(reinterpret_cast<const QBluetooth::AttAccessConstraints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetooth_AttAccessConstraints(sipSimpleWrapper *);}
static void dealloc_QBluetooth_AttAccessConstraints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetooth_AttAccessConstraints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBluetooth_AttAccessConstraints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetooth_AttAccessConstraints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBluetooth::AttAccessConstraints *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QBluetooth::AttAccessConstraints();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QBluetooth::AttAccessConstraints(a0);

            return sipCpp;
        }
    }

    {
        const QBluetooth::AttAccessConstraints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QBluetooth_AttAccessConstraints, &a0, &a0State))
        {
            sipCpp = new QBluetooth::AttAccessConstraints(*a0);
            sipReleaseType(const_cast<QBluetooth::AttAccessConstraints *>(a0),sipType_QBluetooth_AttAccessConstraints,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QBluetooth_AttAccessConstraints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QBluetooth_AttAccessConstraints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QBluetooth::AttAccessConstraints **sipCppPtr = reinterpret_cast<QBluetooth::AttAccessConstraints **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QBluetooth::AttAccessConstraints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QBluetooth_AttAccessConstraint)) ||
            sipCanConvertToType(sipPy, sipType_QBluetooth_AttAccessConstraints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QBluetooth_AttAccessConstraint)))
{
    *sipCppPtr = new QBluetooth::AttAccessConstraints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QBluetooth::AttAccessConstraints *>(sipConvertToType(sipPy, sipType_QBluetooth_AttAccessConstraints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQBluetoothAttAccessConstraints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBluetooth_AttAccessConstraints[] = {
    {(void *)slot_QBluetooth_AttAccessConstraints___bool__, bool_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___ne__, ne_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___eq__, eq_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___ixor__, ixor_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___xor__, xor_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___ior__, ior_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___or__, or_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___iand__, iand_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___and__, and_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___invert__, invert_slot},
    {(void *)slot_QBluetooth_AttAccessConstraints___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QBluetooth_AttAccessConstraints, "\1QBluetooth.AttAccessConstraints()\n"
    "QBluetooth.AttAccessConstraints(Union[QBluetooth.AttAccessConstraints, QBluetooth.AttAccessConstraint])\n"
    "QBluetooth.AttAccessConstraints(QBluetooth.AttAccessConstraints)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetooth_AttAccessConstraints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetooth__AttAccessConstraints,
        {0}
    },
    {
        sipNameNr_AttAccessConstraints,
        {0, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetooth_AttAccessConstraints,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QBluetooth_AttAccessConstraints,
    init_type_QBluetooth_AttAccessConstraints,
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
    dealloc_QBluetooth_AttAccessConstraints,
    assign_QBluetooth_AttAccessConstraints,
    array_QBluetooth_AttAccessConstraints,
    copy_QBluetooth_AttAccessConstraints,
    release_QBluetooth_AttAccessConstraints,
    0,
    convertTo_QBluetooth_AttAccessConstraints,
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
