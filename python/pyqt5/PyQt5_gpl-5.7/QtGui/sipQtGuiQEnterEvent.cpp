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

#line 822 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQEnterEvent.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQEnterEvent.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQEnterEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQEnterEvent.cpp"


class sipQEnterEvent : public QEnterEvent
{
public:
    sipQEnterEvent(const QPointF&,const QPointF&,const QPointF&);
    sipQEnterEvent(const QEnterEvent&);
    ~sipQEnterEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQEnterEvent(const sipQEnterEvent &);
    sipQEnterEvent &operator = (const sipQEnterEvent &);
};

sipQEnterEvent::sipQEnterEvent(const QPointF& a0,const QPointF& a1,const QPointF& a2): QEnterEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQEnterEvent::sipQEnterEvent(const QEnterEvent& a0): QEnterEvent(a0), sipPySelf(0)
{
}

sipQEnterEvent::~sipQEnterEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QEnterEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QEnterEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_pos, doc_QEnterEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QEnterEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_globalPos, doc_QEnterEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QEnterEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_x, doc_QEnterEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QEnterEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_y, doc_QEnterEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QEnterEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_globalX, doc_QEnterEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QEnterEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_globalY, doc_QEnterEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_localPos, "localPos(self) -> QPointF");

extern "C" {static PyObject *meth_QEnterEvent_localPos(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_localPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->localPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_localPos, doc_QEnterEvent_localPos);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_windowPos, "windowPos(self) -> QPointF");

extern "C" {static PyObject *meth_QEnterEvent_windowPos(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_windowPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->windowPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_windowPos, doc_QEnterEvent_windowPos);

    return NULL;
}


PyDoc_STRVAR(doc_QEnterEvent_screenPos, "screenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QEnterEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QEnterEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEnterEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEnterEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEnterEvent, sipName_screenPos, doc_QEnterEvent_screenPos);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QEnterEvent(void *, int);}
static void release_QEnterEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQEnterEvent *>(sipCppV);
    else
        delete reinterpret_cast<QEnterEvent *>(sipCppV);
}


extern "C" {static void dealloc_QEnterEvent(sipSimpleWrapper *);}
static void dealloc_QEnterEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQEnterEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QEnterEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QEnterEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEnterEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQEnterEvent *sipCpp = 0;

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;
        const QPointF* a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1J1", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State))
        {
            sipCpp = new sipQEnterEvent(*a0,*a1,*a2);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast<QPointF *>(a2),sipType_QPointF,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QEnterEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QEnterEvent, &a0))
        {
            sipCpp = new sipQEnterEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QEnterEvent[] = {{55, 0, 1}};


static PyMethodDef methods_QEnterEvent[] = {
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QEnterEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QEnterEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QEnterEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_localPos), meth_QEnterEvent_localPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_localPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QEnterEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_pos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QEnterEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_screenPos)},
    {SIP_MLNAME_CAST(sipName_windowPos), meth_QEnterEvent_windowPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_windowPos)},
    {SIP_MLNAME_CAST(sipName_x), meth_QEnterEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QEnterEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QEnterEvent_y)}
};

PyDoc_STRVAR(doc_QEnterEvent, "\1QEnterEvent(Union[QPointF, QPoint], Union[QPointF, QPoint], Union[QPointF, QPoint])\n"
    "QEnterEvent(QEnterEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QEnterEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QEnterEvent,
        {0}
    },
    {
        sipNameNr_QEnterEvent,
        {0, 0, 1},
        9, methods_QEnterEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QEnterEvent,
    -1,
    -1,
    supers_QEnterEvent,
    0,
    init_type_QEnterEvent,
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
    dealloc_QEnterEvent,
    0,
    0,
    0,
    release_QEnterEvent,
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
