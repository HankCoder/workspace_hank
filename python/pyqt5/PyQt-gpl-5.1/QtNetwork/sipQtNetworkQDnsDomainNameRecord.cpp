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

#include "sipAPIQtNetwork.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtNetwork/sipQtNetworkQDnsDomainNameRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtNetwork/sipQtNetworkQDnsDomainNameRecord.cpp"


PyDoc_STRVAR(doc_QDnsDomainNameRecord_swap, "swap(self, QDnsDomainNameRecord)");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDnsDomainNameRecord* a0;
        QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp, sipType_QDnsDomainNameRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_swap, doc_QDnsDomainNameRecord_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_name, "name(self) -> object");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_name, doc_QDnsDomainNameRecord_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
            quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_timeToLive, doc_QDnsDomainNameRecord_timeToLive);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_value, "value(self) -> object");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_value, doc_QDnsDomainNameRecord_value);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsDomainNameRecord(void *, int);}
static void release_QDnsDomainNameRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QDnsDomainNameRecord *>(sipCppV);
}


extern "C" {static void assign_QDnsDomainNameRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QDnsDomainNameRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDnsDomainNameRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDnsDomainNameRecord *>(sipSrc);
}


extern "C" {static void *array_QDnsDomainNameRecord(SIP_SSIZE_T);}
static void *array_QDnsDomainNameRecord(SIP_SSIZE_T sipNrElem)
{
    return new QDnsDomainNameRecord[sipNrElem];
}


extern "C" {static void *copy_QDnsDomainNameRecord(const void *, SIP_SSIZE_T);}
static void *copy_QDnsDomainNameRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDnsDomainNameRecord(reinterpret_cast<const QDnsDomainNameRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsDomainNameRecord(sipSimpleWrapper *);}
static void dealloc_QDnsDomainNameRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDnsDomainNameRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDnsDomainNameRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsDomainNameRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDnsDomainNameRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDnsDomainNameRecord();

            return sipCpp;
        }
    }

    {
        const QDnsDomainNameRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDnsDomainNameRecord, &a0))
        {
            sipCpp = new QDnsDomainNameRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDnsDomainNameRecord[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QDnsDomainNameRecord_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_name)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDnsDomainNameRecord_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_swap)},
    {SIP_MLNAME_CAST(sipName_timeToLive), meth_QDnsDomainNameRecord_timeToLive, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_timeToLive)},
    {SIP_MLNAME_CAST(sipName_value), meth_QDnsDomainNameRecord_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_value)}
};

PyDoc_STRVAR(doc_QDnsDomainNameRecord, "\1QDnsDomainNameRecord()\n"
    "QDnsDomainNameRecord(QDnsDomainNameRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QDnsDomainNameRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDnsDomainNameRecord,
        {0}
    },
    {
        sipNameNr_QDnsDomainNameRecord,
        {0, 0, 1},
        4, methods_QDnsDomainNameRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDnsDomainNameRecord,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDnsDomainNameRecord,
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
    dealloc_QDnsDomainNameRecord,
    assign_QDnsDomainNameRecord,
    array_QDnsDomainNameRecord,
    copy_QDnsDomainNameRecord,
    release_QDnsDomainNameRecord,
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
