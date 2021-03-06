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

#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQVector0100QPoint.cpp"

#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQVector0100QPoint.cpp"


extern "C" {static void assign_QVector_0100QPoint(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QPoint(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QPoint> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QPoint> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QPoint(SIP_SSIZE_T);}
static void *array_QVector_0100QPoint(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QPoint>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QPoint(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QPoint(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QPoint>(reinterpret_cast<const QVector<QPoint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QPoint(void *, int);}
static void release_QVector_0100QPoint(void *ptr, int)
{
    delete reinterpret_cast<QVector<QPoint> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QPoint(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QPoint(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QPoint> **sipCppPtr = reinterpret_cast<QVector<QPoint> **>(sipCppPtrV);

#line 58 "sip/QtCore/qpycore_qvector.sip"
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

    QVector<QPoint> *qv = new QVector<QPoint>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QPoint *t = reinterpret_cast<QPoint *>(
                sipForceConvertToType(itm, sipType_QPoint, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QPoint' is expected", i,
                    Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QPoint, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQVector0100QPoint.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QPoint(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QPoint(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QPoint> *sipCpp = reinterpret_cast<QVector<QPoint> *>(sipCppV);

#line 32 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QPoint *t = new QPoint(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QPoint,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 175 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQVector0100QPoint.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QPoint = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_20684,
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
    assign_QVector_0100QPoint,
    array_QVector_0100QPoint,
    copy_QVector_0100QPoint,
    release_QVector_0100QPoint,
    convertTo_QVector_0100QPoint,
    convertFrom_QVector_0100QPoint
};
