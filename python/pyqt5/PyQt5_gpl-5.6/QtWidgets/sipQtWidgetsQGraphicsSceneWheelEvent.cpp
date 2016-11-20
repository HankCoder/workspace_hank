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

#include "sipAPIQtWidgets.h"

#line 119 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsSceneWheelEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_pos, "pos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_pos, doc_QGraphicsSceneWheelEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_scenePos, "scenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->scenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_scenePos, doc_QGraphicsSceneWheelEvent_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_screenPos, "screenPos(self) -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_screenPos, doc_QGraphicsSceneWheelEvent_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_buttons, "buttons(self) -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons(sipCpp->buttons());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_buttons, doc_QGraphicsSceneWheelEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_modifiers, "modifiers(self) -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_modifiers, doc_QGraphicsSceneWheelEvent_modifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_delta, "delta(self) -> int");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_delta(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_delta(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->delta();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_delta, doc_QGraphicsSceneWheelEvent_delta);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneWheelEvent_orientation, "orientation(self) -> Qt.Orientation");

extern "C" {static PyObject *meth_QGraphicsSceneWheelEvent_orientation(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneWheelEvent_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneWheelEvent, &sipCpp))
        {
            Qt::Orientation sipRes;

            sipRes = sipCpp->orientation();

            return sipConvertFromEnum(sipRes,sipType_Qt_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneWheelEvent, sipName_orientation, doc_QGraphicsSceneWheelEvent_orientation);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneWheelEvent(void *, int);}
static void release_QGraphicsSceneWheelEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsSceneWheelEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneWheelEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneWheelEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneWheelEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneWheelEvent[] = {{149, 255, 1}};


static PyMethodDef methods_QGraphicsSceneWheelEvent[] = {
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneWheelEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_delta), meth_QGraphicsSceneWheelEvent_delta, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_delta)},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneWheelEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QGraphicsSceneWheelEvent_orientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_orientation)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneWheelEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_pos)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneWheelEvent_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_scenePos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneWheelEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneWheelEvent_screenPos)}
};


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneWheelEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneWheelEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneWheelEvent,
        {0, 0, 1},
        7, methods_QGraphicsSceneWheelEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneWheelEvent,
    0,
    0,
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
    dealloc_QGraphicsSceneWheelEvent,
    0,
    0,
    0,
    release_QGraphicsSceneWheelEvent,
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
