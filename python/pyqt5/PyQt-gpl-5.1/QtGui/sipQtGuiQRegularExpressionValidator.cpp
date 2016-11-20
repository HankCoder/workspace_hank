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

#line 129 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qvalidator.sip"
#include <qvalidator.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qvalidator.sip"
#include <qvalidator.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQRegularExpressionValidator.cpp"


class sipQRegularExpressionValidator : public QRegularExpressionValidator
{
public:
    sipQRegularExpressionValidator(QObject*);
    sipQRegularExpressionValidator(const QRegularExpression&,QObject*);
    virtual ~sipQRegularExpressionValidator();

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
    void fixup(QString&) const;
    QValidator::State validate(QString&,int&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQRegularExpressionValidator(const sipQRegularExpressionValidator &);
    sipQRegularExpressionValidator &operator = (const sipQRegularExpressionValidator &);

    char sipPyMethods[9];
};

sipQRegularExpressionValidator::sipQRegularExpressionValidator(QObject*a0): QRegularExpressionValidator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRegularExpressionValidator::sipQRegularExpressionValidator(const QRegularExpression& a0,QObject*a1): QRegularExpressionValidator(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRegularExpressionValidator::~sipQRegularExpressionValidator()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQRegularExpressionValidator::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QRegularExpressionValidator);

    return QRegularExpressionValidator::metaObject();
}

int sipQRegularExpressionValidator::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QRegularExpressionValidator::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QRegularExpressionValidator,_c,_id,_a);

    return _id;
}

void *sipQRegularExpressionValidator::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QRegularExpressionValidator, _clname, &sipCpp) ? sipCpp : QRegularExpressionValidator::qt_metacast(_clname));
}

void sipQRegularExpressionValidator::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QRegularExpressionValidator::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQRegularExpressionValidator::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QRegularExpressionValidator::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQRegularExpressionValidator::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QRegularExpressionValidator::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQRegularExpressionValidator::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QRegularExpressionValidator::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtGui_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQRegularExpressionValidator::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QRegularExpressionValidator::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQRegularExpressionValidator::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QRegularExpressionValidator::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtGui_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQRegularExpressionValidator::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QRegularExpressionValidator::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQRegularExpressionValidator::fixup(QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_fixup);

    if (!sipMeth)
    {
        QRegularExpressionValidator::fixup(a0);
        return;
    }

    extern void sipVH_QtGui_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QString&);

    sipVH_QtGui_18(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QValidator::State sipQRegularExpressionValidator::validate(QString& a0,int& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_validate);

    if (!sipMeth)
        return QRegularExpressionValidator::validate(a0,a1);

    extern QValidator::State sipVH_QtGui_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QString&,int&);

    return sipVH_QtGui_15(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QRegularExpressionValidator_validate, "validate(self, object, int) -> Tuple[QValidator.State, object, int]");

extern "C" {static PyObject *meth_QRegularExpressionValidator_validate(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionValidator_validate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QString* a0;
        int a0State = 0;
        int a1;
        const QRegularExpressionValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QRegularExpressionValidator, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            QValidator::State sipRes;
            PyObject *sipResObj;

            sipRes = (sipSelfWasArg ? sipCpp->QRegularExpressionValidator::validate(*a0,a1) : sipCpp->validate(*a0,a1));

            sipResObj = sipBuildResult(0,"(FDi)",sipRes,sipType_QValidator_State,a0,sipType_QString,NULL,a1);
            sipReleaseType(a0,sipType_QString,a0State);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionValidator, sipName_validate, doc_QRegularExpressionValidator_validate);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionValidator_regularExpression, "regularExpression(self) -> QRegularExpression");

extern "C" {static PyObject *meth_QRegularExpressionValidator_regularExpression(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionValidator_regularExpression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionValidator, &sipCpp))
        {
            QRegularExpression*sipRes;

            sipRes = new QRegularExpression(sipCpp->regularExpression());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionValidator, sipName_regularExpression, doc_QRegularExpressionValidator_regularExpression);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionValidator_setRegularExpression, "setRegularExpression(self, QRegularExpression)");

extern "C" {static PyObject *meth_QRegularExpressionValidator_setRegularExpression(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionValidator_setRegularExpression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpression* a0;
        QRegularExpressionValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegularExpressionValidator, &sipCpp, sipType_QRegularExpression, &a0))
        {
            sipCpp->setRegularExpression(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionValidator, sipName_setRegularExpression, doc_QRegularExpressionValidator_setRegularExpression);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpressionValidator(void *, int);}
static void release_QRegularExpressionValidator(void *sipCppV,int)
{
    QRegularExpressionValidator *sipCpp = reinterpret_cast<QRegularExpressionValidator *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QRegularExpressionValidator(sipSimpleWrapper *);}
static void dealloc_QRegularExpressionValidator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQRegularExpressionValidator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QRegularExpressionValidator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QRegularExpressionValidator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpressionValidator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQRegularExpressionValidator *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQRegularExpressionValidator(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QRegularExpression* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|JH", sipType_QRegularExpression, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQRegularExpressionValidator(*a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QRegularExpressionValidator[] = {{294, 255, 1}};


static PyMethodDef methods_QRegularExpressionValidator[] = {
    {SIP_MLNAME_CAST(sipName_regularExpression), meth_QRegularExpressionValidator_regularExpression, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionValidator_regularExpression)},
    {SIP_MLNAME_CAST(sipName_setRegularExpression), meth_QRegularExpressionValidator_setRegularExpression, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionValidator_setRegularExpression)},
    {SIP_MLNAME_CAST(sipName_validate), meth_QRegularExpressionValidator_validate, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionValidator_validate)}
};

PyDoc_STRVAR(doc_QRegularExpressionValidator, "\1QRegularExpressionValidator(parent: QObject = None)\n"
    "QRegularExpressionValidator(QRegularExpression, parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QRegularExpressionValidator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpressionValidator,
        {0}
    },
    {
        sipNameNr_QRegularExpressionValidator,
        {0, 0, 1},
        3, methods_QRegularExpressionValidator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegularExpressionValidator,
    -1,
    -1,
    supers_QRegularExpressionValidator,
    0,
    init_type_QRegularExpressionValidator,
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
    dealloc_QRegularExpressionValidator,
    0,
    0,
    0,
    release_QRegularExpressionValidator,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QRegularExpressionValidator::staticMetaObject,
    0,
    0,
    0
};