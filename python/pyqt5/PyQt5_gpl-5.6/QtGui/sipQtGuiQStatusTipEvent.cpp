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

#line 626 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQStatusTipEvent.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQStatusTipEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQStatusTipEvent.cpp"


class sipQStatusTipEvent : public QStatusTipEvent
{
public:
    sipQStatusTipEvent(const QString&);
    sipQStatusTipEvent(const QStatusTipEvent&);
    ~sipQStatusTipEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQStatusTipEvent(const sipQStatusTipEvent &);
    sipQStatusTipEvent &operator = (const sipQStatusTipEvent &);
};

sipQStatusTipEvent::sipQStatusTipEvent(const QString& a0): QStatusTipEvent(a0), sipPySelf(0)
{
}

sipQStatusTipEvent::sipQStatusTipEvent(const QStatusTipEvent& a0): QStatusTipEvent(a0), sipPySelf(0)
{
}

sipQStatusTipEvent::~sipQStatusTipEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QStatusTipEvent_tip, "tip(self) -> str");

extern "C" {static PyObject *meth_QStatusTipEvent_tip(PyObject *, PyObject *);}
static PyObject *meth_QStatusTipEvent_tip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStatusTipEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStatusTipEvent, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->tip());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStatusTipEvent, sipName_tip, doc_QStatusTipEvent_tip);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStatusTipEvent(void *, int);}
static void release_QStatusTipEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQStatusTipEvent *>(sipCppV);
    else
        delete reinterpret_cast<QStatusTipEvent *>(sipCppV);
}


extern "C" {static void dealloc_QStatusTipEvent(sipSimpleWrapper *);}
static void dealloc_QStatusTipEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQStatusTipEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QStatusTipEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QStatusTipEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStatusTipEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQStatusTipEvent *sipCpp = 0;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new sipQStatusTipEvent(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QStatusTipEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStatusTipEvent, &a0))
        {
            sipCpp = new sipQStatusTipEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStatusTipEvent[] = {{55, 0, 1}};


static PyMethodDef methods_QStatusTipEvent[] = {
    {SIP_MLNAME_CAST(sipName_tip), meth_QStatusTipEvent_tip, METH_VARARGS, SIP_MLDOC_CAST(doc_QStatusTipEvent_tip)}
};

PyDoc_STRVAR(doc_QStatusTipEvent, "\1QStatusTipEvent(str)\n"
    "QStatusTipEvent(QStatusTipEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QStatusTipEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStatusTipEvent,
        {0}
    },
    {
        sipNameNr_QStatusTipEvent,
        {0, 0, 1},
        1, methods_QStatusTipEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStatusTipEvent,
    -1,
    -1,
    supers_QStatusTipEvent,
    0,
    init_type_QStatusTipEvent,
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
    dealloc_QStatusTipEvent,
    0,
    0,
    0,
    release_QStatusTipEvent,
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
