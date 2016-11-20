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

#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qmdisubwindow.sip"
#include <qmdisubwindow.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"


extern "C" {static void assign_QList_0101QMdiSubWindow(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QMdiSubWindow(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QMdiSubWindow*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QMdiSubWindow*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QMdiSubWindow(SIP_SSIZE_T);}
static void *array_QList_0101QMdiSubWindow(SIP_SSIZE_T sipNrElem)
{
    return new QList<QMdiSubWindow*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QMdiSubWindow(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QMdiSubWindow(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QMdiSubWindow*>(reinterpret_cast<const QList<QMdiSubWindow*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QMdiSubWindow(void *, int);}
static void release_QList_0101QMdiSubWindow(void *ptr, int)
{
    delete reinterpret_cast<QList<QMdiSubWindow*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QMdiSubWindow(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QMdiSubWindow(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QMdiSubWindow*> **sipCppPtr = reinterpret_cast<QList<QMdiSubWindow*> **>(sipCppPtrV);

#line 145 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QMdiSubWindow, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QMdiSubWindow *> *ql = new QList<QMdiSubWindow *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QMdiSubWindow *t = reinterpret_cast<QMdiSubWindow *>(sipConvertToType(itm, sipType_QMdiSubWindow, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 116 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QMdiSubWindow(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QMdiSubWindow(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QMdiSubWindow*> *sipCpp = reinterpret_cast<QList<QMdiSubWindow*> *>(sipCppV);

#line 119 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QMdiSubWindow *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QMdiSubWindow to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QMdiSubWindow, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 149 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QMdiSubWindow = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16309,
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
    assign_QList_0101QMdiSubWindow,
    array_QList_0101QMdiSubWindow,
    copy_QList_0101QMdiSubWindow,
    release_QList_0101QMdiSubWindow,
    convertTo_QList_0101QMdiSubWindow,
    convertFrom_QList_0101QMdiSubWindow
};
