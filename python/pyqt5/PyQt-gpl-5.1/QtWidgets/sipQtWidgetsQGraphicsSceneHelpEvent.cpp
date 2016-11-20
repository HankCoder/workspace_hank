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

#include "sipAPIQtWidgets.h"

#line 179 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneHelpEvent.cpp"

#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneHelpEvent.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneHelpEvent.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneHelpEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneHelpEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneHelpEvent_scenePos, "scenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneHelpEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHelpEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHelpEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->scenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHelpEvent, sipName_scenePos, doc_QGraphicsSceneHelpEvent_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHelpEvent_screenPos, "screenPos(self) -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneHelpEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHelpEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHelpEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHelpEvent, sipName_screenPos, doc_QGraphicsSceneHelpEvent_screenPos);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneHelpEvent(void *, int);}
static void release_QGraphicsSceneHelpEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsSceneHelpEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneHelpEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneHelpEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneHelpEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneHelpEvent[] = {{146, 255, 1}};


static PyMethodDef methods_QGraphicsSceneHelpEvent[] = {
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneHelpEvent_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHelpEvent_scenePos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneHelpEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHelpEvent_screenPos)}
};


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneHelpEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneHelpEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneHelpEvent,
        {0, 0, 1},
        2, methods_QGraphicsSceneHelpEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneHelpEvent,
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
    dealloc_QGraphicsSceneHelpEvent,
    0,
    0,
    0,
    release_QGraphicsSceneHelpEvent,
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
