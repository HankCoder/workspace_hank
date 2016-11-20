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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qrawfont.sip"
#include <qrawfont.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 161 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpygui_qlist.sip"
#include <qfontdatabase.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 27 "sip/QtCore/qchar.sip"
#include <qchar.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qrawfont.sip"
#include <qrawfont.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQRawFont.cpp"


PyDoc_STRVAR(doc_QRawFont_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QRawFont_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_isValid, doc_QRawFont_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_familyName, "familyName(self) -> str");

extern "C" {static PyObject *meth_QRawFont_familyName(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_familyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->familyName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_familyName, doc_QRawFont_familyName);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_styleName, "styleName(self) -> str");

extern "C" {static PyObject *meth_QRawFont_styleName(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_styleName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->styleName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_styleName, doc_QRawFont_styleName);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_style, "style(self) -> QFont.Style");

extern "C" {static PyObject *meth_QRawFont_style(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            QFont::Style sipRes;

            sipRes = sipCpp->style();

            return sipConvertFromEnum(sipRes,sipType_QFont_Style);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_style, doc_QRawFont_style);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_weight, "weight(self) -> int");

extern "C" {static PyObject *meth_QRawFont_weight(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->weight();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_weight, doc_QRawFont_weight);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_glyphIndexesForString, "glyphIndexesForString(self, str) -> List[int]");

extern "C" {static PyObject *meth_QRawFont_glyphIndexesForString(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_glyphIndexesForString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVector<uint>*sipRes;

            sipRes = new QVector<uint>(sipCpp->glyphIndexesForString(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVector_1900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_glyphIndexesForString, doc_QRawFont_glyphIndexesForString);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_advancesForGlyphIndexes, "advancesForGlyphIndexes(self, Iterable[int]) -> List[QPointF]\n"
    "advancesForGlyphIndexes(self, Iterable[int], Union[QRawFont.LayoutFlags, QRawFont.LayoutFlag]) -> List[QPointF]");

extern "C" {static PyObject *meth_QRawFont_advancesForGlyphIndexes(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_advancesForGlyphIndexes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector<uint>* a0;
        int a0State = 0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QVector_1900,&a0, &a0State))
        {
            QVector<QPointF>*sipRes;

            sipRes = new QVector<QPointF>(sipCpp->advancesForGlyphIndexes(*a0));
            sipReleaseType(const_cast<QVector<uint> *>(a0),sipType_QVector_1900,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,NULL);
        }
    }

    {
        const QVector<uint>* a0;
        int a0State = 0;
        QRawFont::LayoutFlags* a1;
        int a1State = 0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QVector_1900,&a0, &a0State, sipType_QRawFont_LayoutFlags, &a1, &a1State))
        {
            QVector<QPointF>*sipRes;

            sipRes = new QVector<QPointF>(sipCpp->advancesForGlyphIndexes(*a0,*a1));
            sipReleaseType(const_cast<QVector<uint> *>(a0),sipType_QVector_1900,a0State);
            sipReleaseType(a1,sipType_QRawFont_LayoutFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_advancesForGlyphIndexes, doc_QRawFont_advancesForGlyphIndexes);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_alphaMapForGlyph, "alphaMapForGlyph(self, int, antialiasingType: QRawFont.AntialiasingType = QRawFont.SubPixelAntialiasing, transform: QTransform = QTransform()) -> QImage");

extern "C" {static PyObject *meth_QRawFont_alphaMapForGlyph(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRawFont_alphaMapForGlyph(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        quint32 a0;
        QRawFont::AntialiasingType a1 = QRawFont::SubPixelAntialiasing;
        const QTransform& a2def = QTransform();
        const QTransform* a2 = &a2def;
        const QRawFont *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_antialiasingType,
            sipName_transform,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bu|EJ9", &sipSelf, sipType_QRawFont, &sipCpp, &a0, sipType_QRawFont_AntialiasingType, &a1, sipType_QTransform, &a2))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->alphaMapForGlyph(a0,a1,*a2));

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_alphaMapForGlyph, doc_QRawFont_alphaMapForGlyph);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_pathForGlyph, "pathForGlyph(self, int) -> QPainterPath");

extern "C" {static PyObject *meth_QRawFont_pathForGlyph(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_pathForGlyph(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        quint32 a0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QRawFont, &sipCpp, &a0))
        {
            QPainterPath*sipRes;

            sipRes = new QPainterPath(sipCpp->pathForGlyph(a0));

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_pathForGlyph, doc_QRawFont_pathForGlyph);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_setPixelSize, "setPixelSize(self, float)");

extern "C" {static PyObject *meth_QRawFont_setPixelSize(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_setPixelSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QRawFont, &sipCpp, &a0))
        {
            sipCpp->setPixelSize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_setPixelSize, doc_QRawFont_setPixelSize);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_pixelSize, "pixelSize(self) -> float");

