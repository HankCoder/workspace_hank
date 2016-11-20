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

#line 638 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQList1800.cpp"



extern "C" {static void assign_QList_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<int> *>(sipSrc);
}


extern "C" {static void *array_QList_1800(SIP_SSIZE_T);}
static void *array_QList_1800(SIP_SSIZE_T sipNrElem)
{
    return new QList<int>[sipNrElem];
}


extern "C" {static void *copy_QList_1800(const void *, SIP_SSIZE_T);}
static void *copy_QList_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<int>(reinterpret_cast<const QList<int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_1800(void *, int);}
static void release_QList_1800(void *ptr, int)
{
    delete reinterpret_cast<QList<int> *>(ptr);
}



extern "C" {static int convertTo_QList_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<int> **sipCppPtr = reinterpret_cast<QList<int> **>(sipCppPtrV);

#line 665 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qpycore_qlist.sip"
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

    QList<int> *ql = new QList<int>;
 
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

        PyErr_Clear();
        long val = SIPLong_AsLong(itm);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'int' is expected", i,
                    Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        ql->append(val);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 137 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQList1800.cpp"
}


extern "C" {static PyObject *convertFrom_QList_1800(void *, PyObject *);}
static PyObject *convertFrom_QList_1800(void *sipCppV, PyObject *)
{
   QList<int> *sipCpp = reinterpret_cast<QList<int> *>(sipCppV);

#line 642 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj = SIPLong_FromLong(sipCpp->value(i));

        if (!pobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 167 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQList1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_43923,
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
    assign_QList_1800,
    array_QList_1800,
    copy_QList_1800,
    release_QList_1800,
    convertTo_QList_1800,
    convertFrom_QList_1800
};
