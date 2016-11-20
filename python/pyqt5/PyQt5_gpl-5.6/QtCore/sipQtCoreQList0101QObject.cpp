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

#line 148 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQList0101QObject.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQList0101QObject.cpp"


extern "C" {static void assign_QList_0101QObject(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QObject(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QObject*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QObject*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QObject(SIP_SSIZE_T);}
static void *array_QList_0101QObject(SIP_SSIZE_T sipNrElem)
{
    return new QList<QObject*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QObject(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QObject(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QObject*>(reinterpret_cast<const QList<QObject*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QObject(void *, int);}
static void release_QList_0101QObject(void *ptr, int)
{
    delete reinterpret_cast<QList<QObject*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QObject(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QObject(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QObject*> **sipCppPtr = reinterpret_cast<QList<QObject*> **>(sipCppPtrV);

#line 179 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qpycore_qlist.sip"
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

    QList<QObject *> *ql = new QList<QObject *>;
 
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

        QObject *t = reinterpret_cast<QObject *>(
                sipForceConvertToType(itm, sipType_QObject, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QObject' is expected", i,
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
#line 140 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQList0101QObject.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QObject(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QObject(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QObject*> *sipCpp = reinterpret_cast<QList<QObject*> *>(sipCppV);

#line 152 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QObject *t = sipCpp->at(i);

        // The explicit (void *) cast allows QObject to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QObject,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQList0101QObject.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0101QObject = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_23915,
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
    assign_QList_0101QObject,
    array_QList_0101QObject,
    copy_QList_0101QObject,
    release_QList_0101QObject,
    convertTo_QList_0101QObject,
    convertFrom_QList_0101QObject
};