extern "C" {static PyObject *meth_QRawFont_pixelSize(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_pixelSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->pixelSize();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_pixelSize, doc_QRawFont_pixelSize);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_hintingPreference, "hintingPreference(self) -> QFont.HintingPreference");

extern "C" {static PyObject *meth_QRawFont_hintingPreference(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_hintingPreference(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            QFont::HintingPreference sipRes;

            sipRes = sipCpp->hintingPreference();

            return sipConvertFromEnum(sipRes,sipType_QFont_HintingPreference);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_hintingPreference, doc_QRawFont_hintingPreference);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_ascent, "ascent(self) -> float");

extern "C" {static PyObject *meth_QRawFont_ascent(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->ascent();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_ascent, doc_QRawFont_ascent);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_descent, "descent(self) -> float");

extern "C" {static PyObject *meth_QRawFont_descent(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->descent();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_descent, doc_QRawFont_descent);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_leading, "leading(self) -> float");

extern "C" {static PyObject *meth_QRawFont_leading(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_leading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->leading();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_leading, doc_QRawFont_leading);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_xHeight, "xHeight(self) -> float");

extern "C" {static PyObject *meth_QRawFont_xHeight(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_xHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->xHeight();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_xHeight, doc_QRawFont_xHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_averageCharWidth, "averageCharWidth(self) -> float");

extern "C" {static PyObject *meth_QRawFont_averageCharWidth(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_averageCharWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->averageCharWidth();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_averageCharWidth, doc_QRawFont_averageCharWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_maxCharWidth, "maxCharWidth(self) -> float");

extern "C" {static PyObject *meth_QRawFont_maxCharWidth(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_maxCharWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->maxCharWidth();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_maxCharWidth, doc_QRawFont_maxCharWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_unitsPerEm, "unitsPerEm(self) -> float");

extern "C" {static PyObject *meth_QRawFont_unitsPerEm(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_unitsPerEm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->unitsPerEm();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_unitsPerEm, doc_QRawFont_unitsPerEm);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_loadFromFile, "loadFromFile(self, str, float, QFont.HintingPreference)");

extern "C" {static PyObject *meth_QRawFont_loadFromFile(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_loadFromFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        qreal a1;
        QFont::HintingPreference a2;
        QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1dE", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QString,&a0, &a0State, &a1, sipType_QFont_HintingPreference, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->loadFromFile(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_loadFromFile, doc_QRawFont_loadFromFile);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_loadFromData, "loadFromData(self, Union[QByteArray, bytes, bytearray], float, QFont.HintingPreference)");

extern "C" {static PyObject *meth_QRawFont_loadFromData(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_loadFromData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        qreal a1;
        QFont::HintingPreference a2;
        QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1dE", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QByteArray, &a0, &a0State, &a1, sipType_QFont_HintingPreference, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->loadFromData(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_loadFromData, doc_QRawFont_loadFromData);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_supportsCharacter, "supportsCharacter(self, int) -> bool\n"
    "supportsCharacter(self, str) -> bool");

extern "C" {static PyObject *meth_QRawFont_supportsCharacter(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_supportsCharacter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QRawFont, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->supportsCharacter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QChar* a0;
        int a0State = 0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->supportsCharacter(*a0);
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_supportsCharacter, doc_QRawFont_supportsCharacter);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_supportedWritingSystems, "supportedWritingSystems(self) -> List[QFontDatabase.WritingSystem]");

extern "C" {static PyObject *meth_QRawFont_supportedWritingSystems(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_supportedWritingSystems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            QList<QFontDatabase::WritingSystem>*sipRes;

            sipRes = new QList<QFontDatabase::WritingSystem>(sipCpp->supportedWritingSystems());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QFontDatabase_WritingSystem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_supportedWritingSystems, doc_QRawFont_supportedWritingSystems);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_fontTable, "fontTable(self, str) -> QByteArray");

extern "C" {static PyObject *meth_QRawFont_fontTable(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_fontTable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QRawFont, &sipCpp, &a0Keep, &a0))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->fontTable(a0));
            Py_DECREF(a0Keep);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_fontTable, doc_QRawFont_fontTable);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_fromFont, "fromFont(QFont, writingSystem: QFontDatabase.WritingSystem = QFontDatabase.Any) -> QRawFont");

extern "C" {static PyObject *meth_QRawFont_fromFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRawFont_fromFont(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QFont* a0;
        QFontDatabase::WritingSystem a1 = QFontDatabase::Any;

        static const char *sipKwdList[] = {
            NULL,
            sipName_writingSystem,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9|E", sipType_QFont, &a0, sipType_QFontDatabase_WritingSystem, &a1))
        {
            QRawFont*sipRes;

            sipRes = new QRawFont(QRawFont::fromFont(*a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QRawFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_fromFont, doc_QRawFont_fromFont);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_boundingRect, "boundingRect(self, int) -> QRectF");

extern "C" {static PyObject *meth_QRawFont_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        quint32 a0;
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QRawFont, &sipCpp, &a0))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->boundingRect(a0));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_boundingRect, doc_QRawFont_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_lineThickness, "lineThickness(self) -> float");

extern "C" {static PyObject *meth_QRawFont_lineThickness(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_lineThickness(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->lineThickness();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_lineThickness, doc_QRawFont_lineThickness);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_underlinePosition, "underlinePosition(self) -> float");

extern "C" {static PyObject *meth_QRawFont_underlinePosition(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_underlinePosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRawFont, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->underlinePosition();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_underlinePosition, doc_QRawFont_underlinePosition);

    return NULL;
}


PyDoc_STRVAR(doc_QRawFont_swap, "swap(self, QRawFont)");

extern "C" {static PyObject *meth_QRawFont_swap(PyObject *, PyObject *);}
static PyObject *meth_QRawFont_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRawFont* a0;
        QRawFont *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRawFont, &sipCpp, sipType_QRawFont, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRawFont, sipName_swap, doc_QRawFont_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QRawFont___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QRawFont *sipCpp = reinterpret_cast<QRawFont *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRawFont* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRawFont, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QRawFont::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QRawFont,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRawFont___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QRawFont *sipCpp = reinterpret_cast<QRawFont *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRawFont* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRawFont, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QRawFont::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QRawFont,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QRawFont(void *, int);}
static void release_QRawFont(void *sipCppV,int)
{
    delete reinterpret_cast<QRawFont *>(sipCppV);
}


extern "C" {static void assign_QRawFont(void *, SIP_SSIZE_T, const void *);}
static void assign_QRawFont(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QRawFont *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QRawFont *>(sipSrc);
}


extern "C" {static void *array_QRawFont(SIP_SSIZE_T);}
static void *array_QRawFont(SIP_SSIZE_T sipNrElem)
{
    return new QRawFont[sipNrElem];
}


extern "C" {static void *copy_QRawFont(const void *, SIP_SSIZE_T);}
static void *copy_QRawFont(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QRawFont(reinterpret_cast<const QRawFont *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRawFont(sipSimpleWrapper *);}
static void dealloc_QRawFont(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRawFont(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QRawFont(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRawFont(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QRawFont *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QRawFont();

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        qreal a1;
        QFont::HintingPreference a2 = QFont::PreferDefaultHinting;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_hintingPreference,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1d|E", sipType_QString,&a0, &a0State, &a1, sipType_QFont_HintingPreference, &a2))
        {
            sipCpp = new QRawFont(*a0,a1,a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        qreal a1;
        QFont::HintingPreference a2 = QFont::PreferDefaultHinting;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_hintingPreference,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1d|E", sipType_QByteArray, &a0, &a0State, &a1, sipType_QFont_HintingPreference, &a2))
        {
            sipCpp = new QRawFont(*a0,a1,a2);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    {
        const QRawFont* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRawFont, &a0))
        {
            sipCpp = new QRawFont(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRawFont[] = {
    {(void *)slot_QRawFont___ne__, ne_slot},
    {(void *)slot_QRawFont___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QRawFont[] = {
    {SIP_MLNAME_CAST(sipName_advancesForGlyphIndexes), meth_QRawFont_advancesForGlyphIndexes, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_advancesForGlyphIndexes)},
    {SIP_MLNAME_CAST(sipName_alphaMapForGlyph), (PyCFunction)meth_QRawFont_alphaMapForGlyph, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRawFont_alphaMapForGlyph)},
    {SIP_MLNAME_CAST(sipName_ascent), meth_QRawFont_ascent, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_ascent)},
    {SIP_MLNAME_CAST(sipName_averageCharWidth), meth_QRawFont_averageCharWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_averageCharWidth)},
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QRawFont_boundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_boundingRect)},
    {SIP_MLNAME_CAST(sipName_descent), meth_QRawFont_descent, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_descent)},
    {SIP_MLNAME_CAST(sipName_familyName), meth_QRawFont_familyName, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_familyName)},
    {SIP_MLNAME_CAST(sipName_fontTable), meth_QRawFont_fontTable, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_fontTable)},
    {SIP_MLNAME_CAST(sipName_fromFont), (PyCFunction)meth_QRawFont_fromFont, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRawFont_fromFont)},
    {SIP_MLNAME_CAST(sipName_glyphIndexesForString), meth_QRawFont_glyphIndexesForString, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_glyphIndexesForString)},
    {SIP_MLNAME_CAST(sipName_hintingPreference), meth_QRawFont_hintingPreference, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_hintingPreference)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QRawFont_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_isValid)},
    {SIP_MLNAME_CAST(sipName_leading), meth_QRawFont_leading, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_leading)},
    {SIP_MLNAME_CAST(sipName_lineThickness), meth_QRawFont_lineThickness, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_lineThickness)},
    {SIP_MLNAME_CAST(sipName_loadFromData), meth_QRawFont_loadFromData, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_loadFromData)},
    {SIP_MLNAME_CAST(sipName_loadFromFile), meth_QRawFont_loadFromFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_loadFromFile)},
    {SIP_MLNAME_CAST(sipName_maxCharWidth), meth_QRawFont_maxCharWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_maxCharWidth)},
    {SIP_MLNAME_CAST(sipName_pathForGlyph), meth_QRawFont_pathForGlyph, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_pathForGlyph)},
    {SIP_MLNAME_CAST(sipName_pixelSize), meth_QRawFont_pixelSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_pixelSize)},
    {SIP_MLNAME_CAST(sipName_setPixelSize), meth_QRawFont_setPixelSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_setPixelSize)},
    {SIP_MLNAME_CAST(sipName_style), meth_QRawFont_style, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_style)},
    {SIP_MLNAME_CAST(sipName_styleName), meth_QRawFont_styleName, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_styleName)},
    {SIP_MLNAME_CAST(sipName_supportedWritingSystems), meth_QRawFont_supportedWritingSystems, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_supportedWritingSystems)},
    {SIP_MLNAME_CAST(sipName_supportsCharacter), meth_QRawFont_supportsCharacter, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_supportsCharacter)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QRawFont_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_swap)},
    {SIP_MLNAME_CAST(sipName_underlinePosition), meth_QRawFont_underlinePosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_underlinePosition)},
    {SIP_MLNAME_CAST(sipName_unitsPerEm), meth_QRawFont_unitsPerEm, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_unitsPerEm)},
    {SIP_MLNAME_CAST(sipName_weight), meth_QRawFont_weight, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_weight)},
    {SIP_MLNAME_CAST(sipName_xHeight), meth_QRawFont_xHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QRawFont_xHeight)}
};

