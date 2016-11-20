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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQGraphicsSceneEvent.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQGraphicsSceneEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQGraphicsSceneEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneEvent_widget, "widget(self) -> QWidget");

extern "C" {static PyObject *meth_QGraphicsSceneEvent_widget(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneEvent_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneEvent, &sipCpp))
        {
            QWidget*sipRes;

            sipRes = sipCpp->widget();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneEvent, sipName_widget, doc_QGraphicsSceneEvent_widget);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneEvent(void *, int);}
static void release_QGraphicsSceneEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsSceneEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneEvent[] = {{55, 0, 1}};


static PyMethodDef methods_QGraphicsSceneEvent[] = {
    {SIP_MLNAME_CAST(sipName_widget), meth_QGraphicsSceneEvent_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneEvent_widget)}
};


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneEvent,
        {0, 0, 1},
        1, methods_QGraphicsSceneEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneEvent,
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
    dealloc_QGraphicsSceneEvent,
    0,
    0,
    0,
    release_QGraphicsSceneEvent,
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
