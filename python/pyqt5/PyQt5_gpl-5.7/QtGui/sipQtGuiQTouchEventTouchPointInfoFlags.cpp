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

#include "sipAPIQtGui.h"

#line 711 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 718 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"

#line 711 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 718 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 37 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"


extern "C" {static int slot_QTouchEvent_TouchPoint_InfoFlags___bool__(PyObject *);}
static int slot_QTouchEvent_TouchPoint_InfoFlags___bool__(PyObject *sipSelf)
{
    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTouchEvent::TouchPoint::InfoFlags::Int() != 0);
#line 55 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint::InfoFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTouchEvent_TouchPoint_InfoFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTouchEvent::TouchPoint::InfoFlags::Int() != a0->operator QTouchEvent::TouchPoint::InfoFlags::Int());
#line 85 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"
            sipReleaseType(const_cast<QTouchEvent::TouchPoint::InfoFlags *>(a0),sipType_QTouchEvent_TouchPoint_InfoFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTouchEvent_TouchPoint_InfoFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint::InfoFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTouchEvent_TouchPoint_InfoFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTouchEvent::TouchPoint::InfoFlags::Int() == a0->operator QTouchEvent::TouchPoint::InfoFlags::Int());
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"
            sipReleaseType(const_cast<QTouchEvent::TouchPoint::InfoFlags *>(a0),sipType_QTouchEvent_TouchPoint_InfoFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTouchEvent_TouchPoint_InfoFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTouchEvent_TouchPoint_InfoFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QTouchEvent::TouchPoint::InfoFlags(*sipCpp ^ a0);
#line 160 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"

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


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTouchEvent::TouchPoint::InfoFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTouchEvent_TouchPoint_InfoFlags, &a0, &a0State, &a1))
        {
            QTouchEvent::TouchPoint::InfoFlags*sipRes;

            sipRes = new QTouchEvent::TouchPoint::InfoFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QTouchEvent_TouchPoint_InfoFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTouchEvent_TouchPoint_InfoFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTouchEvent_TouchPoint_InfoFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QTouchEvent::TouchPoint::InfoFlags(*sipCpp | a0);
#line 232 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"

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


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTouchEvent::TouchPoint::InfoFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTouchEvent_TouchPoint_InfoFlags, &a0, &a0State, &a1))
        {
            QTouchEvent::TouchPoint::InfoFlags*sipRes;

            sipRes = new QTouchEvent::TouchPoint::InfoFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QTouchEvent_TouchPoint_InfoFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTouchEvent_TouchPoint_InfoFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTouchEvent_TouchPoint_InfoFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTouchEvent::TouchPoint::InfoFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTouchEvent::TouchPoint::InfoFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTouchEvent_TouchPoint_InfoFlags, &a0, &a0State, &a1))
        {
            QTouchEvent::TouchPoint::InfoFlags*sipRes;

            sipRes = new QTouchEvent::TouchPoint::InfoFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QTouchEvent_TouchPoint_InfoFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTouchEvent_TouchPoint_InfoFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___invert__(PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___invert__(PyObject *sipSelf)
{
    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QTouchEvent::TouchPoint::InfoFlags*sipRes;

            sipRes = new QTouchEvent::TouchPoint::InfoFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTouchEvent_TouchPoint_InfoFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___int__(PyObject *);}
static PyObject *slot_QTouchEvent_TouchPoint_InfoFlags___int__(PyObject *sipSelf)
{
    QTouchEvent::TouchPoint::InfoFlags *sipCpp = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTouchEvent_TouchPoint_InfoFlags));

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
extern "C" {static void release_QTouchEvent_TouchPoint_InfoFlags(void *, int);}
static void release_QTouchEvent_TouchPoint_InfoFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipCppV);
}


extern "C" {static void assign_QTouchEvent_TouchPoint_InfoFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTouchEvent_TouchPoint_InfoFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTouchEvent::TouchPoint::InfoFlags *>(sipSrc);
}


extern "C" {static void *array_QTouchEvent_TouchPoint_InfoFlags(SIP_SSIZE_T);}
static void *array_QTouchEvent_TouchPoint_InfoFlags(SIP_SSIZE_T sipNrElem)
{
    return new QTouchEvent::TouchPoint::InfoFlags[sipNrElem];
}


extern "C" {static void *copy_QTouchEvent_TouchPoint_InfoFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTouchEvent_TouchPoint_InfoFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTouchEvent::TouchPoint::InfoFlags(reinterpret_cast<const QTouchEvent::TouchPoint::InfoFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTouchEvent_TouchPoint_InfoFlags(sipSimpleWrapper *);}
static void dealloc_QTouchEvent_TouchPoint_InfoFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTouchEvent_TouchPoint_InfoFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTouchEvent_TouchPoint_InfoFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTouchEvent_TouchPoint_InfoFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTouchEvent::TouchPoint::InfoFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTouchEvent::TouchPoint::InfoFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QTouchEvent::TouchPoint::InfoFlags(a0);

            return sipCpp;
        }
    }

    {
        const QTouchEvent::TouchPoint::InfoFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTouchEvent_TouchPoint_InfoFlags, &a0, &a0State))
        {
            sipCpp = new QTouchEvent::TouchPoint::InfoFlags(*a0);
            sipReleaseType(const_cast<QTouchEvent::TouchPoint::InfoFlags *>(a0),sipType_QTouchEvent_TouchPoint_InfoFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTouchEvent_TouchPoint_InfoFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTouchEvent_TouchPoint_InfoFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTouchEvent::TouchPoint::InfoFlags **sipCppPtr = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTouchEvent::TouchPoint::InfoFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTouchEvent_TouchPoint_InfoFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTouchEvent_TouchPoint_InfoFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTouchEvent_TouchPoint_InfoFlag)))
{
    *sipCppPtr = new QTouchEvent::TouchPoint::InfoFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTouchEvent::TouchPoint::InfoFlags *>(sipConvertToType(sipPy, sipType_QTouchEvent_TouchPoint_InfoFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 500 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQTouchEventTouchPointInfoFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTouchEvent_TouchPoint_InfoFlags[] = {
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___bool__, bool_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___ne__, ne_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___eq__, eq_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___ixor__, ixor_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___xor__, xor_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___ior__, ior_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___or__, or_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___iand__, iand_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___and__, and_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___invert__, invert_slot},
    {(void *)slot_QTouchEvent_TouchPoint_InfoFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_InfoFlags, "\1QTouchEvent.TouchPoint.InfoFlags()\n"
    "QTouchEvent.TouchPoint.InfoFlags(Union[QTouchEvent.TouchPoint.InfoFlags, QTouchEvent.TouchPoint.InfoFlag])\n"
    "QTouchEvent.TouchPoint.InfoFlags(QTouchEvent.TouchPoint.InfoFlags)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTouchEvent_TouchPoint_InfoFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTouchEvent__TouchPoint__InfoFlags,
        {0}
    },
    {
        sipNameNr_InfoFlags,
        {344, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTouchEvent_TouchPoint_InfoFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTouchEvent_TouchPoint_InfoFlags,
    init_type_QTouchEvent_TouchPoint_InfoFlags,
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
    dealloc_QTouchEvent_TouchPoint_InfoFlags,
    assign_QTouchEvent_TouchPoint_InfoFlags,
    array_QTouchEvent_TouchPoint_InfoFlags,
    copy_QTouchEvent_TouchPoint_InfoFlags,
    release_QTouchEvent_TouchPoint_InfoFlags,
    0,
    convertTo_QTouchEvent_TouchPoint_InfoFlags,
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
