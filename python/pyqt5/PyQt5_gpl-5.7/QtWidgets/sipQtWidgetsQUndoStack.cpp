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

#include "sipAPIQtWidgets.h"

#line 50 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qundostack.sip"
#include <qundostack.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qundostack.sip"
#include <qundostack.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qaction.sip"
#include <qaction.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"


class sipQUndoStack : public QUndoStack
{
public:
    sipQUndoStack(QObject*);
    virtual ~sipQUndoStack();

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
    sipQUndoStack(const sipQUndoStack &);
    sipQUndoStack &operator = (const sipQUndoStack &);

    char sipPyMethods[7];
};

sipQUndoStack::sipQUndoStack(QObject*a0): QUndoStack(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQUndoStack::~sipQUndoStack()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQUndoStack::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QUndoStack);

    return QUndoStack::metaObject();
}

int sipQUndoStack::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QUndoStack::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QUndoStack,_c,_id,_a);

    return _id;
}

void *sipQUndoStack::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QUndoStack, _clname, &sipCpp) ? sipCpp : QUndoStack::qt_metacast(_clname));
}

void sipQUndoStack::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QUndoStack::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQUndoStack::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QUndoStack::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQUndoStack::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QUndoStack::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQUndoStack::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QUndoStack::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQUndoStack::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QUndoStack::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQUndoStack::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QUndoStack::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQUndoStack::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QUndoStack::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QUndoStack_clear, "clear(self)");

