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

#include "sipAPIQtBluetooth.h"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQList0100QLowEnergyDescriptor.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qlowenergydescriptor.sip"
#include <qlowenergydescriptor.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQList0100QLowEnergyDescriptor.cpp"


extern "C" {static void assign_QList_0100QLowEnergyDescriptor(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QLowEnergyDescriptor(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QLowEnergyDescriptor> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QLowEnergyDescriptor> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QLowEnergyDescriptor(SIP_SSIZE_T);}
static void *array_QList_0100QLowEnergyDescriptor(SIP_SSIZE_T sipNrElem)
{
    return new QList<QLowEnergyDescriptor>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QLowEnergyDescriptor(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QLowEnergyDescriptor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QLowEnergyDescriptor>(reinterpret_cast<const QList<QLowEnergyDescriptor> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QLowEnergyDescriptor(void *, int);}
static void release_QList_0100QLowEnergyDescriptor(void *ptr, int)
{
    delete reinterpret_cast<QList<QLowEnergyDescriptor> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QLowEnergyDescriptor(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QLowEnergyDescriptor(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QLowEnergyDescriptor> **sipCppPtr = reinterpret_cast<QList<QLowEnergyDescriptor> **>(sipCppPtrV);

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

    QList<QLowEnergyDescriptor> *ql = new QList<QLowEnergyDescriptor>;
 
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
        QLowEnergyDescriptor *t = reinterpret_cast<QLowEnergyDescriptor *>(
                sipForceConvertToType(itm, sipType_QLowEnergyDescriptor, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QLowEnergyDescriptor' is expected", i,
                    Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QLowEnergyDescriptor, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQList0100QLowEnergyDescriptor.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QLowEnergyDescriptor(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QLowEnergyDescriptor(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QLowEnergyDescriptor> *sipCpp = reinterpret_cast<QList<QLowEnergyDescriptor> *>(sipCppV);

#line 42 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QLowEnergyDescriptor *t = new QLowEnergyDescriptor(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QLowEnergyDescriptor,
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
#line 175 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQList0100QLowEnergyDescriptor.cpp"
}


sipMappedTypeDef sipTypeDef_QtBluetooth_QList_0100QLowEnergyDescriptor = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_3112,
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
    assign_QList_0100QLowEnergyDescriptor,
    array_QList_0100QLowEnergyDescriptor,
    copy_QList_0100QLowEnergyDescriptor,
    release_QList_0100QLowEnergyDescriptor,
    convertTo_QList_0100QLowEnergyDescriptor,
    convertFrom_QList_0100QLowEnergyDescriptor
};
