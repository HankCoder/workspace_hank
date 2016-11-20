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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNfc/qndefnfcurirecord.sip"
#include <qndefnfcurirecord.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcUriRecord.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNfc/qndefrecord.sip"
#include <qndefrecord.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcUriRecord.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcUriRecord.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNdefNfcUriRecord.cpp"


PyDoc_STRVAR(doc_QNdefNfcUriRecord_uri, "uri(self) -> QUrl");

extern "C" {static PyObject *meth_QNdefNfcUriRecord_uri(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcUriRecord_uri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefNfcUriRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefNfcUriRecord, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->uri());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcUriRecord, sipName_uri, doc_QNdefNfcUriRecord_uri);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcUriRecord_setUri, "setUri(self, QUrl)");

extern "C" {static PyObject *meth_QNdefNfcUriRecord_setUri(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcUriRecord_setUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QNdefNfcUriRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNdefNfcUriRecord, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setUri(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcUriRecord, sipName_setUri, doc_QNdefNfcUriRecord_setUri);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNdefNfcUriRecord(void *, int);}
static void release_QNdefNfcUriRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QNdefNfcUriRecord *>(sipCppV);
}


extern "C" {static void assign_QNdefNfcUriRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QNdefNfcUriRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNdefNfcUriRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNdefNfcUriRecord *>(sipSrc);
}


extern "C" {static void *array_QNdefNfcUriRecord(SIP_SSIZE_T);}
static void *array_QNdefNfcUriRecord(SIP_SSIZE_T sipNrElem)
{
    return new QNdefNfcUriRecord[sipNrElem];
}


extern "C" {static void *copy_QNdefNfcUriRecord(const void *, SIP_SSIZE_T);}
static void *copy_QNdefNfcUriRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNdefNfcUriRecord(reinterpret_cast<const QNdefNfcUriRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNdefNfcUriRecord(sipSimpleWrapper *);}
static void dealloc_QNdefNfcUriRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNdefNfcUriRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNdefNfcUriRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNdefNfcUriRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNdefNfcUriRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNdefNfcUriRecord();

            return sipCpp;
        }
    }

    {
        const QNdefRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefRecord, &a0))
        {
            sipCpp = new QNdefNfcUriRecord(*a0);

            return sipCpp;
        }
    }

    {
        const QNdefNfcUriRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefNfcUriRecord, &a0))
        {
            sipCpp = new QNdefNfcUriRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNdefNfcUriRecord[] = {{13, 255, 1}};


static PyMethodDef methods_QNdefNfcUriRecord[] = {
    {SIP_MLNAME_CAST(sipName_setUri), meth_QNdefNfcUriRecord_setUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcUriRecord_setUri)},
    {SIP_MLNAME_CAST(sipName_uri), meth_QNdefNfcUriRecord_uri, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcUriRecord_uri)}
};

PyDoc_STRVAR(doc_QNdefNfcUriRecord, "\1QNdefNfcUriRecord()\n"
    "QNdefNfcUriRecord(QNdefRecord)\n"
    "QNdefNfcUriRecord(QNdefNfcUriRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNdefNfcUriRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNdefNfcUriRecord,
        {0}
    },
    {
        sipNameNr_QNdefNfcUriRecord,
        {0, 0, 1},
        2, methods_QNdefNfcUriRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNdefNfcUriRecord,
    -1,
    -1,
    supers_QNdefNfcUriRecord,
    0,
    init_type_QNdefNfcUriRecord,
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
    dealloc_QNdefNfcUriRecord,
    assign_QNdefNfcUriRecord,
    array_QNdefNfcUriRecord,
    copy_QNdefNfcUriRecord,
    release_QNdefNfcUriRecord,
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
