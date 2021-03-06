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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNfc/qndefnfcsmartposterrecord.sip"
#include <qndefnfcsmartposterrecord.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcIconRecord.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNfc/qndefrecord.sip"
#include <qndefrecord.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcIconRecord.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcIconRecord.cpp"


PyDoc_STRVAR(doc_QNdefNfcIconRecord_setData, "setData(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QNdefNfcIconRecord_setData(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcIconRecord_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QNdefNfcIconRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNdefNfcIconRecord, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setData(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcIconRecord, sipName_setData, doc_QNdefNfcIconRecord_setData);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcIconRecord_data, "data(self) -> QByteArray");

extern "C" {static PyObject *meth_QNdefNfcIconRecord_data(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcIconRecord_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefNfcIconRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefNfcIconRecord, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->data());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcIconRecord, sipName_data, doc_QNdefNfcIconRecord_data);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNdefNfcIconRecord(void *, int);}
static void release_QNdefNfcIconRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QNdefNfcIconRecord *>(sipCppV);
}


extern "C" {static void assign_QNdefNfcIconRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QNdefNfcIconRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNdefNfcIconRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNdefNfcIconRecord *>(sipSrc);
}


extern "C" {static void *array_QNdefNfcIconRecord(SIP_SSIZE_T);}
static void *array_QNdefNfcIconRecord(SIP_SSIZE_T sipNrElem)
{
    return new QNdefNfcIconRecord[sipNrElem];
}


extern "C" {static void *copy_QNdefNfcIconRecord(const void *, SIP_SSIZE_T);}
static void *copy_QNdefNfcIconRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNdefNfcIconRecord(reinterpret_cast<const QNdefNfcIconRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNdefNfcIconRecord(sipSimpleWrapper *);}
static void dealloc_QNdefNfcIconRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNdefNfcIconRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNdefNfcIconRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNdefNfcIconRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNdefNfcIconRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNdefNfcIconRecord();

            return sipCpp;
        }
    }

    {
        const QNdefRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefRecord, &a0))
        {
            sipCpp = new QNdefNfcIconRecord(*a0);

            return sipCpp;
        }
    }

    {
        const QNdefNfcIconRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefNfcIconRecord, &a0))
        {
            sipCpp = new QNdefNfcIconRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNdefNfcIconRecord[] = {{13, 255, 1}};


static PyMethodDef methods_QNdefNfcIconRecord[] = {
    {SIP_MLNAME_CAST(sipName_data), meth_QNdefNfcIconRecord_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcIconRecord_data)},
    {SIP_MLNAME_CAST(sipName_setData), meth_QNdefNfcIconRecord_setData, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcIconRecord_setData)}
};

PyDoc_STRVAR(doc_QNdefNfcIconRecord, "\1QNdefNfcIconRecord()\n"
    "QNdefNfcIconRecord(QNdefRecord)\n"
    "QNdefNfcIconRecord(QNdefNfcIconRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNdefNfcIconRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNdefNfcIconRecord,
        {0}
    },
    {
        sipNameNr_QNdefNfcIconRecord,
        {0, 0, 1},
        2, methods_QNdefNfcIconRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNdefNfcIconRecord,
    -1,
    -1,
    supers_QNdefNfcIconRecord,
    0,
    init_type_QNdefNfcIconRecord,
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
    dealloc_QNdefNfcIconRecord,
    assign_QNdefNfcIconRecord,
    array_QNdefNfcIconRecord,
    copy_QNdefNfcIconRecord,
    release_QNdefNfcIconRecord,
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
