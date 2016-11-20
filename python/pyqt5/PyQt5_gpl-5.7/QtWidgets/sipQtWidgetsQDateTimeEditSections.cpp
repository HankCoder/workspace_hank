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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qdatetimeedit.sip"
#include <qdatetimeedit.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qdatetimeedit.sip"
#include <qdatetimeedit.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"


extern "C" {static int slot_QDateTimeEdit_Sections___bool__(PyObject *);}
static int slot_QDateTimeEdit_Sections___bool__(PyObject *sipSelf)
{
    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDateTimeEdit::Sections::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDateTimeEdit::Sections* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDateTimeEdit_Sections, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDateTimeEdit::Sections::Int() != a0->operator QDateTimeEdit::Sections::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"
            sipReleaseType(const_cast<QDateTimeEdit::Sections *>(a0),sipType_QDateTimeEdit_Sections,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QDateTimeEdit_Sections,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDateTimeEdit::Sections* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDateTimeEdit_Sections, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDateTimeEdit::Sections::Int() == a0->operator QDateTimeEdit::Sections::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"
            sipReleaseType(const_cast<QDateTimeEdit::Sections *>(a0),sipType_QDateTimeEdit_Sections,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QDateTimeEdit_Sections,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Sections)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QDateTimeEdit::Sections(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

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


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDateTimeEdit::Sections* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDateTimeEdit_Sections, &a0, &a0State, &a1))
        {
            QDateTimeEdit::Sections*sipRes;

            sipRes = new QDateTimeEdit::Sections((*a0 ^ a1));
            sipReleaseType(a0,sipType_QDateTimeEdit_Sections,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Sections)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QDateTimeEdit::Sections(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

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


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___or__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDateTimeEdit::Sections* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDateTimeEdit_Sections, &a0, &a0State, &a1))
        {
            QDateTimeEdit::Sections*sipRes;

            sipRes = new QDateTimeEdit::Sections((*a0 | a1));
            sipReleaseType(a0,sipType_QDateTimeEdit_Sections,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Sections)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QDateTimeEdit::Sections::operator&=(a0);

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


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___and__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDateTimeEdit::Sections* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDateTimeEdit_Sections, &a0, &a0State, &a1))
        {
            QDateTimeEdit::Sections*sipRes;

            sipRes = new QDateTimeEdit::Sections((*a0 & a1));
            sipReleaseType(a0,sipType_QDateTimeEdit_Sections,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___invert__(PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___invert__(PyObject *sipSelf)
{
    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0;


    {
        {
            QDateTimeEdit::Sections*sipRes;

            sipRes = new QDateTimeEdit::Sections(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___int__(PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___int__(PyObject *sipSelf)
{
    QDateTimeEdit::Sections *sipCpp = reinterpret_cast<QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

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
extern "C" {static void release_QDateTimeEdit_Sections(void *, int);}
static void release_QDateTimeEdit_Sections(void *sipCppV,int)
{
    delete reinterpret_cast<QDateTimeEdit::Sections *>(sipCppV);
}


extern "C" {static void assign_QDateTimeEdit_Sections(void *, SIP_SSIZE_T, const void *);}
static void assign_QDateTimeEdit_Sections(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDateTimeEdit::Sections *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDateTimeEdit::Sections *>(sipSrc);
}


extern "C" {static void *array_QDateTimeEdit_Sections(SIP_SSIZE_T);}
static void *array_QDateTimeEdit_Sections(SIP_SSIZE_T sipNrElem)
{
    return new QDateTimeEdit::Sections[sipNrElem];
}


extern "C" {static void *copy_QDateTimeEdit_Sections(const void *, SIP_SSIZE_T);}
static void *copy_QDateTimeEdit_Sections(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDateTimeEdit::Sections(reinterpret_cast<const QDateTimeEdit::Sections *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDateTimeEdit_Sections(sipSimpleWrapper *);}
static void dealloc_QDateTimeEdit_Sections(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDateTimeEdit_Sections(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDateTimeEdit_Sections(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDateTimeEdit_Sections(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDateTimeEdit::Sections *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDateTimeEdit::Sections();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QDateTimeEdit::Sections(a0);

            return sipCpp;
        }
    }

    {
        const QDateTimeEdit::Sections* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDateTimeEdit_Sections, &a0, &a0State))
        {
            sipCpp = new QDateTimeEdit::Sections(*a0);
            sipReleaseType(const_cast<QDateTimeEdit::Sections *>(a0),sipType_QDateTimeEdit_Sections,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDateTimeEdit_Sections(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDateTimeEdit_Sections(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDateTimeEdit::Sections **sipCppPtr = reinterpret_cast<QDateTimeEdit::Sections **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDateTimeEdit::Sections is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Section)) ||
            sipCanConvertToType(sipPy, sipType_QDateTimeEdit_Sections, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Section)))
{
    *sipCppPtr = new QDateTimeEdit::Sections(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDateTimeEdit::Sections *>(sipConvertToType(sipPy, sipType_QDateTimeEdit_Sections, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDateTimeEdit_Sections[] = {
    {(void *)slot_QDateTimeEdit_Sections___bool__, bool_slot},
    {(void *)slot_QDateTimeEdit_Sections___ne__, ne_slot},
    {(void *)slot_QDateTimeEdit_Sections___eq__, eq_slot},
    {(void *)slot_QDateTimeEdit_Sections___ixor__, ixor_slot},
    {(void *)slot_QDateTimeEdit_Sections___xor__, xor_slot},
    {(void *)slot_QDateTimeEdit_Sections___ior__, ior_slot},
    {(void *)slot_QDateTimeEdit_Sections___or__, or_slot},
    {(void *)slot_QDateTimeEdit_Sections___iand__, iand_slot},
    {(void *)slot_QDateTimeEdit_Sections___and__, and_slot},
    {(void *)slot_QDateTimeEdit_Sections___invert__, invert_slot},
    {(void *)slot_QDateTimeEdit_Sections___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDateTimeEdit_Sections, "\1QDateTimeEdit.Sections()\n"
    "QDateTimeEdit.Sections(Union[QDateTimeEdit.Sections, QDateTimeEdit.Section])\n"
    "QDateTimeEdit.Sections(QDateTimeEdit.Sections)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QDateTimeEdit_Sections = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDateTimeEdit__Sections,
        {0}
    },
    {
        sipNameNr_Sections,
        {55, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDateTimeEdit_Sections,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDateTimeEdit_Sections,
    init_type_QDateTimeEdit_Sections,
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
    dealloc_QDateTimeEdit_Sections,
    assign_QDateTimeEdit_Sections,
    array_QDateTimeEdit_Sections,
    copy_QDateTimeEdit_Sections,
    release_QDateTimeEdit_Sections,
    0,
    convertTo_QDateTimeEdit_Sections,
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
