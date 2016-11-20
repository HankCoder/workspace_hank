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

#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"
#line 68 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"


PyDoc_STRVAR(doc_QXmlStreamAttributes_value, "value(self, str, str) -> str\n"
    "value(self, str) -> str");

extern "C" {static PyObject *meth_QXmlStreamAttributes_value(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->value(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->value(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_value, doc_QXmlStreamAttributes_value);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_append, "append(self, str, str, str)\n"
    "append(self, str, str)\n"
    "append(self, QXmlStreamAttribute)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_append(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            sipCpp->append(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->append(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QXmlStreamAttribute* a0;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0))
        {
            sipCpp->append(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_append, doc_QXmlStreamAttributes_append);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_hasAttribute, "hasAttribute(self, str) -> bool\n"
    "hasAttribute(self, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlStreamAttributes_hasAttribute(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_hasAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasAttribute(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            sipRes = sipCpp->hasAttribute(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_hasAttribute, doc_QXmlStreamAttributes_hasAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_at, "at(self, int) -> QXmlStreamAttribute");

extern "C" {static PyObject *meth_QXmlStreamAttributes_at(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, &a0))
        {
            QXmlStreamAttribute*sipRes;

            sipRes = new QXmlStreamAttribute(sipCpp->at(a0));

            return sipConvertFromNewType(sipRes,sipType_QXmlStreamAttribute,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_at, doc_QXmlStreamAttributes_at);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_clear, "clear(self)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_clear(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_clear, doc_QXmlStreamAttributes_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_contains, "contains(self, QXmlStreamAttribute) -> bool");

extern "C" {static PyObject *meth_QXmlStreamAttributes_contains(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_contains, doc_QXmlStreamAttributes_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_count, "count(self, QXmlStreamAttribute) -> int\n"
    "count(self) -> int");

extern "C" {static PyObject *meth_QXmlStreamAttributes_count(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0))
        {
            int sipRes;

            sipRes = sipCpp->count(*a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_count, doc_QXmlStreamAttributes_count);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_data, "data(self) -> sip.voidptr");

extern "C" {static PyObject *meth_QXmlStreamAttributes_data(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            void*sipRes;

            sipRes = sipCpp->data();

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_data, doc_QXmlStreamAttributes_data);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_fill, "fill(self, QXmlStreamAttribute, size: int = -1)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_fill(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_fill(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;
        int a1 = -1;
        QXmlStreamAttributes *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|i", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0, &a1))
        {
            sipCpp->fill(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_fill, doc_QXmlStreamAttributes_fill);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_first, "first(self) -> QXmlStreamAttribute");

extern "C" {static PyObject *meth_QXmlStreamAttributes_first(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_first(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            QXmlStreamAttribute*sipRes;

            sipRes = &sipCpp->first();

            return sipConvertFromType(sipRes,sipType_QXmlStreamAttribute,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_first, doc_QXmlStreamAttributes_first);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_indexOf, "indexOf(self, QXmlStreamAttribute, from_: int = 0) -> int");

extern "C" {static PyObject *meth_QXmlStreamAttributes_indexOf(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_indexOf(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;
        int a1 = 0;
        const QXmlStreamAttributes *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_from,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|i", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->indexOf(*a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_indexOf, doc_QXmlStreamAttributes_indexOf);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_insert, "insert(self, int, QXmlStreamAttribute)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_insert(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QXmlStreamAttribute* a1;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, &a0, sipType_QXmlStreamAttribute, &a1))
        {
            sipCpp->insert(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_insert, doc_QXmlStreamAttributes_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QXmlStreamAttributes_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_isEmpty, doc_QXmlStreamAttributes_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_last, "last(self) -> QXmlStreamAttribute");

extern "C" {static PyObject *meth_QXmlStreamAttributes_last(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_last(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            QXmlStreamAttribute*sipRes;

            sipRes = &sipCpp->last();

            return sipConvertFromType(sipRes,sipType_QXmlStreamAttribute,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_last, doc_QXmlStreamAttributes_last);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_lastIndexOf, "lastIndexOf(self, QXmlStreamAttribute, from_: int = -1) -> int");

extern "C" {static PyObject *meth_QXmlStreamAttributes_lastIndexOf(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_lastIndexOf(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;
        int a1 = -1;
        const QXmlStreamAttributes *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_from,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|i", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->lastIndexOf(*a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_lastIndexOf, doc_QXmlStreamAttributes_lastIndexOf);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_prepend, "prepend(self, QXmlStreamAttribute)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_prepend(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_prepend(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, sipType_QXmlStreamAttribute, &a0))
        {
            sipCpp->prepend(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_prepend, doc_QXmlStreamAttributes_prepend);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_remove, "remove(self, int)\n"
    "remove(self, int, int)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_remove(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, &a0))
        {
            sipCpp->remove(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, &a0, &a1))
        {
            sipCpp->remove(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_remove, doc_QXmlStreamAttributes_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_replace, "replace(self, int, QXmlStreamAttribute)");

extern "C" {static PyObject *meth_QXmlStreamAttributes_replace(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_replace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QXmlStreamAttribute* a1;
        QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp, &a0, sipType_QXmlStreamAttribute, &a1))
        {
            sipCpp->replace(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_replace, doc_QXmlStreamAttributes_replace);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamAttributes_size, "size(self) -> int");

extern "C" {static PyObject *meth_QXmlStreamAttributes_size(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttributes_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamAttributes, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->size();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName_size, doc_QXmlStreamAttributes_size);

    return NULL;
}


extern "C" {static int slot_QXmlStreamAttributes___contains__(PyObject *,PyObject *);}
static int slot_QXmlStreamAttributes___contains__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttribute* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamAttribute, &a0))
        {
            int sipRes = 0;

#line 230 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
// It looks like you can't assign QBool to int.
sipRes = bool(sipCpp->contains(*a0));
#line 740 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName___contains__, NULL);

    return -1;
}


extern "C" {static int slot_QXmlStreamAttributes___delitem__(PyObject *,PyObject *);}
static int slot_QXmlStreamAttributes___delitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            int sipIsErr = 0;

#line 174 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
int len;

len = sipCpp->count();

if ((a0 = (int)sipConvertFromSequenceIndex(a0, len)) < 0)
    sipIsErr = 1;
else
    sipCpp->remove(a0);
#line 779 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1T", &PySlice_Type, &a0))
        {
            int sipIsErr = 0;

#line 186 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
Py_ssize_t len, start, stop, step, slicelength, i;

len = sipCpp->count();

#if PY_VERSION_HEX >= 0x03020000
if (PySlice_GetIndicesEx(a0, len, &start, &stop, &step, &slicelength) < 0)
#else
if (PySlice_GetIndicesEx((PySliceObject *)a0, len, &start, &stop, &step, &slicelength) < 0)
#endif
    sipIsErr = 1;
else
    for (i = 0; i < slicelength; ++i)
    {
        sipCpp->remove(start);
        start += step - 1;
    }
#line 812 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName___delitem__, NULL);

    return -1;
}


extern "C" {static int slot_QXmlStreamAttributes___setitem__(PyObject *,PyObject *);}
static int slot_QXmlStreamAttributes___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QXmlStreamAttribute* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "iJ9", &a0, sipType_QXmlStreamAttribute, &a1))
        {
            int sipIsErr = 0;

#line 127 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
int len;

len = sipCpp->count();

if ((a0 = (int)sipConvertFromSequenceIndex(a0, len)) < 0)
    sipIsErr = 1;
else
    (*sipCpp)[a0] = *a1;
#line 855 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    {
        PyObject * a0;
        const QXmlStreamAttributes* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "TJ9", &PySlice_Type, &a0, sipType_QXmlStreamAttributes, &a1))
        {
            int sipIsErr = 0;

#line 139 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
Py_ssize_t len, start, stop, step, slicelength, i;

len = sipCpp->count();

#if PY_VERSION_HEX >= 0x03020000
if (PySlice_GetIndicesEx(a0, len, &start, &stop, &step, &slicelength) < 0)
#else
if (PySlice_GetIndicesEx((PySliceObject *)a0, len, &start, &stop, &step, &slicelength) < 0)
#endif
    sipIsErr = 1;
else
{
    int vlen = a1->count();

    if (vlen != slicelength)
    {
        sipBadLengthForSlice(vlen, slicelength);
        sipIsErr = 1;
    }
    else
    {
        QVector<QXmlStreamAttribute>::const_iterator it = a1->begin();

        for (i = 0; i < slicelength; ++i)
        {
            (*sipCpp)[start] = *it;
            start += step;
            ++it;
        }
    }
}
#line 904 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_QXmlStreamAttributes___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamAttributes___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            QXmlStreamAttribute*sipRes = 0;
            int sipIsErr = 0;

#line 115 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
Py_ssize_t idx = sipConvertFromSequenceIndex(a0, sipCpp->count());

if (idx < 0)
    sipIsErr = 1;
else
    sipRes = new QXmlStreamAttribute(sipCpp->operator[]((int)idx));
#line 945 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_QXmlStreamAttribute,NULL);
        }
    }

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1T", &PySlice_Type, &a0))
        {
            QXmlStreamAttributes*sipRes = 0;
            int sipIsErr = 0;

#line 206 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qxmlstream.sip"
Py_ssize_t len, start, stop, step, slicelength, i;

len = sipCpp->count();

#if PY_VERSION_HEX >= 0x03020000
if (PySlice_GetIndicesEx(a0, len, &start, &stop, &step, &slicelength) < 0)
#else
if (PySlice_GetIndicesEx((PySliceObject *)a0, len, &start, &stop, &step, &slicelength) < 0)
#endif
    sipIsErr = 1;
else
{
    sipRes = new QXmlStreamAttributes();

    for (i = 0; i < slicelength; ++i)
    {
        (*sipRes) += (*sipCpp)[start];
        start += step;
    }
}
#line 983 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_QXmlStreamAttributes,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamAttributes, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_QXmlStreamAttributes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamAttributes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttributes* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamAttributes, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlStreamAttributes::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QXmlStreamAttributes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlStreamAttributes___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamAttributes___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttributes* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamAttributes, &a0))
        {
            sipCpp->QXmlStreamAttributes::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const QXmlStreamAttribute* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamAttribute, &a0))
        {
            sipCpp->QXmlStreamAttributes::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    /* Raise an exception if the argument couldn't be parsed. */
    sipBadOperatorArg(sipSelf,sipArg,iconcat_slot);

    return NULL;
}


extern "C" {static PyObject *slot_QXmlStreamAttributes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamAttributes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamAttributes* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamAttributes, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlStreamAttributes::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QXmlStreamAttributes,sipSelf,sipArg);
}


extern "C" {static SIP_SSIZE_T slot_QXmlStreamAttributes___len__(PyObject *);}
static SIP_SSIZE_T slot_QXmlStreamAttributes___len__(PyObject *sipSelf)
{
    QXmlStreamAttributes *sipCpp = reinterpret_cast<QXmlStreamAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttributes));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 1119 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQXmlStreamAttributes.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamAttributes(void *, int);}
static void release_QXmlStreamAttributes(void *sipCppV,int)
{
    delete reinterpret_cast<QXmlStreamAttributes *>(sipCppV);
}


extern "C" {static void assign_QXmlStreamAttributes(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlStreamAttributes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlStreamAttributes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlStreamAttributes *>(sipSrc);
}


extern "C" {static void *array_QXmlStreamAttributes(SIP_SSIZE_T);}
static void *array_QXmlStreamAttributes(SIP_SSIZE_T sipNrElem)
{
    return new QXmlStreamAttributes[sipNrElem];
}


extern "C" {static void *copy_QXmlStreamAttributes(const void *, SIP_SSIZE_T);}
static void *copy_QXmlStreamAttributes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlStreamAttributes(reinterpret_cast<const QXmlStreamAttributes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlStreamAttributes(sipSimpleWrapper *);}
static void dealloc_QXmlStreamAttributes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlStreamAttributes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlStreamAttributes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlStreamAttributes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlStreamAttributes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QXmlStreamAttributes();

            return sipCpp;
        }
    }

    {
        const QXmlStreamAttributes* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlStreamAttributes, &a0))
        {
            sipCpp = new QXmlStreamAttributes(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlStreamAttributes[] = {
    {(void *)slot_QXmlStreamAttributes___contains__, contains_slot},
    {(void *)slot_QXmlStreamAttributes___delitem__, delitem_slot},
    {(void *)slot_QXmlStreamAttributes___setitem__, setitem_slot},
    {(void *)slot_QXmlStreamAttributes___getitem__, getitem_slot},
    {(void *)slot_QXmlStreamAttributes___eq__, eq_slot},
    {(void *)slot_QXmlStreamAttributes___iadd__, iconcat_slot},
    {(void *)slot_QXmlStreamAttributes___ne__, ne_slot},
    {(void *)slot_QXmlStreamAttributes___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlStreamAttributes[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QXmlStreamAttributes_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_append)},
    {SIP_MLNAME_CAST(sipName_at), meth_QXmlStreamAttributes_at, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_at)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QXmlStreamAttributes_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_clear)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QXmlStreamAttributes_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_contains)},
    {SIP_MLNAME_CAST(sipName_count), meth_QXmlStreamAttributes_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_count)},
    {SIP_MLNAME_CAST(sipName_data), meth_QXmlStreamAttributes_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_data)},
    {SIP_MLNAME_CAST(sipName_fill), (PyCFunction)meth_QXmlStreamAttributes_fill, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_fill)},
    {SIP_MLNAME_CAST(sipName_first), meth_QXmlStreamAttributes_first, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_first)},
    {SIP_MLNAME_CAST(sipName_hasAttribute), meth_QXmlStreamAttributes_hasAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_hasAttribute)},
    {SIP_MLNAME_CAST(sipName_indexOf), (PyCFunction)meth_QXmlStreamAttributes_indexOf, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_indexOf)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QXmlStreamAttributes_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_insert)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QXmlStreamAttributes_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_isEmpty)},
    {SIP_MLNAME_CAST(sipName_last), meth_QXmlStreamAttributes_last, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_last)},
    {SIP_MLNAME_CAST(sipName_lastIndexOf), (PyCFunction)meth_QXmlStreamAttributes_lastIndexOf, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_lastIndexOf)},
    {SIP_MLNAME_CAST(sipName_prepend), meth_QXmlStreamAttributes_prepend, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_prepend)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QXmlStreamAttributes_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_remove)},
    {SIP_MLNAME_CAST(sipName_replace), meth_QXmlStreamAttributes_replace, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_replace)},
    {SIP_MLNAME_CAST(sipName_size), meth_QXmlStreamAttributes_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_size)},
    {SIP_MLNAME_CAST(sipName_value), meth_QXmlStreamAttributes_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamAttributes_value)}
};

PyDoc_STRVAR(doc_QXmlStreamAttributes, "\1QXmlStreamAttributes()\n"
    "QXmlStreamAttributes(QXmlStreamAttributes)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QXmlStreamAttributes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamAttributes,
        {0}
    },
    {
        sipNameNr_QXmlStreamAttributes,
        {0, 0, 1},
        19, methods_QXmlStreamAttributes,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlStreamAttributes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlStreamAttributes,
    init_type_QXmlStreamAttributes,
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
    dealloc_QXmlStreamAttributes,
    assign_QXmlStreamAttributes,
    array_QXmlStreamAttributes,
    copy_QXmlStreamAttributes,
    release_QXmlStreamAttributes,
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
