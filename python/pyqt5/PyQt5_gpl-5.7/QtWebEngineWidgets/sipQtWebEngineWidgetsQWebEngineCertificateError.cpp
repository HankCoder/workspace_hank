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

#include "sipAPIQtWebEngineWidgets.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWebEngineWidgets/qwebenginecertificateerror.sip"
#include <qwebenginecertificateerror.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineCertificateError.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineCertificateError.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineCertificateError.cpp"


PyDoc_STRVAR(doc_QWebEngineCertificateError_error, "error(self) -> QWebEngineCertificateError.Error");

extern "C" {static PyObject *meth_QWebEngineCertificateError_error(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineCertificateError_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineCertificateError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineCertificateError, &sipCpp))
        {
            QWebEngineCertificateError::Error sipRes;

            sipRes = sipCpp->error();

            return sipConvertFromEnum(sipRes,sipType_QWebEngineCertificateError_Error);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineCertificateError, sipName_error, doc_QWebEngineCertificateError_error);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineCertificateError_url, "url(self) -> QUrl");

extern "C" {static PyObject *meth_QWebEngineCertificateError_url(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineCertificateError_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineCertificateError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineCertificateError, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->url());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineCertificateError, sipName_url, doc_QWebEngineCertificateError_url);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineCertificateError_isOverridable, "isOverridable(self) -> bool");

extern "C" {static PyObject *meth_QWebEngineCertificateError_isOverridable(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineCertificateError_isOverridable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineCertificateError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineCertificateError, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isOverridable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineCertificateError, sipName_isOverridable, doc_QWebEngineCertificateError_isOverridable);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineCertificateError_errorDescription, "errorDescription(self) -> str");

extern "C" {static PyObject *meth_QWebEngineCertificateError_errorDescription(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineCertificateError_errorDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineCertificateError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineCertificateError, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->errorDescription());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineCertificateError, sipName_errorDescription, doc_QWebEngineCertificateError_errorDescription);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebEngineCertificateError(void *, int);}
static void release_QWebEngineCertificateError(void *sipCppV,int)
{
    delete reinterpret_cast<QWebEngineCertificateError *>(sipCppV);
}


extern "C" {static void dealloc_QWebEngineCertificateError(sipSimpleWrapper *);}
static void dealloc_QWebEngineCertificateError(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebEngineCertificateError(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QWebEngineCertificateError[] = {
    {SIP_MLNAME_CAST(sipName_error), meth_QWebEngineCertificateError_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineCertificateError_error)},
    {SIP_MLNAME_CAST(sipName_errorDescription), meth_QWebEngineCertificateError_errorDescription, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineCertificateError_errorDescription)},
    {SIP_MLNAME_CAST(sipName_isOverridable), meth_QWebEngineCertificateError_isOverridable, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineCertificateError_isOverridable)},
    {SIP_MLNAME_CAST(sipName_url), meth_QWebEngineCertificateError_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineCertificateError_url)}
};

static sipEnumMemberDef enummembers_QWebEngineCertificateError[] = {
    {sipName_CertificateAuthorityInvalid, static_cast<int>(QWebEngineCertificateError::CertificateAuthorityInvalid), 3},
    {sipName_CertificateCommonNameInvalid, static_cast<int>(QWebEngineCertificateError::CertificateCommonNameInvalid), 3},
    {sipName_CertificateContainsErrors, static_cast<int>(QWebEngineCertificateError::CertificateContainsErrors), 3},
    {sipName_CertificateDateInvalid, static_cast<int>(QWebEngineCertificateError::CertificateDateInvalid), 3},
    {sipName_CertificateInvalid, static_cast<int>(QWebEngineCertificateError::CertificateInvalid), 3},
    {sipName_CertificateNameConstraintViolation, static_cast<int>(QWebEngineCertificateError::CertificateNameConstraintViolation), 3},
    {sipName_CertificateNoRevocationMechanism, static_cast<int>(QWebEngineCertificateError::CertificateNoRevocationMechanism), 3},
    {sipName_CertificateNonUniqueName, static_cast<int>(QWebEngineCertificateError::CertificateNonUniqueName), 3},
    {sipName_CertificateRevoked, static_cast<int>(QWebEngineCertificateError::CertificateRevoked), 3},
    {sipName_CertificateUnableToCheckRevocation, static_cast<int>(QWebEngineCertificateError::CertificateUnableToCheckRevocation), 3},
    {sipName_CertificateWeakKey, static_cast<int>(QWebEngineCertificateError::CertificateWeakKey), 3},
    {sipName_CertificateWeakSignatureAlgorithm, static_cast<int>(QWebEngineCertificateError::CertificateWeakSignatureAlgorithm), 3},
    {sipName_SslPinnedKeyNotInCertificateChain, static_cast<int>(QWebEngineCertificateError::SslPinnedKeyNotInCertificateChain), 3},
};


pyqt5ClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEngineCertificateError = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineCertificateError,
        {0}
    },
    {
        sipNameNr_QWebEngineCertificateError,
        {0, 0, 1},
        4, methods_QWebEngineCertificateError,
        13, enummembers_QWebEngineCertificateError,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QWebEngineCertificateError,
    0,
    0,
    0,
    release_QWebEngineCertificateError,
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
