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

#line 564 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"

#line 564 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"


extern "C" {static int slot_QStyleOptionViewItem_ViewItemFeatures___bool__(PyObject *);}
static int slot_QStyleOptionViewItem_ViewItemFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionViewItem::ViewItemFeatures::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionViewItem::ViewItemFeatures::Int() != a0->operator QStyleOptionViewItem::ViewItemFeatures::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionViewItem::ViewItemFeatures *>(a0),sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QStyleOptionViewItem_ViewItemFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionViewItem::ViewItemFeatures::Int() == a0->operator QStyleOptionViewItem::ViewItemFeatures::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionViewItem::ViewItemFeatures *>(a0),sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QStyleOptionViewItem_ViewItemFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionViewItem::ViewItemFeatures*sipRes;

            sipRes = new QStyleOptionViewItem::ViewItemFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionViewItem::ViewItemFeatures*sipRes;

            sipRes = new QStyleOptionViewItem::ViewItemFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;
        QStyleOptionViewItem::ViewItemFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State, sipType_QStyleOptionViewItem_ViewItemFeatures, &a1, &a1State))
        {
            QStyleOptionViewItem::ViewItemFeatures*sipRes;

            sipRes = new QStyleOptionViewItem::ViewItemFeatures((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionViewItem_ViewItemFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL);
        }
    }

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionViewItem::ViewItemFeatures*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionViewItem::ViewItemFeatures(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;
        QStyleOptionViewItem::ViewItemFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State, sipType_QStyleOptionViewItem_ViewItemFeatures, &a1, &a1State))
        {
            QStyleOptionViewItem::ViewItemFeatures*sipRes;

            sipRes = new QStyleOptionViewItem::ViewItemFeatures((*a0 | *a1));
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionViewItem_ViewItemFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL);
        }
    }

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionViewItem::ViewItemFeatures*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionViewItem::ViewItemFeatures(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

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


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionViewItem_ViewItemFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionViewItem::ViewItemFeatures::operator^=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionViewItem_ViewItemFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionViewItem::ViewItemFeatures::operator|=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionViewItem_ViewItemFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionViewItem_ViewItemFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionViewItem::ViewItemFeatures *sipCpp = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionViewItem_ViewItemFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStyleOptionViewItem::ViewItemFeatures::operator&=(a0);

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
extern "C" {static void release_QStyleOptionViewItem_ViewItemFeatures(void *, int);}
static void release_QStyleOptionViewItem_ViewItemFeatures(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionViewItem_ViewItemFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItem_ViewItemFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItem::ViewItemFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItem_ViewItemFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItem_ViewItemFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItem::ViewItemFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItem_ViewItemFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItem_ViewItemFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItem::ViewItemFeatures(reinterpret_cast<const QStyleOptionViewItem::ViewItemFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItem_ViewItemFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItem_ViewItemFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItem_ViewItemFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionViewItem_ViewItemFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionViewItem_ViewItemFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionViewItem::ViewItemFeatures *sipCpp = 0;

    {
        const QStyleOptionViewItem::ViewItemFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionViewItem_ViewItemFeatures, &a0, &a0State))
        {
            sipCpp = new QStyleOptionViewItem::ViewItemFeatures(*a0);
            sipReleaseType(const_cast<QStyleOptionViewItem::ViewItemFeatures *>(a0),sipType_QStyleOptionViewItem_ViewItemFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStyleOptionViewItem::ViewItemFeatures(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionViewItem::ViewItemFeatures();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionViewItem_ViewItemFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionViewItem_ViewItemFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionViewItem::ViewItemFeatures **sipCppPtr = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionViewItem::ViewItemFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionViewItem_ViewItemFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionViewItem_ViewItemFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionViewItem_ViewItemFeature)))
{
    *sipCppPtr = new QStyleOptionViewItem::ViewItemFeatures(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionViewItem_ViewItemFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionViewItemViewItemFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionViewItem_ViewItemFeatures[] = {
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionViewItem_ViewItemFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionViewItem_ViewItemFeatures, "\1QStyleOptionViewItem.ViewItemFeatures(QStyleOptionViewItem.ViewItemFeatures)\n"
    "QStyleOptionViewItem.ViewItemFeatures(int)\n"
    "QStyleOptionViewItem.ViewItemFeatures()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionViewItem_ViewItemFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItem__ViewItemFeatures,
        {0}
    },
    {
        sipNameNr_ViewItemFeatures,
        {394, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionViewItem_ViewItemFeatures,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionViewItem_ViewItemFeatures,
    init_type_QStyleOptionViewItem_ViewItemFeatures,
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
    dealloc_QStyleOptionViewItem_ViewItemFeatures,
    assign_QStyleOptionViewItem_ViewItemFeatures,
    array_QStyleOptionViewItem_ViewItemFeatures,
    copy_QStyleOptionViewItem_ViewItemFeatures,
    release_QStyleOptionViewItem_ViewItemFeatures,
    0,
    convertTo_QStyleOptionViewItem_ViewItemFeatures,
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
