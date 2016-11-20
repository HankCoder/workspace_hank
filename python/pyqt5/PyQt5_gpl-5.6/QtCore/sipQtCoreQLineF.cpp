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

#line 92 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qline.sip"
#include <qline.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQLineF.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qline.sip"
#include <qline.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQLineF.cpp"
#line 95 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQLineF.cpp"


PyDoc_STRVAR(doc_QLineF_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QLineF_isNull(PyObject *, PyObject *);}
static PyObject *meth_QLineF_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_isNull, doc_QLineF_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_length, "length(self) -> float");

extern "C" {static PyObject *meth_QLineF_length(PyObject *, PyObject *);}
static PyObject *meth_QLineF_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->length();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_length, doc_QLineF_length);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_unitVector, "unitVector(self) -> QLineF");

extern "C" {static PyObject *meth_QLineF_unitVector(PyObject *, PyObject *);}
static PyObject *meth_QLineF_unitVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            QLineF*sipRes;

            sipRes = new QLineF(sipCpp->unitVector());

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_unitVector, doc_QLineF_unitVector);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_intersect, "intersect(self, QLineF, Union[QPointF, QPoint]) -> QLineF.IntersectType");

extern "C" {static PyObject *meth_QLineF_intersect(PyObject *, PyObject *);}
static PyObject *meth_QLineF_intersect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF* a0;
        QPointF* a1;
        int a1State = 0;
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J0", &sipSelf, sipType_QLineF, &sipCpp, sipType_QLineF, &a0, sipType_QPointF, &a1, &a1State))
        {
            QLineF::IntersectType sipRes;

            sipRes = sipCpp->intersect(*a0,a1);
            sipReleaseType(a1,sipType_QPointF,a1State);

            return sipConvertFromEnum(sipRes,sipType_QLineF_IntersectType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_intersect, doc_QLineF_intersect);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_x1, "x1(self) -> float");

extern "C" {static PyObject *meth_QLineF_x1(PyObject *, PyObject *);}
static PyObject *meth_QLineF_x1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->x1();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_x1, doc_QLineF_x1);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_y1, "y1(self) -> float");

extern "C" {static PyObject *meth_QLineF_y1(PyObject *, PyObject *);}
static PyObject *meth_QLineF_y1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->y1();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_y1, doc_QLineF_y1);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_x2, "x2(self) -> float");

extern "C" {static PyObject *meth_QLineF_x2(PyObject *, PyObject *);}
static PyObject *meth_QLineF_x2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->x2();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_x2, doc_QLineF_x2);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_y2, "y2(self) -> float");

extern "C" {static PyObject *meth_QLineF_y2(PyObject *, PyObject *);}
static PyObject *meth_QLineF_y2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->y2();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_y2, doc_QLineF_y2);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_p1, "p1(self) -> QPointF");

extern "C" {static PyObject *meth_QLineF_p1(PyObject *, PyObject *);}
static PyObject *meth_QLineF_p1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->p1());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_p1, doc_QLineF_p1);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_p2, "p2(self) -> QPointF");

extern "C" {static PyObject *meth_QLineF_p2(PyObject *, PyObject *);}
static PyObject *meth_QLineF_p2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->p2());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_p2, doc_QLineF_p2);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_dx, "dx(self) -> float");

extern "C" {static PyObject *meth_QLineF_dx(PyObject *, PyObject *);}
static PyObject *meth_QLineF_dx(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->dx();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_dx, doc_QLineF_dx);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_dy, "dy(self) -> float");

extern "C" {static PyObject *meth_QLineF_dy(PyObject *, PyObject *);}
static PyObject *meth_QLineF_dy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->dy();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_dy, doc_QLineF_dy);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_normalVector, "normalVector(self) -> QLineF");

extern "C" {static PyObject *meth_QLineF_normalVector(PyObject *, PyObject *);}
static PyObject *meth_QLineF_normalVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            QLineF*sipRes;

            sipRes = new QLineF(sipCpp->normalVector());

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_normalVector, doc_QLineF_normalVector);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_translate, "translate(self, Union[QPointF, QPoint])\n"
    "translate(self, float, float)");

