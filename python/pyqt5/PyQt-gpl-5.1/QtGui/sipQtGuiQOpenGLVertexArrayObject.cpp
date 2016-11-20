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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qopenglvertexarrayobject.sip"
#include <qopenglvertexarrayobject.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLVertexArrayObject.cpp"


class sipQOpenGLVertexArrayObject : public QOpenGLVertexArrayObject
{
public:
    sipQOpenGLVertexArrayObject(QObject*);
    virtual ~sipQOpenGLVertexArrayObject();

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
    sipQOpenGLVertexArrayObject(const sipQOpenGLVertexArrayObject &);
    sipQOpenGLVertexArrayObject &operator = (const sipQOpenGLVertexArrayObject &);

    char sipPyMethods[7];
};

sipQOpenGLVertexArrayObject::sipQOpenGLVertexArrayObject(QObject*a0): QOpenGLVertexArrayObject(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLVertexArrayObject::~sipQOpenGLVertexArrayObject()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQOpenGLVertexArrayObject::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QOpenGLVertexArrayObject);

    return QOpenGLVertexArrayObject::metaObject();
}

int sipQOpenGLVertexArrayObject::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QOpenGLVertexArrayObject::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QOpenGLVertexArrayObject,_c,_id,_a);

    return _id;
}

void *sipQOpenGLVertexArrayObject::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QOpenGLVertexArrayObject, _clname, &sipCpp) ? sipCpp : QOpenGLVertexArrayObject::qt_metacast(_clname));
}

void sipQOpenGLVertexArrayObject::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QOpenGLVertexArrayObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLVertexArrayObject::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QOpenGLVertexArrayObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLVertexArrayObject::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QOpenGLVertexArrayObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLVertexArrayObject::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QOpenGLVertexArrayObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtGui_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLVertexArrayObject::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QOpenGLVertexArrayObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQOpenGLVertexArrayObject::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QOpenGLVertexArrayObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtGui_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQOpenGLVertexArrayObject::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QOpenGLVertexArrayObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_create, "create(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_create(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLVertexArrayObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->create();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVertexArrayObject, sipName_create, doc_QOpenGLVertexArrayObject_create);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_destroy, "destroy(self)");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_destroy(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLVertexArrayObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject, &sipCpp))
        {
            sipCpp->destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVertexArrayObject, sipName_destroy, doc_QOpenGLVertexArrayObject_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_isCreated, "isCreated(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLVertexArrayObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVertexArrayObject, sipName_isCreated, doc_QOpenGLVertexArrayObject_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_objectId, "objectId(self) -> int");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_objectId(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_objectId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLVertexArrayObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject, &sipCpp))
        {
            GLuint sipRes;

            sipRes = sipCpp->objectId();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVertexArrayObject, sipName_objectId, doc_QOpenGLVertexArrayObject_objectId);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_bind, "bind(self)");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_bind(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLVertexArrayObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject, &sipCpp))
        {
            sipCpp->bind();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVertexArrayObject, sipName_bind, doc_QOpenGLVertexArrayObject_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_release, "release(self)");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_release(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLVertexArrayObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject, &sipCpp))
        {
            sipCpp->release();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVertexArrayObject, sipName_release, doc_QOpenGLVertexArrayObject_release);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLVertexArrayObject(void *, int);}
static void release_QOpenGLVertexArrayObject(void *sipCppV,int)
{
    QOpenGLVertexArrayObject *sipCpp = reinterpret_cast<QOpenGLVertexArrayObject *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QOpenGLVertexArrayObject(sipSimpleWrapper *);}
static void dealloc_QOpenGLVertexArrayObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQOpenGLVertexArrayObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLVertexArrayObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QOpenGLVertexArrayObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLVertexArrayObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQOpenGLVertexArrayObject *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQOpenGLVertexArrayObject(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOpenGLVertexArrayObject[] = {{142, 0, 1}};


static PyMethodDef methods_QOpenGLVertexArrayObject[] = {
    {SIP_MLNAME_CAST(sipName_bind), meth_QOpenGLVertexArrayObject_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_bind)},
    {SIP_MLNAME_CAST(sipName_create), meth_QOpenGLVertexArrayObject_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_create)},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QOpenGLVertexArrayObject_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_destroy)},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QOpenGLVertexArrayObject_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_isCreated)},
    {SIP_MLNAME_CAST(sipName_objectId), meth_QOpenGLVertexArrayObject_objectId, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_objectId)},
    {SIP_MLNAME_CAST(sipName_release), meth_QOpenGLVertexArrayObject_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_release)}
};

PyDoc_STRVAR(doc_QOpenGLVertexArrayObject, "\1QOpenGLVertexArrayObject(parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLVertexArrayObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLVertexArrayObject,
        {0}
    },
    {
        sipNameNr_QOpenGLVertexArrayObject,
        {0, 0, 1},
        6, methods_QOpenGLVertexArrayObject,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLVertexArrayObject,
    -1,
    -1,
    supers_QOpenGLVertexArrayObject,
    0,
    init_type_QOpenGLVertexArrayObject,
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
    dealloc_QOpenGLVertexArrayObject,
    0,
    0,
    0,
    release_QOpenGLVertexArrayObject,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QOpenGLVertexArrayObject::staticMetaObject,
    0,
    0,
    0
};
