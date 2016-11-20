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

#line 138 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQVector0600QPair24000100QVariant.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 34 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQVector0600QPair24000100QVariant.cpp"


extern "C" {static void assign_QVector_0600QPair_2400_0100QVariant(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0600QPair_2400_0100QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QPair<qreal,QVariant> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QPair<qreal,QVariant> > *>(sipSrc);
}


extern "C" {static void *array_QVector_0600QPair_2400_0100QVariant(SIP_SSIZE_T);}
static void *array_QVector_0600QPair_2400_0100QVariant(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QPair<qreal,QVariant> >[sipNrElem];
}


extern "C" {static void *copy_QVector_0600QPair_2400_0100QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0600QPair_2400_0100QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QPair<qreal,QVariant> >(reinterpret_cast<const QVector<QPair<qreal,QVariant> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0600QPair_2400_0100QVariant(void *, int);}
static void release_QVector_0600QPair_2400_0100QVariant(void *ptr, int)
{
    delete reinterpret_cast<QVector<QPair<qreal,QVariant> > *>(ptr);
}



extern "C" {static int convertTo_QVector_0600QPair_2400_0100QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0600QPair_2400_0100QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QPair<qreal,QVariant> > **sipCppPtr = reinterpret_cast<QVector<QPair<qreal,QVariant> > **>(sipCppPtrV);

#line 170 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qpycore_qvector.sip"
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

    QVector<QPair<qreal, QVariant> > *qv = new QVector<QPair<qreal, QVariant> >;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *seq = PyIter_Next(iter);

        if (!seq)
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

        Py_ssize_t sub_len;

        if (PySequence_Check(seq)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(seq)
#endif
                && !PyUnicode_Check(seq))
            sub_len = PySequence_Size(seq);
        else
            sub_len = -1;

        if (sub_len != 2)
        {
            if (sub_len < 0)
                PyErr_Format(PyExc_TypeError,
                        "index %zd has type '%s' but a 2 element non-string sequence is expected",
                        i, Py_TYPE(seq)->tp_name);
            else
                PyErr_Format(PyExc_TypeError,
                        "index %zd is a sequence of %zd sub-elements but 2 sub-elements are expected",
                        i, sub_len);

            Py_DECREF(seq);
            delete qv;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        PyObject *itm1 = PySequence_ITEM(seq, 0);

        if (!itm1)
        {
            Py_DECREF(seq);
            delete qv;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        PyErr_Clear();
        qreal s1 = PyFloat_AsDouble(itm1);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "the first sub-element of index %zd has type '%s' but 'float' is expected",
                    i, Py_TYPE(itm1)->tp_name);

            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete qv;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        PyObject *itm2 = PySequence_ITEM(seq, 1);

        if (!itm2)
        {
            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete qv;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        int state2;
        QVariant *s2 = reinterpret_cast<QVariant *>(
                sipForceConvertToType(itm2, sipType_QVariant, sipTransferObj,
                        SIP_NOT_NONE, &state2, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "the second sub-element of index %zd has type '%s' but 'QVariant' is expected",
                    i, Py_TYPE(itm2)->tp_name);

            Py_DECREF(itm2);
            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(QPair<qreal, QVariant>(s1, *s2));

        sipReleaseType(s2, sipType_QVariant, state2);
        Py_DECREF(itm2);
        Py_DECREF(itm1);
        Py_DECREF(seq);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQVector0600QPair24000100QVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0600QPair_2400_0100QVariant(void *, PyObject *);}
static PyObject *convertFrom_QVector_0600QPair_2400_0100QVariant(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QPair<qreal,QVariant> > *sipCpp = reinterpret_cast<QVector<QPair<qreal,QVariant> > *>(sipCppV);

#line 143 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<qreal, QVariant> &p = sipCpp->at(i);
        QVariant *s2 = new QVariant(p.second);
        PyObject *pobj = sipBuildResult(NULL, "(dN)", (double)p.first, s2,
                sipType_QVariant, sipTransferObj);

        if (!pobj)
        {
            delete s2;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 254 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQVector0600QPair24000100QVariant.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0600QPair_2400_0100QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1728,
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
    assign_QVector_0600QPair_2400_0100QVariant,
    array_QVector_0600QPair_2400_0100QVariant,
    copy_QVector_0600QPair_2400_0100QVariant,
    release_QVector_0600QPair_2400_0100QVariant,
    convertTo_QVector_0600QPair_2400_0100QVariant,
    convertFrom_QVector_0600QPair_2400_0100QVariant
};
