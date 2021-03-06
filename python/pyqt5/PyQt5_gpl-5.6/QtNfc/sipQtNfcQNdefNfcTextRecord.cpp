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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qndefnfctextrecord.sip"
#include <qndefnfctextrecord.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefNfcTextRecord.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qndefrecord.sip"
#include <qndefrecord.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefNfcTextRecord.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefNfcTextRecord.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefNfcTextRecord.cpp"


PyDoc_STRVAR(doc_QNdefNfcTextRecord_locale, "locale(self) -> str");

extern "C" {static PyObject *meth_QNdefNfcTextRecord_locale(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcTextRecord_locale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefNfcTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefNfcTextRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->locale());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcTextRecord, sipName_locale, doc_QNdefNfcTextRecord_locale);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcTextRecord_setLocale, "setLocale(self, str)");

extern "C" {static PyObject *meth_QNdefNfcTextRecord_setLocale(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcTextRecord_setLocale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNdefNfcTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNdefNfcTextRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setLocale(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcTextRecord, sipName_setLocale, doc_QNdefNfcTextRecord_setLocale);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcTextRecord_text, "text(self) -> str");

extern "C" {static PyObject *meth_QNdefNfcTextRecord_text(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcTextRecord_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefNfcTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefNfcTextRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcTextRecord, sipName_text, doc_QNdefNfcTextRecord_text);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcTextRecord_setText, "setText(self, str)");

extern "C" {static PyObject *meth_QNdefNfcTextRecord_setText(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcTextRecord_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNdefNfcTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNdefNfcTextRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcTextRecord, sipName_setText, doc_QNdefNfcTextRecord_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcTextRecord_encoding, "encoding(self) -> QNdefNfcTextRecord.Encoding");

extern "C" {static PyObject *meth_QNdefNfcTextRecord_encoding(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcTextRecord_encoding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefNfcTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefNfcTextRecord, &sipCpp))
        {
            QNdefNfcTextRecord::Encoding sipRes;

            sipRes = sipCpp->encoding();

            return sipConvertFromEnum(sipRes,sipType_QNdefNfcTextRecord_Encoding);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcTextRecord, sipName_encoding, doc_QNdefNfcTextRecord_encoding);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefNfcTextRecord_setEncoding, "setEncoding(self, QNdefNfcTextRecord.Encoding)");

extern "C" {static PyObject *meth_QNdefNfcTextRecord_setEncoding(PyObject *, PyObject *);}
static PyObject *meth_QNdefNfcTextRecord_setEncoding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNdefNfcTextRecord::Encoding a0;
        QNdefNfcTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNdefNfcTextRecord, &sipCpp, sipType_QNdefNfcTextRecord_Encoding, &a0))
        {
            sipCpp->setEncoding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefNfcTextRecord, sipName_setEncoding, doc_QNdefNfcTextRecord_setEncoding);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNdefNfcTextRecord(void *, int);}
static void release_QNdefNfcTextRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QNdefNfcTextRecord *>(sipCppV);
}


extern "C" {static void assign_QNdefNfcTextRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QNdefNfcTextRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNdefNfcTextRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNdefNfcTextRecord *>(sipSrc);
}


extern "C" {static void *array_QNdefNfcTextRecord(SIP_SSIZE_T);}
static void *array_QNdefNfcTextRecord(SIP_SSIZE_T sipNrElem)
{
    return new QNdefNfcTextRecord[sipNrElem];
}


extern "C" {static void *copy_QNdefNfcTextRecord(const void *, SIP_SSIZE_T);}
static void *copy_QNdefNfcTextRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNdefNfcTextRecord(reinterpret_cast<const QNdefNfcTextRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNdefNfcTextRecord(sipSimpleWrapper *);}
static void dealloc_QNdefNfcTextRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNdefNfcTextRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNdefNfcTextRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNdefNfcTextRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNdefNfcTextRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNdefNfcTextRecord();

            return sipCpp;
        }
    }

    {
        const QNdefRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefRecord, &a0))
        {
            sipCpp = new QNdefNfcTextRecord(*a0);

            return sipCpp;
        }
    }

    {
        const QNdefNfcTextRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefNfcTextRecord, &a0))
        {
            sipCpp = new QNdefNfcTextRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNdefNfcTextRecord[] = {{13, 255, 1}};


static PyMethodDef methods_QNdefNfcTextRecord[] = {
    {SIP_MLNAME_CAST(sipName_encoding), meth_QNdefNfcTextRecord_encoding, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcTextRecord_encoding)},
    {SIP_MLNAME_CAST(sipName_locale), meth_QNdefNfcTextRecord_locale, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcTextRecord_locale)},
    {SIP_MLNAME_CAST(sipName_setEncoding), meth_QNdefNfcTextRecord_setEncoding, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcTextRecord_setEncoding)},
    {SIP_MLNAME_CAST(sipName_setLocale), meth_QNdefNfcTextRecord_setLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcTextRecord_setLocale)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QNdefNfcTextRecord_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcTextRecord_setText)},
    {SIP_MLNAME_CAST(sipName_text), meth_QNdefNfcTextRecord_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefNfcTextRecord_text)}
};

static sipEnumMemberDef enummembers_QNdefNfcTextRecord[] = {
    {sipName_Utf16, static_cast<int>(QNdefNfcTextRecord::Utf16), 11},
    {sipName_Utf8, static_cast<int>(QNdefNfcTextRecord::Utf8), 11},
};

PyDoc_STRVAR(doc_QNdefNfcTextRecord, "\1QNdefNfcTextRecord()\n"
    "QNdefNfcTextRecord(QNdefRecord)\n"
    "QNdefNfcTextRecord(QNdefNfcTextRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNdefNfcTextRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNdefNfcTextRecord,
        {0}
    },
    {
        sipNameNr_QNdefNfcTextRecord,
        {0, 0, 1},
        6, methods_QNdefNfcTextRecord,
        2, enummembers_QNdefNfcTextRecord,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNdefNfcTextRecord,
    -1,
    -1,
    supers_QNdefNfcTextRecord,
    0,
    init_type_QNdefNfcTextRecord,
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
    dealloc_QNdefNfcTextRecord,
    assign_QNdefNfcTextRecord,
    array_QNdefNfcTextRecord,
    copy_QNdefNfcTextRecord,
    release_QNdefNfcTextRecord,
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
