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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextLength.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextLength.cpp"


PyDoc_STRVAR(doc_QTextLength_type, "type(self) -> QTextLength.Type");

extern "C" {static PyObject *meth_QTextLength_type(PyObject *, PyObject *);}
static PyObject *meth_QTextLength_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLength *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLength, &sipCpp))
        {
            QTextLength::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QTextLength_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLength, sipName_type, doc_QTextLength_type);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLength_value, "value(self, float) -> float");

extern "C" {static PyObject *meth_QTextLength_value(PyObject *, PyObject *);}
static PyObject *meth_QTextLength_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        const QTextLength *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextLength, &sipCpp, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->value(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLength, sipName_value, doc_QTextLength_value);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLength_rawValue, "rawValue(self) -> float");

extern "C" {static PyObject *meth_QTextLength_rawValue(PyObject *, PyObject *);}
static PyObject *meth_QTextLength_rawValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLength *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLength, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->rawValue();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLength, sipName_rawValue, doc_QTextLength_rawValue);

    return NULL;
}


extern "C" {static PyObject *slot_QTextLength___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextLength___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextLength *sipCpp = reinterpret_cast<QTextLength *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextLength));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextLength* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextLength, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTextLength::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextLength,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextLength___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextLength___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextLength *sipCpp = reinterpret_cast<QTextLength *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextLength));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextLength* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextLength, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTextLength::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextLength,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextLength(void *, int);}
static void release_QTextLength(void *sipCppV,int)
{
    delete reinterpret_cast<QTextLength *>(sipCppV);
}


extern "C" {static void assign_QTextLength(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextLength(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextLength *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextLength *>(sipSrc);
}


extern "C" {static void *array_QTextLength(SIP_SSIZE_T);}
static void *array_QTextLength(SIP_SSIZE_T sipNrElem)
{
    return new QTextLength[sipNrElem];
}


extern "C" {static void *copy_QTextLength(const void *, SIP_SSIZE_T);}
static void *copy_QTextLength(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextLength(reinterpret_cast<const QTextLength *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextLength(sipSimpleWrapper *);}
static void dealloc_QTextLength(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextLength(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextLength(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextLength(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextLength *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextLength();

            return sipCpp;
        }
    }

    {
        QTextLength::Type a0;
        qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "Ed", sipType_QTextLength_Type, &a0, &a1))
        {
            sipCpp = new QTextLength(a0,a1);

            return sipCpp;
        }
    }

    {
        const QVariant* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant, &a0, &a0State))
        {
#line 50 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qtextformat.sip"
        sipCpp = new QTextLength(a0->value<QTextLength>());
#line 258 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextLength.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    {
        const QTextLength* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextLength, &a0))
        {
            sipCpp = new QTextLength(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextLength[] = {
    {(void *)slot_QTextLength___ne__, ne_slot},
    {(void *)slot_QTextLength___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextLength[] = {
    {SIP_MLNAME_CAST(sipName_rawValue), meth_QTextLength_rawValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLength_rawValue)},
    {SIP_MLNAME_CAST(sipName_type), meth_QTextLength_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLength_type)},
    {SIP_MLNAME_CAST(sipName_value), meth_QTextLength_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLength_value)}
};

static sipEnumMemberDef enummembers_QTextLength[] = {
    {sipName_FixedLength, static_cast<int>(QTextLength::FixedLength), 265},
    {sipName_PercentageLength, static_cast<int>(QTextLength::PercentageLength), 265},
    {sipName_VariableLength, static_cast<int>(QTextLength::VariableLength), 265},
};

PyDoc_STRVAR(doc_QTextLength, "\1QTextLength()\n"
    "QTextLength(QTextLength.Type, float)\n"
    "QTextLength(QVariant)\n"
    "QTextLength(QTextLength)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextLength = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextLength,
        {0}
    },
    {
        sipNameNr_QTextLength,
        {0, 0, 1},
        3, methods_QTextLength,
        3, enummembers_QTextLength,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextLength,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextLength,
    init_type_QTextLength,
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
    dealloc_QTextLength,
    assign_QTextLength,
    array_QTextLength,
    copy_QTextLength,
    release_QTextLength,
    0,
    0,
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
