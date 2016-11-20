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

#line 211 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQConicalGradient.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQConicalGradient.cpp"
#line 123 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQConicalGradient.cpp"
#line 138 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 40 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQConicalGradient.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 43 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQConicalGradient.cpp"


PyDoc_STRVAR(doc_QConicalGradient_center, "center(self) -> QPointF");

extern "C" {static PyObject *meth_QConicalGradient_center(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QConicalGradient, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->center());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_center, doc_QConicalGradient_center);

    return NULL;
}


PyDoc_STRVAR(doc_QConicalGradient_angle, "angle(self) -> float");

extern "C" {static PyObject *meth_QConicalGradient_angle(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_angle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QConicalGradient, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->angle();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_angle, doc_QConicalGradient_angle);

    return NULL;
}


PyDoc_STRVAR(doc_QConicalGradient_setCenter, "setCenter(self, Union[QPointF, QPoint])\n"
    "setCenter(self, float, float)");

extern "C" {static PyObject *meth_QConicalGradient_setCenter(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_setCenter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QConicalGradient, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setCenter(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        qreal a0;
        qreal a1;
        QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QConicalGradient, &sipCpp, &a0, &a1))
        {
            sipCpp->setCenter(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_setCenter, doc_QConicalGradient_setCenter);

    return NULL;
}


PyDoc_STRVAR(doc_QConicalGradient_setAngle, "setAngle(self, float)");

extern "C" {static PyObject *meth_QConicalGradient_setAngle(PyObject *, PyObject *);}
static PyObject *meth_QConicalGradient_setAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QConicalGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QConicalGradient, &sipCpp, &a0))
        {
            sipCpp->setAngle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QConicalGradient, sipName_setAngle, doc_QConicalGradient_setAngle);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QConicalGradient(void *, int);}
static void release_QConicalGradient(void *sipCppV,int)
{
    delete reinterpret_cast<QConicalGradient *>(sipCppV);
}


extern "C" {static void assign_QConicalGradient(void *, SIP_SSIZE_T, const void *);}
static void assign_QConicalGradient(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QConicalGradient *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QConicalGradient *>(sipSrc);
}


extern "C" {static void *array_QConicalGradient(SIP_SSIZE_T);}
static void *array_QConicalGradient(SIP_SSIZE_T sipNrElem)
{
    return new QConicalGradient[sipNrElem];
}


extern "C" {static void *copy_QConicalGradient(const void *, SIP_SSIZE_T);}
static void *copy_QConicalGradient(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QConicalGradient(reinterpret_cast<const QConicalGradient *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QConicalGradient(sipSimpleWrapper *);}
static void dealloc_QConicalGradient(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QConicalGradient(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QConicalGradient(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QConicalGradient(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QConicalGradient *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QConicalGradient();

            return sipCpp;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;
        qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1d", sipType_QPointF, &a0, &a0State, &a1))
        {
            sipCpp = new QConicalGradient(*a0,a1);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ddd", &a0, &a1, &a2))
        {
            sipCpp = new QConicalGradient(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QConicalGradient* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QConicalGradient, &a0))
        {
            sipCpp = new QConicalGradient(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QConicalGradient[] = {{49, 255, 1}};


static PyMethodDef methods_QConicalGradient[] = {
    {SIP_MLNAME_CAST(sipName_angle), meth_QConicalGradient_angle, METH_VARARGS, SIP_MLDOC_CAST(doc_QConicalGradient_angle)},
    {SIP_MLNAME_CAST(sipName_center), meth_QConicalGradient_center, METH_VARARGS, SIP_MLDOC_CAST(doc_QConicalGradient_center)},
    {SIP_MLNAME_CAST(sipName_setAngle), meth_QConicalGradient_setAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_QConicalGradient_setAngle)},
    {SIP_MLNAME_CAST(sipName_setCenter), meth_QConicalGradient_setCenter, METH_VARARGS, SIP_MLDOC_CAST(doc_QConicalGradient_setCenter)}
};

PyDoc_STRVAR(doc_QConicalGradient, "\1QConicalGradient()\n"
    "QConicalGradient(Union[QPointF, QPoint], float)\n"
    "QConicalGradient(float, float, float)\n"
    "QConicalGradient(QConicalGradient)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QConicalGradient = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QConicalGradient,
        {0}
    },
    {
        sipNameNr_QConicalGradient,
        {0, 0, 1},
        4, methods_QConicalGradient,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QConicalGradient,
    -1,
    -1,
    supers_QConicalGradient,
    0,
    init_type_QConicalGradient,
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
    dealloc_QConicalGradient,
    assign_QConicalGradient,
    array_QConicalGradient,
    copy_QConicalGradient,
    release_QConicalGradient,
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
