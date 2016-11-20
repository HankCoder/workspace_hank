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

#include "sipAPIQtXmlPatterns.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlNodeModelIndex.cpp"

#line 76 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlNodeModelIndex.cpp"


PyDoc_STRVAR(doc_QXmlNodeModelIndex_data, "data(self) -> int");

extern "C" {static PyObject *meth_QXmlNodeModelIndex_data(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->data();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_data, doc_QXmlNodeModelIndex_data);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlNodeModelIndex_internalPointer, "internalPointer(self) -> object");

extern "C" {static PyObject *meth_QXmlNodeModelIndex_internalPointer(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_internalPointer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 56 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
        sipRes = reinterpret_cast<PyObject *>(sipCpp->internalPointer());
        
        if (!sipRes)
            sipRes = Py_None;
        
        Py_INCREF(sipRes);
#line 86 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlNodeModelIndex.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_internalPointer, doc_QXmlNodeModelIndex_internalPointer);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlNodeModelIndex_model, "model(self) -> QAbstractXmlNodeModel");

extern "C" {static PyObject *meth_QXmlNodeModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            const QAbstractXmlNodeModel*sipRes;

            sipRes = sipCpp->model();

            return sipConvertFromType(const_cast<QAbstractXmlNodeModel *>(sipRes),sipType_QAbstractXmlNodeModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_model, doc_QXmlNodeModelIndex_model);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlNodeModelIndex_additionalData, "additionalData(self) -> int");

extern "C" {static PyObject *meth_QXmlNodeModelIndex_additionalData(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_additionalData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->additionalData();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_additionalData, doc_QXmlNodeModelIndex_additionalData);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlNodeModelIndex_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QXmlNodeModelIndex_isNull(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_isNull, doc_QXmlNodeModelIndex_isNull);

    return NULL;
}


extern "C" {static long slot_QXmlNodeModelIndex___hash__(PyObject *);}
static long slot_QXmlNodeModelIndex___hash__(PyObject *sipSelf)
{
    QXmlNodeModelIndex *sipCpp = reinterpret_cast<QXmlNodeModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlNodeModelIndex));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
        sipRes = qHash(*sipCpp);
#line 198 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlNodeModelIndex.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QXmlNodeModelIndex___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlNodeModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlNodeModelIndex *sipCpp = reinterpret_cast<QXmlNodeModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlNodeModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlNodeModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlNodeModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,ne_slot,sipType_QXmlNodeModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlNodeModelIndex___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlNodeModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlNodeModelIndex *sipCpp = reinterpret_cast<QXmlNodeModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlNodeModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlNodeModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlNodeModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,eq_slot,sipType_QXmlNodeModelIndex,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlNodeModelIndex(void *, int);}
static void release_QXmlNodeModelIndex(void *sipCppV,int)
{
    delete reinterpret_cast<QXmlNodeModelIndex *>(sipCppV);
}


extern "C" {static void assign_QXmlNodeModelIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlNodeModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlNodeModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlNodeModelIndex *>(sipSrc);
}


extern "C" {static void *array_QXmlNodeModelIndex(SIP_SSIZE_T);}
static void *array_QXmlNodeModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QXmlNodeModelIndex[sipNrElem];
}


extern "C" {static void *copy_QXmlNodeModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QXmlNodeModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlNodeModelIndex(reinterpret_cast<const QXmlNodeModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlNodeModelIndex(sipSimpleWrapper *);}
static void dealloc_QXmlNodeModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlNodeModelIndex(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlNodeModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlNodeModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlNodeModelIndex *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QXmlNodeModelIndex();

            return sipCpp;
        }
    }

    {
        const QXmlNodeModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNodeModelIndex, &a0))
        {
            sipCpp = new QXmlNodeModelIndex(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlNodeModelIndex[] = {
    {(void *)slot_QXmlNodeModelIndex___hash__, hash_slot},
    {(void *)slot_QXmlNodeModelIndex___ne__, ne_slot},
    {(void *)slot_QXmlNodeModelIndex___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlNodeModelIndex[] = {
    {SIP_MLNAME_CAST(sipName_additionalData), meth_QXmlNodeModelIndex_additionalData, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlNodeModelIndex_additionalData)},
    {SIP_MLNAME_CAST(sipName_data), meth_QXmlNodeModelIndex_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlNodeModelIndex_data)},
    {SIP_MLNAME_CAST(sipName_internalPointer), meth_QXmlNodeModelIndex_internalPointer, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlNodeModelIndex_internalPointer)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QXmlNodeModelIndex_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlNodeModelIndex_isNull)},
    {SIP_MLNAME_CAST(sipName_model), meth_QXmlNodeModelIndex_model, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlNodeModelIndex_model)}
};

static sipEnumMemberDef enummembers_QXmlNodeModelIndex[] = {
    {sipName_Attribute, static_cast<int>(QXmlNodeModelIndex::Attribute), 15},
    {sipName_Comment, static_cast<int>(QXmlNodeModelIndex::Comment), 15},
    {sipName_Document, static_cast<int>(QXmlNodeModelIndex::Document), 15},
    {sipName_Element, static_cast<int>(QXmlNodeModelIndex::Element), 15},
    {sipName_Follows, static_cast<int>(QXmlNodeModelIndex::Follows), 14},
    {sipName_Is, static_cast<int>(QXmlNodeModelIndex::Is), 14},
    {sipName_Namespace, static_cast<int>(QXmlNodeModelIndex::Namespace), 15},
    {sipName_Precedes, static_cast<int>(QXmlNodeModelIndex::Precedes), 14},
    {sipName_ProcessingInstruction, static_cast<int>(QXmlNodeModelIndex::ProcessingInstruction), 15},
    {sipName_Text, static_cast<int>(QXmlNodeModelIndex::Text), 15},
};

PyDoc_STRVAR(doc_QXmlNodeModelIndex, "\1QXmlNodeModelIndex()\n"
    "QXmlNodeModelIndex(QXmlNodeModelIndex)");


pyqt5ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlNodeModelIndex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlNodeModelIndex,
        {0}
    },
    {
        sipNameNr_QXmlNodeModelIndex,
        {0, 0, 1},
        5, methods_QXmlNodeModelIndex,
        10, enummembers_QXmlNodeModelIndex,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlNodeModelIndex,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlNodeModelIndex,
    init_type_QXmlNodeModelIndex,
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
    dealloc_QXmlNodeModelIndex,
    assign_QXmlNodeModelIndex,
    array_QXmlNodeModelIndex,
    copy_QXmlNodeModelIndex,
    release_QXmlNodeModelIndex,
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