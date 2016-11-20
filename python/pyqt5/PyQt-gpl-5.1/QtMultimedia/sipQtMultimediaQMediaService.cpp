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

#include "sipAPIQtMultimedia.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaservice.sip"
#include <qmediaservice.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediacontrol.sip"
#include <qmediacontrol.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQMediaService.cpp"


class sipQMediaService : public QMediaService
{
public:
    sipQMediaService(QObject*);
    virtual ~sipQMediaService();

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
    void releaseControl(QMediaControl*);
    QMediaControl* requestControl(const char*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMediaService(const sipQMediaService &);
    sipQMediaService &operator = (const sipQMediaService &);

    char sipPyMethods[9];
};

sipQMediaService::sipQMediaService(QObject*a0): QMediaService(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMediaService::~sipQMediaService()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQMediaService::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QMediaService);

    return QMediaService::metaObject();
}

int sipQMediaService::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QMediaService::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QMediaService,_c,_id,_a);

    return _id;
}

void *sipQMediaService::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QMediaService, _clname, &sipCpp) ? sipCpp : QMediaService::qt_metacast(_clname));
}

void sipQMediaService::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QMediaService::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQMediaService::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QMediaService::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQMediaService::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QMediaService::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQMediaService::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QMediaService::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQMediaService::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QMediaService::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQMediaService::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QMediaService::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQMediaService::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QMediaService::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQMediaService::releaseControl(QMediaControl*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QMediaService,sipName_releaseControl);

    if (!sipMeth)
        return;

    extern void sipVH_QtMultimedia_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QMediaControl*);

    sipVH_QtMultimedia_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QMediaControl* sipQMediaService::requestControl(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QMediaService,sipName_requestControl);

    if (!sipMeth)
        return 0;

    extern QMediaControl* sipVH_QtMultimedia_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    return sipVH_QtMultimedia_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QMediaService_requestControl, "requestControl(self, str) -> QMediaControl");

extern "C" {static PyObject *meth_QMediaService_requestControl(PyObject *, PyObject *);}
static PyObject *meth_QMediaService_requestControl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char* a0;
        PyObject *a0Keep;
        QMediaService *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QMediaService, &sipCpp, &a0Keep, &a0))
        {
            QMediaControl*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMediaService, sipName_requestControl);
                return NULL;
            }

            sipRes = sipCpp->requestControl(a0);
            Py_DECREF(a0Keep);

            return sipConvertFromType(sipRes,sipType_QMediaControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaService, sipName_requestControl, doc_QMediaService_requestControl);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaService_releaseControl, "releaseControl(self, QMediaControl)");

extern "C" {static PyObject *meth_QMediaService_releaseControl(PyObject *, PyObject *);}
static PyObject *meth_QMediaService_releaseControl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QMediaControl* a0;
        QMediaService *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QMediaService, &sipCpp, sipType_QMediaControl, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMediaService, sipName_releaseControl);
                return NULL;
            }

            sipCpp->releaseControl(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaService, sipName_releaseControl, doc_QMediaService_releaseControl);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMediaService(void *, int);}
static void release_QMediaService(void *sipCppV,int)
{
    QMediaService *sipCpp = reinterpret_cast<QMediaService *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QMediaService(sipSimpleWrapper *);}
static void dealloc_QMediaService(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMediaService *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMediaService(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QMediaService(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMediaService(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQMediaService *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQMediaService(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMediaService[] = {{142, 0, 1}};


static PyMethodDef methods_QMediaService[] = {
    {SIP_MLNAME_CAST(sipName_releaseControl), meth_QMediaService_releaseControl, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaService_releaseControl)},
    {SIP_MLNAME_CAST(sipName_requestControl), meth_QMediaService_requestControl, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaService_requestControl)}
};

PyDoc_STRVAR(doc_QMediaService, "\1QMediaService(QObject)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QMediaService = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMediaService,
        {0}
    },
    {
        sipNameNr_QMediaService,
        {0, 0, 1},
        2, methods_QMediaService,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMediaService,
    -1,
    -1,
    supers_QMediaService,
    0,
    init_type_QMediaService,
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
    dealloc_QMediaService,
    0,
    0,
    0,
    release_QMediaService,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QMediaService::staticMetaObject,
    0,
    0,
    0
};