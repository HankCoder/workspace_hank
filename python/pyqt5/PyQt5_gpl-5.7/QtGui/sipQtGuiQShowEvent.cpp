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

#line 448 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQShowEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQShowEvent.cpp"


class sipQShowEvent : public QShowEvent
{
public:
    sipQShowEvent();
    sipQShowEvent(const QShowEvent&);
    ~sipQShowEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQShowEvent(const sipQShowEvent &);
    sipQShowEvent &operator = (const sipQShowEvent &);
};

sipQShowEvent::sipQShowEvent(): QShowEvent(), sipPySelf(0)
{
}

sipQShowEvent::sipQShowEvent(const QShowEvent& a0): QShowEvent(a0), sipPySelf(0)
{
}

sipQShowEvent::~sipQShowEvent()
{
    sipCommonDtor(sipPySelf);
}


/* Call the instance's destructor. */
extern "C" {static void release_QShowEvent(void *, int);}
static void release_QShowEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQShowEvent *>(sipCppV);
    else
        delete reinterpret_cast<QShowEvent *>(sipCppV);
}


extern "C" {static void assign_QShowEvent(void *, SIP_SSIZE_T, const void *);}
static void assign_QShowEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QShowEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QShowEvent *>(sipSrc);
}


extern "C" {static void *array_QShowEvent(SIP_SSIZE_T);}
static void *array_QShowEvent(SIP_SSIZE_T sipNrElem)
{
    return new QShowEvent[sipNrElem];
}


extern "C" {static void *copy_QShowEvent(const void *, SIP_SSIZE_T);}
static void *copy_QShowEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QShowEvent(reinterpret_cast<const QShowEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QShowEvent(sipSimpleWrapper *);}
static void dealloc_QShowEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQShowEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QShowEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QShowEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QShowEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQShowEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQShowEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QShowEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QShowEvent, &a0))
        {
            sipCpp = new sipQShowEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QShowEvent[] = {{55, 0, 1}};

PyDoc_STRVAR(doc_QShowEvent, "\1QShowEvent()\n"
    "QShowEvent(QShowEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QShowEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QShowEvent,
        {0}
    },
    {
        sipNameNr_QShowEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QShowEvent,
    -1,
    -1,
    supers_QShowEvent,
    0,
    init_type_QShowEvent,
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
    dealloc_QShowEvent,
    assign_QShowEvent,
    array_QShowEvent,
    copy_QShowEvent,
    release_QShowEvent,
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
