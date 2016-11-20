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

#include "sipAPIQtQuick.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQuick/qsgtexture.sip"
#include <qsgtexture.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"

#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTexture.cpp"


class sipQSGTexture : public QSGTexture
{
public:
    sipQSGTexture();
    virtual ~sipQSGTexture();

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
    void bind();
    QSGTexture* removedFromAtlas() const;
    bool isAtlasTexture() const;
    QRectF normalizedTextureSubRect() const;
    bool hasMipmaps() const;
    bool hasAlphaChannel() const;
    QSize textureSize() const;
    int textureId() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGTexture(const sipQSGTexture &);
    sipQSGTexture &operator = (const sipQSGTexture &);

    char sipPyMethods[15];
};

sipQSGTexture::sipQSGTexture(): QSGTexture(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGTexture::~sipQSGTexture()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSGTexture::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQuick_qt_metaobject(sipPySelf,sipType_QSGTexture);

    return QSGTexture::metaObject();
}

int sipQSGTexture::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSGTexture::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQuick_qt_metacall(sipPySelf,sipType_QSGTexture,_c,_id,_a);

    return _id;
}

void *sipQSGTexture::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQuick_qt_metacast(sipPySelf, sipType_QSGTexture, _clname, &sipCpp) ? sipCpp : QSGTexture::qt_metacast(_clname));
}

void sipQSGTexture::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QSGTexture::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSGTexture::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QSGTexture::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSGTexture::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QSGTexture::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSGTexture::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QSGTexture::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSGTexture::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QSGTexture::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQSGTexture::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QSGTexture::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQSGTexture::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QSGTexture::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSGTexture::bind()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QSGTexture,sipName_bind);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QSGTexture* sipQSGTexture::removedFromAtlas() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_removedFromAtlas);

    if (!sipMeth)
        return QSGTexture::removedFromAtlas();

    extern QSGTexture* sipVH_QtQuick_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_4(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQSGTexture::isAtlasTexture() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_isAtlasTexture);

    if (!sipMeth)
        return QSGTexture::isAtlasTexture();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QRectF sipQSGTexture::normalizedTextureSubRect() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_normalizedTextureSubRect);

    if (!sipMeth)
        return QSGTexture::normalizedTextureSubRect();

    extern QRectF sipVH_QtQuick_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_5(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQSGTexture::hasMipmaps() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QSGTexture,sipName_hasMipmaps);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQSGTexture::hasAlphaChannel() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QSGTexture,sipName_hasAlphaChannel);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QSize sipQSGTexture::textureSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QSGTexture,sipName_textureSize);

    if (!sipMeth)
        return QSize();

    typedef QSize (*sipVH_QtGui_12)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtGui_12)(sipModuleAPI_QtQuick_QtGui->em_virthandlers[12]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQSGTexture::textureId() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QSGTexture,sipName_textureId);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGTexture_textureId, "textureId(self) -> int");

extern "C" {static PyObject *meth_QSGTexture_textureId(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_textureId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGTexture, sipName_textureId);
                return NULL;
            }

            sipRes = sipCpp->textureId();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_textureId, doc_QSGTexture_textureId);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_textureSize, "textureSize(self) -> QSize");

extern "C" {static PyObject *meth_QSGTexture_textureSize(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_textureSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QSize*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGTexture, sipName_textureSize);
                return NULL;
            }

            sipRes = new QSize(sipCpp->textureSize());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_textureSize, doc_QSGTexture_textureSize);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_hasAlphaChannel, "hasAlphaChannel(self) -> bool");

extern "C" {static PyObject *meth_QSGTexture_hasAlphaChannel(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_hasAlphaChannel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGTexture, sipName_hasAlphaChannel);
                return NULL;
            }

            sipRes = sipCpp->hasAlphaChannel();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_hasAlphaChannel, doc_QSGTexture_hasAlphaChannel);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_hasMipmaps, "hasMipmaps(self) -> bool");

extern "C" {static PyObject *meth_QSGTexture_hasMipmaps(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_hasMipmaps(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGTexture, sipName_hasMipmaps);
                return NULL;
            }

            sipRes = sipCpp->hasMipmaps();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_hasMipmaps, doc_QSGTexture_hasMipmaps);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_normalizedTextureSubRect, "normalizedTextureSubRect(self) -> QRectF");

extern "C" {static PyObject *meth_QSGTexture_normalizedTextureSubRect(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_normalizedTextureSubRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF((sipSelfWasArg ? sipCpp->QSGTexture::normalizedTextureSubRect() : sipCpp->normalizedTextureSubRect()));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_normalizedTextureSubRect, doc_QSGTexture_normalizedTextureSubRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_isAtlasTexture, "isAtlasTexture(self) -> bool");

extern "C" {static PyObject *meth_QSGTexture_isAtlasTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_isAtlasTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGTexture::isAtlasTexture() : sipCpp->isAtlasTexture());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_isAtlasTexture, doc_QSGTexture_isAtlasTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_removedFromAtlas, "removedFromAtlas(self) -> QSGTexture");

