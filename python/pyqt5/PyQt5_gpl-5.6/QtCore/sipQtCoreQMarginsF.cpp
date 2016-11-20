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

#line 115 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQMarginsF.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQMarginsF.cpp"
#line 161 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQMarginsF.cpp"


PyDoc_STRVAR(doc_QMarginsF_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QMarginsF_isNull(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMarginsF, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_isNull, doc_QMarginsF_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_left, "left(self) -> float");

extern "C" {static PyObject *meth_QMarginsF_left(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_left(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMarginsF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->left();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_left, doc_QMarginsF_left);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_top, "top(self) -> float");

extern "C" {static PyObject *meth_QMarginsF_top(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_top(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMarginsF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->top();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_top, doc_QMarginsF_top);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_right, "right(self) -> float");

extern "C" {static PyObject *meth_QMarginsF_right(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_right(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMarginsF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->right();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_right, doc_QMarginsF_right);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_bottom, "bottom(self) -> float");

extern "C" {static PyObject *meth_QMarginsF_bottom(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_bottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMarginsF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->bottom();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_bottom, doc_QMarginsF_bottom);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_setLeft, "setLeft(self, float)");

extern "C" {static PyObject *meth_QMarginsF_setLeft(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_setLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMarginsF, &sipCpp, &a0))
        {
            sipCpp->setLeft(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_setLeft, doc_QMarginsF_setLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_setTop, "setTop(self, float)");

extern "C" {static PyObject *meth_QMarginsF_setTop(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_setTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMarginsF, &sipCpp, &a0))
        {
            sipCpp->setTop(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_setTop, doc_QMarginsF_setTop);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_setRight, "setRight(self, float)");

extern "C" {static PyObject *meth_QMarginsF_setRight(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_setRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMarginsF, &sipCpp, &a0))
        {
            sipCpp->setRight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_setRight, doc_QMarginsF_setRight);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_setBottom, "setBottom(self, float)");

extern "C" {static PyObject *meth_QMarginsF_setBottom(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_setBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMarginsF, &sipCpp, &a0))
        {
            sipCpp->setBottom(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_setBottom, doc_QMarginsF_setBottom);

    return NULL;
}


PyDoc_STRVAR(doc_QMarginsF_toMargins, "toMargins(self) -> QMargins");

extern "C" {static PyObject *meth_QMarginsF_toMargins(PyObject *, PyObject *);}
static PyObject *meth_QMarginsF_toMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMarginsF, &sipCpp))
        {
            QMargins*sipRes;

            sipRes = new QMargins(sipCpp->toMargins());

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMarginsF, sipName_toMargins, doc_QMarginsF_toMargins);

    return NULL;
}


extern "C" {static PyObject *slot_QMarginsF___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMarginsF, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QMarginsF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMarginsF___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMarginsF, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QMarginsF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMarginsF___add__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;
        const QMarginsF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMarginsF, &a0, sipType_QMarginsF, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    {
        const QMarginsF* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMarginsF, &a0, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    {
        qreal a0;
        const QMarginsF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QMarginsF, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    {
        const QMarginsF* a0;
        const QRectF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMarginsF, &a0, sipType_QRectF, &a1))
        {
            QRectF*sipRes;

            sipRes = new QRectF((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMarginsF___sub__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;
        const QMarginsF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMarginsF, &a0, sipType_QMarginsF, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    {
        const QMarginsF* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMarginsF, &a0, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMarginsF___mul__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMarginsF, &a0, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    {
        qreal a0;
        const QMarginsF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QMarginsF, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMarginsF___div__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMarginsF, &a0, &a1))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMarginsF___neg__(PyObject *);}
static PyObject *slot_QMarginsF___neg__(PyObject *sipSelf)
{
    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;


    {
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMarginsF___pos__(PyObject *);}
static PyObject *slot_QMarginsF___pos__(PyObject *sipSelf)
{
    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;


    {
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF(+(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMarginsF___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMarginsF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QMarginsF::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMarginsF___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMarginsF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QMarginsF::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMarginsF___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMarginsF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMarginsF, &a0))
        {
            sipCpp->QMarginsF::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QMarginsF::operator-=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMarginsF___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMarginsF___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMarginsF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMarginsF *sipCpp = reinterpret_cast<QMarginsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMarginsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMarginsF, &a0))
        {
            sipCpp->QMarginsF::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QMarginsF::operator+=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMarginsF(void *, int);}
static void release_QMarginsF(void *sipCppV,int)
{
    delete reinterpret_cast<QMarginsF *>(sipCppV);
}


extern "C" {static void assign_QMarginsF(void *, SIP_SSIZE_T, const void *);}
static void assign_QMarginsF(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMarginsF *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMarginsF *>(sipSrc);
}


extern "C" {static void *array_QMarginsF(SIP_SSIZE_T);}
static void *array_QMarginsF(SIP_SSIZE_T sipNrElem)
{
    return new QMarginsF[sipNrElem];
}


extern "C" {static void *copy_QMarginsF(const void *, SIP_SSIZE_T);}
static void *copy_QMarginsF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMarginsF(reinterpret_cast<const QMarginsF *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMarginsF(sipSimpleWrapper *);}
static void dealloc_QMarginsF(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMarginsF(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMarginsF(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMarginsF(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMarginsF *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMarginsF();

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
            sipCpp = new QMarginsF(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const QMargins* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMargins, &a0))
        {
            sipCpp = new QMarginsF(*a0);

            return sipCpp;
        }
    }

    {
        const QMarginsF* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMarginsF, &a0))
        {
            sipCpp = new QMarginsF(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMarginsF[] = {
    {(void *)slot_QMarginsF___eq__, eq_slot},
    {(void *)slot_QMarginsF___ne__, ne_slot},
    {(void *)slot_QMarginsF___add__, add_slot},
    {(void *)slot_QMarginsF___sub__, sub_slot},
    {(void *)slot_QMarginsF___mul__, mul_slot},
    {(void *)slot_QMarginsF___div__, div_slot},
    {(void *)slot_QMarginsF___neg__, neg_slot},
    {(void *)slot_QMarginsF___pos__, pos_slot},
    {(void *)slot_QMarginsF___idiv__, idiv_slot},
    {(void *)slot_QMarginsF___imul__, imul_slot},
    {(void *)slot_QMarginsF___isub__, isub_slot},
    {(void *)slot_QMarginsF___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMarginsF[] = {
    {SIP_MLNAME_CAST(sipName_bottom), meth_QMarginsF_bottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_bottom)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QMarginsF_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_isNull)},
    {SIP_MLNAME_CAST(sipName_left), meth_QMarginsF_left, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_left)},
    {SIP_MLNAME_CAST(sipName_right), meth_QMarginsF_right, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_right)},
    {SIP_MLNAME_CAST(sipName_setBottom), meth_QMarginsF_setBottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_setBottom)},
    {SIP_MLNAME_CAST(sipName_setLeft), meth_QMarginsF_setLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_setLeft)},
    {SIP_MLNAME_CAST(sipName_setRight), meth_QMarginsF_setRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_setRight)},
    {SIP_MLNAME_CAST(sipName_setTop), meth_QMarginsF_setTop, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_setTop)},
    {SIP_MLNAME_CAST(sipName_toMargins), meth_QMarginsF_toMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_toMargins)},
    {SIP_MLNAME_CAST(sipName_top), meth_QMarginsF_top, METH_VARARGS, SIP_MLDOC_CAST(doc_QMarginsF_top)}
};

PyDoc_STRVAR(doc_QMarginsF, "\1QMarginsF()\n"
    "QMarginsF(float, float, float, float)\n"
    "QMarginsF(QMargins)\n"
    "QMarginsF(QMarginsF)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QMarginsF = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMarginsF,
        {0}
    },
    {
        sipNameNr_QMarginsF,
        {0, 0, 1},
        10, methods_QMarginsF,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMarginsF,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMarginsF,
    init_type_QMarginsF,
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
    dealloc_QMarginsF,
    assign_QMarginsF,
    array_QMarginsF,
    copy_QMarginsF,
    release_QMarginsF,
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
