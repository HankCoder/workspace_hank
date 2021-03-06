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

#include "sipAPIQtNfc.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qqmlndefrecord.sip"
#include <qqmlndefrecord.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qndefrecord.sip"
#include <qndefrecord.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQQmlNdefRecord.cpp"


class sipQQmlNdefRecord : public QQmlNdefRecord
{
public:
    sipQQmlNdefRecord(QObject*);
    sipQQmlNdefRecord(const QNdefRecord&,QObject*);
    virtual ~sipQQmlNdefRecord();

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
    sipQQmlNdefRecord(const sipQQmlNdefRecord &);
    sipQQmlNdefRecord &operator = (const sipQQmlNdefRecord &);

    char sipPyMethods[7];
};

sipQQmlNdefRecord::sipQQmlNdefRecord(QObject*a0): QQmlNdefRecord(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlNdefRecord::sipQQmlNdefRecord(const QNdefRecord& a0,QObject*a1): QQmlNdefRecord(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlNdefRecord::~sipQQmlNdefRecord()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQQmlNdefRecord::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtNfc_qt_metaobject(sipPySelf,sipType_QQmlNdefRecord);

    return QQmlNdefRecord::metaObject();
}

int sipQQmlNdefRecord::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QQmlNdefRecord::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNfc_qt_metacall(sipPySelf,sipType_QQmlNdefRecord,_c,_id,_a);

    return _id;
}

void *sipQQmlNdefRecord::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtNfc_qt_metacast(sipPySelf, sipType_QQmlNdefRecord, _clname, &sipCpp) ? sipCpp : QQmlNdefRecord::qt_metacast(_clname));
}

void sipQQmlNdefRecord::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QQmlNdefRecord::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlNdefRecord::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QQmlNdefRecord::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlNdefRecord::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QQmlNdefRecord::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlNdefRecord::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QQmlNdefRecord::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlNdefRecord::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QQmlNdefRecord::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQQmlNdefRecord::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QQmlNdefRecord::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQQmlNdefRecord::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QQmlNdefRecord::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtNfc_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtNfc_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQmlNdefRecord_type, "type(self) -> str");

extern "C" {static PyObject *meth_QQmlNdefRecord_type(PyObject *, PyObject *);}
static PyObject *meth_QQmlNdefRecord_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlNdefRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->type());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNdefRecord, sipName_type, doc_QQmlNdefRecord_type);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlNdefRecord_setType, "setType(self, str)");

extern "C" {static PyObject *meth_QQmlNdefRecord_setType(PyObject *, PyObject *);}
static PyObject *meth_QQmlNdefRecord_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QQmlNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlNdefRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setType(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNdefRecord, sipName_setType, doc_QQmlNdefRecord_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlNdefRecord_setTypeNameFormat, "setTypeNameFormat(self, QQmlNdefRecord.TypeNameFormat)");

extern "C" {static PyObject *meth_QQmlNdefRecord_setTypeNameFormat(PyObject *, PyObject *);}
static PyObject *meth_QQmlNdefRecord_setTypeNameFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQmlNdefRecord::TypeNameFormat a0;
        QQmlNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QQmlNdefRecord, &sipCpp, sipType_QQmlNdefRecord_TypeNameFormat, &a0))
        {
            sipCpp->setTypeNameFormat(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNdefRecord, sipName_setTypeNameFormat, doc_QQmlNdefRecord_setTypeNameFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlNdefRecord_typeNameFormat, "typeNameFormat(self) -> QQmlNdefRecord.TypeNameFormat");

extern "C" {static PyObject *meth_QQmlNdefRecord_typeNameFormat(PyObject *, PyObject *);}
static PyObject *meth_QQmlNdefRecord_typeNameFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlNdefRecord, &sipCpp))
        {
            QQmlNdefRecord::TypeNameFormat sipRes;

            sipRes = sipCpp->typeNameFormat();

            return sipConvertFromEnum(sipRes,sipType_QQmlNdefRecord_TypeNameFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNdefRecord, sipName_typeNameFormat, doc_QQmlNdefRecord_typeNameFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlNdefRecord_record, "record(self) -> QNdefRecord");

extern "C" {static PyObject *meth_QQmlNdefRecord_record(PyObject *, PyObject *);}
static PyObject *meth_QQmlNdefRecord_record(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlNdefRecord, &sipCpp))
        {
            QNdefRecord*sipRes;

            sipRes = new QNdefRecord(sipCpp->record());

            return sipConvertFromNewType(sipRes,sipType_QNdefRecord,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNdefRecord, sipName_record, doc_QQmlNdefRecord_record);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlNdefRecord_setRecord, "setRecord(self, QNdefRecord)");

