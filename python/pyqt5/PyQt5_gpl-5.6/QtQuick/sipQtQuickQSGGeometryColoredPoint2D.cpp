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

#include "sipAPIQtQuick.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 255 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGGeometryColoredPoint2D.cpp"



PyDoc_STRVAR(doc_QSGGeometry_ColoredPoint2D_set, "set(self, float, float, int, int, int, int)");

extern "C" {static PyObject *meth_QSGGeometry_ColoredPoint2D_set(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_ColoredPoint2D_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        float a1;
        uchar a2;
        uchar a3;
        uchar a4;
        uchar a5;
        QSGGeometry::ColoredPoint2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BffMMMM", &sipSelf, sipType_QSGGeometry_ColoredPoint2D, &sipCpp, &a0, &a1, &a2, &a3, &a4, &a5))
        {
            sipCpp->set(a0,a1,a2,a3,a4,a5);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColoredPoint2D, sipName_set, doc_QSGGeometry_ColoredPoint2D_set);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometry_ColoredPoint2D(void *, int);}
static void release_QSGGeometry_ColoredPoint2D(void *sipCppV,int)
{
    delete reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipCppV);
}


extern "C" {static void assign_QSGGeometry_ColoredPoint2D(void *, SIP_SSIZE_T, const void *);}
static void assign_QSGGeometry_ColoredPoint2D(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSGGeometry::ColoredPoint2D *>(sipSrc);
}


extern "C" {static void *array_QSGGeometry_ColoredPoint2D(SIP_SSIZE_T);}
static void *array_QSGGeometry_ColoredPoint2D(SIP_SSIZE_T sipNrElem)
{
    return new QSGGeometry::ColoredPoint2D[sipNrElem];
}


extern "C" {static void *copy_QSGGeometry_ColoredPoint2D(const void *, SIP_SSIZE_T);}
static void *copy_QSGGeometry_ColoredPoint2D(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSGGeometry::ColoredPoint2D(reinterpret_cast<const QSGGeometry::ColoredPoint2D *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGGeometry_ColoredPoint2D(sipSimpleWrapper *);}
static void dealloc_QSGGeometry_ColoredPoint2D(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGGeometry_ColoredPoint2D(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSGGeometry_ColoredPoint2D(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometry_ColoredPoint2D(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSGGeometry::ColoredPoint2D *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSGGeometry::ColoredPoint2D();

            return sipCpp;
        }
    }

    {
        const QSGGeometry::ColoredPoint2D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGGeometry_ColoredPoint2D, &a0))
        {
            sipCpp = new QSGGeometry::ColoredPoint2D(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGGeometry_ColoredPoint2D[] = {
    {SIP_MLNAME_CAST(sipName_set), meth_QSGGeometry_ColoredPoint2D_set, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_ColoredPoint2D_set)}
};


extern "C" {static PyObject *varget_QSGGeometry_ColoredPoint2D_a(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_ColoredPoint2D_a(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = sipCpp->a;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_QSGGeometry_ColoredPoint2D_a(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_ColoredPoint2D_a(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = (unsigned char)sipLong_AsUnsignedLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->a = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_ColoredPoint2D_b(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_ColoredPoint2D_b(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = sipCpp->b;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_QSGGeometry_ColoredPoint2D_b(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_ColoredPoint2D_b(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = (unsigned char)sipLong_AsUnsignedLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->b = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_ColoredPoint2D_g(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_ColoredPoint2D_g(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = sipCpp->g;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_QSGGeometry_ColoredPoint2D_g(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_ColoredPoint2D_g(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = (unsigned char)sipLong_AsUnsignedLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->g = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_ColoredPoint2D_r(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_ColoredPoint2D_r(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = sipCpp->r;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_QSGGeometry_ColoredPoint2D_r(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_ColoredPoint2D_r(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = (unsigned char)sipLong_AsUnsignedLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->r = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_ColoredPoint2D_x(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_ColoredPoint2D_x(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_ColoredPoint2D_x(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_ColoredPoint2D_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_ColoredPoint2D_y(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_ColoredPoint2D_y(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_ColoredPoint2D_y(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_ColoredPoint2D_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
    QSGGeometry::ColoredPoint2D *sipCpp = reinterpret_cast<QSGGeometry::ColoredPoint2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_QSGGeometry_ColoredPoint2D[] = {
    {InstanceVariable, sipName_a, (PyMethodDef *)varget_QSGGeometry_ColoredPoint2D_a, (PyMethodDef *)varset_QSGGeometry_ColoredPoint2D_a, NULL, NULL},
    {InstanceVariable, sipName_b, (PyMethodDef *)varget_QSGGeometry_ColoredPoint2D_b, (PyMethodDef *)varset_QSGGeometry_ColoredPoint2D_b, NULL, NULL},
    {InstanceVariable, sipName_g, (PyMethodDef *)varget_QSGGeometry_ColoredPoint2D_g, (PyMethodDef *)varset_QSGGeometry_ColoredPoint2D_g, NULL, NULL},
    {InstanceVariable, sipName_r, (PyMethodDef *)varget_QSGGeometry_ColoredPoint2D_r, (PyMethodDef *)varset_QSGGeometry_ColoredPoint2D_r, NULL, NULL},
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_QSGGeometry_ColoredPoint2D_x, (PyMethodDef *)varset_QSGGeometry_ColoredPoint2D_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_QSGGeometry_ColoredPoint2D_y, (PyMethodDef *)varset_QSGGeometry_ColoredPoint2D_y, NULL, NULL},
};

PyDoc_STRVAR(doc_QSGGeometry_ColoredPoint2D, "\1QSGGeometry.ColoredPoint2D()\n"
    "QSGGeometry.ColoredPoint2D(QSGGeometry.ColoredPoint2D)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGGeometry_ColoredPoint2D = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometry__ColoredPoint2D,
        {0}
    },
    {
        sipNameNr_ColoredPoint2D,
        {40, 255, 0},
        1, methods_QSGGeometry_ColoredPoint2D,
        0, 0,
        6, variables_QSGGeometry_ColoredPoint2D,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometry_ColoredPoint2D,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGGeometry_ColoredPoint2D,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QSGGeometry_ColoredPoint2D,
    assign_QSGGeometry_ColoredPoint2D,
    array_QSGGeometry_ColoredPoint2D,
    copy_QSGGeometry_ColoredPoint2D,
    release_QSGGeometry_ColoredPoint2D,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
