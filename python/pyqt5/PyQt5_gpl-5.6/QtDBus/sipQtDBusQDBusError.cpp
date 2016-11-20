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

#include "sipAPIQtDBus.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtDBus/sipQtDBusQDBusError.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtDBus/sipQtDBusQDBusError.cpp"


PyDoc_STRVAR(doc_QDBusError_type, "type(self) -> QDBusError.ErrorType");

extern "C" {static PyObject *meth_QDBusError_type(PyObject *, PyObject *);}
static PyObject *meth_QDBusError_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusError, &sipCpp))
        {
            QDBusError::ErrorType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QDBusError_ErrorType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusError, sipName_type, doc_QDBusError_type);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusError_name, "name(self) -> str");

extern "C" {static PyObject *meth_QDBusError_name(PyObject *, PyObject *);}
static PyObject *meth_QDBusError_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusError, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusError, sipName_name, doc_QDBusError_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusError_message, "message(self) -> str");

extern "C" {static PyObject *meth_QDBusError_message(PyObject *, PyObject *);}
static PyObject *meth_QDBusError_message(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusError, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->message());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusError, sipName_message, doc_QDBusError_message);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusError_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QDBusError_isValid(PyObject *, PyObject *);}
static PyObject *meth_QDBusError_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusError, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusError, sipName_isValid, doc_QDBusError_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusError_errorString, "errorString(QDBusError.ErrorType) -> str");

extern "C" {static PyObject *meth_QDBusError_errorString(PyObject *, PyObject *);}
static PyObject *meth_QDBusError_errorString(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusError::ErrorType a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QDBusError_ErrorType, &a0))
        {
            QString*sipRes;

            sipRes = new QString(QDBusError::errorString(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusError, sipName_errorString, doc_QDBusError_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusError_swap, "swap(self, QDBusError)");

extern "C" {static PyObject *meth_QDBusError_swap(PyObject *, PyObject *);}
static PyObject *meth_QDBusError_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusError* a0;
        QDBusError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusError, &sipCpp, sipType_QDBusError, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusError, sipName_swap, doc_QDBusError_swap);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusError(void *, int);}
static void release_QDBusError(void *sipCppV,int)
{
    delete reinterpret_cast<QDBusError *>(sipCppV);
}


extern "C" {static void dealloc_QDBusError(sipSimpleWrapper *);}
static void dealloc_QDBusError(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusError(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusError(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusError(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusError *sipCpp = 0;

    {
        const QDBusError* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusError, &a0))
        {
            sipCpp = new QDBusError(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDBusError[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QDBusError_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusError_errorString)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QDBusError_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusError_isValid)},
    {SIP_MLNAME_CAST(sipName_message), meth_QDBusError_message, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusError_message)},
    {SIP_MLNAME_CAST(sipName_name), meth_QDBusError_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusError_name)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDBusError_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusError_swap)},
    {SIP_MLNAME_CAST(sipName_type), meth_QDBusError_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusError_type)}
};

static sipEnumMemberDef enummembers_QDBusError[] = {
    {sipName_AccessDenied, static_cast<int>(QDBusError::AccessDenied), 17},
    {sipName_AddressInUse, static_cast<int>(QDBusError::AddressInUse), 17},
    {sipName_BadAddress, static_cast<int>(QDBusError::BadAddress), 17},
    {sipName_Disconnected, static_cast<int>(QDBusError::Disconnected), 17},
    {sipName_Failed, static_cast<int>(QDBusError::Failed), 17},
    {sipName_InternalError, static_cast<int>(QDBusError::InternalError), 17},
    {sipName_InvalidArgs, static_cast<int>(QDBusError::InvalidArgs), 17},
    {sipName_InvalidInterface, static_cast<int>(QDBusError::InvalidInterface), 17},
    {sipName_InvalidMember, static_cast<int>(QDBusError::InvalidMember), 17},
    {sipName_InvalidObjectPath, static_cast<int>(QDBusError::InvalidObjectPath), 17},
    {sipName_InvalidService, static_cast<int>(QDBusError::InvalidService), 17},
    {sipName_InvalidSignature, static_cast<int>(QDBusError::InvalidSignature), 17},
    {sipName_LimitsExceeded, static_cast<int>(QDBusError::LimitsExceeded), 17},
    {sipName_NoError, static_cast<int>(QDBusError::NoError), 17},
    {sipName_NoMemory, static_cast<int>(QDBusError::NoMemory), 17},
    {sipName_NoNetwork, static_cast<int>(QDBusError::NoNetwork), 17},
    {sipName_NoReply, static_cast<int>(QDBusError::NoReply), 17},
    {sipName_NoServer, static_cast<int>(QDBusError::NoServer), 17},
    {sipName_NotSupported, static_cast<int>(QDBusError::NotSupported), 17},
    {sipName_Other, static_cast<int>(QDBusError::Other), 17},
    {sipName_PropertyReadOnly, static_cast<int>(QDBusError::PropertyReadOnly), 17},
    {sipName_ServiceUnknown, static_cast<int>(QDBusError::ServiceUnknown), 17},
    {sipName_TimedOut, static_cast<int>(QDBusError::TimedOut), 17},
    {sipName_Timeout, static_cast<int>(QDBusError::Timeout), 17},
    {sipName_UnknownInterface, static_cast<int>(QDBusError::UnknownInterface), 17},
    {sipName_UnknownMethod, static_cast<int>(QDBusError::UnknownMethod), 17},
    {sipName_UnknownObject, static_cast<int>(QDBusError::UnknownObject), 17},
    {sipName_UnknownProperty, static_cast<int>(QDBusError::UnknownProperty), 17},
};

PyDoc_STRVAR(doc_QDBusError, "\1QDBusError(QDBusError)");


pyqt5ClassTypeDef sipTypeDef_QtDBus_QDBusError = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDBusError,
        {0}
    },
    {
        sipNameNr_QDBusError,
        {0, 0, 1},
        6, methods_QDBusError,
        28, enummembers_QDBusError,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusError,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDBusError,
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
    dealloc_QDBusError,
    0,
    0,
    0,
    release_QDBusError,
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
