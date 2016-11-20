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

#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQList0101QAbstractButton.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qabstractbutton.sip"
#include <qabstractbutton.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQList0101QAbstractButton.cpp"


extern "C" {static void assign_QList_0101QAbstractButton(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QAbstractButton(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QAbstractButton*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QAbstractButton*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QAbstractButton(SIP_SSIZE_T);}
static void *array_QList_0101QAbstractButton(SIP_SSIZE_T sipNrElem)
{
    return new QList<QAbstractButton*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QAbstractButton(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QAbstractButton(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QAbstractButton*>(reinterpret_cast<const QList<QAbstractButton*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QAbstractButton(void *, int);}
static void release_QList_0101QAbstractButton(void *ptr, int)
{
    delete reinterpret_cast<QList<QAbstractButton*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QAbstractButton(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QAbstractButton(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QAbstractButton*> **sipCppPtr = reinterpret_cast<QList<QAbstractButton*> **>(sipCppPtrV);

#line 179 "sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QAbstractButton *> *ql = new QList<QAbstractButton *>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        QAbstractButton *t = reinterpret_cast<QAbstractButton *>(
                sipForceConvertToType(itm, sipType_QAbstractButton, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QAbstractButton' is expected", i,
                    Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 140 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQList0101QAbstractButton.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QAbstractButton(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QAbstractButton(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QAbstractButton*> *sipCpp = reinterpret_cast<QList<QAbstractButton*> *>(sipCppV);

#line 152 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QAbstractButton *t = sipCpp->at(i);

        // The explicit (void *) cast allows QAbstractButton to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QAbstractButton,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQList0101QAbstractButton.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QAbstractButton = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_13733,
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
    assign_QList_0101QAbstractButton,
    array_QList_0101QAbstractButton,
    copy_QList_0101QAbstractButton,
    release_QList_0101QAbstractButton,
    convertTo_QList_0101QAbstractButton,
    convertFrom_QList_0101QAbstractButton
};
