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

#include "sipAPIQtWidgets.h"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qdockwidget.sip"
#include <qdockwidget.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qdockwidget.sip"
#include <qdockwidget.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"


extern "C" {static int slot_QDockWidget_DockWidgetFeatures___bool__(PyObject *);}
static int slot_QDockWidget_DockWidgetFeatures___bool__(PyObject *sipSelf)
{
    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDockWidget::DockWidgetFeatures::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDockWidget::DockWidgetFeatures::Int() != a0->operator QDockWidget::DockWidgetFeatures::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"
            sipReleaseType(const_cast<QDockWidget::DockWidgetFeatures *>(a0),sipType_QDockWidget_DockWidgetFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QDockWidget_DockWidgetFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDockWidget::DockWidgetFeatures::Int() == a0->operator QDockWidget::DockWidgetFeatures::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"
            sipReleaseType(const_cast<QDockWidget::DockWidgetFeatures *>(a0),sipType_QDockWidget_DockWidgetFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QDockWidget_DockWidgetFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___invert__(PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___invert__(PyObject *sipSelf)
{
    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QDockWidget::DockWidgetFeatures*sipRes;

            sipRes = new QDockWidget::DockWidgetFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDockWidget_DockWidgetFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State, &a1))
        {
            QDockWidget::DockWidgetFeatures*sipRes;

            sipRes = new QDockWidget::DockWidgetFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDockWidget_DockWidgetFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;
        QDockWidget::DockWidgetFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State, sipType_QDockWidget_DockWidgetFeatures, &a1, &a1State))
        {
            QDockWidget::DockWidgetFeatures*sipRes;

            sipRes = new QDockWidget::DockWidgetFeatures((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);
            sipReleaseType(a1,sipType_QDockWidget_DockWidgetFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDockWidget_DockWidgetFeatures,NULL);
        }
    }

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State, &a1))
        {
            QDockWidget::DockWidgetFeatures*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QDockWidget::DockWidgetFeatures(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDockWidget_DockWidgetFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;
        QDockWidget::DockWidgetFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State, sipType_QDockWidget_DockWidgetFeatures, &a1, &a1State))
        {
            QDockWidget::DockWidgetFeatures*sipRes;

            sipRes = new QDockWidget::DockWidgetFeatures((*a0 | *a1));
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);
            sipReleaseType(a1,sipType_QDockWidget_DockWidgetFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDockWidget_DockWidgetFeatures,NULL);
        }
    }

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State, &a1))
        {
            QDockWidget::DockWidgetFeatures*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QDockWidget::DockWidgetFeatures(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDockWidget_DockWidgetFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___int__(PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___int__(PyObject *sipSelf)
{
    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

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


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDockWidget_DockWidgetFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State))
        {
            sipCpp->QDockWidget::DockWidgetFeatures::operator^=(*a0);
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);

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


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDockWidget_DockWidgetFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State))
        {
            sipCpp->QDockWidget::DockWidgetFeatures::operator|=(*a0);
            sipReleaseType(a0,sipType_QDockWidget_DockWidgetFeatures,a0State);

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


extern "C" {static PyObject *slot_QDockWidget_DockWidgetFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDockWidget_DockWidgetFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDockWidget_DockWidgetFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDockWidget::DockWidgetFeatures *sipCpp = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDockWidget_DockWidgetFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QDockWidget::DockWidgetFeatures::operator&=(a0);

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
extern "C" {static void release_QDockWidget_DockWidgetFeatures(void *, int);}
static void release_QDockWidget_DockWidgetFeatures(void *sipCppV,int)
{
    delete reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipCppV);
}


extern "C" {static void assign_QDockWidget_DockWidgetFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QDockWidget_DockWidgetFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDockWidget::DockWidgetFeatures *>(sipSrc);
}


extern "C" {static void *array_QDockWidget_DockWidgetFeatures(SIP_SSIZE_T);}
static void *array_QDockWidget_DockWidgetFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QDockWidget::DockWidgetFeatures[sipNrElem];
}


extern "C" {static void *copy_QDockWidget_DockWidgetFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QDockWidget_DockWidgetFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDockWidget::DockWidgetFeatures(reinterpret_cast<const QDockWidget::DockWidgetFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDockWidget_DockWidgetFeatures(sipSimpleWrapper *);}
static void dealloc_QDockWidget_DockWidgetFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDockWidget_DockWidgetFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDockWidget_DockWidgetFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDockWidget_DockWidgetFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDockWidget::DockWidgetFeatures *sipCpp = 0;

    {
        const QDockWidget::DockWidgetFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDockWidget_DockWidgetFeatures, &a0, &a0State))
        {
            sipCpp = new QDockWidget::DockWidgetFeatures(*a0);
            sipReleaseType(const_cast<QDockWidget::DockWidgetFeatures *>(a0),sipType_QDockWidget_DockWidgetFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QDockWidget::DockWidgetFeatures(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDockWidget::DockWidgetFeatures();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDockWidget_DockWidgetFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDockWidget_DockWidgetFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDockWidget::DockWidgetFeatures **sipCppPtr = reinterpret_cast<QDockWidget::DockWidgetFeatures **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDockWidget::DockWidgetFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDockWidget_DockWidgetFeature)) ||
            sipCanConvertToType(sipPy, sipType_QDockWidget_DockWidgetFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDockWidget_DockWidgetFeature)))
{
    *sipCppPtr = new QDockWidget::DockWidgetFeatures(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDockWidget::DockWidgetFeatures *>(sipConvertToType(sipPy, sipType_QDockWidget_DockWidgetFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQDockWidgetDockWidgetFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDockWidget_DockWidgetFeatures[] = {
    {(void *)slot_QDockWidget_DockWidgetFeatures___bool__, bool_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___ne__, ne_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___eq__, eq_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___invert__, invert_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___and__, and_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___xor__, xor_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___or__, or_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___int__, int_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___ixor__, ixor_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___ior__, ior_slot},
    {(void *)slot_QDockWidget_DockWidgetFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDockWidget_DockWidgetFeatures, "\1QDockWidget.DockWidgetFeatures(QDockWidget.DockWidgetFeatures)\n"
    "QDockWidget.DockWidgetFeatures(int)\n"
    "QDockWidget.DockWidgetFeatures()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QDockWidget_DockWidgetFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDockWidget__DockWidgetFeatures,
        {0}
    },
    {
        sipNameNr_DockWidgetFeatures,
        {68, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDockWidget_DockWidgetFeatures,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDockWidget_DockWidgetFeatures,
    init_type_QDockWidget_DockWidgetFeatures,
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
    dealloc_QDockWidget_DockWidgetFeatures,
    assign_QDockWidget_DockWidgetFeatures,
    array_QDockWidget_DockWidgetFeatures,
    copy_QDockWidget_DockWidgetFeatures,
    release_QDockWidget_DockWidgetFeatures,
    0,
    convertTo_QDockWidget_DockWidgetFeatures,
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
