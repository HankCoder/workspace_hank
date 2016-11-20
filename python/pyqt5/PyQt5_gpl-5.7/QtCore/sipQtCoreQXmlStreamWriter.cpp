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

#line 411 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"
#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"
#line 308 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamWriter.cpp"


PyDoc_STRVAR(doc_QXmlStreamWriter_setDevice, "setDevice(self, QIODevice)");

extern "C" {static PyObject *meth_QXmlStreamWriter_setDevice(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_setDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QIODevice, &a0))
        {
            sipCpp->setDevice(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_setDevice, doc_QXmlStreamWriter_setDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_device, "device(self) -> QIODevice");

extern "C" {static PyObject *meth_QXmlStreamWriter_device(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            QIODevice*sipRes;

            sipRes = sipCpp->device();

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_device, doc_QXmlStreamWriter_device);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_setCodec, "setCodec(self, QTextCodec)\n"
    "setCodec(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec* a0;
        PyObject *a0Keep;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, &a0Keep, sipType_QTextCodec, &a0))
        {
            sipCpp->setCodec(a0);

            sipKeepReference(sipSelf, -11, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const char* a0;
        PyObject *a0Keep;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->setCodec(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_setCodec, doc_QXmlStreamWriter_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_codec, "codec(self) -> QTextCodec");

extern "C" {static PyObject *meth_QXmlStreamWriter_codec(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            QTextCodec*sipRes;

            sipRes = sipCpp->codec();

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_codec, doc_QXmlStreamWriter_codec);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_setAutoFormatting, "setAutoFormatting(self, bool)");

extern "C" {static PyObject *meth_QXmlStreamWriter_setAutoFormatting(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_setAutoFormatting(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, &a0))
        {
            sipCpp->setAutoFormatting(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_setAutoFormatting, doc_QXmlStreamWriter_setAutoFormatting);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_autoFormatting, "autoFormatting(self) -> bool");

extern "C" {static PyObject *meth_QXmlStreamWriter_autoFormatting(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_autoFormatting(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoFormatting();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_autoFormatting, doc_QXmlStreamWriter_autoFormatting);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_setAutoFormattingIndent, "setAutoFormattingIndent(self, int)");

extern "C" {static PyObject *meth_QXmlStreamWriter_setAutoFormattingIndent(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_setAutoFormattingIndent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, &a0))
        {
            sipCpp->setAutoFormattingIndent(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_setAutoFormattingIndent, doc_QXmlStreamWriter_setAutoFormattingIndent);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_autoFormattingIndent, "autoFormattingIndent(self) -> int");

extern "C" {static PyObject *meth_QXmlStreamWriter_autoFormattingIndent(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_autoFormattingIndent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->autoFormattingIndent();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_autoFormattingIndent, doc_QXmlStreamWriter_autoFormattingIndent);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeAttribute, "writeAttribute(self, str, str)\n"
    "writeAttribute(self, str, str, str)\n"
    "writeAttribute(self, QXmlStreamAttribute)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeAttribute(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->writeAttribute(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            sipCpp->writeAttribute(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QXmlStreamAttribute* a0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QXmlStreamAttribute, &a0))
        {
            sipCpp->writeAttribute(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeAttribute, doc_QXmlStreamWriter_writeAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeAttributes, "writeAttributes(self, QXmlStreamAttributes)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeAttributes(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeAttributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttributes* a0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QXmlStreamAttributes, &a0))
        {
            sipCpp->writeAttributes(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeAttributes, doc_QXmlStreamWriter_writeAttributes);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeCDATA, "writeCDATA(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeCDATA(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeCDATA(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeCDATA(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeCDATA, doc_QXmlStreamWriter_writeCDATA);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeCharacters, "writeCharacters(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeCharacters(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeCharacters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeCharacters(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeCharacters, doc_QXmlStreamWriter_writeCharacters);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeComment, "writeComment(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeComment(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeComment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeComment(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeComment, doc_QXmlStreamWriter_writeComment);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeDTD, "writeDTD(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeDTD(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeDTD(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeDTD(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeDTD, doc_QXmlStreamWriter_writeDTD);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeEmptyElement, "writeEmptyElement(self, str)\n"
    "writeEmptyElement(self, str, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeEmptyElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeEmptyElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeEmptyElement(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->writeEmptyElement(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeEmptyElement, doc_QXmlStreamWriter_writeEmptyElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeTextElement, "writeTextElement(self, str, str)\n"
    "writeTextElement(self, str, str, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeTextElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeTextElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->writeTextElement(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            sipCpp->writeTextElement(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeTextElement, doc_QXmlStreamWriter_writeTextElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeEndDocument, "writeEndDocument(self)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeEndDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeEndDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            sipCpp->writeEndDocument();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeEndDocument, doc_QXmlStreamWriter_writeEndDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeEndElement, "writeEndElement(self)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeEndElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeEndElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            sipCpp->writeEndElement();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeEndElement, doc_QXmlStreamWriter_writeEndElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeEntityReference, "writeEntityReference(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeEntityReference(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeEntityReference(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeEntityReference(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeEntityReference, doc_QXmlStreamWriter_writeEntityReference);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeNamespace, "writeNamespace(self, str, prefix: str = '')");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeNamespace(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeNamespace(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        QXmlStreamWriter *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->writeNamespace(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeNamespace, doc_QXmlStreamWriter_writeNamespace);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeDefaultNamespace, "writeDefaultNamespace(self, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeDefaultNamespace(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeDefaultNamespace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeDefaultNamespace(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeDefaultNamespace, doc_QXmlStreamWriter_writeDefaultNamespace);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeProcessingInstruction, "writeProcessingInstruction(self, str, data: str = '')");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeProcessingInstruction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeProcessingInstruction(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        QXmlStreamWriter *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_data,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->writeProcessingInstruction(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeProcessingInstruction, doc_QXmlStreamWriter_writeProcessingInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeStartDocument, "writeStartDocument(self)\n"
    "writeStartDocument(self, str)\n"
    "writeStartDocument(self, str, bool)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeStartDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeStartDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            sipCpp->writeStartDocument();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeStartDocument(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        bool a1;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1b", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            sipCpp->writeStartDocument(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeStartDocument, doc_QXmlStreamWriter_writeStartDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeStartElement, "writeStartElement(self, str)\n"
    "writeStartElement(self, str, str)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeStartElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeStartElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->writeStartElement(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->writeStartElement(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeStartElement, doc_QXmlStreamWriter_writeStartElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_writeCurrentToken, "writeCurrentToken(self, QXmlStreamReader)");

extern "C" {static PyObject *meth_QXmlStreamWriter_writeCurrentToken(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_writeCurrentToken(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamReader* a0;
        QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamWriter, &sipCpp, sipType_QXmlStreamReader, &a0))
        {
            sipCpp->writeCurrentToken(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_writeCurrentToken, doc_QXmlStreamWriter_writeCurrentToken);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamWriter_hasError, "hasError(self) -> bool");

extern "C" {static PyObject *meth_QXmlStreamWriter_hasError(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamWriter_hasError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamWriter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasError();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamWriter, sipName_hasError, doc_QXmlStreamWriter_hasError);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamWriter(void *, int);}
static void release_QXmlStreamWriter(void *sipCppV,int)
{
    delete reinterpret_cast<QXmlStreamWriter *>(sipCppV);
}


extern "C" {static void dealloc_QXmlStreamWriter(sipSimpleWrapper *);}
static void dealloc_QXmlStreamWriter(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlStreamWriter(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlStreamWriter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlStreamWriter(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlStreamWriter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QXmlStreamWriter();

            return sipCpp;
        }
    }

    {
        QIODevice* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QIODevice, &a0))
        {
            sipCpp = new QXmlStreamWriter(a0);

            return sipCpp;
        }
    }

    {
        QByteArray* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J0", sipType_QByteArray, &a0, &a0State))
        {
            sipCpp = new QXmlStreamWriter(a0);
            sipReleaseType(a0,sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlStreamWriter[] = {
    {SIP_MLNAME_CAST(sipName_autoFormatting), meth_QXmlStreamWriter_autoFormatting, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_autoFormatting)},
    {SIP_MLNAME_CAST(sipName_autoFormattingIndent), meth_QXmlStreamWriter_autoFormattingIndent, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_autoFormattingIndent)},
    {SIP_MLNAME_CAST(sipName_codec), meth_QXmlStreamWriter_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_codec)},
    {SIP_MLNAME_CAST(sipName_device), meth_QXmlStreamWriter_device, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_device)},
    {SIP_MLNAME_CAST(sipName_hasError), meth_QXmlStreamWriter_hasError, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_hasError)},
    {SIP_MLNAME_CAST(sipName_setAutoFormatting), meth_QXmlStreamWriter_setAutoFormatting, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_setAutoFormatting)},
    {SIP_MLNAME_CAST(sipName_setAutoFormattingIndent), meth_QXmlStreamWriter_setAutoFormattingIndent, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_setAutoFormattingIndent)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QXmlStreamWriter_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_setCodec)},
    {SIP_MLNAME_CAST(sipName_setDevice), meth_QXmlStreamWriter_setDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_setDevice)},
    {SIP_MLNAME_CAST(sipName_writeAttribute), meth_QXmlStreamWriter_writeAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeAttribute)},
    {SIP_MLNAME_CAST(sipName_writeAttributes), meth_QXmlStreamWriter_writeAttributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeAttributes)},
    {SIP_MLNAME_CAST(sipName_writeCDATA), meth_QXmlStreamWriter_writeCDATA, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeCDATA)},
    {SIP_MLNAME_CAST(sipName_writeCharacters), meth_QXmlStreamWriter_writeCharacters, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeCharacters)},
    {SIP_MLNAME_CAST(sipName_writeComment), meth_QXmlStreamWriter_writeComment, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeComment)},
    {SIP_MLNAME_CAST(sipName_writeCurrentToken), meth_QXmlStreamWriter_writeCurrentToken, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeCurrentToken)},
    {SIP_MLNAME_CAST(sipName_writeDTD), meth_QXmlStreamWriter_writeDTD, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeDTD)},
    {SIP_MLNAME_CAST(sipName_writeDefaultNamespace), meth_QXmlStreamWriter_writeDefaultNamespace, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeDefaultNamespace)},
    {SIP_MLNAME_CAST(sipName_writeEmptyElement), meth_QXmlStreamWriter_writeEmptyElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeEmptyElement)},
    {SIP_MLNAME_CAST(sipName_writeEndDocument), meth_QXmlStreamWriter_writeEndDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeEndDocument)},
    {SIP_MLNAME_CAST(sipName_writeEndElement), meth_QXmlStreamWriter_writeEndElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeEndElement)},
    {SIP_MLNAME_CAST(sipName_writeEntityReference), meth_QXmlStreamWriter_writeEntityReference, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeEntityReference)},
    {SIP_MLNAME_CAST(sipName_writeNamespace), (PyCFunction)meth_QXmlStreamWriter_writeNamespace, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeNamespace)},
    {SIP_MLNAME_CAST(sipName_writeProcessingInstruction), (PyCFunction)meth_QXmlStreamWriter_writeProcessingInstruction, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeProcessingInstruction)},
    {SIP_MLNAME_CAST(sipName_writeStartDocument), meth_QXmlStreamWriter_writeStartDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeStartDocument)},
    {SIP_MLNAME_CAST(sipName_writeStartElement), meth_QXmlStreamWriter_writeStartElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeStartElement)},
    {SIP_MLNAME_CAST(sipName_writeTextElement), meth_QXmlStreamWriter_writeTextElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamWriter_writeTextElement)}
};

PyDoc_STRVAR(doc_QXmlStreamWriter, "\1QXmlStreamWriter()\n"
    "QXmlStreamWriter(QIODevice)\n"
    "QXmlStreamWriter(Union[QByteArray, bytes, bytearray])");


pyqt5ClassTypeDef sipTypeDef_QtCore_QXmlStreamWriter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamWriter,
        {0}
    },
    {
        sipNameNr_QXmlStreamWriter,
        {0, 0, 1},
        26, methods_QXmlStreamWriter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlStreamWriter,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlStreamWriter,
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
    dealloc_QXmlStreamWriter,
    0,
    0,
    0,
    release_QXmlStreamWriter,
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