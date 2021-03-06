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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qopenglframebufferobject.sip"
#include <qopenglframebufferobject.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"

#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"
#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qopenglframebufferobject.sip"
#include <qopenglframebufferobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"
#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"
#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qopenglframebufferobject.sip"
// The defaults are different for desktop OpenGL and OpenGL/ES so pretend the
// latter is the former.
#if defined(QT_OPENGL_ES)
#undef  GL_RGBA8
#define GL_RGBA8        GL_RGBA
#endif
#line 56 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQOpenGLFramebufferObject.cpp"


class sipQOpenGLFramebufferObject : public QOpenGLFramebufferObject
{
public:
    sipQOpenGLFramebufferObject(const QSize&,GLenum);
    sipQOpenGLFramebufferObject(int,int,GLenum);
    sipQOpenGLFramebufferObject(const QSize&,QOpenGLFramebufferObject::Attachment,GLenum,GLenum);
    sipQOpenGLFramebufferObject(int,int,QOpenGLFramebufferObject::Attachment,GLenum,GLenum);
    sipQOpenGLFramebufferObject(const QSize&,const QOpenGLFramebufferObjectFormat&);
    sipQOpenGLFramebufferObject(int,int,const QOpenGLFramebufferObjectFormat&);
    ~sipQOpenGLFramebufferObject();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQOpenGLFramebufferObject(const sipQOpenGLFramebufferObject &);
    sipQOpenGLFramebufferObject &operator = (const sipQOpenGLFramebufferObject &);
};

sipQOpenGLFramebufferObject::sipQOpenGLFramebufferObject(const QSize& a0,GLenum a1): QOpenGLFramebufferObject(a0,a1), sipPySelf(0)
{
}

sipQOpenGLFramebufferObject::sipQOpenGLFramebufferObject(int a0,int a1,GLenum a2): QOpenGLFramebufferObject(a0,a1,a2), sipPySelf(0)
{
}

sipQOpenGLFramebufferObject::sipQOpenGLFramebufferObject(const QSize& a0,QOpenGLFramebufferObject::Attachment a1,GLenum a2,GLenum a3): QOpenGLFramebufferObject(a0,a1,a2,a3), sipPySelf(0)
{
}

