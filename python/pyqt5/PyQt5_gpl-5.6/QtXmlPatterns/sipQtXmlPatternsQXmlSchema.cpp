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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtXmlPatterns/qxmlschema.sip"
#include <qxmlschema.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"

#line 26 "sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtXmlPatterns/qabstracturiresolver.sip"
#include <qabstracturiresolver.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtXmlPatterns/sipQtXmlPatternsQXmlSchema.cpp"


PyDoc_STRVAR(doc_QXmlSchema_load, "load(self, QUrl) -> bool\n"
    "load(self, QIODevice, documentUri: QUrl = QUrl()) -> bool\n"
    "load(self, Union[QByteArray, bytes, bytearray], documentUri: QUrl = QUrl()) -> bool");

extern "C" {static PyObject *meth_QXmlSchema_load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QXmlSchema *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QXmlSchema, &sipCpp, sipType_QUrl, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QIODevice* a0;
        const QUrl& a1def = QUrl();
        const QUrl* a1 = &a1def;
        QXmlSchema *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J9", &sipSelf, sipType_QXmlSchema, &sipCpp, sipType_QIODevice, &a0, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(a0,*a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        const QUrl& a1def = QUrl();
        const QUrl* a1 = &a1def;
        QXmlSchema *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J9", &sipSelf, sipType_QXmlSchema, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QUrl, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->load(*a0,*a1);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_load, doc_QXmlSchema_load);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QXmlSchema_isValid(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_isValid, doc_QXmlSchema_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_namePool, "namePool(self) -> QXmlNamePool");

extern "C" {static PyObject *meth_QXmlSchema_namePool(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_namePool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QXmlNamePool*sipRes;

            sipRes = new QXmlNamePool(sipCpp->namePool());

            return sipConvertFromNewType(sipRes,sipType_QXmlNamePool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_namePool, doc_QXmlSchema_namePool);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_documentUri, "documentUri(self) -> QUrl");

extern "C" {static PyObject *meth_QXmlSchema_documentUri(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_documentUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->documentUri());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_documentUri, doc_QXmlSchema_documentUri);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_setMessageHandler, "setMessageHandler(self, QAbstractMessageHandler)");

extern "C" {static PyObject *meth_QXmlSchema_setMessageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_setMessageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractMessageHandler* a0;
        PyObject *a0Keep;
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchema, &sipCpp, &a0Keep, sipType_QAbstractMessageHandler, &a0))
        {
            sipCpp->setMessageHandler(a0);

            sipKeepReference(sipSelf, -4, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_setMessageHandler, doc_QXmlSchema_setMessageHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_messageHandler, "messageHandler(self) -> QAbstractMessageHandler");

extern "C" {static PyObject *meth_QXmlSchema_messageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_messageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QAbstractMessageHandler*sipRes;

            sipRes = sipCpp->messageHandler();

            return sipConvertFromType(sipRes,sipType_QAbstractMessageHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_messageHandler, doc_QXmlSchema_messageHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_setUriResolver, "setUriResolver(self, QAbstractUriResolver)");

extern "C" {static PyObject *meth_QXmlSchema_setUriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_setUriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAbstractUriResolver* a0;
        PyObject *a0Keep;
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchema, &sipCpp, &a0Keep, sipType_QAbstractUriResolver, &a0))
        {
            sipCpp->setUriResolver(a0);

            sipKeepReference(sipSelf, -5, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_setUriResolver, doc_QXmlSchema_setUriResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_uriResolver, "uriResolver(self) -> QAbstractUriResolver");

extern "C" {static PyObject *meth_QXmlSchema_uriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_uriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            const QAbstractUriResolver*sipRes;

            sipRes = sipCpp->uriResolver();

            return sipConvertFromType(const_cast<QAbstractUriResolver *>(sipRes),sipType_QAbstractUriResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_uriResolver, doc_QXmlSchema_uriResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_setNetworkAccessManager, "setNetworkAccessManager(self, QNetworkAccessManager)");

extern "C" {static PyObject *meth_QXmlSchema_setNetworkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_setNetworkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkAccessManager* a0;
        PyObject *a0Keep;
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchema, &sipCpp, &a0Keep, sipType_QNetworkAccessManager, &a0))
        {
            sipCpp->setNetworkAccessManager(a0);

            sipKeepReference(sipSelf, -6, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_setNetworkAccessManager, doc_QXmlSchema_setNetworkAccessManager);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchema_networkAccessManager, "networkAccessManager(self) -> QNetworkAccessManager");

extern "C" {static PyObject *meth_QXmlSchema_networkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_networkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QNetworkAccessManager*sipRes;

            sipRes = sipCpp->networkAccessManager();

            return sipConvertFromType(sipRes,sipType_QNetworkAccessManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_networkAccessManager, doc_QXmlSchema_networkAccessManager);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlSchema(void *, int);}
static void release_QXmlSchema(void *sipCppV,int)
{
    delete reinterpret_cast<QXmlSchema *>(sipCppV);
}


extern "C" {static void dealloc_QXmlSchema(sipSimpleWrapper *);}
static void dealloc_QXmlSchema(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlSchema(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlSchema(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlSchema(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlSchema *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QXmlSchema();

            return sipCpp;
        }
    }

    {
        const QXmlSchema* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlSchema, &a0))
        {
            sipCpp = new QXmlSchema(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlSchema[] = {
    {SIP_MLNAME_CAST(sipName_documentUri), meth_QXmlSchema_documentUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_documentUri)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QXmlSchema_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_isValid)},
    {SIP_MLNAME_CAST(sipName_load), (PyCFunction)meth_QXmlSchema_load, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlSchema_load)},
    {SIP_MLNAME_CAST(sipName_messageHandler), meth_QXmlSchema_messageHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_messageHandler)},
    {SIP_MLNAME_CAST(sipName_namePool), meth_QXmlSchema_namePool, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_namePool)},
    {SIP_MLNAME_CAST(sipName_networkAccessManager), meth_QXmlSchema_networkAccessManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_networkAccessManager)},
    {SIP_MLNAME_CAST(sipName_setMessageHandler), meth_QXmlSchema_setMessageHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_setMessageHandler)},
    {SIP_MLNAME_CAST(sipName_setNetworkAccessManager), meth_QXmlSchema_setNetworkAccessManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_setNetworkAccessManager)},
    {SIP_MLNAME_CAST(sipName_setUriResolver), meth_QXmlSchema_setUriResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_setUriResolver)},
    {SIP_MLNAME_CAST(sipName_uriResolver), meth_QXmlSchema_uriResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchema_uriResolver)}
};

PyDoc_STRVAR(doc_QXmlSchema, "\1QXmlSchema()\n"
    "QXmlSchema(QXmlSchema)");


pyqt5ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlSchema = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlSchema,
        {0}
    },
    {
        sipNameNr_QXmlSchema,
        {0, 0, 1},
        10, methods_QXmlSchema,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlSchema,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlSchema,
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
    dealloc_QXmlSchema,
    0,
    0,
    0,
    release_QXmlSchema,
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
