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

#include "sipAPIQtDesigner.h"

#line 24 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignermembersheetextension.sip"
#include <qpydesignermembersheetextension.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtDesigner/sipQtDesignerQPyDesignerMemberSheetExtension.cpp"


class sipQPyDesignerMemberSheetExtension : public QPyDesignerMemberSheetExtension
{
public:
    sipQPyDesignerMemberSheetExtension(QObject*);
    virtual ~sipQPyDesignerMemberSheetExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList<QByteArray> parameterNames(int) const;
    QList<QByteArray> parameterTypes(int) const;
    QString signature(int) const;
    QString declaredInClass(int) const;
    bool inheritedFromWidget(int) const;
    bool isSlot(int) const;
    bool isSignal(int) const;
    void setVisible(int,bool);
    bool isVisible(int) const;
    void setMemberGroup(int,const QString&);
    QString memberGroup(int) const;
    QString memberName(int) const;
    int indexOf(const QString&) const;
    int count() const;
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
    sipQPyDesignerMemberSheetExtension(const sipQPyDesignerMemberSheetExtension &);
    sipQPyDesignerMemberSheetExtension &operator = (const sipQPyDesignerMemberSheetExtension &);

    char sipPyMethods[21];
};

sipQPyDesignerMemberSheetExtension::sipQPyDesignerMemberSheetExtension(QObject*a0): QPyDesignerMemberSheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerMemberSheetExtension::~sipQPyDesignerMemberSheetExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerMemberSheetExtension::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerMemberSheetExtension);

    return QPyDesignerMemberSheetExtension::metaObject();
}

int sipQPyDesignerMemberSheetExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerMemberSheetExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerMemberSheetExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerMemberSheetExtension::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerMemberSheetExtension, _clname, &sipCpp) ? sipCpp : QPyDesignerMemberSheetExtension::qt_metacast(_clname));
}

QList<QByteArray> sipQPyDesignerMemberSheetExtension::parameterNames(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_parameterNames);

    if (!sipMeth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_6(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QList<QByteArray> sipQPyDesignerMemberSheetExtension::parameterTypes(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_parameterTypes);

    if (!sipMeth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_6(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQPyDesignerMemberSheetExtension::signature(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_signature);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_85)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_85)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[85]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQPyDesignerMemberSheetExtension::declaredInClass(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_declaredInClass);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_85)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_85)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[85]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerMemberSheetExtension::inheritedFromWidget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_inheritedFromWidget);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerMemberSheetExtension::isSlot(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_isSlot);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerMemberSheetExtension::isSignal(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_isSignal);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerMemberSheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_setVisible);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerMemberSheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_isVisible);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerMemberSheetExtension::setMemberGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_setMemberGroup);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QString&);

    sipVH_QtDesigner_5(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QString sipQPyDesignerMemberSheetExtension::memberGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_memberGroup);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_85)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_85)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[85]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQPyDesignerMemberSheetExtension::memberName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_memberName);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_85)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_85)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[85]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQPyDesignerMemberSheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_indexOf);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtWidgets_86)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtWidgets_86)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[86]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQPyDesignerMemberSheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_count);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPyDesignerMemberSheetExtension::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDesignerMemberSheetExtension::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerMemberSheetExtension::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDesignerMemberSheetExtension::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerMemberSheetExtension::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDesignerMemberSheetExtension::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerMemberSheetExtension::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDesignerMemberSheetExtension::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerMemberSheetExtension::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDesignerMemberSheetExtension::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerMemberSheetExtension::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDesignerMemberSheetExtension::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerMemberSheetExtension::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[20],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDesignerMemberSheetExtension::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its multiple inheritance hierarchy. */
extern "C" {static void *cast_QPyDesignerMemberSheetExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerMemberSheetExtension(void *sipCppV, const sipTypeDef *targetType)
{
    QPyDesignerMemberSheetExtension *sipCpp = reinterpret_cast<QPyDesignerMemberSheetExtension *>(sipCppV);

    if (targetType == sipType_QDesignerMemberSheetExtension)
        return static_cast<QDesignerMemberSheetExtension *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerMemberSheetExtension(void *, int);}
static void release_QPyDesignerMemberSheetExtension(void *sipCppV,int)
{
    QPyDesignerMemberSheetExtension *sipCpp = reinterpret_cast<QPyDesignerMemberSheetExtension *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPyDesignerMemberSheetExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerMemberSheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerMemberSheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDesignerMemberSheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerMemberSheetExtension *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQPyDesignerMemberSheetExtension(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerMemberSheetExtension[] = {{142, 0, 0}, {17, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerMemberSheetExtension, "\1QPyDesignerMemberSheetExtension(QObject)");


pyqt5ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerMemberSheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerMemberSheetExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerMemberSheetExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerMemberSheetExtension,
    -1,
    -1,
    supers_QPyDesignerMemberSheetExtension,
    0,
    init_type_QPyDesignerMemberSheetExtension,
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
    dealloc_QPyDesignerMemberSheetExtension,
    0,
    0,
    0,
    release_QPyDesignerMemberSheetExtension,
    cast_QPyDesignerMemberSheetExtension,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDesignerMemberSheetExtension::staticMetaObject,
    0,
    0,
    0
};
