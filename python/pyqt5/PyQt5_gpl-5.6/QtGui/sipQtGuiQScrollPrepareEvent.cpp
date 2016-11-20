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

#include "sipAPIQtGui.h"

#line 774 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQScrollPrepareEvent.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQScrollPrepareEvent.cpp"
#line 161 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQScrollPrepareEvent.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQScrollPrepareEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQScrollPrepareEvent.cpp"


class sipQScrollPrepareEvent : public QScrollPrepareEvent
{
public:
    sipQScrollPrepareEvent(const QPointF&);
    sipQScrollPrepareEvent(const QScrollPrepareEvent&);
    ~sipQScrollPrepareEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScrollPrepareEvent(const sipQScrollPrepareEvent &);
    sipQScrollPrepareEvent &operator = (const sipQScrollPrepareEvent &);
};

sipQScrollPrepareEvent::sipQScrollPrepareEvent(const QPointF& a0): QScrollPrepareEvent(a0), sipPySelf(0)
{
}

sipQScrollPrepareEvent::sipQScrollPrepareEvent(const QScrollPrepareEvent& a0): QScrollPrepareEvent(a0), sipPySelf(0)
{
}

sipQScrollPrepareEvent::~sipQScrollPrepareEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_startPos, "startPos(self) -> QPointF");

extern "C" {static PyObject *meth_QScrollPrepareEvent_startPos(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_startPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->startPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_startPos, doc_QScrollPrepareEvent_startPos);

    return NULL;
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_viewportSize, "viewportSize(self) -> QSizeF");

extern "C" {static PyObject *meth_QScrollPrepareEvent_viewportSize(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_viewportSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->viewportSize());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_viewportSize, doc_QScrollPrepareEvent_viewportSize);

    return NULL;
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_contentPosRange, "contentPosRange(self) -> QRectF");

extern "C" {static PyObject *meth_QScrollPrepareEvent_contentPosRange(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_contentPosRange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->contentPosRange());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_contentPosRange, doc_QScrollPrepareEvent_contentPosRange);

    return NULL;
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_contentPos, "contentPos(self) -> QPointF");

extern "C" {static PyObject *meth_QScrollPrepareEvent_contentPos(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_contentPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->contentPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_contentPos, doc_QScrollPrepareEvent_contentPos);

    return NULL;
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_setViewportSize, "setViewportSize(self, QSizeF)");

extern "C" {static PyObject *meth_QScrollPrepareEvent_setViewportSize(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_setViewportSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp, sipType_QSizeF, &a0))
        {
            sipCpp->setViewportSize(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_setViewportSize, doc_QScrollPrepareEvent_setViewportSize);

    return NULL;
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_setContentPosRange, "setContentPosRange(self, QRectF)");

extern "C" {static PyObject *meth_QScrollPrepareEvent_setContentPosRange(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_setContentPosRange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRectF* a0;
        QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp, sipType_QRectF, &a0))
        {
            sipCpp->setContentPosRange(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_setContentPosRange, doc_QScrollPrepareEvent_setContentPosRange);

    return NULL;
}


PyDoc_STRVAR(doc_QScrollPrepareEvent_setContentPos, "setContentPos(self, Union[QPointF, QPoint])");

extern "C" {static PyObject *meth_QScrollPrepareEvent_setContentPos(PyObject *, PyObject *);}
static PyObject *meth_QScrollPrepareEvent_setContentPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QScrollPrepareEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QScrollPrepareEvent, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setContentPos(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScrollPrepareEvent, sipName_setContentPos, doc_QScrollPrepareEvent_setContentPos);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScrollPrepareEvent(void *, int);}
static void release_QScrollPrepareEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQScrollPrepareEvent *>(sipCppV);
    else
        delete reinterpret_cast<QScrollPrepareEvent *>(sipCppV);
}


extern "C" {static void dealloc_QScrollPrepareEvent(sipSimpleWrapper *);}
static void dealloc_QScrollPrepareEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQScrollPrepareEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QScrollPrepareEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QScrollPrepareEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScrollPrepareEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQScrollPrepareEvent *sipCpp = 0;

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPointF, &a0, &a0State))
        {
            sipCpp = new sipQScrollPrepareEvent(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QScrollPrepareEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScrollPrepareEvent, &a0))
        {
            sipCpp = new sipQScrollPrepareEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QScrollPrepareEvent[] = {{55, 0, 1}};


static PyMethodDef methods_QScrollPrepareEvent[] = {
    {SIP_MLNAME_CAST(sipName_contentPos), meth_QScrollPrepareEvent_contentPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_contentPos)},
    {SIP_MLNAME_CAST(sipName_contentPosRange), meth_QScrollPrepareEvent_contentPosRange, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_contentPosRange)},
    {SIP_MLNAME_CAST(sipName_setContentPos), meth_QScrollPrepareEvent_setContentPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_setContentPos)},
    {SIP_MLNAME_CAST(sipName_setContentPosRange), meth_QScrollPrepareEvent_setContentPosRange, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_setContentPosRange)},
    {SIP_MLNAME_CAST(sipName_setViewportSize), meth_QScrollPrepareEvent_setViewportSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_setViewportSize)},
    {SIP_MLNAME_CAST(sipName_startPos), meth_QScrollPrepareEvent_startPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_startPos)},
    {SIP_MLNAME_CAST(sipName_viewportSize), meth_QScrollPrepareEvent_viewportSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QScrollPrepareEvent_viewportSize)}
};

PyDoc_STRVAR(doc_QScrollPrepareEvent, "\1QScrollPrepareEvent(Union[QPointF, QPoint])\n"
    "QScrollPrepareEvent(QScrollPrepareEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QScrollPrepareEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QScrollPrepareEvent,
        {0}
    },
    {
        sipNameNr_QScrollPrepareEvent,
        {0, 0, 1},
        7, methods_QScrollPrepareEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScrollPrepareEvent,
    -1,
    -1,
    supers_QScrollPrepareEvent,
    0,
    init_type_QScrollPrepareEvent,
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
    dealloc_QScrollPrepareEvent,
    0,
    0,
    0,
    release_QScrollPrepareEvent,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