extern "C" {static PyObject *meth_QSGTexture_removedFromAtlas(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_removedFromAtlas(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QSGTexture*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGTexture::removedFromAtlas() : sipCpp->removedFromAtlas());

            return sipConvertFromType(sipRes,sipType_QSGTexture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_removedFromAtlas, doc_QSGTexture_removedFromAtlas);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_bind, "bind(self)");

extern "C" {static PyObject *meth_QSGTexture_bind(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGTexture, sipName_bind);
                return NULL;
            }

            sipCpp->bind();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_bind, doc_QSGTexture_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_updateBindOptions, "updateBindOptions(self, force: bool = False)");

extern "C" {static PyObject *meth_QSGTexture_updateBindOptions(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_updateBindOptions(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0 = 0;
        QSGTexture *sipCpp;

        static const char *sipKwdList[] = {
            sipName_force,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|b", &sipSelf, sipType_QSGTexture, &sipCpp, &a0))
        {
            sipCpp->updateBindOptions(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_updateBindOptions, doc_QSGTexture_updateBindOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_setMipmapFiltering, "setMipmapFiltering(self, QSGTexture.Filtering)");

extern "C" {static PyObject *meth_QSGTexture_setMipmapFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_setMipmapFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGTexture::Filtering a0;
        QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGTexture, &sipCpp, sipType_QSGTexture_Filtering, &a0))
        {
            sipCpp->setMipmapFiltering(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_setMipmapFiltering, doc_QSGTexture_setMipmapFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_mipmapFiltering, "mipmapFiltering(self) -> QSGTexture.Filtering");

extern "C" {static PyObject *meth_QSGTexture_mipmapFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_mipmapFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QSGTexture::Filtering sipRes;

            sipRes = sipCpp->mipmapFiltering();

            return sipConvertFromEnum(sipRes,sipType_QSGTexture_Filtering);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_mipmapFiltering, doc_QSGTexture_mipmapFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_setFiltering, "setFiltering(self, QSGTexture.Filtering)");

extern "C" {static PyObject *meth_QSGTexture_setFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_setFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGTexture::Filtering a0;
        QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGTexture, &sipCpp, sipType_QSGTexture_Filtering, &a0))
        {
            sipCpp->setFiltering(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_setFiltering, doc_QSGTexture_setFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_filtering, "filtering(self) -> QSGTexture.Filtering");

extern "C" {static PyObject *meth_QSGTexture_filtering(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_filtering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QSGTexture::Filtering sipRes;

            sipRes = sipCpp->filtering();

            return sipConvertFromEnum(sipRes,sipType_QSGTexture_Filtering);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_filtering, doc_QSGTexture_filtering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_setHorizontalWrapMode, "setHorizontalWrapMode(self, QSGTexture.WrapMode)");

extern "C" {static PyObject *meth_QSGTexture_setHorizontalWrapMode(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_setHorizontalWrapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGTexture::WrapMode a0;
        QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGTexture, &sipCpp, sipType_QSGTexture_WrapMode, &a0))
        {
            sipCpp->setHorizontalWrapMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_setHorizontalWrapMode, doc_QSGTexture_setHorizontalWrapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_horizontalWrapMode, "horizontalWrapMode(self) -> QSGTexture.WrapMode");

extern "C" {static PyObject *meth_QSGTexture_horizontalWrapMode(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_horizontalWrapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QSGTexture::WrapMode sipRes;

            sipRes = sipCpp->horizontalWrapMode();

            return sipConvertFromEnum(sipRes,sipType_QSGTexture_WrapMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_horizontalWrapMode, doc_QSGTexture_horizontalWrapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_setVerticalWrapMode, "setVerticalWrapMode(self, QSGTexture.WrapMode)");

extern "C" {static PyObject *meth_QSGTexture_setVerticalWrapMode(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_setVerticalWrapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGTexture::WrapMode a0;
        QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGTexture, &sipCpp, sipType_QSGTexture_WrapMode, &a0))
        {
            sipCpp->setVerticalWrapMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_setVerticalWrapMode, doc_QSGTexture_setVerticalWrapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_verticalWrapMode, "verticalWrapMode(self) -> QSGTexture.WrapMode");

extern "C" {static PyObject *meth_QSGTexture_verticalWrapMode(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_verticalWrapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTexture, &sipCpp))
        {
            QSGTexture::WrapMode sipRes;

            sipRes = sipCpp->verticalWrapMode();

            return sipConvertFromEnum(sipRes,sipType_QSGTexture_WrapMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_verticalWrapMode, doc_QSGTexture_verticalWrapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTexture_convertToNormalizedSourceRect, "convertToNormalizedSourceRect(self, QRectF) -> QRectF");

extern "C" {static PyObject *meth_QSGTexture_convertToNormalizedSourceRect(PyObject *, PyObject *);}
static PyObject *meth_QSGTexture_convertToNormalizedSourceRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRectF* a0;
        const QSGTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGTexture, &sipCpp, sipType_QRectF, &a0))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->convertToNormalizedSourceRect(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTexture, sipName_convertToNormalizedSourceRect, doc_QSGTexture_convertToNormalizedSourceRect);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGTexture(void *, int);}
static void release_QSGTexture(void *sipCppV,int)
{
    QSGTexture *sipCpp = reinterpret_cast<QSGTexture *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QSGTexture(sipSimpleWrapper *);}
static void dealloc_QSGTexture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGTexture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGTexture(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGTexture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGTexture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGTexture *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGTexture();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGTexture[] = {{165, 0, 1}};


static PyMethodDef methods_QSGTexture[] = {
    {SIP_MLNAME_CAST(sipName_bind), meth_QSGTexture_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_bind)},
    {SIP_MLNAME_CAST(sipName_convertToNormalizedSourceRect), meth_QSGTexture_convertToNormalizedSourceRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_convertToNormalizedSourceRect)},
    {SIP_MLNAME_CAST(sipName_filtering), meth_QSGTexture_filtering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_filtering)},
    {SIP_MLNAME_CAST(sipName_hasAlphaChannel), meth_QSGTexture_hasAlphaChannel, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_hasAlphaChannel)},
    {SIP_MLNAME_CAST(sipName_hasMipmaps), meth_QSGTexture_hasMipmaps, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_hasMipmaps)},
    {SIP_MLNAME_CAST(sipName_horizontalWrapMode), meth_QSGTexture_horizontalWrapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_horizontalWrapMode)},
    {SIP_MLNAME_CAST(sipName_isAtlasTexture), meth_QSGTexture_isAtlasTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_isAtlasTexture)},
    {SIP_MLNAME_CAST(sipName_mipmapFiltering), meth_QSGTexture_mipmapFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_mipmapFiltering)},
    {SIP_MLNAME_CAST(sipName_normalizedTextureSubRect), meth_QSGTexture_normalizedTextureSubRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_normalizedTextureSubRect)},
    {SIP_MLNAME_CAST(sipName_removedFromAtlas), meth_QSGTexture_removedFromAtlas, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_removedFromAtlas)},
    {SIP_MLNAME_CAST(sipName_setFiltering), meth_QSGTexture_setFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_setFiltering)},
    {SIP_MLNAME_CAST(sipName_setHorizontalWrapMode), meth_QSGTexture_setHorizontalWrapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_setHorizontalWrapMode)},
    {SIP_MLNAME_CAST(sipName_setMipmapFiltering), meth_QSGTexture_setMipmapFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_setMipmapFiltering)},
    {SIP_MLNAME_CAST(sipName_setVerticalWrapMode), meth_QSGTexture_setVerticalWrapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_setVerticalWrapMode)},
    {SIP_MLNAME_CAST(sipName_textureId), meth_QSGTexture_textureId, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_textureId)},
    {SIP_MLNAME_CAST(sipName_textureSize), meth_QSGTexture_textureSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_textureSize)},
    {SIP_MLNAME_CAST(sipName_updateBindOptions), (PyCFunction)meth_QSGTexture_updateBindOptions, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSGTexture_updateBindOptions)},
    {SIP_MLNAME_CAST(sipName_verticalWrapMode), meth_QSGTexture_verticalWrapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTexture_verticalWrapMode)}
};

static sipEnumMemberDef enummembers_QSGTexture[] = {
    {sipName_ClampToEdge, static_cast<int>(QSGTexture::ClampToEdge), 70},
    {sipName_Linear, static_cast<int>(QSGTexture::Linear), 69},
    {sipName_Nearest, static_cast<int>(QSGTexture::Nearest), 69},
    {sipName_None, static_cast<int>(QSGTexture::None), 69},
    {sipName_Repeat, static_cast<int>(QSGTexture::Repeat), 70},
};

PyDoc_STRVAR(doc_QSGTexture, "\1QSGTexture()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGTexture = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGTexture,
        {0}
    },
    {
        sipNameNr_QSGTexture,
        {0, 0, 1},
        18, methods_QSGTexture,
        5, enummembers_QSGTexture,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGTexture,
    -1,
    -1,
    supers_QSGTexture,
    0,
    init_type_QSGTexture,
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
    dealloc_QSGTexture,
    0,
    0,
    0,
    release_QSGTexture,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QSGTexture::staticMetaObject,
    0,
    0,
    0
};
