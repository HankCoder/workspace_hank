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

#line 427 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQContextMenuEvent.cpp"

#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQContextMenuEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQContextMenuEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQContextMenuEvent.cpp"


class sipQContextMenuEvent : public QContextMenuEvent
{
public:
    sipQContextMenuEvent(QContextMenuEvent::Reason,const QPoint&,const QPoint&,Qt::KeyboardModifiers);
    sipQContextMenuEvent(QContextMenuEvent::Reason,const QPoint&,const QPoint&);
    sipQContextMenuEvent(QContextMenuEvent::Reason,const QPoint&);
    sipQContextMenuEvent(const QContextMenuEvent&);
    ~sipQContextMenuEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQContextMenuEvent(const sipQContextMenuEvent &);
    sipQContextMenuEvent &operator = (const sipQContextMenuEvent &);
};

sipQContextMenuEvent::sipQContextMenuEvent(QContextMenuEvent::Reason a0,const QPoint& a1,const QPoint& a2,Qt::KeyboardModifiers a3): QContextMenuEvent(a0,a1,a2,a3), sipPySelf(0)
{
}

sipQContextMenuEvent::sipQContextMenuEvent(QContextMenuEvent::Reason a0,const QPoint& a1,const QPoint& a2): QContextMenuEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQContextMenuEvent::sipQContextMenuEvent(QContextMenuEvent::Reason a0,const QPoint& a1): QContextMenuEvent(a0,a1), sipPySelf(0)
{
}

sipQContextMenuEvent::sipQContextMenuEvent(const QContextMenuEvent& a0): QContextMenuEvent(a0), sipPySelf(0)
{
}

sipQContextMenuEvent::~sipQContextMenuEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QContextMenuEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_x, doc_QContextMenuEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QContextMenuEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_y, doc_QContextMenuEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QContextMenuEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_globalX, doc_QContextMenuEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QContextMenuEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_globalY, doc_QContextMenuEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QContextMenuEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QContextMenuEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_pos, doc_QContextMenuEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QContextMenuEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QContextMenuEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_globalPos, doc_QContextMenuEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QContextMenuEvent_reason, "reason(self) -> QContextMenuEvent.Reason");

extern "C" {static PyObject *meth_QContextMenuEvent_reason(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_reason(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            QContextMenuEvent::Reason sipRes;

            sipRes = sipCpp->reason();

            return sipConvertFromEnum(sipRes,sipType_QContextMenuEvent_Reason);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_reason, doc_QContextMenuEvent_reason);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QContextMenuEvent(void *, int);}
static void release_QContextMenuEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQContextMenuEvent *>(sipCppV);
    else
        delete reinterpret_cast<QContextMenuEvent *>(sipCppV);
}


extern "C" {static void dealloc_QContextMenuEvent(sipSimpleWrapper *);}
static void dealloc_QContextMenuEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQContextMenuEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QContextMenuEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QContextMenuEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QContextMenuEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQContextMenuEvent *sipCpp = 0;

    {
        QContextMenuEvent::Reason a0;
        const QPoint* a1;
        const QPoint* a2;
        Qt::KeyboardModifiers* a3;
        int a3State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9J1", sipType_QContextMenuEvent_Reason, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2, sipType_Qt_KeyboardModifiers, &a3, &a3State))
        {
            sipCpp = new sipQContextMenuEvent(a0,*a1,*a2,*a3);
            sipReleaseType(a3,sipType_Qt_KeyboardModifiers,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QContextMenuEvent::Reason a0;
        const QPoint* a1;
        const QPoint* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9", sipType_QContextMenuEvent_Reason, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2))
        {
            sipCpp = new sipQContextMenuEvent(a0,*a1,*a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QContextMenuEvent::Reason a0;
        const QPoint* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9", sipType_QContextMenuEvent_Reason, &a0, sipType_QPoint, &a1))
        {
            sipCpp = new sipQContextMenuEvent(a0,*a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QContextMenuEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QContextMenuEvent, &a0))
        {
            sipCpp = new sipQContextMenuEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QContextMenuEvent[] = {{71, 255, 1}};


static PyMethodDef methods_QContextMenuEvent[] = {
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QContextMenuEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QContextMenuEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QContextMenuEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QContextMenuEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_pos)},
    {SIP_MLNAME_CAST(sipName_reason), meth_QContextMenuEvent_reason, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_reason)},
    {SIP_MLNAME_CAST(sipName_x), meth_QContextMenuEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QContextMenuEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QContextMenuEvent_y)}
};

static sipEnumMemberDef enummembers_QContextMenuEvent[] = {
    {sipName_Keyboard, static_cast<int>(QContextMenuEvent::Keyboard), 16},
    {sipName_Mouse, static_cast<int>(QContextMenuEvent::Mouse), 16},
    {sipName_Other, static_cast<int>(QContextMenuEvent::Other), 16},
};

PyDoc_STRVAR(doc_QContextMenuEvent, "\1QContextMenuEvent(QContextMenuEvent.Reason, QPoint, QPoint, Qt.KeyboardModifiers)\n"
    "QContextMenuEvent(QContextMenuEvent.Reason, QPoint, QPoint)\n"
    "QContextMenuEvent(QContextMenuEvent.Reason, QPoint)\n"
    "QContextMenuEvent(QContextMenuEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QContextMenuEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QContextMenuEvent,
        {0}
    },
    {
        sipNameNr_QContextMenuEvent,
        {0, 0, 1},
        7, methods_QContextMenuEvent,
        3, enummembers_QContextMenuEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QContextMenuEvent,
    -1,
    -1,
    supers_QContextMenuEvent,
    0,
    init_type_QContextMenuEvent,
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
    dealloc_QContextMenuEvent,
    0,
    0,
    0,
    release_QContextMenuEvent,
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
