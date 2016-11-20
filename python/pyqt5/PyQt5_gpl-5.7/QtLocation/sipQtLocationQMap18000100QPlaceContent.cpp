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

#include "sipAPIQtLocation.h"

#line 146 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQMap18000100QPlaceContent.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplacecontent.sip"
#include <qplacecontent.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQMap18000100QPlaceContent.cpp"


extern "C" {static void assign_QMap_1800_0100QPlaceContent(void *, SIP_SSIZE_T, const void *);}
static void assign_QMap_1800_0100QPlaceContent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMap<int,QPlaceContent> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMap<int,QPlaceContent> *>(sipSrc);
}


extern "C" {static void *array_QMap_1800_0100QPlaceContent(SIP_SSIZE_T);}
static void *array_QMap_1800_0100QPlaceContent(SIP_SSIZE_T sipNrElem)
{
    return new QMap<int,QPlaceContent>[sipNrElem];
}


extern "C" {static void *copy_QMap_1800_0100QPlaceContent(const void *, SIP_SSIZE_T);}
static void *copy_QMap_1800_0100QPlaceContent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMap<int,QPlaceContent>(reinterpret_cast<const QMap<int,QPlaceContent> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMap_1800_0100QPlaceContent(void *, int);}
static void release_QMap_1800_0100QPlaceContent(void *ptr, int)
{
    delete reinterpret_cast<QMap<int,QPlaceContent> *>(ptr);
}



extern "C" {static int convertTo_QMap_1800_0100QPlaceContent(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMap_1800_0100QPlaceContent(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMap<int,QPlaceContent> **sipCppPtr = reinterpret_cast<QMap<int,QPlaceContent> **>(sipCppPtrV);

#line 201 "sip/QtCore/qpycore_qmap.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QMap<int, QPlaceContent> *qm = new QMap<int, QPlaceContent>;

    Py_ssize_t pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        PyErr_Clear();
        int k = SIPLong_AsLong(kobj);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict key has type '%s' but 'int' is expected",
                    Py_TYPE(kobj)->tp_name);

            delete qm;
            *sipIsErr = 1;

            return 0;
        }

        int vstate;
        QPlaceContent *v = reinterpret_cast<QPlaceContent *>(
                sipForceConvertToType(vobj, sipType_QPlaceContent, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict value has type '%s' but 'QPlaceContent' is expected",
                    Py_TYPE(vobj)->tp_name);

            delete qm;

            return 0;
        }

        qm->insert(k, *v);

        sipReleaseType(v, sipType_QPlaceContent, vstate);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQMap18000100QPlaceContent.cpp"
}


extern "C" {static PyObject *convertFrom_QMap_1800_0100QPlaceContent(void *, PyObject *);}
static PyObject *convertFrom_QMap_1800_0100QPlaceContent(void *sipCppV, PyObject *sipTransferObj)
{
   QMap<int,QPlaceContent> *sipCpp = reinterpret_cast<QMap<int,QPlaceContent> *>(sipCppV);

#line 150 "sip/QtCore/qpycore_qmap.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QMap<int, QPlaceContent>::const_iterator it = sipCpp->constBegin();
    QMap<int, QPlaceContent>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *kobj = SIPLong_FromLong(it.key());

        if (!kobj)
        {
            Py_DECREF(d);

            return 0;
        }

        QPlaceContent *v = new QPlaceContent(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QPlaceContent,
                sipTransferObj);

        if (!vobj)
        {
            delete v;
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }

        ++it;
    }

    return d;
#line 179 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQMap18000100QPlaceContent.cpp"
}


sipMappedTypeDef sipTypeDef_QtLocation_QMap_1800_0100QPlaceContent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1584,
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
    assign_QMap_1800_0100QPlaceContent,
    array_QMap_1800_0100QPlaceContent,
    copy_QMap_1800_0100QPlaceContent,
    release_QMap_1800_0100QPlaceContent,
    convertTo_QMap_1800_0100QPlaceContent,
    convertFrom_QMap_1800_0100QPlaceContent
};