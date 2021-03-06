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

#include "sipAPIQtNfc.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qnearfieldtarget.sip"
#include <qnearfieldtarget.h>
#line 68 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qnearfieldtarget.sip"
#include <qnearfieldtarget.h>
#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldTargetRequestId.cpp"



PyDoc_STRVAR(doc_QNearFieldTarget_RequestId_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QNearFieldTarget_RequestId_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNearFieldTarget_RequestId_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::RequestId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNearFieldTarget_RequestId, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RequestId, sipName_isValid, doc_QNearFieldTarget_RequestId_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QNearFieldTarget_RequestId_refCount, "refCount(self) -> int");

extern "C" {static PyObject *meth_QNearFieldTarget_RequestId_refCount(PyObject *, PyObject *);}
static PyObject *meth_QNearFieldTarget_RequestId_refCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::RequestId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNearFieldTarget_RequestId, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->refCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RequestId, sipName_refCount, doc_QNearFieldTarget_RequestId_refCount);

    return NULL;
}


extern "C" {static PyObject *slot_QNearFieldTarget_RequestId___ge__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_RequestId___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldTarget::RequestId *sipCpp = reinterpret_cast<QNearFieldTarget::RequestId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_RequestId));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::RequestId* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNearFieldTarget_RequestId, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QNearFieldTarget::RequestId::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,ge_slot,sipType_QNearFieldTarget_RequestId,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldTarget_RequestId___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_RequestId___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldTarget::RequestId *sipCpp = reinterpret_cast<QNearFieldTarget::RequestId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_RequestId));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::RequestId* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNearFieldTarget_RequestId, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNearFieldTarget::RequestId::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,ne_slot,sipType_QNearFieldTarget_RequestId,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldTarget_RequestId___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_RequestId___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldTarget::RequestId *sipCpp = reinterpret_cast<QNearFieldTarget::RequestId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_RequestId));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::RequestId* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNearFieldTarget_RequestId, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNearFieldTarget::RequestId::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,eq_slot,sipType_QNearFieldTarget_RequestId,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldTarget_RequestId___lt__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_RequestId___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldTarget::RequestId *sipCpp = reinterpret_cast<QNearFieldTarget::RequestId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_RequestId));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::RequestId* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNearFieldTarget_RequestId, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNearFieldTarget::RequestId::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,lt_slot,sipType_QNearFieldTarget_RequestId,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QNearFieldTarget_RequestId(void *, int);}
static void release_QNearFieldTarget_RequestId(void *sipCppV,int)
{
    delete reinterpret_cast<QNearFieldTarget::RequestId *>(sipCppV);
}


extern "C" {static void assign_QNearFieldTarget_RequestId(void *, SIP_SSIZE_T, const void *);}
static void assign_QNearFieldTarget_RequestId(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNearFieldTarget::RequestId *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNearFieldTarget::RequestId *>(sipSrc);
}


extern "C" {static void *array_QNearFieldTarget_RequestId(SIP_SSIZE_T);}
static void *array_QNearFieldTarget_RequestId(SIP_SSIZE_T sipNrElem)
{
    return new QNearFieldTarget::RequestId[sipNrElem];
}


extern "C" {static void *copy_QNearFieldTarget_RequestId(const void *, SIP_SSIZE_T);}
static void *copy_QNearFieldTarget_RequestId(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNearFieldTarget::RequestId(reinterpret_cast<const QNearFieldTarget::RequestId *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNearFieldTarget_RequestId(sipSimpleWrapper *);}
static void dealloc_QNearFieldTarget_RequestId(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNearFieldTarget_RequestId(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNearFieldTarget_RequestId(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNearFieldTarget_RequestId(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNearFieldTarget::RequestId *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNearFieldTarget::RequestId();

            return sipCpp;
        }
    }

    {
        const QNearFieldTarget::RequestId* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNearFieldTarget_RequestId, &a0))
        {
            sipCpp = new QNearFieldTarget::RequestId(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNearFieldTarget_RequestId[] = {
    {(void *)slot_QNearFieldTarget_RequestId___ge__, ge_slot},
    {(void *)slot_QNearFieldTarget_RequestId___ne__, ne_slot},
    {(void *)slot_QNearFieldTarget_RequestId___eq__, eq_slot},
    {(void *)slot_QNearFieldTarget_RequestId___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNearFieldTarget_RequestId[] = {
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNearFieldTarget_RequestId_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QNearFieldTarget_RequestId_isValid)},
    {SIP_MLNAME_CAST(sipName_refCount), meth_QNearFieldTarget_RequestId_refCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QNearFieldTarget_RequestId_refCount)}
};

PyDoc_STRVAR(doc_QNearFieldTarget_RequestId, "\1QNearFieldTarget.RequestId()\n"
    "QNearFieldTarget.RequestId(QNearFieldTarget.RequestId)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNearFieldTarget_RequestId = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNearFieldTarget__RequestId,
        {0}
    },
    {
        sipNameNr_RequestId,
        {23, 255, 0},
        2, methods_QNearFieldTarget_RequestId,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNearFieldTarget_RequestId,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNearFieldTarget_RequestId,
    init_type_QNearFieldTarget_RequestId,
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
    dealloc_QNearFieldTarget_RequestId,
    assign_QNearFieldTarget_RequestId,
    array_QNearFieldTarget_RequestId,
    copy_QNearFieldTarget_RequestId,
    release_QNearFieldTarget_RequestId,
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
