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

#include "sipAPIQtCore.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQList0100QtDayOfWeek.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQList0100QtDayOfWeek.cpp"


extern "C" {static void assign_QList_0100Qt_DayOfWeek(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100Qt_DayOfWeek(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<Qt::DayOfWeek> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<Qt::DayOfWeek> *>(sipSrc);
}


extern "C" {static void *array_QList_0100Qt_DayOfWeek(SIP_SSIZE_T);}
static void *array_QList_0100Qt_DayOfWeek(SIP_SSIZE_T sipNrElem)
{
    return new QList<Qt::DayOfWeek>[sipNrElem];
}


extern "C" {static void *copy_QList_0100Qt_DayOfWeek(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100Qt_DayOfWeek(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<Qt::DayOfWeek>(reinterpret_cast<const QList<Qt::DayOfWeek> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100Qt_DayOfWeek(void *, int);}
static void release_QList_0100Qt_DayOfWeek(void *ptr, int)
{
    delete reinterpret_cast<QList<Qt::DayOfWeek> *>(ptr);
}



extern "C" {static int convertTo_QList_0100Qt_DayOfWeek(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100Qt_DayOfWeek(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<Qt::DayOfWeek> **sipCppPtr = reinterpret_cast<QList<Qt::DayOfWeek> **>(sipCppPtrV);

#line 59 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_Qt_DayOfWeek, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<Qt::DayOfWeek> *ql = new QList<Qt::DayOfWeek>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        Qt::DayOfWeek *t = reinterpret_cast<Qt::DayOfWeek *>(sipConvertToType(itm, sipType_Qt_DayOfWeek, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_Qt_DayOfWeek, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_Qt_DayOfWeek, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQList0100QtDayOfWeek.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100Qt_DayOfWeek(void *, PyObject *);}
static PyObject *convertFrom_QList_0100Qt_DayOfWeek(void *sipCppV, PyObject *sipTransferObj)
{
   QList<Qt::DayOfWeek> *sipCpp = reinterpret_cast<QList<Qt::DayOfWeek> *>(sipCppV);

#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        Qt::DayOfWeek *t = new Qt::DayOfWeek(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_Qt_DayOfWeek, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 155 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQList0100QtDayOfWeek.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100Qt_DayOfWeek = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_9577,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100Qt_DayOfWeek,
    array_QList_0100Qt_DayOfWeek,
    copy_QList_0100Qt_DayOfWeek,
    release_QList_0100Qt_DayOfWeek,
    convertTo_QList_0100Qt_DayOfWeek,
    convertFrom_QList_0100Qt_DayOfWeek
};