extern "C" {static PyObject *meth_QLineF_translate(PyObject *, PyObject *);}
static PyObject *meth_QLineF_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLineF, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->translate(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        qreal a0;
        qreal a1;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QLineF, &sipCpp, &a0, &a1))
        {
            sipCpp->translate(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_translate, doc_QLineF_translate);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_setLength, "setLength(self, float)");

extern "C" {static PyObject *meth_QLineF_setLength(PyObject *, PyObject *);}
static PyObject *meth_QLineF_setLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QLineF, &sipCpp, &a0))
        {
            sipCpp->setLength(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_setLength, doc_QLineF_setLength);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_pointAt, "pointAt(self, float) -> QPointF");

extern "C" {static PyObject *meth_QLineF_pointAt(PyObject *, PyObject *);}
static PyObject *meth_QLineF_pointAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QLineF, &sipCpp, &a0))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->pointAt(a0));

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_pointAt, doc_QLineF_pointAt);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_toLine, "toLine(self) -> QLine");

extern "C" {static PyObject *meth_QLineF_toLine(PyObject *, PyObject *);}
static PyObject *meth_QLineF_toLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            QLine*sipRes;

            sipRes = new QLine(sipCpp->toLine());

            return sipConvertFromNewType(sipRes,sipType_QLine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_toLine, doc_QLineF_toLine);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_fromPolar, "fromPolar(float, float) -> QLineF");

extern "C" {static PyObject *meth_QLineF_fromPolar(PyObject *, PyObject *);}
static PyObject *meth_QLineF_fromPolar(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "dd", &a0, &a1))
        {
            QLineF*sipRes;

            sipRes = new QLineF(QLineF::fromPolar(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_fromPolar, doc_QLineF_fromPolar);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_angle, "angle(self) -> float");

extern "C" {static PyObject *meth_QLineF_angle(PyObject *, PyObject *);}
static PyObject *meth_QLineF_angle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLineF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->angle();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_angle, doc_QLineF_angle);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_setAngle, "setAngle(self, float)");

extern "C" {static PyObject *meth_QLineF_setAngle(PyObject *, PyObject *);}
static PyObject *meth_QLineF_setAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QLineF, &sipCpp, &a0))
        {
            sipCpp->setAngle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_setAngle, doc_QLineF_setAngle);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_angleTo, "angleTo(self, QLineF) -> float");

extern "C" {static PyObject *meth_QLineF_angleTo(PyObject *, PyObject *);}
static PyObject *meth_QLineF_angleTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLineF* a0;
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLineF, &sipCpp, sipType_QLineF, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->angleTo(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_angleTo, doc_QLineF_angleTo);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_translated, "translated(self, Union[QPointF, QPoint]) -> QLineF\n"
    "translated(self, float, float) -> QLineF");

extern "C" {static PyObject *meth_QLineF_translated(PyObject *, PyObject *);}
static PyObject *meth_QLineF_translated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLineF, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            QLineF*sipRes;

            sipRes = new QLineF(sipCpp->translated(*a0));
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    {
        qreal a0;
        qreal a1;
        const QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QLineF, &sipCpp, &a0, &a1))
        {
            QLineF*sipRes;

            sipRes = new QLineF(sipCpp->translated(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_translated, doc_QLineF_translated);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_setP1, "setP1(self, Union[QPointF, QPoint])");

extern "C" {static PyObject *meth_QLineF_setP1(PyObject *, PyObject *);}
static PyObject *meth_QLineF_setP1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLineF, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setP1(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_setP1, doc_QLineF_setP1);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_setP2, "setP2(self, Union[QPointF, QPoint])");

extern "C" {static PyObject *meth_QLineF_setP2(PyObject *, PyObject *);}
static PyObject *meth_QLineF_setP2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLineF, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setP2(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_setP2, doc_QLineF_setP2);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_setPoints, "setPoints(self, Union[QPointF, QPoint], Union[QPointF, QPoint])");

extern "C" {static PyObject *meth_QLineF_setPoints(PyObject *, PyObject *);}
static PyObject *meth_QLineF_setPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QLineF, &sipCpp, sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State))
        {
            sipCpp->setPoints(*a0,*a1);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_setPoints, doc_QLineF_setPoints);

    return NULL;
}


