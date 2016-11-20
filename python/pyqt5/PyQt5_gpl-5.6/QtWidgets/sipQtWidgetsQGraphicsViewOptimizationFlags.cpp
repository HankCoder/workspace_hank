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

#include "sipAPIQtWidgets.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicsview.sip"
#include <qgraphicsview.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicsview.sip"
#include <qgraphicsview.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"


extern "C" {static int slot_QGraphicsView_OptimizationFlags___bool__(PyObject *);}
static int slot_QGraphicsView_OptimizationFlags___bool__(PyObject *sipSelf)
{
    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsView::OptimizationFlags::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsView::OptimizationFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsView_OptimizationFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsView::OptimizationFlags::Int() != a0->operator QGraphicsView::OptimizationFlags::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"
            sipReleaseType(const_cast<QGraphicsView::OptimizationFlags *>(a0),sipType_QGraphicsView_OptimizationFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QGraphicsView_OptimizationFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsView::OptimizationFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsView_OptimizationFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsView::OptimizationFlags::Int() == a0->operator QGraphicsView::OptimizationFlags::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"
            sipReleaseType(const_cast<QGraphicsView::OptimizationFlags *>(a0),sipType_QGraphicsView_OptimizationFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QGraphicsView_OptimizationFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_OptimizationFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsView::OptimizationFlags(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"

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


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::OptimizationFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsView_OptimizationFlags, &a0, &a0State, &a1))
        {
            QGraphicsView::OptimizationFlags*sipRes;

            sipRes = new QGraphicsView::OptimizationFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGraphicsView_OptimizationFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_OptimizationFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_OptimizationFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsView::OptimizationFlags(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"

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


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::OptimizationFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsView_OptimizationFlags, &a0, &a0State, &a1))
        {
            QGraphicsView::OptimizationFlags*sipRes;

            sipRes = new QGraphicsView::OptimizationFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QGraphicsView_OptimizationFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_OptimizationFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_OptimizationFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGraphicsView::OptimizationFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::OptimizationFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsView_OptimizationFlags, &a0, &a0State, &a1))
        {
            QGraphicsView::OptimizationFlags*sipRes;

            sipRes = new QGraphicsView::OptimizationFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QGraphicsView_OptimizationFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_OptimizationFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___invert__(PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___invert__(PyObject *sipSelf)
{
    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsView::OptimizationFlags*sipRes;

            sipRes = new QGraphicsView::OptimizationFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_OptimizationFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsView_OptimizationFlags___int__(PyObject *);}
static PyObject *slot_QGraphicsView_OptimizationFlags___int__(PyObject *sipSelf)
{
    QGraphicsView::OptimizationFlags *sipCpp = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_OptimizationFlags));

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
extern "C" {static void release_QGraphicsView_OptimizationFlags(void *, int);}
static void release_QGraphicsView_OptimizationFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipCppV);
}


extern "C" {static void assign_QGraphicsView_OptimizationFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsView_OptimizationFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsView::OptimizationFlags *>(sipSrc);
}


extern "C" {static void *array_QGraphicsView_OptimizationFlags(SIP_SSIZE_T);}
static void *array_QGraphicsView_OptimizationFlags(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsView::OptimizationFlags[sipNrElem];
}


extern "C" {static void *copy_QGraphicsView_OptimizationFlags(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsView_OptimizationFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsView::OptimizationFlags(reinterpret_cast<const QGraphicsView::OptimizationFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsView_OptimizationFlags(sipSimpleWrapper *);}
static void dealloc_QGraphicsView_OptimizationFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsView_OptimizationFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsView_OptimizationFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsView_OptimizationFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsView::OptimizationFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGraphicsView::OptimizationFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGraphicsView::OptimizationFlags(a0);

            return sipCpp;
        }
    }

    {
        const QGraphicsView::OptimizationFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsView_OptimizationFlags, &a0, &a0State))
        {
            sipCpp = new QGraphicsView::OptimizationFlags(*a0);
            sipReleaseType(const_cast<QGraphicsView::OptimizationFlags *>(a0),sipType_QGraphicsView_OptimizationFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsView_OptimizationFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsView_OptimizationFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsView::OptimizationFlags **sipCppPtr = reinterpret_cast<QGraphicsView::OptimizationFlags **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsView::OptimizationFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsView_OptimizationFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsView_OptimizationFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsView_OptimizationFlag)))
{
    *sipCppPtr = new QGraphicsView::OptimizationFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsView::OptimizationFlags *>(sipConvertToType(sipPy, sipType_QGraphicsView_OptimizationFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsViewOptimizationFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsView_OptimizationFlags[] = {
    {(void *)slot_QGraphicsView_OptimizationFlags___bool__, bool_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___ne__, ne_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___eq__, eq_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___ixor__, ixor_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___xor__, xor_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___ior__, ior_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___or__, or_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___iand__, iand_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___and__, and_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___invert__, invert_slot},
    {(void *)slot_QGraphicsView_OptimizationFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsView_OptimizationFlags, "\1QGraphicsView.OptimizationFlags()\n"
    "QGraphicsView.OptimizationFlags(Union[QGraphicsView.OptimizationFlags, QGraphicsView.OptimizationFlag])\n"
    "QGraphicsView.OptimizationFlags(QGraphicsView.OptimizationFlags)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsView_OptimizationFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsView__OptimizationFlags,
        {0}
    },
    {
        sipNameNr_OptimizationFlags,
        {159, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsView_OptimizationFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsView_OptimizationFlags,
    init_type_QGraphicsView_OptimizationFlags,
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
    dealloc_QGraphicsView_OptimizationFlags,
    assign_QGraphicsView_OptimizationFlags,
    array_QGraphicsView_OptimizationFlags,
    copy_QGraphicsView_OptimizationFlags,
    release_QGraphicsView_OptimizationFlags,
    0,
    convertTo_QGraphicsView_OptimizationFlags,
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
