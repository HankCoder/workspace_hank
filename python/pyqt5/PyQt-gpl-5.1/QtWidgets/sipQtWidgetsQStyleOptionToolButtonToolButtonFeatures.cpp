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

#line 777 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"

#line 777 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"


extern "C" {static int slot_QStyleOptionToolButton_ToolButtonFeatures___bool__(PyObject *);}
static int slot_QStyleOptionToolButton_ToolButtonFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionToolButton::ToolButtonFeatures::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionToolButton::ToolButtonFeatures::Int() != a0->operator QStyleOptionToolButton::ToolButtonFeatures::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionToolButton::ToolButtonFeatures *>(a0),sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QStyleOptionToolButton_ToolButtonFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionToolButton::ToolButtonFeatures::Int() == a0->operator QStyleOptionToolButton::ToolButtonFeatures::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionToolButton::ToolButtonFeatures *>(a0),sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QStyleOptionToolButton_ToolButtonFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionToolButton::ToolButtonFeatures*sipRes;

            sipRes = new QStyleOptionToolButton::ToolButtonFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionToolButton::ToolButtonFeatures*sipRes;

            sipRes = new QStyleOptionToolButton::ToolButtonFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;
        QStyleOptionToolButton::ToolButtonFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, sipType_QStyleOptionToolButton_ToolButtonFeatures, &a1, &a1State))
        {
            QStyleOptionToolButton::ToolButtonFeatures*sipRes;

            sipRes = new QStyleOptionToolButton::ToolButtonFeatures((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionToolButton_ToolButtonFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionToolButton::ToolButtonFeatures*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionToolButton::ToolButtonFeatures(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;
        QStyleOptionToolButton::ToolButtonFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, sipType_QStyleOptionToolButton_ToolButtonFeatures, &a1, &a1State))
        {
            QStyleOptionToolButton::ToolButtonFeatures*sipRes;

            sipRes = new QStyleOptionToolButton::ToolButtonFeatures((*a0 | *a1));
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionToolButton_ToolButtonFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionToolButton::ToolButtonFeatures*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionToolButton::ToolButtonFeatures(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

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


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionToolButton::ToolButtonFeatures::operator^=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionToolButton::ToolButtonFeatures::operator|=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStyleOptionToolButton::ToolButtonFeatures::operator&=(a0);

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
extern "C" {static void release_QStyleOptionToolButton_ToolButtonFeatures(void *, int);}
static void release_QStyleOptionToolButton_ToolButtonFeatures(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionToolButton_ToolButtonFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolButton_ToolButtonFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolButton::ToolButtonFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolButton_ToolButtonFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionToolButton_ToolButtonFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolButton::ToolButtonFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolButton_ToolButtonFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolButton_ToolButtonFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolButton::ToolButtonFeatures(reinterpret_cast<const QStyleOptionToolButton::ToolButtonFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolButton_ToolButtonFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = 0;

    {
        const QStyleOptionToolButton::ToolButtonFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            sipCpp = new QStyleOptionToolButton::ToolButtonFeatures(*a0);
            sipReleaseType(const_cast<QStyleOptionToolButton::ToolButtonFeatures *>(a0),sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStyleOptionToolButton::ToolButtonFeatures(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionToolButton::ToolButtonFeatures();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionToolButton_ToolButtonFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionToolButton_ToolButtonFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionToolButton::ToolButtonFeatures **sipCppPtr = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionToolButton::ToolButtonFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionToolButton_ToolButtonFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeature)))
{
    *sipCppPtr = new QStyleOptionToolButton::ToolButtonFeatures(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionToolButton_ToolButtonFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleOptionToolButtonToolButtonFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionToolButton_ToolButtonFeatures[] = {
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionToolButton_ToolButtonFeatures, "\1QStyleOptionToolButton.ToolButtonFeatures(QStyleOptionToolButton.ToolButtonFeatures)\n"
    "QStyleOptionToolButton.ToolButtonFeatures(int)\n"
    "QStyleOptionToolButton.ToolButtonFeatures()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionToolButton_ToolButtonFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolButton__ToolButtonFeatures,
        {0}
    },
    {
        sipNameNr_ToolButtonFeatures,
        {389, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolButton_ToolButtonFeatures,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionToolButton_ToolButtonFeatures,
    init_type_QStyleOptionToolButton_ToolButtonFeatures,
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
    dealloc_QStyleOptionToolButton_ToolButtonFeatures,
    assign_QStyleOptionToolButton_ToolButtonFeatures,
    array_QStyleOptionToolButton_ToolButtonFeatures,
    copy_QStyleOptionToolButton_ToolButtonFeatures,
    release_QStyleOptionToolButton_ToolButtonFeatures,
    0,
    convertTo_QStyleOptionToolButton_ToolButtonFeatures,
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
