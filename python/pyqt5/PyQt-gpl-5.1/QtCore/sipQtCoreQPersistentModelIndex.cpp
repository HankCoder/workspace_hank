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

#include "sipAPIQtCore.h"

#line 70 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQPersistentModelIndex.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQPersistentModelIndex.cpp"
#line 105 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQPersistentModelIndex.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQPersistentModelIndex.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQPersistentModelIndex.cpp"


PyDoc_STRVAR(doc_QPersistentModelIndex_row, "row(self) -> int");

extern "C" {static PyObject *meth_QPersistentModelIndex_row(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->row();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_row, doc_QPersistentModelIndex_row);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_column, "column(self) -> int");

extern "C" {static PyObject *meth_QPersistentModelIndex_column(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->column();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_column, doc_QPersistentModelIndex_column);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_data, "data(self, role: int = Qt.DisplayRole) -> QVariant");

extern "C" {static PyObject *meth_QPersistentModelIndex_data(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_data(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = Qt::DisplayRole;
        const QPersistentModelIndex *sipCpp;

        static const char *sipKwdList[] = {
            sipName_role,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->data(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_data, doc_QPersistentModelIndex_data);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_flags, "flags(self) -> Qt.ItemFlags");

extern "C" {static PyObject *meth_QPersistentModelIndex_flags(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            Qt::ItemFlags*sipRes;

            sipRes = new Qt::ItemFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_flags, doc_QPersistentModelIndex_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_parent, "parent(self) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_parent(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            QModelIndex*sipRes;

            sipRes = new QModelIndex(sipCpp->parent());

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_parent, doc_QPersistentModelIndex_parent);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_sibling, "sibling(self, int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_sibling(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_sibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0, &a1))
        {
            QModelIndex*sipRes;

            sipRes = new QModelIndex(sipCpp->sibling(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_sibling, doc_QPersistentModelIndex_sibling);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_child, "child(self, int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_child(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0, &a1))
        {
            QModelIndex*sipRes;

            sipRes = new QModelIndex(sipCpp->child(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_child, doc_QPersistentModelIndex_child);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_model, "model(self) -> QAbstractItemModel");

extern "C" {static PyObject *meth_QPersistentModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            const QAbstractItemModel*sipRes;

            sipRes = sipCpp->model();

            return sipConvertFromType(const_cast<QAbstractItemModel *>(sipRes),sipType_QAbstractItemModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_model, doc_QPersistentModelIndex_model);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QPersistentModelIndex_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_isValid, doc_QPersistentModelIndex_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_swap, "swap(self, QPersistentModelIndex)");

extern "C" {static PyObject *meth_QPersistentModelIndex_swap(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex* a0;
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, sipType_QPersistentModelIndex, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_swap, doc_QPersistentModelIndex_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QPersistentModelIndex___ge__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QPersistentModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


extern "C" {static long slot_QPersistentModelIndex___hash__(PyObject *);}
static long slot_QPersistentModelIndex___hash__(PyObject *sipSelf)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 96 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qabstractitemmodel.sip"
        sipRes = qHash(*sipCpp);
#line 381 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQPersistentModelIndex.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPersistentModelIndex___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPersistentModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPersistentModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPersistentModelIndex___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPersistentModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPersistentModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPersistentModelIndex___lt__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPersistentModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPersistentModelIndex(void *, int);}
static void release_QPersistentModelIndex(void *sipCppV,int)
{
    delete reinterpret_cast<QPersistentModelIndex *>(sipCppV);
}


extern "C" {static void assign_QPersistentModelIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QPersistentModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPersistentModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPersistentModelIndex *>(sipSrc);
}


extern "C" {static void *array_QPersistentModelIndex(SIP_SSIZE_T);}
static void *array_QPersistentModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QPersistentModelIndex[sipNrElem];
}


extern "C" {static void *copy_QPersistentModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QPersistentModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPersistentModelIndex(reinterpret_cast<const QPersistentModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPersistentModelIndex(sipSimpleWrapper *);}
static void dealloc_QPersistentModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPersistentModelIndex(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPersistentModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPersistentModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPersistentModelIndex *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPersistentModelIndex();

            return sipCpp;
        }
    }

    {
        const QModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QModelIndex, &a0))
        {
            sipCpp = new QPersistentModelIndex(*a0);

            return sipCpp;
        }
    }

    {
        const QPersistentModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPersistentModelIndex, &a0))
        {
            sipCpp = new QPersistentModelIndex(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPersistentModelIndex[] = {
    {(void *)slot_QPersistentModelIndex___ge__, ge_slot},
    {(void *)slot_QPersistentModelIndex___hash__, hash_slot},
    {(void *)slot_QPersistentModelIndex___ne__, ne_slot},
    {(void *)slot_QPersistentModelIndex___eq__, eq_slot},
    {(void *)slot_QPersistentModelIndex___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPersistentModelIndex[] = {
    {SIP_MLNAME_CAST(sipName_child), meth_QPersistentModelIndex_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_child)},
    {SIP_MLNAME_CAST(sipName_column), meth_QPersistentModelIndex_column, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_column)},
    {SIP_MLNAME_CAST(sipName_data), (PyCFunction)meth_QPersistentModelIndex_data, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_data)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QPersistentModelIndex_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_flags)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QPersistentModelIndex_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_isValid)},
    {SIP_MLNAME_CAST(sipName_model), meth_QPersistentModelIndex_model, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_model)},
    {SIP_MLNAME_CAST(sipName_parent), meth_QPersistentModelIndex_parent, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_parent)},
    {SIP_MLNAME_CAST(sipName_row), meth_QPersistentModelIndex_row, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_row)},
    {SIP_MLNAME_CAST(sipName_sibling), meth_QPersistentModelIndex_sibling, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_sibling)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QPersistentModelIndex_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_swap)}
};

PyDoc_STRVAR(doc_QPersistentModelIndex, "\1QPersistentModelIndex()\n"
    "QPersistentModelIndex(QModelIndex)\n"
    "QPersistentModelIndex(QPersistentModelIndex)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QPersistentModelIndex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPersistentModelIndex,
        {0}
    },
    {
        sipNameNr_QPersistentModelIndex,
        {0, 0, 1},
        10, methods_QPersistentModelIndex,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPersistentModelIndex,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPersistentModelIndex,
    init_type_QPersistentModelIndex,
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
    dealloc_QPersistentModelIndex,
    assign_QPersistentModelIndex,
    array_QPersistentModelIndex,
    copy_QPersistentModelIndex,
    release_QPersistentModelIndex,
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
