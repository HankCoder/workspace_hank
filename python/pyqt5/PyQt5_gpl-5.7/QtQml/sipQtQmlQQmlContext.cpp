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

#include "sipAPIQtQml.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQml/qqmlcontext.sip"
#include <qqmlcontext.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"

#line 59 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlContext.cpp"


class sipQQmlContext : public QQmlContext
{
public:
    sipQQmlContext(QQmlEngine*,QObject*);
    sipQQmlContext(QQmlContext*,QObject*);
    virtual ~sipQQmlContext();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlContext(const sipQQmlContext &);
    sipQQmlContext &operator = (const sipQQmlContext &);

    char sipPyMethods[7];
};

sipQQmlContext::sipQQmlContext(QQmlEngine*a0,QObject*a1): QQmlContext(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlContext::sipQQmlContext(QQmlContext*a0,QObject*a1): QQmlContext(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlContext::~sipQQmlContext()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQQmlContext::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQml_qt_metaobject(sipPySelf,sipType_QQmlContext);

    return QQmlContext::metaObject();
}

int sipQQmlContext::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QQmlContext::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQml_qt_metacall(sipPySelf,sipType_QQmlContext,_c,_id,_a);

    return _id;
}

void *sipQQmlContext::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQml_qt_metacast(sipPySelf, sipType_QQmlContext, _clname, &sipCpp) ? sipCpp : QQmlContext::qt_metacast(_clname));
}

void sipQQmlContext::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QQmlContext::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QQmlContext::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QQmlContext::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQml_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QQmlContext::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQml_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QQmlContext::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQml_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQQmlContext::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QQmlContext::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQml_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQQmlContext::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QQmlContext::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQml_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQmlContext_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QQmlContext_isValid(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_isValid, doc_QQmlContext_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_engine, "engine(self) -> QQmlEngine");

extern "C" {static PyObject *meth_QQmlContext_engine(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_engine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QQmlEngine*sipRes;

            sipRes = sipCpp->engine();

            return sipConvertFromType(sipRes,sipType_QQmlEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_engine, doc_QQmlContext_engine);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_parentContext, "parentContext(self) -> QQmlContext");

extern "C" {static PyObject *meth_QQmlContext_parentContext(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_parentContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QQmlContext*sipRes;

            sipRes = sipCpp->parentContext();

            return sipConvertFromType(sipRes,sipType_QQmlContext,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_parentContext, doc_QQmlContext_parentContext);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_contextObject, "contextObject(self) -> QObject");

extern "C" {static PyObject *meth_QQmlContext_contextObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_contextObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->contextObject();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_contextObject, doc_QQmlContext_contextObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_setContextObject, "setContextObject(self, QObject)");

extern "C" {static PyObject *meth_QQmlContext_setContextObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_setContextObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QObject, &a0))
        {
            sipCpp->setContextObject(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_setContextObject, doc_QQmlContext_setContextObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_contextProperty, "contextProperty(self, str) -> Any");

extern "C" {static PyObject *meth_QQmlContext_contextProperty(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_contextProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->contextProperty(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_contextProperty, doc_QQmlContext_contextProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_setContextProperty, "setContextProperty(self, str, QObject)\n"
    "setContextProperty(self, str, Any)");

extern "C" {static PyObject *meth_QQmlContext_setContextProperty(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_setContextProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QObject* a1;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QString,&a0, &a0State, sipType_QObject, &a1))
        {
            sipCpp->setContextProperty(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setContextProperty(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_setContextProperty, doc_QQmlContext_setContextProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_nameForObject, "nameForObject(self, QObject) -> str");

extern "C" {static PyObject *meth_QQmlContext_nameForObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_nameForObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QObject, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->nameForObject(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_nameForObject, doc_QQmlContext_nameForObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_resolvedUrl, "resolvedUrl(self, QUrl) -> QUrl");

extern "C" {static PyObject *meth_QQmlContext_resolvedUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_resolvedUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QUrl, &a0))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->resolvedUrl(*a0));

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_resolvedUrl, doc_QQmlContext_resolvedUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_setBaseUrl, "setBaseUrl(self, QUrl)");

extern "C" {static PyObject *meth_QQmlContext_setBaseUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_setBaseUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setBaseUrl(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_setBaseUrl, doc_QQmlContext_setBaseUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_baseUrl, "baseUrl(self) -> QUrl");

extern "C" {static PyObject *meth_QQmlContext_baseUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_baseUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->baseUrl());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_baseUrl, doc_QQmlContext_baseUrl);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlContext(void *, int);}
static void release_QQmlContext(void *sipCppV,int)
{
    QQmlContext *sipCpp = reinterpret_cast<QQmlContext *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQmlContext(sipSimpleWrapper *);}
static void dealloc_QQmlContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlContext *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlContext(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlContext(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQQmlContext *sipCpp = 0;

    {
        QQmlEngine* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|JH", sipType_QQmlEngine, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQQmlContext(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QQmlContext* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|JH", sipType_QQmlContext, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQQmlContext(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQmlContext[] = {{165, 0, 1}};


static PyMethodDef methods_QQmlContext[] = {
    {SIP_MLNAME_CAST(sipName_baseUrl), meth_QQmlContext_baseUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_baseUrl)},
    {SIP_MLNAME_CAST(sipName_contextObject), meth_QQmlContext_contextObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_contextObject)},
    {SIP_MLNAME_CAST(sipName_contextProperty), meth_QQmlContext_contextProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_contextProperty)},
    {SIP_MLNAME_CAST(sipName_engine), meth_QQmlContext_engine, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_engine)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QQmlContext_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_isValid)},
    {SIP_MLNAME_CAST(sipName_nameForObject), meth_QQmlContext_nameForObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_nameForObject)},
    {SIP_MLNAME_CAST(sipName_parentContext), meth_QQmlContext_parentContext, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_parentContext)},
    {SIP_MLNAME_CAST(sipName_resolvedUrl), meth_QQmlContext_resolvedUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_resolvedUrl)},
    {SIP_MLNAME_CAST(sipName_setBaseUrl), meth_QQmlContext_setBaseUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_setBaseUrl)},
    {SIP_MLNAME_CAST(sipName_setContextObject), meth_QQmlContext_setContextObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_setContextObject)},
    {SIP_MLNAME_CAST(sipName_setContextProperty), meth_QQmlContext_setContextProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_setContextProperty)}
};

PyDoc_STRVAR(doc_QQmlContext, "\1QQmlContext(QQmlEngine, parent: QObject = None)\n"
    "QQmlContext(QQmlContext, parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlContext = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlContext,
        {0}
    },
    {
        sipNameNr_QQmlContext,
        {0, 0, 1},
        11, methods_QQmlContext,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlContext,
    -1,
    -1,
    supers_QQmlContext,
    0,
    init_type_QQmlContext,
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
    dealloc_QQmlContext,
    0,
    0,
    0,
    release_QQmlContext,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQmlContext::staticMetaObject,
    0,
    0,
    0
};