PyDoc_STRVAR(doc_QLineF_setLine, "setLine(self, float, float, float, float)");

extern "C" {static PyObject *meth_QLineF_setLine(PyObject *, PyObject *);}
static PyObject *meth_QLineF_setLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        QLineF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QLineF, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setLine(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLineF, sipName_setLine, doc_QLineF_setLine);

    return NULL;
}


extern "C" {static PyObject *slot_QLineF___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLineF___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLineF *sipCpp = reinterpret_cast<QLineF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLineF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLineF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLineF, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QLineF::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QLineF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLineF___repr__(PyObject *);}
static PyObject *slot_QLineF___repr__(PyObject *sipSelf)
{
    QLineF *sipCpp = reinterpret_cast<QLineF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLineF));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 123 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qline.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt5.QtCore.QLineF()");
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QLineF()");
        #endif
        }
        else
        {
            PyObject *x1 = PyFloat_FromDouble(sipCpp->x1());
            PyObject *y1 = PyFloat_FromDouble(sipCpp->y1());
            PyObject *x2 = PyFloat_FromDouble(sipCpp->x2());
            PyObject *y2 = PyFloat_FromDouble(sipCpp->y2());
        
            if (x1 && y1 && x2 && y2)
            {
        #if PY_MAJOR_VERSION >= 3
                sipRes = PyUnicode_FromFormat("PyQt5.QtCore.QLineF(%R, %R, %R, %R)",
                        x1, y1, x2, y2);
        #else
                sipRes = PyString_FromString("PyQt5.QtCore.QLineF(");
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(x1));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(y1));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(x2));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(y2));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
            }
        
            Py_XDECREF(x1);
            Py_XDECREF(y1);
            Py_XDECREF(x2);
            Py_XDECREF(y2);
        }
#line 908 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQLineF.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLineF___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLineF___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLineF *sipCpp = reinterpret_cast<QLineF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLineF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLineF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLineF, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QLineF::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QLineF,sipSelf,sipArg);
}


extern "C" {static int slot_QLineF___bool__(PyObject *);}
static int slot_QLineF___bool__(PyObject *sipSelf)
{
    QLineF *sipCpp = reinterpret_cast<QLineF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLineF));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qline.sip"
        sipRes = !sipCpp->isNull();
#line 965 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQLineF.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLineF(void *, int);}
static void release_QLineF(void *sipCppV,int)
{
    delete reinterpret_cast<QLineF *>(sipCppV);
}


extern "C" {static PyObject *pickle_QLineF(void *);}
static PyObject *pickle_QLineF(void *sipCppV)
{
    QLineF *sipCpp = reinterpret_cast<QLineF *>(sipCppV);
    PyObject *sipRes;

#line 96 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qline.sip"
    sipRes = Py_BuildValue((char *)"dddd", sipCpp->x1(), sipCpp->y1(), sipCpp->x2(), sipCpp->y2());
#line 991 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQLineF.cpp"

    return sipRes;
}


extern "C" {static void assign_QLineF(void *, SIP_SSIZE_T, const void *);}
static void assign_QLineF(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLineF *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLineF *>(sipSrc);
}


extern "C" {static void *array_QLineF(SIP_SSIZE_T);}
static void *array_QLineF(SIP_SSIZE_T sipNrElem)
{
    return new QLineF[sipNrElem];
}


