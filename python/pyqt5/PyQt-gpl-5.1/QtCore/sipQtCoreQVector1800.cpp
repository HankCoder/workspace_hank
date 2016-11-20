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

#line 101 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQVector1800.cpp"



extern "C" {static void assign_QVector_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<int> *>(sipSrc);
}


extern "C" {static void *array_QVector_1800(SIP_SSIZE_T);}
static void *array_QVector_1800(SIP_SSIZE_T sipNrElem)
{
    return new QVector<int>[sipNrElem];
}


extern "C" {static void *copy_QVector_1800(const void *, SIP_SSIZE_T);}
static void *copy_QVector_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<int>(reinterpret_cast<const QVector<int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_1800(void *, int);}
static void release_QVector_1800(void *ptr, int)
{
    delete reinterpret_cast<QVector<int> *>(ptr);
}



extern "C" {static int convertTo_QVector_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<int> **sipCppPtr = reinterpret_cast<QVector<int> **>(sipCppPtrV);

#line 132 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return PyList_Check(sipPy);

    QVector<int> *qv = new QVector<int>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
        qv->append(SIPLong_AsLong(PyList_GET_ITEM(sipPy, i)));
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQVector1800.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_1800(void *, PyObject *);}
static PyObject *convertFrom_QVector_1800(void *sipCppV, PyObject *)
{
   QVector<int> *sipCpp = reinterpret_cast<QVector<int> *>(sipCppV);

#line 105 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj;

        // Convert to a Python long to make sure it doesn't get interpreted as
        // a signed value.
        if ((pobj = SIPLong_FromLong(sipCpp->value(i))) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 115 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQVector1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_30655,
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
    assign_QVector_1800,
    array_QVector_1800,
    copy_QVector_1800,
    release_QVector_1800,
    convertTo_QVector_1800,
    convertFrom_QVector_1800
};
