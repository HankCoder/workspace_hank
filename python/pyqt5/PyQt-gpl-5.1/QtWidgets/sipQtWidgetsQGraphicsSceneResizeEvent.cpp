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

#line 219 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneResizeEvent.cpp"

#line 101 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneResizeEvent.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneResizeEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQGraphicsSceneResizeEvent.cpp"


class sipQGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent
{
public:
    sipQGraphicsSceneResizeEvent();
    ~sipQGraphicsSceneResizeEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsSceneResizeEvent(const sipQGraphicsSceneResizeEvent &);
    sipQGraphicsSceneResizeEvent &operator = (const sipQGraphicsSceneResizeEvent &);
};

sipQGraphicsSceneResizeEvent::sipQGraphicsSceneResizeEvent(): QGraphicsSceneResizeEvent(), sipPySelf(0)
{
}

sipQGraphicsSceneResizeEvent::~sipQGraphicsSceneResizeEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QGraphicsSceneResizeEvent_oldSize, "oldSize(self) -> QSizeF");

extern "C" {static PyObject *meth_QGraphicsSceneResizeEvent_oldSize(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneResizeEvent_oldSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneResizeEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneResizeEvent, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->oldSize());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneResizeEvent, sipName_oldSize, doc_QGraphicsSceneResizeEvent_oldSize);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneResizeEvent_newSize, "newSize(self) -> QSizeF");

extern "C" {static PyObject *meth_QGraphicsSceneResizeEvent_newSize(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneResizeEvent_newSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneResizeEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneResizeEvent, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->newSize());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneResizeEvent, sipName_newSize, doc_QGraphicsSceneResizeEvent_newSize);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneResizeEvent(void *, int);}
static void release_QGraphicsSceneResizeEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsSceneResizeEvent *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsSceneResizeEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneResizeEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneResizeEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsSceneResizeEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneResizeEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGraphicsSceneResizeEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsSceneResizeEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGraphicsSceneResizeEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQGraphicsSceneResizeEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneResizeEvent[] = {{146, 255, 1}};


static PyMethodDef methods_QGraphicsSceneResizeEvent[] = {
    {SIP_MLNAME_CAST(sipName_newSize), meth_QGraphicsSceneResizeEvent_newSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneResizeEvent_newSize)},
    {SIP_MLNAME_CAST(sipName_oldSize), meth_QGraphicsSceneResizeEvent_oldSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneResizeEvent_oldSize)}
};

PyDoc_STRVAR(doc_QGraphicsSceneResizeEvent, "\1QGraphicsSceneResizeEvent()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneResizeEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneResizeEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneResizeEvent,
        {0, 0, 1},
        2, methods_QGraphicsSceneResizeEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsSceneResizeEvent,
    -1,
    -1,
    supers_QGraphicsSceneResizeEvent,
    0,
    init_type_QGraphicsSceneResizeEvent,
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
    dealloc_QGraphicsSceneResizeEvent,
    0,
    0,
    0,
    release_QGraphicsSceneResizeEvent,
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
