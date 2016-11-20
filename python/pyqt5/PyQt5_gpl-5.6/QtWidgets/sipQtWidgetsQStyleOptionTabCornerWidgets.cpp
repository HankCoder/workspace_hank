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

#line 388 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"

#line 388 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"


extern "C" {static int slot_QStyleOptionTab_CornerWidgets___bool__(PyObject *);}
static int slot_QStyleOptionTab_CornerWidgets___bool__(PyObject *sipSelf)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionTab::CornerWidgets::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionTab::CornerWidgets::Int() != a0->operator QStyleOptionTab::CornerWidgets::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"
            sipReleaseType(const_cast<QStyleOptionTab::CornerWidgets *>(a0),sipType_QStyleOptionTab_CornerWidgets,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QStyleOptionTab_CornerWidgets,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionTab::CornerWidgets::Int() == a0->operator QStyleOptionTab::CornerWidgets::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"
            sipReleaseType(const_cast<QStyleOptionTab::CornerWidgets *>(a0),sipType_QStyleOptionTab_CornerWidgets,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QStyleOptionTab_CornerWidgets,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidgets)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyleOptionTab::CornerWidgets(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"

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


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, &a1))
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            sipRes = new QStyleOptionTab::CornerWidgets((*a0 ^ a1));
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidgets)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyleOptionTab::CornerWidgets(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"

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


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, &a1))
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            sipRes = new QStyleOptionTab::CornerWidgets((*a0 | a1));
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidgets)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStyleOptionTab::CornerWidgets::operator&=(a0);

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


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, &a1))
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            sipRes = new QStyleOptionTab::CornerWidgets((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___invert__(PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___invert__(PyObject *sipSelf)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            sipRes = new QStyleOptionTab::CornerWidgets(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___int__(PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___int__(PyObject *sipSelf)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

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
extern "C" {static void release_QStyleOptionTab_CornerWidgets(void *, int);}
static void release_QStyleOptionTab_CornerWidgets(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionTab_CornerWidgets(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTab_CornerWidgets(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTab::CornerWidgets *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTab_CornerWidgets(SIP_SSIZE_T);}
static void *array_QStyleOptionTab_CornerWidgets(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTab::CornerWidgets[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTab_CornerWidgets(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTab_CornerWidgets(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTab::CornerWidgets(reinterpret_cast<const QStyleOptionTab::CornerWidgets *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTab_CornerWidgets(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTab::CornerWidgets *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionTab::CornerWidgets();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStyleOptionTab::CornerWidgets(a0);

            return sipCpp;
        }
    }

    {
        const QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            sipCpp = new QStyleOptionTab::CornerWidgets(*a0);
            sipReleaseType(const_cast<QStyleOptionTab::CornerWidgets *>(a0),sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionTab_CornerWidgets(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionTab_CornerWidgets(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionTab::CornerWidgets **sipCppPtr = reinterpret_cast<QStyleOptionTab::CornerWidgets **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionTab::CornerWidgets is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidget)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionTab_CornerWidgets, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidget)))
{
    *sipCppPtr = new QStyleOptionTab::CornerWidgets(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipConvertToType(sipPy, sipType_QStyleOptionTab_CornerWidgets, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionTabCornerWidgets.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionTab_CornerWidgets[] = {
    {(void *)slot_QStyleOptionTab_CornerWidgets___bool__, bool_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___ne__, ne_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___eq__, eq_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___xor__, xor_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___ior__, ior_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___or__, or_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___iand__, iand_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___and__, and_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___invert__, invert_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionTab_CornerWidgets, "\1QStyleOptionTab.CornerWidgets()\n"
    "QStyleOptionTab.CornerWidgets(Union[QStyleOptionTab.CornerWidgets, QStyleOptionTab.CornerWidget])\n"
    "QStyleOptionTab.CornerWidgets(QStyleOptionTab.CornerWidgets)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionTab_CornerWidgets = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTab__CornerWidgets,
        {0}
    },
    {
        sipNameNr_CornerWidgets,
        {368, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTab_CornerWidgets,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionTab_CornerWidgets,
    init_type_QStyleOptionTab_CornerWidgets,
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
    dealloc_QStyleOptionTab_CornerWidgets,
    assign_QStyleOptionTab_CornerWidgets,
    array_QStyleOptionTab_CornerWidgets,
    copy_QStyleOptionTab_CornerWidgets,
    release_QStyleOptionTab_CornerWidgets,
    0,
    convertTo_QStyleOptionTab_CornerWidgets,
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
