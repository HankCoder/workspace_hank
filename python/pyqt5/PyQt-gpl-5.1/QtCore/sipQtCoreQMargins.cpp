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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQMargins.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQMargins.cpp"


PyDoc_STRVAR(doc_QMargins_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QMargins_isNull(PyObject *, PyObject *);}
static PyObject *meth_QMargins_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_isNull, doc_QMargins_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_left, "left(self) -> int");

extern "C" {static PyObject *meth_QMargins_left(PyObject *, PyObject *);}
static PyObject *meth_QMargins_left(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->left();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_left, doc_QMargins_left);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_top, "top(self) -> int");

extern "C" {static PyObject *meth_QMargins_top(PyObject *, PyObject *);}
static PyObject *meth_QMargins_top(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->top();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_top, doc_QMargins_top);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_right, "right(self) -> int");

extern "C" {static PyObject *meth_QMargins_right(PyObject *, PyObject *);}
static PyObject *meth_QMargins_right(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->right();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_right, doc_QMargins_right);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_bottom, "bottom(self) -> int");

extern "C" {static PyObject *meth_QMargins_bottom(PyObject *, PyObject *);}
static PyObject *meth_QMargins_bottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->bottom();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_bottom, doc_QMargins_bottom);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_setLeft, "setLeft(self, int)");

extern "C" {static PyObject *meth_QMargins_setLeft(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setLeft(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setLeft, doc_QMargins_setLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_setTop, "setTop(self, int)");

extern "C" {static PyObject *meth_QMargins_setTop(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setTop(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setTop, doc_QMargins_setTop);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_setRight, "setRight(self, int)");

extern "C" {static PyObject *meth_QMargins_setRight(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setRight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setRight, doc_QMargins_setRight);

    return NULL;
}


PyDoc_STRVAR(doc_QMargins_setBottom, "setBottom(self, int)");

extern "C" {static PyObject *meth_QMargins_setBottom(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setBottom(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setBottom, doc_QMargins_setBottom);

    return NULL;
}


extern "C" {static PyObject *slot_QMargins___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QMargins,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMargins___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QMargins,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMargins___add__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;
        const QRect* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMargins, &a0, sipType_QRect, &a1))
        {
            QRect*sipRes;

            sipRes = new QRect((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    {
        const QMargins* a0;
        const QMargins* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMargins, &a0, sipType_QMargins, &a1))
        {
            QMargins*sipRes;

            sipRes = new QMargins((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMargins___sub__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;
        const QMargins* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMargins, &a0, sipType_QMargins, &a1))
        {
            QMargins*sipRes;

            sipRes = new QMargins((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMargins___mul__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QMargins, &a0, &a1))
        {
            QMargins*sipRes;

            sipRes = new QMargins((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    {
        const QMargins* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMargins, &a0, &a1))
        {
            QMargins*sipRes;

            sipRes = new QMargins((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMargins___div__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QMargins, &a0, &a1))
        {
            QMargins*sipRes;

            sipRes = new QMargins((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    {
        const QMargins* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMargins, &a0, &a1))
        {
            QMargins*sipRes;

            sipRes = new QMargins((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMargins___neg__(PyObject *);}
static PyObject *slot_QMargins___neg__(PyObject *sipSelf)
{
    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;


    {
        {
            QMargins*sipRes;

            sipRes = new QMargins(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMargins___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp->QMargins::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QMargins::operator/=(a0);

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


extern "C" {static PyObject *slot_QMargins___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp->QMargins::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QMargins::operator*=(a0);

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


extern "C" {static PyObject *slot_QMargins___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            sipCpp->QMargins::operator-=(*a0);

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


extern "C" {static PyObject *slot_QMargins___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMargins *sipCpp = reinterpret_cast<QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            sipCpp->QMargins::operator+=(*a0);

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
extern "C" {static void release_QMargins(void *, int);}
static void release_QMargins(void *sipCppV,int)
{
    delete reinterpret_cast<QMargins *>(sipCppV);
}


extern "C" {static void assign_QMargins(void *, SIP_SSIZE_T, const void *);}
static void assign_QMargins(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMargins *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMargins *>(sipSrc);
}


extern "C" {static void *array_QMargins(SIP_SSIZE_T);}
static void *array_QMargins(SIP_SSIZE_T sipNrElem)
{
    return new QMargins[sipNrElem];
}


extern "C" {static void *copy_QMargins(const void *, SIP_SSIZE_T);}
static void *copy_QMargins(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMargins(reinterpret_cast<const QMargins *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMargins(sipSimpleWrapper *);}
static void dealloc_QMargins(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMargins(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMargins(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMargins(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMargins *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMargins();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iiii", &a0, &a1, &a2, &a3))
        {
            sipCpp = new QMargins(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const QMargins* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMargins, &a0))
        {
            sipCpp = new QMargins(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMargins[] = {
    {(void *)slot_QMargins___eq__, eq_slot},
    {(void *)slot_QMargins___ne__, ne_slot},
    {(void *)slot_QMargins___add__, add_slot},
    {(void *)slot_QMargins___sub__, sub_slot},
    {(void *)slot_QMargins___mul__, mul_slot},
    {(void *)slot_QMargins___div__, div_slot},
    {(void *)slot_QMargins___neg__, neg_slot},
    {(void *)slot_QMargins___idiv__, idiv_slot},
    {(void *)slot_QMargins___imul__, imul_slot},
    {(void *)slot_QMargins___isub__, isub_slot},
    {(void *)slot_QMargins___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMargins[] = {
    {SIP_MLNAME_CAST(sipName_bottom), meth_QMargins_bottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_bottom)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QMargins_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_isNull)},
    {SIP_MLNAME_CAST(sipName_left), meth_QMargins_left, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_left)},
    {SIP_MLNAME_CAST(sipName_right), meth_QMargins_right, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_right)},
    {SIP_MLNAME_CAST(sipName_setBottom), meth_QMargins_setBottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_setBottom)},
    {SIP_MLNAME_CAST(sipName_setLeft), meth_QMargins_setLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_setLeft)},
    {SIP_MLNAME_CAST(sipName_setRight), meth_QMargins_setRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_setRight)},
    {SIP_MLNAME_CAST(sipName_setTop), meth_QMargins_setTop, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_setTop)},
    {SIP_MLNAME_CAST(sipName_top), meth_QMargins_top, METH_VARARGS, SIP_MLDOC_CAST(doc_QMargins_top)}
};

PyDoc_STRVAR(doc_QMargins, "\1QMargins()\n"
    "QMargins(int, int, int, int)\n"
    "QMargins(QMargins)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QMargins = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMargins,
        {0}
    },
    {
        sipNameNr_QMargins,
        {0, 0, 1},
        9, methods_QMargins,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMargins,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMargins,
    init_type_QMargins,
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
    dealloc_QMargins,
    assign_QMargins,
    array_QMargins,
    copy_QMargins,
    release_QMargins,
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
