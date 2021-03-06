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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQml/qqmlpropertymap.sip"
#include <qqmlpropertymap.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"


class sipQQmlPropertyMap : public QQmlPropertyMap
{
public:
    sipQQmlPropertyMap(QObject*);
    virtual ~sipQQmlPropertyMap();

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
    QVariant updateValue(const QString&,const QVariant&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlPropertyMap(const sipQQmlPropertyMap &);
    sipQQmlPropertyMap &operator = (const sipQQmlPropertyMap &);

    char sipPyMethods[8];
};

sipQQmlPropertyMap::sipQQmlPropertyMap(QObject*a0): QQmlPropertyMap(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlPropertyMap::~sipQQmlPropertyMap()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQQmlPropertyMap::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQml_qt_metaobject(sipPySelf,sipType_QQmlPropertyMap);

    return QQmlPropertyMap::metaObject();
}

int sipQQmlPropertyMap::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QQmlPropertyMap::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQml_qt_metacall(sipPySelf,sipType_QQmlPropertyMap,_c,_id,_a);

    return _id;
}

void *sipQQmlPropertyMap::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQml_qt_metacast(sipPySelf, sipType_QQmlPropertyMap, _clname, &sipCpp) ? sipCpp : QQmlPropertyMap::qt_metacast(_clname));
}

void sipQQmlPropertyMap::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QQmlPropertyMap::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlPropertyMap::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QQmlPropertyMap::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlPropertyMap::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QQmlPropertyMap::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQml_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlPropertyMap::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QQmlPropertyMap::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQml_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlPropertyMap::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QQmlPropertyMap::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQml_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQQmlPropertyMap::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QQmlPropertyMap::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQml_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQQmlPropertyMap::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QQmlPropertyMap::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQml_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QVariant sipQQmlPropertyMap::updateValue(const QString& a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_updateValue);

    if (!sipMeth)
        return QQmlPropertyMap::updateValue(a0,a1);

    extern QVariant sipVH_QtQml_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QVariant&);

    return sipVH_QtQml_1(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QQmlPropertyMap_value, "value(self, str) -> Any");

extern "C" {static PyObject *meth_QQmlPropertyMap_value(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlPropertyMap, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->value(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_value, doc_QQmlPropertyMap_value);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_insert, "insert(self, str, Any)");

extern "C" {static PyObject *meth_QQmlPropertyMap_insert(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QQmlPropertyMap, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->insert(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_insert, doc_QQmlPropertyMap_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_clear, "clear(self, str)");

extern "C" {static PyObject *meth_QQmlPropertyMap_clear(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlPropertyMap, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->clear(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_clear, doc_QQmlPropertyMap_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_keys, "keys(self) -> List[str]");

extern "C" {static PyObject *meth_QQmlPropertyMap_keys(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_keys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlPropertyMap, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->keys());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_keys, doc_QQmlPropertyMap_keys);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_count, "count(self) -> int");

extern "C" {static PyObject *meth_QQmlPropertyMap_count(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlPropertyMap, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_count, doc_QQmlPropertyMap_count);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_size, "size(self) -> int");

extern "C" {static PyObject *meth_QQmlPropertyMap_size(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlPropertyMap, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->size();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_size, doc_QQmlPropertyMap_size);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QQmlPropertyMap_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlPropertyMap, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_isEmpty, doc_QQmlPropertyMap_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_contains, "contains(self, str) -> bool");

extern "C" {static PyObject *meth_QQmlPropertyMap_contains(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlPropertyMap, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_contains, doc_QQmlPropertyMap_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlPropertyMap_updateValue, "updateValue(self, str, Any) -> Any");

extern "C" {static PyObject *meth_QQmlPropertyMap_updateValue(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyMap_updateValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QQmlPropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1J1", &sipSelf, sipType_QQmlPropertyMap, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            QVariant*sipRes;

            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QQmlPropertyMap::updateValue(*a0,*a1) : sipCpp->updateValue(*a0,*a1)));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName_updateValue, doc_QQmlPropertyMap_updateValue);

    return NULL;
}


extern "C" {static PyObject *slot_QQmlPropertyMap___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QQmlPropertyMap___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QQmlPropertyMap *sipCpp = reinterpret_cast<QQmlPropertyMap *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlPropertyMap));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant((*sipCpp)[*a0]);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyMap, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static SIP_SSIZE_T slot_QQmlPropertyMap___len__(PyObject *);}
static SIP_SSIZE_T slot_QQmlPropertyMap___len__(PyObject *sipSelf)
{
    QQmlPropertyMap *sipCpp = reinterpret_cast<QQmlPropertyMap *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlPropertyMap));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->size();
#line 608 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQml/sipQtQmlQQmlPropertyMap.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlPropertyMap(void *, int);}
static void release_QQmlPropertyMap(void *sipCppV,int)
{
    QQmlPropertyMap *sipCpp = reinterpret_cast<QQmlPropertyMap *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQmlPropertyMap(sipSimpleWrapper *);}
static void dealloc_QQmlPropertyMap(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlPropertyMap *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlPropertyMap(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlPropertyMap(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlPropertyMap(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQQmlPropertyMap *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQQmlPropertyMap(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQmlPropertyMap[] = {{165, 0, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QQmlPropertyMap[] = {
    {(void *)slot_QQmlPropertyMap___getitem__, getitem_slot},
    {(void *)slot_QQmlPropertyMap___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QQmlPropertyMap[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QQmlPropertyMap_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_clear)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QQmlPropertyMap_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_contains)},
    {SIP_MLNAME_CAST(sipName_count), meth_QQmlPropertyMap_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_count)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QQmlPropertyMap_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_insert)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QQmlPropertyMap_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_isEmpty)},
    {SIP_MLNAME_CAST(sipName_keys), meth_QQmlPropertyMap_keys, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_keys)},
    {SIP_MLNAME_CAST(sipName_size), meth_QQmlPropertyMap_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_size)},
    {SIP_MLNAME_CAST(sipName_updateValue), meth_QQmlPropertyMap_updateValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_updateValue)},
    {SIP_MLNAME_CAST(sipName_value), meth_QQmlPropertyMap_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyMap_value)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QQmlPropertyMap[] = {
    {"valueChanged(QString,QVariant)", "\1valueChanged(self, str, Any)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QQmlPropertyMap, "\1QQmlPropertyMap(parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlPropertyMap = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlPropertyMap,
        {0}
    },
    {
        sipNameNr_QQmlPropertyMap,
        {0, 0, 1},
        9, methods_QQmlPropertyMap,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlPropertyMap,
    -1,
    -1,
    supers_QQmlPropertyMap,
    slots_QQmlPropertyMap,
    init_type_QQmlPropertyMap,
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
    dealloc_QQmlPropertyMap,
    0,
    0,
    0,
    release_QQmlPropertyMap,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQmlPropertyMap::staticMetaObject,
    0,
    signals_QQmlPropertyMap,
    0
};
