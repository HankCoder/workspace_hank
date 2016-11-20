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

#include "sipAPIQtWebEngineWidgets.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWebEngineWidgets/qwebenginescriptcollection.sip"
#include <qwebenginescriptcollection.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineScriptCollection.cpp"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineScriptCollection.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWebEngineWidgets/qwebenginescript.sip"
#include <qwebenginescript.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineScriptCollection.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineScriptCollection.cpp"


PyDoc_STRVAR(doc_QWebEngineScriptCollection_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_isEmpty, doc_QWebEngineScriptCollection_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_count, "count(self) -> int");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_count(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_count, doc_QWebEngineScriptCollection_count);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_contains, "contains(self, QWebEngineScript) -> bool");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_contains(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineScript* a0;
        const QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp, sipType_QWebEngineScript, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_contains, doc_QWebEngineScriptCollection_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_findScript, "findScript(self, str) -> QWebEngineScript");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_findScript(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_findScript(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QWebEngineScript*sipRes;

            sipRes = new QWebEngineScript(sipCpp->findScript(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineScript,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_findScript, doc_QWebEngineScriptCollection_findScript);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_findScripts, "findScripts(self, str) -> object");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_findScripts(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_findScripts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QList<QWebEngineScript>*sipRes;

            sipRes = new QList<QWebEngineScript>(sipCpp->findScripts(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebEngineScript,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_findScripts, doc_QWebEngineScriptCollection_findScripts);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_insert, "insert(self, QWebEngineScript)\n"
    "insert(self, Iterable[QWebEngineScript])");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_insert(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineScript* a0;
        QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp, sipType_QWebEngineScript, &a0))
        {
            sipCpp->insert(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QList<QWebEngineScript>* a0;
        int a0State = 0;
        QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp, sipType_QList_0100QWebEngineScript,&a0, &a0State))
        {
            sipCpp->insert(*a0);
            sipReleaseType(const_cast<QList<QWebEngineScript> *>(a0),sipType_QList_0100QWebEngineScript,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_insert, doc_QWebEngineScriptCollection_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_remove, "remove(self, QWebEngineScript) -> bool");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_remove(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineScript* a0;
        QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp, sipType_QWebEngineScript, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->remove(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_remove, doc_QWebEngineScriptCollection_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_clear, "clear(self)");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_clear(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_clear, doc_QWebEngineScriptCollection_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineScriptCollection_toList, "toList(self) -> List[QWebEngineScript]");

extern "C" {static PyObject *meth_QWebEngineScriptCollection_toList(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineScriptCollection_toList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineScriptCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineScriptCollection, &sipCpp))
        {
            QList<QWebEngineScript>*sipRes;

            sipRes = new QList<QWebEngineScript>(sipCpp->toList());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebEngineScript,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineScriptCollection, sipName_toList, doc_QWebEngineScriptCollection_toList);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QWebEngineScriptCollection___len__(PyObject *);}
static SIP_SSIZE_T slot_QWebEngineScriptCollection___len__(PyObject *sipSelf)
{
    QWebEngineScriptCollection *sipCpp = reinterpret_cast<QWebEngineScriptCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineScriptCollection));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 333 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineScriptCollection.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebEngineScriptCollection(void *, int);}
static void release_QWebEngineScriptCollection(void *sipCppV,int)
{
    delete reinterpret_cast<QWebEngineScriptCollection *>(sipCppV);
}


extern "C" {static void dealloc_QWebEngineScriptCollection(sipSimpleWrapper *);}
static void dealloc_QWebEngineScriptCollection(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebEngineScriptCollection(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebEngineScriptCollection[] = {
    {(void *)slot_QWebEngineScriptCollection___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QWebEngineScriptCollection[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QWebEngineScriptCollection_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_clear)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QWebEngineScriptCollection_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_contains)},
    {SIP_MLNAME_CAST(sipName_count), meth_QWebEngineScriptCollection_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_count)},
    {SIP_MLNAME_CAST(sipName_findScript), meth_QWebEngineScriptCollection_findScript, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_findScript)},
    {SIP_MLNAME_CAST(sipName_findScripts), meth_QWebEngineScriptCollection_findScripts, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_findScripts)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QWebEngineScriptCollection_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_insert)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QWebEngineScriptCollection_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_isEmpty)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QWebEngineScriptCollection_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_remove)},
    {SIP_MLNAME_CAST(sipName_toList), meth_QWebEngineScriptCollection_toList, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineScriptCollection_toList)}
};


pyqt5ClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEngineScriptCollection = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineScriptCollection,
        {0}
    },
    {
        sipNameNr_QWebEngineScriptCollection,
        {0, 0, 1},
        9, methods_QWebEngineScriptCollection,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebEngineScriptCollection,
    0,
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
    dealloc_QWebEngineScriptCollection,
    0,
    0,
    0,
    release_QWebEngineScriptCollection,
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
