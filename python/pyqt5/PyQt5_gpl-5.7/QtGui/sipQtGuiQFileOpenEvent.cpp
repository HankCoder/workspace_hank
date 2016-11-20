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

#line 673 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQFileOpenEvent.cpp"

#line 26 "sip/QtCore/qfile.sip"
#include <qfile.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQFileOpenEvent.cpp"


PyDoc_STRVAR(doc_QFileOpenEvent_file, "file(self) -> str");

extern "C" {static PyObject *meth_QFileOpenEvent_file(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_file(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileOpenEvent, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->file());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_file, doc_QFileOpenEvent_file);

    return NULL;
}


PyDoc_STRVAR(doc_QFileOpenEvent_url, "url(self) -> QUrl");

extern "C" {static PyObject *meth_QFileOpenEvent_url(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileOpenEvent, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->url());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_url, doc_QFileOpenEvent_url);

    return NULL;
}


PyDoc_STRVAR(doc_QFileOpenEvent_openFile, "openFile(self, QFile, Union[QIODevice.OpenMode, QIODevice.OpenModeFlag]) -> bool");

extern "C" {static PyObject *meth_QFileOpenEvent_openFile(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_openFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile* a0;
        QIODevice::OpenMode* a1;
        int a1State = 0;
        const QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QFileOpenEvent, &sipCpp, sipType_QFile, &a0, sipType_QIODevice_OpenMode, &a1, &a1State))
        {
            bool sipRes;

            sipRes = sipCpp->openFile(*a0,*a1);
            sipReleaseType(a1,sipType_QIODevice_OpenMode,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_openFile, doc_QFileOpenEvent_openFile);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileOpenEvent(void *, int);}
static void release_QFileOpenEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QFileOpenEvent *>(sipCppV);
}


extern "C" {static void dealloc_QFileOpenEvent(sipSimpleWrapper *);}
static void dealloc_QFileOpenEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFileOpenEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileOpenEvent[] = {{55, 0, 1}};


static PyMethodDef methods_QFileOpenEvent[] = {
    {SIP_MLNAME_CAST(sipName_file), meth_QFileOpenEvent_file, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_file)},
    {SIP_MLNAME_CAST(sipName_openFile), meth_QFileOpenEvent_openFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_openFile)},
    {SIP_MLNAME_CAST(sipName_url), meth_QFileOpenEvent_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_url)}
};


pyqt5ClassTypeDef sipTypeDef_QtGui_QFileOpenEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QFileOpenEvent,
        {0}
    },
    {
        sipNameNr_QFileOpenEvent,
        {0, 0, 1},
        3, methods_QFileOpenEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QFileOpenEvent,
    0,
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
    dealloc_QFileOpenEvent,
    0,
    0,
    0,
    release_QFileOpenEvent,
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
