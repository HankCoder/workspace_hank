/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2013 Riverbank Computing Limited <info@riverbankcomputing.com>
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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"


extern "C" {static int slot_QPainter_RenderHints___bool__(PyObject *);}
static int slot_QPainter_RenderHints___bool__(PyObject *sipSelf)
{
    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPainter::RenderHints::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPainter_RenderHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPainter::RenderHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_RenderHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPainter::RenderHints::Int() != a0->operator QPainter::RenderHints::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"
            sipReleaseType(const_cast<QPainter::RenderHints *>(a0),sipType_QPainter_RenderHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPainter_RenderHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPainter_RenderHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPainter::RenderHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_RenderHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPainter::RenderHints::Int() == a0->operator QPainter::RenderHints::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"
            sipReleaseType(const_cast<QPainter::RenderHints *>(a0),sipType_QPainter_RenderHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPainter_RenderHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPainter_RenderHints___invert__(PyObject *);}
static PyObject *slot_QPainter_RenderHints___invert__(PyObject *sipSelf)
{
    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return 0;


    {
        {
            QPainter::RenderHints*sipRes;

            sipRes = new QPainter::RenderHints(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPainter_RenderHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter::RenderHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPainter_RenderHints, &a0, &a0State, &a1))
        {
            QPainter::RenderHints*sipRes;

            sipRes = new QPainter::RenderHints((*a0 & a1));
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPainter_RenderHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter::RenderHints* a0;
        int a0State = 0;
        QPainter::RenderHints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPainter_RenderHints, &a0, &a0State, sipType_QPainter_RenderHints, &a1, &a1State))
        {
            QPainter::RenderHints*sipRes;

            sipRes = new QPainter::RenderHints((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);
            sipReleaseType(a1,sipType_QPainter_RenderHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    {
        QPainter::RenderHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPainter_RenderHints, &a0, &a0State, &a1))
        {
            QPainter::RenderHints*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QPainter::RenderHints(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPainter_RenderHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter::RenderHints* a0;
        int a0State = 0;
        QPainter::RenderHints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPainter_RenderHints, &a0, &a0State, sipType_QPainter_RenderHints, &a1, &a1State))
        {
            QPainter::RenderHints*sipRes;

            sipRes = new QPainter::RenderHints((*a0 | *a1));
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);
            sipReleaseType(a1,sipType_QPainter_RenderHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    {
        QPainter::RenderHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPainter_RenderHints, &a0, &a0State, &a1))
        {
            QPainter::RenderHints*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QPainter::RenderHints(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPainter_RenderHints___int__(PyObject *);}
static PyObject *slot_QPainter_RenderHints___int__(PyObject *sipSelf)
{
    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

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


extern "C" {static PyObject *slot_QPainter_RenderHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPainter_RenderHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPainter::RenderHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_RenderHints, &a0, &a0State))
        {
            sipCpp->QPainter::RenderHints::operator^=(*a0);
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);

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


extern "C" {static PyObject *slot_QPainter_RenderHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPainter_RenderHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPainter::RenderHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_RenderHints, &a0, &a0State))
        {
            sipCpp->QPainter::RenderHints::operator|=(*a0);
            sipReleaseType(a0,sipType_QPainter_RenderHints,a0State);

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


extern "C" {static PyObject *slot_QPainter_RenderHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_RenderHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPainter_RenderHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPainter::RenderHints *sipCpp = reinterpret_cast<QPainter::RenderHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_RenderHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QPainter::RenderHints::operator&=(a0);

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


/* Call the instance's destructor. */
extern "C" {static void release_QPainter_RenderHints(void *, int);}
static void release_QPainter_RenderHints(void *sipCppV,int)
{
    delete reinterpret_cast<QPainter::RenderHints *>(sipCppV);
}


extern "C" {static void assign_QPainter_RenderHints(void *, SIP_SSIZE_T, const void *);}
static void assign_QPainter_RenderHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPainter::RenderHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPainter::RenderHints *>(sipSrc);
}


extern "C" {static void *array_QPainter_RenderHints(SIP_SSIZE_T);}
static void *array_QPainter_RenderHints(SIP_SSIZE_T sipNrElem)
{
    return new QPainter::RenderHints[sipNrElem];
}


extern "C" {static void *copy_QPainter_RenderHints(const void *, SIP_SSIZE_T);}
static void *copy_QPainter_RenderHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPainter::RenderHints(reinterpret_cast<const QPainter::RenderHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPainter_RenderHints(sipSimpleWrapper *);}
static void dealloc_QPainter_RenderHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPainter_RenderHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPainter_RenderHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPainter_RenderHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPainter::RenderHints *sipCpp = 0;

    {
        const QPainter::RenderHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPainter_RenderHints, &a0, &a0State))
        {
            sipCpp = new QPainter::RenderHints(*a0);
            sipReleaseType(const_cast<QPainter::RenderHints *>(a0),sipType_QPainter_RenderHints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QPainter::RenderHints(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPainter::RenderHints();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QPainter_RenderHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPainter_RenderHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPainter::RenderHints **sipCppPtr = reinterpret_cast<QPainter::RenderHints **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QPainter::RenderHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPainter_RenderHint)) ||
            sipCanConvertToType(sipPy, sipType_QPainter_RenderHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPainter_RenderHint)))
{
    *sipCppPtr = new QPainter::RenderHints(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QPainter::RenderHints *>(sipConvertToType(sipPy, sipType_QPainter_RenderHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPainterRenderHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPainter_RenderHints[] = {
    {(void *)slot_QPainter_RenderHints___bool__, bool_slot},
    {(void *)slot_QPainter_RenderHints___ne__, ne_slot},
    {(void *)slot_QPainter_RenderHints___eq__, eq_slot},
    {(void *)slot_QPainter_RenderHints___invert__, invert_slot},
    {(void *)slot_QPainter_RenderHints___and__, and_slot},
    {(void *)slot_QPainter_RenderHints___xor__, xor_slot},
    {(void *)slot_QPainter_RenderHints___or__, or_slot},
    {(void *)slot_QPainter_RenderHints___int__, int_slot},
    {(void *)slot_QPainter_RenderHints___ixor__, ixor_slot},
    {(void *)slot_QPainter_RenderHints___ior__, ior_slot},
    {(void *)slot_QPainter_RenderHints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QPainter_RenderHints, "\1QPainter.RenderHints(QPainter.RenderHints)\n"
    "QPainter.RenderHints(int)\n"
    "QPainter.RenderHints()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPainter_RenderHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPainter__RenderHints,
        {0}
    },
    {
        sipNameNr_RenderHints,
        {160, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPainter_RenderHints,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPainter_RenderHints,
    init_type_QPainter_RenderHints,
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
    dealloc_QPainter_RenderHints,
    assign_QPainter_RenderHints,
    array_QPainter_RenderHints,
    copy_QPainter_RenderHints,
    release_QPainter_RenderHints,
    0,
    convertTo_QPainter_RenderHints,
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
