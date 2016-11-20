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

#include "sipAPIQtGui.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextInlineObject.cpp"

#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextInlineObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextInlineObject.cpp"
#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQTextInlineObject.cpp"


PyDoc_STRVAR(doc_QTextInlineObject_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextInlineObject_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_isValid, doc_QTextInlineObject_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_rect, "rect(self) -> QRectF");

extern "C" {static PyObject *meth_QTextInlineObject_rect(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_rect, doc_QTextInlineObject_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_width, "width(self) -> float");

extern "C" {static PyObject *meth_QTextInlineObject_width(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->width();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_width, doc_QTextInlineObject_width);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_ascent, "ascent(self) -> float");

extern "C" {static PyObject *meth_QTextInlineObject_ascent(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->ascent();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_ascent, doc_QTextInlineObject_ascent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_descent, "descent(self) -> float");

extern "C" {static PyObject *meth_QTextInlineObject_descent(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->descent();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_descent, doc_QTextInlineObject_descent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_height, "height(self) -> float");

extern "C" {static PyObject *meth_QTextInlineObject_height(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->height();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_height, doc_QTextInlineObject_height);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_textDirection, "textDirection(self) -> Qt.LayoutDirection");

extern "C" {static PyObject *meth_QTextInlineObject_textDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_textDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            Qt::LayoutDirection sipRes;

            sipRes = sipCpp->textDirection();

            return sipConvertFromEnum(sipRes,sipType_Qt_LayoutDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_textDirection, doc_QTextInlineObject_textDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_setWidth, "setWidth(self, float)");

extern "C" {static PyObject *meth_QTextInlineObject_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextInlineObject, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_setWidth, doc_QTextInlineObject_setWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_setAscent, "setAscent(self, float)");

extern "C" {static PyObject *meth_QTextInlineObject_setAscent(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_setAscent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextInlineObject, &sipCpp, &a0))
        {
            sipCpp->setAscent(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_setAscent, doc_QTextInlineObject_setAscent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_setDescent, "setDescent(self, float)");

extern "C" {static PyObject *meth_QTextInlineObject_setDescent(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_setDescent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextInlineObject, &sipCpp, &a0))
        {
            sipCpp->setDescent(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_setDescent, doc_QTextInlineObject_setDescent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_textPosition, "textPosition(self) -> int");

extern "C" {static PyObject *meth_QTextInlineObject_textPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_textPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->textPosition();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_textPosition, doc_QTextInlineObject_textPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_formatIndex, "formatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextInlineObject_formatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_formatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->formatIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_formatIndex, doc_QTextInlineObject_formatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextInlineObject_format, "format(self) -> QTextFormat");

extern "C" {static PyObject *meth_QTextInlineObject_format(PyObject *, PyObject *);}
static PyObject *meth_QTextInlineObject_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextInlineObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextInlineObject, &sipCpp))
        {
            QTextFormat*sipRes;

            sipRes = new QTextFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QTextFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextInlineObject, sipName_format, doc_QTextInlineObject_format);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextInlineObject(void *, int);}
static void release_QTextInlineObject(void *sipCppV,int)
{
    delete reinterpret_cast<QTextInlineObject *>(sipCppV);
}


extern "C" {static void assign_QTextInlineObject(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextInlineObject(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextInlineObject *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextInlineObject *>(sipSrc);
}


extern "C" {static void *array_QTextInlineObject(SIP_SSIZE_T);}
static void *array_QTextInlineObject(SIP_SSIZE_T sipNrElem)
{
    return new QTextInlineObject[sipNrElem];
}


extern "C" {static void *copy_QTextInlineObject(const void *, SIP_SSIZE_T);}
static void *copy_QTextInlineObject(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextInlineObject(reinterpret_cast<const QTextInlineObject *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextInlineObject(sipSimpleWrapper *);}
static void dealloc_QTextInlineObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextInlineObject(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextInlineObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextInlineObject(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextInlineObject *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextInlineObject();

            return sipCpp;
        }
    }

    {
        const QTextInlineObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextInlineObject, &a0))
        {
            sipCpp = new QTextInlineObject(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextInlineObject[] = {
    {SIP_MLNAME_CAST(sipName_ascent), meth_QTextInlineObject_ascent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_ascent)},
    {SIP_MLNAME_CAST(sipName_descent), meth_QTextInlineObject_descent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_descent)},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextInlineObject_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_format)},
    {SIP_MLNAME_CAST(sipName_formatIndex), meth_QTextInlineObject_formatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_formatIndex)},
    {SIP_MLNAME_CAST(sipName_height), meth_QTextInlineObject_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_height)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextInlineObject_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_isValid)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QTextInlineObject_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_rect)},
    {SIP_MLNAME_CAST(sipName_setAscent), meth_QTextInlineObject_setAscent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_setAscent)},
    {SIP_MLNAME_CAST(sipName_setDescent), meth_QTextInlineObject_setDescent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_setDescent)},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QTextInlineObject_setWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_setWidth)},
    {SIP_MLNAME_CAST(sipName_textDirection), meth_QTextInlineObject_textDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_textDirection)},
    {SIP_MLNAME_CAST(sipName_textPosition), meth_QTextInlineObject_textPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_textPosition)},
    {SIP_MLNAME_CAST(sipName_width), meth_QTextInlineObject_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextInlineObject_width)}
};

PyDoc_STRVAR(doc_QTextInlineObject, "\1QTextInlineObject()\n"
    "QTextInlineObject(QTextInlineObject)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextInlineObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextInlineObject,
        {0}
    },
    {
        sipNameNr_QTextInlineObject,
        {0, 0, 1},
        13, methods_QTextInlineObject,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextInlineObject,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextInlineObject,
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
    dealloc_QTextInlineObject,
    assign_QTextInlineObject,
    array_QTextInlineObject,
    copy_QTextInlineObject,
    release_QTextInlineObject,
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
