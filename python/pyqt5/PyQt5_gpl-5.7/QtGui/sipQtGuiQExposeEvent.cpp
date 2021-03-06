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

#line 768 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQExposeEvent.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQExposeEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQExposeEvent.cpp"


class sipQExposeEvent : public QExposeEvent
{
public:
    sipQExposeEvent(const QRegion&);
    sipQExposeEvent(const QExposeEvent&);
    ~sipQExposeEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQExposeEvent(const sipQExposeEvent &);
    sipQExposeEvent &operator = (const sipQExposeEvent &);
};

sipQExposeEvent::sipQExposeEvent(const QRegion& a0): QExposeEvent(a0), sipPySelf(0)
{
}

sipQExposeEvent::sipQExposeEvent(const QExposeEvent& a0): QExposeEvent(a0), sipPySelf(0)
{
}

sipQExposeEvent::~sipQExposeEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QExposeEvent_region, "region(self) -> QRegion");

extern "C" {static PyObject *meth_QExposeEvent_region(PyObject *, PyObject *);}
static PyObject *meth_QExposeEvent_region(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QExposeEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QExposeEvent, &sipCpp))
        {
            QRegion*sipRes;

            sipRes = new QRegion(sipCpp->region());

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExposeEvent, sipName_region, doc_QExposeEvent_region);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QExposeEvent(void *, int);}
static void release_QExposeEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQExposeEvent *>(sipCppV);
    else
        delete reinterpret_cast<QExposeEvent *>(sipCppV);
}


extern "C" {static void dealloc_QExposeEvent(sipSimpleWrapper *);}
static void dealloc_QExposeEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQExposeEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QExposeEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QExposeEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QExposeEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQExposeEvent *sipCpp = 0;

    {
        const QRegion* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegion, &a0))
        {
            sipCpp = new sipQExposeEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QExposeEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QExposeEvent, &a0))
        {
            sipCpp = new sipQExposeEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QExposeEvent[] = {{55, 0, 1}};


static PyMethodDef methods_QExposeEvent[] = {
    {SIP_MLNAME_CAST(sipName_region), meth_QExposeEvent_region, METH_VARARGS, SIP_MLDOC_CAST(doc_QExposeEvent_region)}
};

PyDoc_STRVAR(doc_QExposeEvent, "\1QExposeEvent(QRegion)\n"
    "QExposeEvent(QExposeEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QExposeEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QExposeEvent,
        {0}
    },
    {
        sipNameNr_QExposeEvent,
        {0, 0, 1},
        1, methods_QExposeEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QExposeEvent,
    -1,
    -1,
    supers_QExposeEvent,
    0,
    init_type_QExposeEvent,
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
    dealloc_QExposeEvent,
    0,
    0,
    0,
    release_QExposeEvent,
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