sipQOpenGLFramebufferObject::sipQOpenGLFramebufferObject(int a0,int a1,QOpenGLFramebufferObject::Attachment a2,GLenum a3,GLenum a4): QOpenGLFramebufferObject(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQOpenGLFramebufferObject::sipQOpenGLFramebufferObject(const QSize& a0,const QOpenGLFramebufferObjectFormat& a1): QOpenGLFramebufferObject(a0,a1), sipPySelf(0)
{
}

sipQOpenGLFramebufferObject::sipQOpenGLFramebufferObject(int a0,int a1,const QOpenGLFramebufferObjectFormat& a2): QOpenGLFramebufferObject(a0,a1,a2), sipPySelf(0)
{
}

sipQOpenGLFramebufferObject::~sipQOpenGLFramebufferObject()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_format, "format(self) -> QOpenGLFramebufferObjectFormat");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_format(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            QOpenGLFramebufferObjectFormat*sipRes;

            sipRes = new QOpenGLFramebufferObjectFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QOpenGLFramebufferObjectFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_format, doc_QOpenGLFramebufferObject_format);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_isValid(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_isValid, doc_QOpenGLFramebufferObject_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_isBound, "isBound(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_isBound(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_isBound(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBound();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_isBound, doc_QOpenGLFramebufferObject_isBound);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_bind, "bind(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_bind(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->bind();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_bind, doc_QOpenGLFramebufferObject_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_release, "release(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_release(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->release();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_release, doc_QOpenGLFramebufferObject_release);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_width, "width(self) -> int");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_width(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->width();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_width, doc_QOpenGLFramebufferObject_width);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_height, "height(self) -> int");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_height(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->height();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_height, doc_QOpenGLFramebufferObject_height);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_texture, "texture(self) -> int");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_texture(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_texture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            GLuint sipRes;

            sipRes = sipCpp->texture();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_texture, doc_QOpenGLFramebufferObject_texture);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_textures, "textures(self) -> List[int]");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_textures(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_textures(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            QVector<uint>*sipRes;

            sipRes = new QVector<uint>(sipCpp->textures());

            return sipConvertFromNewType(sipRes,sipType_QVector_1900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_textures, doc_QOpenGLFramebufferObject_textures);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_size, "size(self) -> QSize");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_size(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_size, doc_QOpenGLFramebufferObject_size);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_toImage, "toImage(self) -> QImage\n"
    "toImage(self, bool) -> QImage\n"
    "toImage(self, bool, int) -> QImage");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_toImage(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_toImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->toImage());

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    {
        bool a0;
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp, &a0))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->toImage(a0));

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    {
        bool a0;
        int a1;
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bbi", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp, &a0, &a1))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->toImage(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_toImage, doc_QOpenGLFramebufferObject_toImage);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_attachment, "attachment(self) -> QOpenGLFramebufferObject.Attachment");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_attachment(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_attachment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            QOpenGLFramebufferObject::Attachment sipRes;

            sipRes = sipCpp->attachment();

            return sipConvertFromEnum(sipRes,sipType_QOpenGLFramebufferObject_Attachment);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_attachment, doc_QOpenGLFramebufferObject_attachment);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_setAttachment, "setAttachment(self, QOpenGLFramebufferObject.Attachment)");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_setAttachment(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_setAttachment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLFramebufferObject::Attachment a0;
        QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp, sipType_QOpenGLFramebufferObject_Attachment, &a0))
        {
            sipCpp->setAttachment(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_setAttachment, doc_QOpenGLFramebufferObject_setAttachment);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_handle, "handle(self) -> int");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_handle(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            GLuint sipRes;

            sipRes = sipCpp->handle();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_handle, doc_QOpenGLFramebufferObject_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_bindDefault, "bindDefault() -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_bindDefault(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_bindDefault(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QOpenGLFramebufferObject::bindDefault();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_bindDefault, doc_QOpenGLFramebufferObject_bindDefault);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects, "hasOpenGLFramebufferObjects() -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QOpenGLFramebufferObject::hasOpenGLFramebufferObjects();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_hasOpenGLFramebufferObjects, doc_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit, "hasOpenGLFramebufferBlit() -> bool");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QOpenGLFramebufferObject::hasOpenGLFramebufferBlit();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_hasOpenGLFramebufferBlit, doc_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_blitFramebuffer, "blitFramebuffer(QOpenGLFramebufferObject, QRect, QOpenGLFramebufferObject, QRect, buffers: int = GL_COLOR_BUFFER_BIT, filter: int = GL_NEAREST)\n"
    "blitFramebuffer(QOpenGLFramebufferObject, QOpenGLFramebufferObject, buffers: int = GL_COLOR_BUFFER_BIT, filter: int = GL_NEAREST)\n"
    "blitFramebuffer(QOpenGLFramebufferObject, QRect, QOpenGLFramebufferObject, QRect, int, int, int, int)");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_blitFramebuffer(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_blitFramebuffer(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLFramebufferObject* a0;
        const QRect* a1;
        QOpenGLFramebufferObject* a2;
        const QRect* a3;
        GLbitfield a4 = GL_COLOR_BUFFER_BIT;
        GLenum a5 = GL_NEAREST;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_buffers,
            sipName_filter,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8J9J8J9|uu", sipType_QOpenGLFramebufferObject, &a0, sipType_QRect, &a1, sipType_QOpenGLFramebufferObject, &a2, sipType_QRect, &a3, &a4, &a5))
        {
            QOpenGLFramebufferObject::blitFramebuffer(a0,*a1,a2,*a3,a4,a5);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QOpenGLFramebufferObject* a0;
        QOpenGLFramebufferObject* a1;
        GLbitfield a2 = GL_COLOR_BUFFER_BIT;
        GLenum a3 = GL_NEAREST;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_buffers,
            sipName_filter,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8J8|uu", sipType_QOpenGLFramebufferObject, &a0, sipType_QOpenGLFramebufferObject, &a1, &a2, &a3))
        {
            QOpenGLFramebufferObject::blitFramebuffer(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QOpenGLFramebufferObject* a0;
        const QRect* a1;
        QOpenGLFramebufferObject* a2;
        const QRect* a3;
        GLbitfield a4;
        GLenum a5;
        int a6;
        int a7;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "J8J9J8J9uuii", sipType_QOpenGLFramebufferObject, &a0, sipType_QRect, &a1, sipType_QOpenGLFramebufferObject, &a2, sipType_QRect, &a3, &a4, &a5, &a6, &a7))
        {
            QOpenGLFramebufferObject::blitFramebuffer(a0,*a1,a2,*a3,a4,a5,a6,a7);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_blitFramebuffer, doc_QOpenGLFramebufferObject_blitFramebuffer);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_takeTexture, "takeTexture(self) -> int\n"
    "takeTexture(self, int) -> int");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_takeTexture(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_takeTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            GLuint sipRes;

            sipRes = sipCpp->takeTexture();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        int a0;
        QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp, &a0))
        {
            GLuint sipRes;

            sipRes = sipCpp->takeTexture(a0);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_takeTexture, doc_QOpenGLFramebufferObject_takeTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_addColorAttachment, "addColorAttachment(self, QSize, internal_format: int = 0)\n"
    "addColorAttachment(self, int, int, internal_format: int = 0)");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_addColorAttachment(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_addColorAttachment(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        GLenum a1 = 0;
        QOpenGLFramebufferObject *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_internal_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|u", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp, sipType_QSize, &a0, &a1))
        {
            sipCpp->addColorAttachment(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
        GLenum a2 = 0;
        QOpenGLFramebufferObject *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_internal_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bii|u", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp, &a0, &a1, &a2))
        {
            sipCpp->addColorAttachment(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_addColorAttachment, doc_QOpenGLFramebufferObject_addColorAttachment);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLFramebufferObject_sizes, "sizes(self) -> object");

extern "C" {static PyObject *meth_QOpenGLFramebufferObject_sizes(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLFramebufferObject_sizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLFramebufferObject, &sipCpp))
        {
            QVector<QSize>*sipRes;

            sipRes = new QVector<QSize>(sipCpp->sizes());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLFramebufferObject, sipName_sizes, doc_QOpenGLFramebufferObject_sizes);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLFramebufferObject(void *, int);}
static void release_QOpenGLFramebufferObject(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQOpenGLFramebufferObject *>(sipCppV);
    else
        delete reinterpret_cast<QOpenGLFramebufferObject *>(sipCppV);
}


extern "C" {static void dealloc_QOpenGLFramebufferObject(sipSimpleWrapper *);}
static void dealloc_QOpenGLFramebufferObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQOpenGLFramebufferObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLFramebufferObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QOpenGLFramebufferObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLFramebufferObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQOpenGLFramebufferObject *sipCpp = 0;

    {
        const QSize* a0;
        GLenum a1 = GL_TEXTURE_2D;

        static const char *sipKwdList[] = {
            NULL,
            sipName_target,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|u", sipType_QSize, &a0, &a1))
        {
            sipCpp = new sipQOpenGLFramebufferObject(*a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        GLenum a2 = GL_TEXTURE_2D;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_target,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii|u", &a0, &a1, &a2))
        {
            sipCpp = new sipQOpenGLFramebufferObject(a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize* a0;
        QOpenGLFramebufferObject::Attachment a1;
        GLenum a2 = GL_TEXTURE_2D;
        GLenum a3 = GL_RGBA8;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_target,
            sipName_internal_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9E|uu", sipType_QSize, &a0, sipType_QOpenGLFramebufferObject_Attachment, &a1, &a2, &a3))
        {
            sipCpp = new sipQOpenGLFramebufferObject(*a0,a1,a2,a3);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        QOpenGLFramebufferObject::Attachment a2;
        GLenum a3 = GL_TEXTURE_2D;
        GLenum a4 = GL_RGBA8;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_target,
            sipName_internal_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiE|uu", &a0, &a1, sipType_QOpenGLFramebufferObject_Attachment, &a2, &a3, &a4))
        {
            sipCpp = new sipQOpenGLFramebufferObject(a0,a1,a2,a3,a4);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize* a0;
        const QOpenGLFramebufferObjectFormat* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QSize, &a0, sipType_QOpenGLFramebufferObjectFormat, &a1))
        {
            sipCpp = new sipQOpenGLFramebufferObject(*a0,*a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        const QOpenGLFramebufferObjectFormat* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iiJ9", &a0, &a1, sipType_QOpenGLFramebufferObjectFormat, &a2))
        {
            sipCpp = new sipQOpenGLFramebufferObject(a0,a1,*a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QOpenGLFramebufferObject[] = {
    {SIP_MLNAME_CAST(sipName_addColorAttachment), (PyCFunction)meth_QOpenGLFramebufferObject_addColorAttachment, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_addColorAttachment)},
    {SIP_MLNAME_CAST(sipName_attachment), meth_QOpenGLFramebufferObject_attachment, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_attachment)},
    {SIP_MLNAME_CAST(sipName_bind), meth_QOpenGLFramebufferObject_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_bind)},
    {SIP_MLNAME_CAST(sipName_bindDefault), meth_QOpenGLFramebufferObject_bindDefault, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_bindDefault)},
    {SIP_MLNAME_CAST(sipName_blitFramebuffer), (PyCFunction)meth_QOpenGLFramebufferObject_blitFramebuffer, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_blitFramebuffer)},
    {SIP_MLNAME_CAST(sipName_format), meth_QOpenGLFramebufferObject_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_format)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QOpenGLFramebufferObject_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_handle)},
    {SIP_MLNAME_CAST(sipName_hasOpenGLFramebufferBlit), meth_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit)},
    {SIP_MLNAME_CAST(sipName_hasOpenGLFramebufferObjects), meth_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects)},
    {SIP_MLNAME_CAST(sipName_height), meth_QOpenGLFramebufferObject_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_height)},
    {SIP_MLNAME_CAST(sipName_isBound), meth_QOpenGLFramebufferObject_isBound, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_isBound)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QOpenGLFramebufferObject_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_isValid)},
    {SIP_MLNAME_CAST(sipName_release), meth_QOpenGLFramebufferObject_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_release)},
    {SIP_MLNAME_CAST(sipName_setAttachment), meth_QOpenGLFramebufferObject_setAttachment, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_setAttachment)},
    {SIP_MLNAME_CAST(sipName_size), meth_QOpenGLFramebufferObject_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_size)},
    {SIP_MLNAME_CAST(sipName_sizes), meth_QOpenGLFramebufferObject_sizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_sizes)},
    {SIP_MLNAME_CAST(sipName_takeTexture), meth_QOpenGLFramebufferObject_takeTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_takeTexture)},
    {SIP_MLNAME_CAST(sipName_texture), meth_QOpenGLFramebufferObject_texture, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_texture)},
    {SIP_MLNAME_CAST(sipName_textures), meth_QOpenGLFramebufferObject_textures, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_textures)},
    {SIP_MLNAME_CAST(sipName_toImage), meth_QOpenGLFramebufferObject_toImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_toImage)},
    {SIP_MLNAME_CAST(sipName_width), meth_QOpenGLFramebufferObject_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLFramebufferObject_width)}
};