extern "C" {static PyObject *meth_QUndoStack_clear(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_clear, doc_QUndoStack_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_push, "push(self, QUndoCommand)");

extern "C" {static PyObject *meth_QUndoStack_push(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_push(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoCommand* a0;
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QUndoStack, &sipCpp, sipType_QUndoCommand, &a0))
        {
            sipCpp->push(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_push, doc_QUndoStack_push);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_canUndo, "canUndo(self) -> bool");

extern "C" {static PyObject *meth_QUndoStack_canUndo(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_canUndo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canUndo();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_canUndo, doc_QUndoStack_canUndo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_canRedo, "canRedo(self) -> bool");

extern "C" {static PyObject *meth_QUndoStack_canRedo(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_canRedo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canRedo();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_canRedo, doc_QUndoStack_canRedo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_undoText, "undoText(self) -> str");

extern "C" {static PyObject *meth_QUndoStack_undoText(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_undoText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->undoText());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_undoText, doc_QUndoStack_undoText);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_redoText, "redoText(self) -> str");

extern "C" {static PyObject *meth_QUndoStack_redoText(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_redoText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->redoText());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_redoText, doc_QUndoStack_redoText);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_count, "count(self) -> int");

extern "C" {static PyObject *meth_QUndoStack_count(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_count, doc_QUndoStack_count);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_index, "index(self) -> int");

extern "C" {static PyObject *meth_QUndoStack_index(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_index(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->index();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_index, doc_QUndoStack_index);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_text, "text(self, int) -> str");

extern "C" {static PyObject *meth_QUndoStack_text(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QUndoStack, &sipCpp, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_text, doc_QUndoStack_text);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_createUndoAction, "createUndoAction(self, QObject, prefix: str = '') -> QAction");

extern "C" {static PyObject *meth_QUndoStack_createUndoAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_createUndoAction(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        sipWrapper *sipOwner = 0;
        const QUndoStack *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJH|J1", &sipSelf, sipType_QUndoStack, &sipCpp, sipType_QObject, &a0, &sipOwner, sipType_QString,&a1, &a1State))
        {
            QAction*sipRes;

            sipRes = sipCpp->createUndoAction(a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAction,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_createUndoAction, doc_QUndoStack_createUndoAction);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_createRedoAction, "createRedoAction(self, QObject, prefix: str = '') -> QAction");

extern "C" {static PyObject *meth_QUndoStack_createRedoAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_createRedoAction(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        sipWrapper *sipOwner = 0;
        const QUndoStack *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJH|J1", &sipSelf, sipType_QUndoStack, &sipCpp, sipType_QObject, &a0, &sipOwner, sipType_QString,&a1, &a1State))
        {
            QAction*sipRes;

            sipRes = sipCpp->createRedoAction(a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAction,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_createRedoAction, doc_QUndoStack_createRedoAction);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_isActive, "isActive(self) -> bool");

extern "C" {static PyObject *meth_QUndoStack_isActive(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_isActive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isActive();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_isActive, doc_QUndoStack_isActive);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_isClean, "isClean(self) -> bool");

extern "C" {static PyObject *meth_QUndoStack_isClean(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_isClean(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isClean();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_isClean, doc_QUndoStack_isClean);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_cleanIndex, "cleanIndex(self) -> int");

extern "C" {static PyObject *meth_QUndoStack_cleanIndex(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_cleanIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->cleanIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_cleanIndex, doc_QUndoStack_cleanIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_beginMacro, "beginMacro(self, str)");

extern "C" {static PyObject *meth_QUndoStack_beginMacro(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_beginMacro(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUndoStack, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->beginMacro(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_beginMacro, doc_QUndoStack_beginMacro);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_endMacro, "endMacro(self)");

extern "C" {static PyObject *meth_QUndoStack_endMacro(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_endMacro(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            sipCpp->endMacro();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_endMacro, doc_QUndoStack_endMacro);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_redo, "redo(self)");

extern "C" {static PyObject *meth_QUndoStack_redo(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_redo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            sipCpp->redo();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_redo, doc_QUndoStack_redo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_setActive, "setActive(self, active: bool = True)");

extern "C" {static PyObject *meth_QUndoStack_setActive(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_setActive(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0 = 1;
        QUndoStack *sipCpp;

        static const char *sipKwdList[] = {
            sipName_active,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|b", &sipSelf, sipType_QUndoStack, &sipCpp, &a0))
        {
            sipCpp->setActive(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_setActive, doc_QUndoStack_setActive);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_setClean, "setClean(self)");

extern "C" {static PyObject *meth_QUndoStack_setClean(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_setClean(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            sipCpp->setClean();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_setClean, doc_QUndoStack_setClean);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_setIndex, "setIndex(self, int)");

extern "C" {static PyObject *meth_QUndoStack_setIndex(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_setIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QUndoStack, &sipCpp, &a0))
        {
            sipCpp->setIndex(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_setIndex, doc_QUndoStack_setIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_undo, "undo(self)");

extern "C" {static PyObject *meth_QUndoStack_undo(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_undo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            sipCpp->undo();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_undo, doc_QUndoStack_undo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_setUndoLimit, "setUndoLimit(self, int)");

extern "C" {static PyObject *meth_QUndoStack_setUndoLimit(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_setUndoLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QUndoStack, &sipCpp, &a0))
        {
            sipCpp->setUndoLimit(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_setUndoLimit, doc_QUndoStack_setUndoLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_undoLimit, "undoLimit(self) -> int");

extern "C" {static PyObject *meth_QUndoStack_undoLimit(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_undoLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoStack, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->undoLimit();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_undoLimit, doc_QUndoStack_undoLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoStack_command, "command(self, int) -> QUndoCommand");

extern "C" {static PyObject *meth_QUndoStack_command(PyObject *, PyObject *);}
static PyObject *meth_QUndoStack_command(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QUndoStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QUndoStack, &sipCpp, &a0))
        {
            const QUndoCommand*sipRes;

            sipRes = sipCpp->command(a0);

            return sipConvertFromType(const_cast<QUndoCommand *>(sipRes),sipType_QUndoCommand,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoStack, sipName_command, doc_QUndoStack_command);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QUndoStack___len__(PyObject *);}
static SIP_SSIZE_T slot_QUndoStack___len__(PyObject *sipSelf)
{
    QUndoStack *sipCpp = reinterpret_cast<QUndoStack *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUndoStack));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 988 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQUndoStack.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUndoStack(void *, int);}
static void release_QUndoStack(void *sipCppV,int)
{
    QUndoStack *sipCpp = reinterpret_cast<QUndoStack *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QUndoStack(sipSimpleWrapper *);}
static void dealloc_QUndoStack(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQUndoStack *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QUndoStack(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QUndoStack(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUndoStack(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQUndoStack *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQUndoStack(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QUndoStack[] = {{165, 0, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QUndoStack[] = {
    {(void *)slot_QUndoStack___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QUndoStack[] = {
    {SIP_MLNAME_CAST(sipName_beginMacro), meth_QUndoStack_beginMacro, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_beginMacro)},
    {SIP_MLNAME_CAST(sipName_canRedo), meth_QUndoStack_canRedo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_canRedo)},
    {SIP_MLNAME_CAST(sipName_canUndo), meth_QUndoStack_canUndo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_canUndo)},
    {SIP_MLNAME_CAST(sipName_cleanIndex), meth_QUndoStack_cleanIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_cleanIndex)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QUndoStack_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_clear)},
    {SIP_MLNAME_CAST(sipName_command), meth_QUndoStack_command, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_command)},
    {SIP_MLNAME_CAST(sipName_count), meth_QUndoStack_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_count)},
    {SIP_MLNAME_CAST(sipName_createRedoAction), (PyCFunction)meth_QUndoStack_createRedoAction, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUndoStack_createRedoAction)},
    {SIP_MLNAME_CAST(sipName_createUndoAction), (PyCFunction)meth_QUndoStack_createUndoAction, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUndoStack_createUndoAction)},
    {SIP_MLNAME_CAST(sipName_endMacro), meth_QUndoStack_endMacro, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_endMacro)},
    {SIP_MLNAME_CAST(sipName_index), meth_QUndoStack_index, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_index)},
    {SIP_MLNAME_CAST(sipName_isActive), meth_QUndoStack_isActive, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_isActive)},
    {SIP_MLNAME_CAST(sipName_isClean), meth_QUndoStack_isClean, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_isClean)},
    {SIP_MLNAME_CAST(sipName_push), meth_QUndoStack_push, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_push)},
    {SIP_MLNAME_CAST(sipName_redo), meth_QUndoStack_redo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_redo)},
    {SIP_MLNAME_CAST(sipName_redoText), meth_QUndoStack_redoText, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_redoText)},
    {SIP_MLNAME_CAST(sipName_setActive), (PyCFunction)meth_QUndoStack_setActive, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUndoStack_setActive)},
    {SIP_MLNAME_CAST(sipName_setClean), meth_QUndoStack_setClean, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_setClean)},
    {SIP_MLNAME_CAST(sipName_setIndex), meth_QUndoStack_setIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_setIndex)},
    {SIP_MLNAME_CAST(sipName_setUndoLimit), meth_QUndoStack_setUndoLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_setUndoLimit)},
    {SIP_MLNAME_CAST(sipName_text), meth_QUndoStack_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_text)},
    {SIP_MLNAME_CAST(sipName_undo), meth_QUndoStack_undo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_undo)},
    {SIP_MLNAME_CAST(sipName_undoLimit), meth_QUndoStack_undoLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_undoLimit)},
    {SIP_MLNAME_CAST(sipName_undoText), meth_QUndoStack_undoText, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoStack_undoText)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QUndoStack[] = {
    {"undoTextChanged(QString)", "\1undoTextChanged(self, str)", 0, 0},
    {"redoTextChanged(QString)", "\1redoTextChanged(self, str)", 0, 0},
    {"indexChanged(int)", "\1indexChanged(self, int)", 0, 0},
    {"cleanChanged(bool)", "\1cleanChanged(self, bool)", 0, 0},
    {"canUndoChanged(bool)", "\1canUndoChanged(self, bool)", 0, 0},
    {"canRedoChanged(bool)", "\1canRedoChanged(self, bool)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QUndoStack, "\1QUndoStack(parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QUndoStack = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QUndoStack,
        {0}
    },
    {
        sipNameNr_QUndoStack,
        {0, 0, 1},
        24, methods_QUndoStack,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUndoStack,
    -1,
    -1,
    supers_QUndoStack,
    slots_QUndoStack,
    init_type_QUndoStack,
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
    dealloc_QUndoStack,
    0,
    0,
    0,
    release_QUndoStack,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QUndoStack::staticMetaObject,
    0,
    signals_QUndoStack,
    0
};