extern "C" {static PyObject *meth_QQmlNdefRecord_setRecord(PyObject *, PyObject *);}
static PyObject *meth_QQmlNdefRecord_setRecord(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord* a0;
        QQmlNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlNdefRecord, &sipCpp, sipType_QNdefRecord, &a0))
        {
            sipCpp->setRecord(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNdefRecord, sipName_setRecord, doc_QQmlNdefRecord_setRecord);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlNdefRecord(void *, int);}
static void release_QQmlNdefRecord(void *sipCppV,int)
{
    QQmlNdefRecord *sipCpp = reinterpret_cast<QQmlNdefRecord *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQmlNdefRecord(sipSimpleWrapper *);}
static void dealloc_QQmlNdefRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlNdefRecord *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlNdefRecord(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlNdefRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlNdefRecord(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQQmlNdefRecord *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQQmlNdefRecord(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QNdefRecord* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|JH", sipType_QNdefRecord, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQQmlNdefRecord(*a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQmlNdefRecord[] = {{164, 0, 1}};


static PyMethodDef methods_QQmlNdefRecord[] = {
    {SIP_MLNAME_CAST(sipName_record), meth_QQmlNdefRecord_record, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNdefRecord_record)},
    {SIP_MLNAME_CAST(sipName_setRecord), meth_QQmlNdefRecord_setRecord, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNdefRecord_setRecord)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QQmlNdefRecord_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNdefRecord_setType)},
    {SIP_MLNAME_CAST(sipName_setTypeNameFormat), meth_QQmlNdefRecord_setTypeNameFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNdefRecord_setTypeNameFormat)},
    {SIP_MLNAME_CAST(sipName_type), meth_QQmlNdefRecord_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNdefRecord_type)},
    {SIP_MLNAME_CAST(sipName_typeNameFormat), meth_QQmlNdefRecord_typeNameFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNdefRecord_typeNameFormat)}
};

static sipEnumMemberDef enummembers_QQmlNdefRecord[] = {
    {sipName_Empty, static_cast<int>(QQmlNdefRecord::Empty), 30},
    {sipName_ExternalRtd, static_cast<int>(QQmlNdefRecord::ExternalRtd), 30},
    {sipName_Mime, static_cast<int>(QQmlNdefRecord::Mime), 30},
    {sipName_NfcRtd, static_cast<int>(QQmlNdefRecord::NfcRtd), 30},
    {sipName_Unknown, static_cast<int>(QQmlNdefRecord::Unknown), 30},
    {sipName_Uri, static_cast<int>(QQmlNdefRecord::Uri), 30},
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QQmlNdefRecord[] = {
    {"recordChanged()", "\1recordChanged(self)", 0, 0},
    {"typeNameFormatChanged()", "\1typeNameFormatChanged(self)", 0, 0},
    {"typeChanged()", "\1typeChanged(self)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QQmlNdefRecord, "\1QQmlNdefRecord(parent: QObject = None)\n"
    "QQmlNdefRecord(QNdefRecord, parent: QObject = None)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QQmlNdefRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlNdefRecord,
        {0}
    },
    {
        sipNameNr_QQmlNdefRecord,
        {0, 0, 1},
        6, methods_QQmlNdefRecord,
        6, enummembers_QQmlNdefRecord,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlNdefRecord,
    -1,
    -1,
    supers_QQmlNdefRecord,
    0,
    init_type_QQmlNdefRecord,
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
    dealloc_QQmlNdefRecord,
    0,
    0,
    0,
    release_QQmlNdefRecord,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQmlNdefRecord::staticMetaObject,
    0,
    signals_QQmlNdefRecord,
    0
};
