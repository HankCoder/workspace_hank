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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQMutexLocker.cpp"

#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQMutexLocker.cpp"


PyDoc_STRVAR(doc_QMutexLocker_unlock, "unlock(self)");

extern "C" {static PyObject *meth_QMutexLocker_unlock(PyObject *, PyObject *);}
static PyObject *meth_QMutexLocker_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMutexLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutexLocker, &sipCpp))
        {
            sipCpp->unlock();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutexLocker, sipName_unlock, doc_QMutexLocker_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QMutexLocker_relock, "relock(self)");

extern "C" {static PyObject *meth_QMutexLocker_relock(PyObject *, PyObject *);}
static PyObject *meth_QMutexLocker_relock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMutexLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutexLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->relock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutexLocker, sipName_relock, doc_QMutexLocker_relock);

    return NULL;
}


PyDoc_STRVAR(doc_QMutexLocker_mutex, "mutex(self) -> QMutex");

extern "C" {static PyObject *meth_QMutexLocker_mutex(PyObject *, PyObject *);}
static PyObject *meth_QMutexLocker_mutex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMutexLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutexLocker, &sipCpp))
        {
            QMutex*sipRes;

            sipRes = sipCpp->mutex();

            return sipConvertFromType(sipRes,sipType_QMutex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutexLocker, sipName_mutex, doc_QMutexLocker_mutex);

    return NULL;
}


PyDoc_STRVAR(doc_QMutexLocker___enter__, "__enter__(self) -> object");

extern "C" {static PyObject *meth_QMutexLocker___enter__(PyObject *, PyObject *);}
static PyObject *meth_QMutexLocker___enter__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMutexLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutexLocker, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 37 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qmutex.sip"
        // Just return a reference to self.
        sipRes = sipSelf;
        Py_INCREF(sipRes);
#line 139 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQMutexLocker.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutexLocker, sipName___enter__, doc_QMutexLocker___enter__);

    return NULL;
}


PyDoc_STRVAR(doc_QMutexLocker___exit__, "__exit__(self, object, object, object)");

extern "C" {static PyObject *meth_QMutexLocker___exit__(PyObject *, PyObject *);}
static PyObject *meth_QMutexLocker___exit__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        PyObject * a1;
        PyObject * a2;
        QMutexLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0P0P0", &sipSelf, sipType_QMutexLocker, &sipCpp, &a0, &a1, &a2))
        {
#line 44 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qmutex.sip"
        sipCpp->unlock();
#line 170 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQMutexLocker.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutexLocker, sipName___exit__, doc_QMutexLocker___exit__);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMutexLocker(void *, int);}
static void release_QMutexLocker(void *sipCppV,int)
{
    delete reinterpret_cast<QMutexLocker *>(sipCppV);
}


extern "C" {static void dealloc_QMutexLocker(sipSimpleWrapper *);}
static void dealloc_QMutexLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMutexLocker(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMutexLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMutexLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMutexLocker *sipCpp = 0;

    {
        QMutex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QMutex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMutexLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMutexLocker[] = {
    {SIP_MLNAME_CAST(sipName___enter__), meth_QMutexLocker___enter__, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutexLocker___enter__)},
    {SIP_MLNAME_CAST(sipName___exit__), meth_QMutexLocker___exit__, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutexLocker___exit__)},
    {SIP_MLNAME_CAST(sipName_mutex), meth_QMutexLocker_mutex, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutexLocker_mutex)},
    {SIP_MLNAME_CAST(sipName_relock), meth_QMutexLocker_relock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutexLocker_relock)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QMutexLocker_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutexLocker_unlock)}
};

PyDoc_STRVAR(doc_QMutexLocker, "\1QMutexLocker(QMutex)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QMutexLocker = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NONLAZY|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMutexLocker,
        {0}
    },
    {
        sipNameNr_QMutexLocker,
        {0, 0, 1},
        5, methods_QMutexLocker,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMutexLocker,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMutexLocker,
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
    dealloc_QMutexLocker,
    0,
    0,
    0,
    release_QMutexLocker,
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