static sipEnumMemberDef enummembers_QOpenGLFramebufferObject[] = {
    {sipName_CombinedDepthStencil, static_cast<int>(QOpenGLFramebufferObject::CombinedDepthStencil), 142},
    {sipName_Depth, static_cast<int>(QOpenGLFramebufferObject::Depth), 142},
    {sipName_NoAttachment, static_cast<int>(QOpenGLFramebufferObject::NoAttachment), 142},
};

PyDoc_STRVAR(doc_QOpenGLFramebufferObject, "\1QOpenGLFramebufferObject(QSize, target: int = GL_TEXTURE_2D)\n"
    "QOpenGLFramebufferObject(int, int, target: int = GL_TEXTURE_2D)\n"
    "QOpenGLFramebufferObject(QSize, QOpenGLFramebufferObject.Attachment, target: int = GL_TEXTURE_2D, internal_format: int = GL_RGBA8)\n"
    "QOpenGLFramebufferObject(int, int, QOpenGLFramebufferObject.Attachment, target: int = GL_TEXTURE_2D, internal_format: int = GL_RGBA8)\n"
    "QOpenGLFramebufferObject(QSize, QOpenGLFramebufferObjectFormat)\n"
    "QOpenGLFramebufferObject(int, int, QOpenGLFramebufferObjectFormat)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLFramebufferObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLFramebufferObject,
        {0}
    },
    {
        sipNameNr_QOpenGLFramebufferObject,
        {0, 0, 1},
        21, methods_QOpenGLFramebufferObject,
        3, enummembers_QOpenGLFramebufferObject,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLFramebufferObject,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QOpenGLFramebufferObject,
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
    dealloc_QOpenGLFramebufferObject,
    0,
    0,
    0,
    release_QOpenGLFramebufferObject,
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
