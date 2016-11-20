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

#include "sipAPIQtGui.h"

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qopengltimerquery.sip"
#include <qopengltimerquery.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLTimerQuery.cpp"


class sipQOpenGLTimerQuery : public QOpenGLTimerQuery
{
public:
    sipQOpenGLTimerQuery(QObject*);
    virtual ~sipQOpenGLTimerQuery();

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
    sipQOpenGLTimerQuery(const sipQOpenGLTimerQuery &);
    sipQOpenGLTimerQuery &operator = (const sipQOpenGLTimerQuery &);

    char sipPyMethods[7];
};

sipQOpenGLTimerQuery::sipQOpenGLTimerQuery(QObject*a0): QOpenGLTimerQuery(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLTimerQuery::~sipQOpenGLTimerQuery()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQOpenGLTimerQuery::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QOpenGLTimerQuery);

    return QOpenGLTimerQuery::metaObject();
}

int sipQOpenGLTimerQuery::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QOpenGLTimerQuery::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QOpenGLTimerQuery,_c,_id,_a);

    return _id;
}

void *sipQOpenGLTimerQuery::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QOpenGLTimerQuery, _clname, &sipCpp) ? sipCpp : QOpenGLTimerQuery::qt_metacast(_clname));
}

void sipQOpenGLTimerQuery::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QOpenGLTimerQuery::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QOpenGLTimerQuery::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QOpenGLTimerQuery::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QOpenGLTimerQuery::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtGui_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QOpenGLTimerQuery::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQOpenGLTimerQuery::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QOpenGLTimerQuery::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtGui_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQOpenGLTimerQuery::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QOpenGLTimerQuery::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_create, "create(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_create(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->create();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_create, doc_QOpenGLTimerQuery_create);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_destroy, "destroy(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_destroy(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_destroy, doc_QOpenGLTimerQuery_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_isCreated, "isCreated(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_isCreated, doc_QOpenGLTimerQuery_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_objectId, "objectId(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_objectId(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_objectId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            GLuint sipRes;

            sipRes = sipCpp->objectId();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_objectId, doc_QOpenGLTimerQuery_objectId);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_begin, "begin(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_begin(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->begin();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_begin, doc_QOpenGLTimerQuery_begin);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_end, "end(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_end(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->end();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_end, doc_QOpenGLTimerQuery_end);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_waitForTimestamp, "waitForTimestamp(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_waitForTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_waitForTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            GLuint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForTimestamp();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_waitForTimestamp, doc_QOpenGLTimerQuery_waitForTimestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_recordTimestamp, "recordTimestamp(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_recordTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_recordTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->recordTimestamp();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_recordTimestamp, doc_QOpenGLTimerQuery_recordTimestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_isResultAvailable, "isResultAvailable(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_isResultAvailable(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_isResultAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isResultAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_isResultAvailable, doc_QOpenGLTimerQuery_isResultAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_waitForResult, "waitForResult(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_waitForResult(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_waitForResult(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            GLuint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForResult();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_waitForResult, doc_QOpenGLTimerQuery_waitForResult);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLTimerQuery(void *, int);}
static void release_QOpenGLTimerQuery(void *sipCppV,int)
{
    QOpenGLTimerQuery *sipCpp = reinterpret_cast<QOpenGLTimerQuery *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QOpenGLTimerQuery(sipSimpleWrapper *);}
static void dealloc_QOpenGLTimerQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQOpenGLTimerQuery *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLTimerQuery(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QOpenGLTimerQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLTimerQuery(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQOpenGLTimerQuery *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQOpenGLTimerQuery(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOpenGLTimerQuery[] = {{142, 0, 1}};


static PyMethodDef methods_QOpenGLTimerQuery[] = {
    {SIP_MLNAME_CAST(sipName_begin), meth_QOpenGLTimerQuery_begin, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_begin)},
    {SIP_MLNAME_CAST(sipName_create), meth_QOpenGLTimerQuery_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_create)},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QOpenGLTimerQuery_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_destroy)},
    {SIP_MLNAME_CAST(sipName_end), meth_QOpenGLTimerQuery_end, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_end)},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QOpenGLTimerQuery_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_isCreated)},
    {SIP_MLNAME_CAST(sipName_isResultAvailable), meth_QOpenGLTimerQuery_isResultAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_isResultAvailable)},
    {SIP_MLNAME_CAST(sipName_objectId), meth_QOpenGLTimerQuery_objectId, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_objectId)},
    {SIP_MLNAME_CAST(sipName_recordTimestamp), meth_QOpenGLTimerQuery_recordTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_recordTimestamp)},
    {SIP_MLNAME_CAST(sipName_waitForResult), meth_QOpenGLTimerQuery_waitForResult, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_waitForResult)},
    {SIP_MLNAME_CAST(sipName_waitForTimestamp), meth_QOpenGLTimerQuery_waitForTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_waitForTimestamp)}
};

PyDoc_STRVAR(doc_QOpenGLTimerQuery, "\1QOpenGLTimerQuery(parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLTimerQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLTimerQuery,
        {0}
    },
    {
        sipNameNr_QOpenGLTimerQuery,
        {0, 0, 1},
        10, methods_QOpenGLTimerQuery,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLTimerQuery,
    -1,
    -1,
    supers_QOpenGLTimerQuery,
    0,
    init_type_QOpenGLTimerQuery,
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
    dealloc_QOpenGLTimerQuery,
    0,
    0,
    0,
    release_QOpenGLTimerQuery,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QOpenGLTimerQuery::staticMetaObject,
    0,
    0,
    0
};
