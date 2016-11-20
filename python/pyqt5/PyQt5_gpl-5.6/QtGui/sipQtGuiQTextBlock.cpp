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

#line 129 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"

#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 70 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 38 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 259 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 44 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 129 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 154 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 49 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextlist.sip"
#include <qtextlist.h>
#line 52 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 55 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 58 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 249 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 61 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 352 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 64 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 67 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"


PyDoc_STRVAR(doc_QTextBlock_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isValid, doc_QTextBlock_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_position, "position(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_position(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->position();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_position, doc_QTextBlock_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_length, "length(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_length(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->length();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_length, doc_QTextBlock_length);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_contains, "contains(self, int) -> bool");

extern "C" {static PyObject *meth_QTextBlock_contains(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_contains, doc_QTextBlock_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_layout, "layout(self) -> QTextLayout");

extern "C" {static PyObject *meth_QTextBlock_layout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_layout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextLayout*sipRes;

            sipRes = sipCpp->layout();

            return sipConvertFromType(sipRes,sipType_QTextLayout,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_layout, doc_QTextBlock_layout);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_blockFormat, "blockFormat(self) -> QTextBlockFormat");

extern "C" {static PyObject *meth_QTextBlock_blockFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlockFormat*sipRes;

            sipRes = new QTextBlockFormat(sipCpp->blockFormat());

            return sipConvertFromNewType(sipRes,sipType_QTextBlockFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormat, doc_QTextBlock_blockFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_blockFormatIndex, "blockFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->blockFormatIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormatIndex, doc_QTextBlock_blockFormatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_charFormat, "charFormat(self) -> QTextCharFormat");

extern "C" {static PyObject *meth_QTextBlock_charFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextCharFormat*sipRes;

            sipRes = new QTextCharFormat(sipCpp->charFormat());

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormat, doc_QTextBlock_charFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_charFormatIndex, "charFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_charFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->charFormatIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormatIndex, doc_QTextBlock_charFormatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_text, "text(self) -> str");

extern "C" {static PyObject *meth_QTextBlock_text(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_text, doc_QTextBlock_text);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_document, "document(self) -> QTextDocument");

extern "C" {static PyObject *meth_QTextBlock_document(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_document(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            const QTextDocument*sipRes;

            sipRes = sipCpp->document();

            return sipConvertFromType(const_cast<QTextDocument *>(sipRes),sipType_QTextDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_document, doc_QTextBlock_document);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_textList, "textList(self) -> QTextList");

extern "C" {static PyObject *meth_QTextBlock_textList(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextList*sipRes;

            sipRes = sipCpp->textList();

            return sipConvertFromType(sipRes,sipType_QTextList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textList, doc_QTextBlock_textList);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_begin, "begin(self) -> QTextBlock.iterator");

extern "C" {static PyObject *meth_QTextBlock_begin(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock::iterator*sipRes;

            sipRes = new QTextBlock::iterator(sipCpp->begin());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_begin, doc_QTextBlock_begin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_end, "end(self) -> QTextBlock.iterator");

extern "C" {static PyObject *meth_QTextBlock_end(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock::iterator*sipRes;

            sipRes = new QTextBlock::iterator(sipCpp->end());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_end, doc_QTextBlock_end);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_next, "next(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextBlock_next(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock*sipRes;

            sipRes = new QTextBlock(sipCpp->next());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_next, doc_QTextBlock_next);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_previous, "previous(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextBlock_previous(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock*sipRes;

            sipRes = new QTextBlock(sipCpp->previous());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_previous, doc_QTextBlock_previous);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_userData, "userData(self) -> QTextBlockUserData");

extern "C" {static PyObject *meth_QTextBlock_userData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlockUserData*sipRes;

            sipRes = sipCpp->userData();

            return sipConvertFromType(sipRes,sipType_QTextBlockUserData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userData, doc_QTextBlock_userData);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setUserData, "setUserData(self, QTextBlockUserData)");

extern "C" {static PyObject *meth_QTextBlock_setUserData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlockUserData* a0;
        PyObject *a0Wrapper;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QTextBlock, &sipCpp, &a0Wrapper, sipType_QTextBlockUserData, &a0))
        {
            int sipIsErr = 0;

#line 193 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qtextobject.sip"
        // Ownership of the user data is with the document not the text block.
        const QTextDocument *td = sipCpp->document();
        
        if (td)
        {
            PyObject *py_td = qtgui_wrap_ancestors(const_cast<QTextDocument *>(td),
                    sipType_QTextDocument);
        
            if (!py_td)
            {
                sipIsErr = 1;
            }
            else
            {
                sipTransferTo(a0Wrapper, py_td);
                Py_DECREF(py_td);
            }
        }
        
        sipCpp->setUserData(a0);
#line 585 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQTextBlock.cpp"

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserData, doc_QTextBlock_setUserData);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_userState, "userState(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_userState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->userState();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userState, doc_QTextBlock_userState);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setUserState, "setUserState(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setUserState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setUserState(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserState, doc_QTextBlock_setUserState);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_clearLayout, "clearLayout(self)");

extern "C" {static PyObject *meth_QTextBlock_clearLayout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_clearLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            sipCpp->clearLayout();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_clearLayout, doc_QTextBlock_clearLayout);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_revision, "revision(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_revision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_revision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->revision();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_revision, doc_QTextBlock_revision);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setRevision, "setRevision(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setRevision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setRevision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setRevision(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setRevision, doc_QTextBlock_setRevision);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_isVisible, "isVisible(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isVisible, doc_QTextBlock_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setVisible, "setVisible(self, bool)");

extern "C" {static PyObject *meth_QTextBlock_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setVisible(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setVisible, doc_QTextBlock_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_blockNumber, "blockNumber(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_blockNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->blockNumber();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockNumber, doc_QTextBlock_blockNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_firstLineNumber, "firstLineNumber(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_firstLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_firstLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->firstLineNumber();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_firstLineNumber, doc_QTextBlock_firstLineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setLineCount, "setLineCount(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setLineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setLineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setLineCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setLineCount, doc_QTextBlock_setLineCount);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_lineCount, "lineCount(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_lineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_lineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->lineCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_lineCount, doc_QTextBlock_lineCount);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_textDirection, "textDirection(self) -> Qt.LayoutDirection");

extern "C" {static PyObject *meth_QTextBlock_textDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            Qt::LayoutDirection sipRes;

            sipRes = sipCpp->textDirection();

            return sipConvertFromEnum(sipRes,sipType_Qt_LayoutDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textDirection, doc_QTextBlock_textDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_textFormats, "textFormats(self) -> List[QTextLayout.FormatRange]");

extern "C" {static PyObject *meth_QTextBlock_textFormats(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textFormats(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QVector<QTextLayout::FormatRange>*sipRes;

            sipRes = new QVector<QTextLayout::FormatRange>(sipCpp->textFormats());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QTextLayout_FormatRange,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textFormats, doc_QTextBlock_textFormats);

    return NULL;
}


extern "C" {static PyObject *slot_QTextBlock___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QTextBlock::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ge_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTextBlock::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,lt_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTextBlock::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTextBlock::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextBlock,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlock(void *, int);}
static void release_QTextBlock(void *sipCppV,int)
{
    delete reinterpret_cast<QTextBlock *>(sipCppV);
}


extern "C" {static void assign_QTextBlock(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBlock(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBlock *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBlock *>(sipSrc);
}


extern "C" {static void *array_QTextBlock(SIP_SSIZE_T);}
static void *array_QTextBlock(SIP_SSIZE_T sipNrElem)
{
    return new QTextBlock[sipNrElem];
}


extern "C" {static void *copy_QTextBlock(const void *, SIP_SSIZE_T);}
static void *copy_QTextBlock(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBlock(reinterpret_cast<const QTextBlock *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBlock(sipSimpleWrapper *);}
static void dealloc_QTextBlock(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBlock(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextBlock(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBlock(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextBlock *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextBlock();

            return sipCpp;
        }
    }

    {
        const QTextBlock* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextBlock, &a0))
        {
            sipCpp = new QTextBlock(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBlock[] = {
    {(void *)slot_QTextBlock___ge__, ge_slot},
    {(void *)slot_QTextBlock___lt__, lt_slot},
    {(void *)slot_QTextBlock___ne__, ne_slot},
    {(void *)slot_QTextBlock___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextBlock[] = {
    {SIP_MLNAME_CAST(sipName_begin), meth_QTextBlock_begin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_begin)},
    {SIP_MLNAME_CAST(sipName_blockFormat), meth_QTextBlock_blockFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_blockFormat)},
    {SIP_MLNAME_CAST(sipName_blockFormatIndex), meth_QTextBlock_blockFormatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_blockFormatIndex)},
    {SIP_MLNAME_CAST(sipName_blockNumber), meth_QTextBlock_blockNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_blockNumber)},
    {SIP_MLNAME_CAST(sipName_charFormat), meth_QTextBlock_charFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_charFormat)},
    {SIP_MLNAME_CAST(sipName_charFormatIndex), meth_QTextBlock_charFormatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_charFormatIndex)},
    {SIP_MLNAME_CAST(sipName_clearLayout), meth_QTextBlock_clearLayout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_clearLayout)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QTextBlock_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_contains)},
    {SIP_MLNAME_CAST(sipName_document), meth_QTextBlock_document, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_document)},
    {SIP_MLNAME_CAST(sipName_end), meth_QTextBlock_end, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_end)},
    {SIP_MLNAME_CAST(sipName_firstLineNumber), meth_QTextBlock_firstLineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_firstLineNumber)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextBlock_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_isValid)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QTextBlock_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_isVisible)},
    {SIP_MLNAME_CAST(sipName_layout), meth_QTextBlock_layout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_layout)},
    {SIP_MLNAME_CAST(sipName_length), meth_QTextBlock_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_length)},
    {SIP_MLNAME_CAST(sipName_lineCount), meth_QTextBlock_lineCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_lineCount)},
    {SIP_MLNAME_CAST(sipName_next), meth_QTextBlock_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_next)},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextBlock_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_position)},
    {SIP_MLNAME_CAST(sipName_previous), meth_QTextBlock_previous, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_previous)},
    {SIP_MLNAME_CAST(sipName_revision), meth_QTextBlock_revision, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_revision)},
    {SIP_MLNAME_CAST(sipName_setLineCount), meth_QTextBlock_setLineCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setLineCount)},
    {SIP_MLNAME_CAST(sipName_setRevision), meth_QTextBlock_setRevision, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setRevision)},
    {SIP_MLNAME_CAST(sipName_setUserData), meth_QTextBlock_setUserData, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setUserData)},
    {SIP_MLNAME_CAST(sipName_setUserState), meth_QTextBlock_setUserState, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setUserState)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QTextBlock_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setVisible)},
    {SIP_MLNAME_CAST(sipName_text), meth_QTextBlock_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_text)},
    {SIP_MLNAME_CAST(sipName_textDirection), meth_QTextBlock_textDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_textDirection)},
    {SIP_MLNAME_CAST(sipName_textFormats), meth_QTextBlock_textFormats, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_textFormats)},
    {SIP_MLNAME_CAST(sipName_textList), meth_QTextBlock_textList, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_textList)},
    {SIP_MLNAME_CAST(sipName_userData), meth_QTextBlock_userData, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_userData)},
    {SIP_MLNAME_CAST(sipName_userState), meth_QTextBlock_userState, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_userState)}
};

PyDoc_STRVAR(doc_QTextBlock, "\1QTextBlock()\n"
    "QTextBlock(QTextBlock)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextBlock = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextBlock,
        {0}
    },
    {
        sipNameNr_QTextBlock,
        {0, 0, 1},
        31, methods_QTextBlock,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextBlock,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QTextBlock,
    init_type_QTextBlock,
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
    dealloc_QTextBlock,
    assign_QTextBlock,
    array_QTextBlock,
    copy_QTextBlock,
    release_QTextBlock,
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
