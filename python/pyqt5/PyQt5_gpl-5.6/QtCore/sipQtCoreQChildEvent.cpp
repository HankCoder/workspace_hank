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

#include "sipAPIQtCore.h"

#line 244 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQChildEvent.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQChildEvent.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQChildEvent.cpp"


class sipQChildEvent : public QChildEvent
{
public:
    sipQChildEvent(QEvent::Type,QObject*);
    sipQChildEvent(const QChildEvent&);
    ~sipQChildEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQChildEvent(const sipQChildEvent &);
    sipQChildEvent &operator = (const sipQChildEvent &);
};

sipQChildEvent::sipQChildEvent(QEvent::Type a0,QObject*a1): QChildEvent(a0,a1), sipPySelf(0)
{
}

sipQChildEvent::sipQChildEvent(const QChildEvent& a0): QChildEvent(a0), sipPySelf(0)
{
}

sipQChildEvent::~sipQChildEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QChildEvent_child, "child(self) -> QObject");

extern "C" {static PyObject *meth_QChildEvent_child(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->child();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_child, doc_QChildEvent_child);

    return NULL;
}


PyDoc_STRVAR(doc_QChildEvent_added, "added(self) -> bool");

extern "C" {static PyObject *meth_QChildEvent_added(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_added(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->added();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_added, doc_QChildEvent_added);

    return NULL;
}


PyDoc_STRVAR(doc_QChildEvent_polished, "polished(self) -> bool");

extern "C" {static PyObject *meth_QChildEvent_polished(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_polished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->polished();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_polished, doc_QChildEvent_polished);

    return NULL;
}


PyDoc_STRVAR(doc_QChildEvent_removed, "removed(self) -> bool");

extern "C" {static PyObject *meth_QChildEvent_removed(PyObject *, PyObject *);}
static PyObject *meth_QChildEvent_removed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QChildEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QChildEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->removed();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QChildEvent, sipName_removed, doc_QChildEvent_removed);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QChildEvent(void *, int);}
static void release_QChildEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQChildEvent *>(sipCppV);
    else
        delete reinterpret_cast<QChildEvent *>(sipCppV);
}


extern "C" {static void dealloc_QChildEvent(sipSimpleWrapper *);}
static void dealloc_QChildEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQChildEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QChildEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QChildEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QChildEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQChildEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        QObject* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ8", sipType_QEvent_Type, &a0, sipType_QObject, &a1))
        {
            sipCpp = new sipQChildEvent(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QChildEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QChildEvent, &a0))
        {
            sipCpp = new sipQChildEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QChildEvent[] = {{55, 255, 1}};


static PyMethodDef methods_QChildEvent[] = {
    {SIP_MLNAME_CAST(sipName_added), meth_QChildEvent_added, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_added)},
    {SIP_MLNAME_CAST(sipName_child), meth_QChildEvent_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_child)},
    {SIP_MLNAME_CAST(sipName_polished), meth_QChildEvent_polished, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_polished)},
    {SIP_MLNAME_CAST(sipName_removed), meth_QChildEvent_removed, METH_VARARGS, SIP_MLDOC_CAST(doc_QChildEvent_removed)}
};

PyDoc_STRVAR(doc_QChildEvent, "\1QChildEvent(QEvent.Type, QObject)\n"
    "QChildEvent(QChildEvent)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QChildEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QChildEvent,
        {0}
    },
    {
        sipNameNr_QChildEvent,
        {0, 0, 1},
        4, methods_QChildEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QChildEvent,
    -1,
    -1,
    supers_QChildEvent,
    0,
    init_type_QChildEvent,
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
    dealloc_QChildEvent,
    0,
    0,
    0,
    release_QChildEvent,
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
