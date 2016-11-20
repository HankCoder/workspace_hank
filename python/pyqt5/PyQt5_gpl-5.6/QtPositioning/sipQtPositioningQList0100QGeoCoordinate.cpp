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

#include "sipAPIQtPositioning.h"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtPositioning/sipQtPositioningQList0100QGeoCoordinate.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtPositioning/sipQtPositioningQList0100QGeoCoordinate.cpp"


extern "C" {static void assign_QList_0100QGeoCoordinate(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QGeoCoordinate(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGeoCoordinate> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGeoCoordinate> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QGeoCoordinate(SIP_SSIZE_T);}
static void *array_QList_0100QGeoCoordinate(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGeoCoordinate>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QGeoCoordinate(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QGeoCoordinate(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGeoCoordinate>(reinterpret_cast<const QList<QGeoCoordinate> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QGeoCoordinate(void *, int);}
static void release_QList_0100QGeoCoordinate(void *ptr, int)
{
    delete reinterpret_cast<QList<QGeoCoordinate> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QGeoCoordinate(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QGeoCoordinate(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGeoCoordinate> **sipCppPtr = reinterpret_cast<QList<QGeoCoordinate> **>(sipCppPtrV);

#line 68 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QGeoCoordinate> *ql = new QList<QGeoCoordinate>;
 
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

        int state;
        QGeoCoordinate *t = reinterpret_cast<QGeoCoordinate *>(
                sipForceConvertToType(itm, sipType_QGeoCoordinate, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QGeoCoordinate' is expected", i,
                    Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QGeoCoordinate, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtPositioning/sipQtPositioningQList0100QGeoCoordinate.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QGeoCoordinate(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QGeoCoordinate(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QGeoCoordinate> *sipCpp = reinterpret_cast<QList<QGeoCoordinate> *>(sipCppV);

#line 42 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGeoCoordinate *t = new QGeoCoordinate(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QGeoCoordinate,
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
#line 175 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtPositioning/sipQtPositioningQList0100QGeoCoordinate.cpp"
}


sipMappedTypeDef sipTypeDef_QtPositioning_QList_0100QGeoCoordinate = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1103,
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
    assign_QList_0100QGeoCoordinate,
    array_QList_0100QGeoCoordinate,
    copy_QList_0100QGeoCoordinate,
    release_QList_0100QGeoCoordinate,
    convertTo_QList_0100QGeoCoordinate,
    convertFrom_QList_0100QGeoCoordinate
};
