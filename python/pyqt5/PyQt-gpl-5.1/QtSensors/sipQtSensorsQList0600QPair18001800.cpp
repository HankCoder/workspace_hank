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

#include "sipAPIQtSensors.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qsensor.sip"
#include <qlist.h>
#include <qpair.h>
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQList0600QPair18001800.cpp"



extern "C" {static void assign_QList_0600QPair_1800_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_1800_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<int,int> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<int,int> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_1800_1800(SIP_SSIZE_T);}
static void *array_QList_0600QPair_1800_1800(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<int,int> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_1800_1800(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_1800_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<int,int> >(reinterpret_cast<const QList<QPair<int,int> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_1800_1800(void *, int);}
static void release_QList_0600QPair_1800_1800(void *ptr, int)
{
    delete reinterpret_cast<QList<QPair<int,int> > *>(ptr);
}



extern "C" {static int convertTo_QList_0600QPair_1800_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_1800_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<int,int> > **sipCppPtr = reinterpret_cast<QList<QPair<int,int> > **>(sipCppPtrV);

#line 59 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qsensor.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *seq = PySequence_ITEM(sipPy, i);

            if (!seq || !PySequence_Check(seq) || PySequence_Size(seq) != 2)
            {
                Py_XDECREF(seq);
                return 0;
            }

            Py_DECREF(seq);
        }

        return 1;
    }

    QList<QPair<int, int> > *ql = new QList<QPair<int, int> >;
    len = PySequence_Size(sipPy);

    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *seq = PySequence_ITEM(sipPy, i);
        PyObject *itm0 = PySequence_ITEM(seq, 0);
        PyObject *itm1 = PySequence_ITEM(seq, 1);

        Py_DECREF(seq);

        if (!itm0 || !itm1)
        {
            Py_XDECREF(itm0);
            Py_XDECREF(itm1);

            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        int first = SIPLong_AsLong(itm0);
        int second = SIPLong_AsLong(itm1);

        Py_DECREF(itm0);
        Py_DECREF(itm1);

        ql->append(QPair<int, int>(first, second));
    }

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 128 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQList0600QPair18001800.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_1800_1800(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_1800_1800(void *sipCppV, PyObject *)
{
   QList<QPair<int,int> > *sipCpp = reinterpret_cast<QList<QPair<int,int> > *>(sipCppV);

#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qsensor.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<int, int> &p = sipCpp->at(i);
        PyObject *pobj;

        if ((pobj = Py_BuildValue((char *)"ii", p.first, p.second)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 161 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQList0600QPair18001800.cpp"
}


sipMappedTypeDef sipTypeDef_QtSensors_QList_0600QPair_1800_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_513,
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
    assign_QList_0600QPair_1800_1800,
    array_QList_0600QPair_1800_1800,
    copy_QList_0600QPair_1800_1800,
    release_QList_0600QPair_1800_1800,
    convertTo_QList_0600QPair_1800_1800,
    convertFrom_QList_0600QPair_1800_1800
};