static sipEnumMemberDef enummembers_QRawFont[] = {
    {sipName_KernedAdvances, static_cast<int>(QRawFont::KernedAdvances), 239},
    {sipName_PixelAntialiasing, static_cast<int>(QRawFont::PixelAntialiasing), 238},
    {sipName_SeparateAdvances, static_cast<int>(QRawFont::SeparateAdvances), 239},
    {sipName_SubPixelAntialiasing, static_cast<int>(QRawFont::SubPixelAntialiasing), 238},
    {sipName_UseDesignMetrics, static_cast<int>(QRawFont::UseDesignMetrics), 239},
};

PyDoc_STRVAR(doc_QRawFont, "\1QRawFont()\n"
    "QRawFont(str, float, hintingPreference: QFont.HintingPreference = QFont.PreferDefaultHinting)\n"
    "QRawFont(Union[QByteArray, bytes, bytearray], float, hintingPreference: QFont.HintingPreference = QFont.PreferDefaultHinting)\n"
    "QRawFont(QRawFont)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QRawFont = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRawFont,
        {0}
    },
    {
        sipNameNr_QRawFont,
        {0, 0, 1},
        29, methods_QRawFont,
        5, enummembers_QRawFont,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRawFont,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRawFont,
    init_type_QRawFont,
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
    dealloc_QRawFont,
    assign_QRawFont,
    array_QRawFont,
    copy_QRawFont,
    release_QRawFont,
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