extern "C" {static void *copy_QLineF(const void *, SIP_SSIZE_T);}
static void *copy_QLineF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLineF(reinterpret_cast<const QLineF *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLineF(sipSimpleWrapper *);}
static void dealloc_QLineF(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLineF(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLineF(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLineF(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLineF *sipCpp = 0;

    {
        const QLine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLine, &a0))
        {
            sipCpp = new QLineF(*a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QLineF();

            return sipCpp;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State))
        {
            sipCpp = new QLineF(*a0,*a1);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddd", &a0, &a1, &a2, &a3))
        {
            sipCpp = new QLineF(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const QLineF* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLineF, &a0))
        {
            sipCpp = new QLineF(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLineF[] = {
    {(void *)slot_QLineF___eq__, eq_slot},
    {(void *)slot_QLineF___repr__, repr_slot},
    {(void *)slot_QLineF___ne__, ne_slot},
    {(void *)slot_QLineF___bool__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QLineF[] = {
    {SIP_MLNAME_CAST(sipName_angle), meth_QLineF_angle, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_angle)},
    {SIP_MLNAME_CAST(sipName_angleTo), meth_QLineF_angleTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_angleTo)},
    {SIP_MLNAME_CAST(sipName_dx), meth_QLineF_dx, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_dx)},
    {SIP_MLNAME_CAST(sipName_dy), meth_QLineF_dy, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_dy)},
    {SIP_MLNAME_CAST(sipName_fromPolar), meth_QLineF_fromPolar, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_fromPolar)},
    {SIP_MLNAME_CAST(sipName_intersect), meth_QLineF_intersect, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_intersect)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QLineF_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_isNull)},
    {SIP_MLNAME_CAST(sipName_length), meth_QLineF_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_length)},
    {SIP_MLNAME_CAST(sipName_normalVector), meth_QLineF_normalVector, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_normalVector)},
    {SIP_MLNAME_CAST(sipName_p1), meth_QLineF_p1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_p1)},
    {SIP_MLNAME_CAST(sipName_p2), meth_QLineF_p2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_p2)},
    {SIP_MLNAME_CAST(sipName_pointAt), meth_QLineF_pointAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_pointAt)},
    {SIP_MLNAME_CAST(sipName_setAngle), meth_QLineF_setAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_setAngle)},
    {SIP_MLNAME_CAST(sipName_setLength), meth_QLineF_setLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_setLength)},
    {SIP_MLNAME_CAST(sipName_setLine), meth_QLineF_setLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_setLine)},
    {SIP_MLNAME_CAST(sipName_setP1), meth_QLineF_setP1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_setP1)},
    {SIP_MLNAME_CAST(sipName_setP2), meth_QLineF_setP2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_setP2)},
    {SIP_MLNAME_CAST(sipName_setPoints), meth_QLineF_setPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_setPoints)},
    {SIP_MLNAME_CAST(sipName_toLine), meth_QLineF_toLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_toLine)},
    {SIP_MLNAME_CAST(sipName_translate), meth_QLineF_translate, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_translate)},
    {SIP_MLNAME_CAST(sipName_translated), meth_QLineF_translated, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_translated)},
    {SIP_MLNAME_CAST(sipName_unitVector), meth_QLineF_unitVector, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_unitVector)},
    {SIP_MLNAME_CAST(sipName_x1), meth_QLineF_x1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_x1)},
    {SIP_MLNAME_CAST(sipName_x2), meth_QLineF_x2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_x2)},
    {SIP_MLNAME_CAST(sipName_y1), meth_QLineF_y1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_y1)},
    {SIP_MLNAME_CAST(sipName_y2), meth_QLineF_y2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLineF_y2)}
};

static sipEnumMemberDef enummembers_QLineF[] = {
    {sipName_BoundedIntersection, static_cast<int>(QLineF::BoundedIntersection), 105},
    {sipName_NoIntersection, static_cast<int>(QLineF::NoIntersection), 105},
    {sipName_UnboundedIntersection, static_cast<int>(QLineF::UnboundedIntersection), 105},
};

PyDoc_STRVAR(doc_QLineF, "\1QLineF(QLine)\n"
    "QLineF()\n"
    "QLineF(Union[QPointF, QPoint], Union[QPointF, QPoint])\n"
    "QLineF(float, float, float, float)\n"
    "QLineF(QLineF)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QLineF = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLineF,
        {0}
    },
    {
        sipNameNr_QLineF,
        {0, 0, 1},
        26, methods_QLineF,
        3, enummembers_QLineF,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLineF,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLineF,
    init_type_QLineF,
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
    dealloc_QLineF,
    assign_QLineF,
    array_QLineF,
    copy_QLineF,
    release_QLineF,
    0,
    0,
    0,
    0,
    pickle_QLineF,
    0,
    0
},
    0,
    0,
    0,
    0
};
