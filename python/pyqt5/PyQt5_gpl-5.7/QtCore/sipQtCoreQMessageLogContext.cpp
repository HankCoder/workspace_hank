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

#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qlogging.sip"
#include <qlogging.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQMessageLogContext.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QMessageLogContext(void *, int);}
static void release_QMessageLogContext(void *sipCppV,int)
{
    delete reinterpret_cast<QMessageLogContext *>(sipCppV);
}


extern "C" {static void dealloc_QMessageLogContext(sipSimpleWrapper *);}
static void dealloc_QMessageLogContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMessageLogContext(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static PyObject *varget_QMessageLogContext_category(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_category(void *sipSelf, PyObject *, PyObject *)
{
    const char*sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->category;

    if (sipVal == NULL)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_DecodeASCII(sipVal, strlen(sipVal), NULL);
}


extern "C" {static int varset_QMessageLogContext_category(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_category(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipString_AsASCIIString(&sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->category = sipVal;

    sipKeepReference(sipPySelf, -14, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_QMessageLogContext_file(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_file(void *sipSelf, PyObject *, PyObject *)
{
    const char*sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->file;

    if (sipVal == NULL)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_DecodeASCII(sipVal, strlen(sipVal), NULL);
}


extern "C" {static int varset_QMessageLogContext_file(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_file(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipString_AsASCIIString(&sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->file = sipVal;

    sipKeepReference(sipPySelf, -15, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_QMessageLogContext_function(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_function(void *sipSelf, PyObject *, PyObject *)
{
    const char*sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->function;

    if (sipVal == NULL)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_DecodeASCII(sipVal, strlen(sipVal), NULL);
}


extern "C" {static int varset_QMessageLogContext_function(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_function(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipString_AsASCIIString(&sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->function = sipVal;

    sipKeepReference(sipPySelf, -16, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_QMessageLogContext_line(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_line(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->line;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QMessageLogContext_line(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_line(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QMessageLogContext *sipCpp = reinterpret_cast<QMessageLogContext *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->line = sipVal;

    return 0;
}

sipVariableDef variables_QMessageLogContext[] = {
    {InstanceVariable, sipName_category, (PyMethodDef *)varget_QMessageLogContext_category, (PyMethodDef *)varset_QMessageLogContext_category, NULL, NULL},
    {InstanceVariable, sipName_file, (PyMethodDef *)varget_QMessageLogContext_file, (PyMethodDef *)varset_QMessageLogContext_file, NULL, NULL},
    {InstanceVariable, sipName_function, (PyMethodDef *)varget_QMessageLogContext_function, (PyMethodDef *)varset_QMessageLogContext_function, NULL, NULL},
    {InstanceVariable, sipName_line, (PyMethodDef *)varget_QMessageLogContext_line, (PyMethodDef *)varset_QMessageLogContext_line, NULL, NULL},
};


pyqt5ClassTypeDef sipTypeDef_QtCore_QMessageLogContext = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMessageLogContext,
        {0}
    },
    {
        sipNameNr_QMessageLogContext,
        {0, 0, 1},
        0, 0,
        0, 0,
        4, variables_QMessageLogContext,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
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
    dealloc_QMessageLogContext,
    0,
    0,
    0,
    release_QMessageLogContext,
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
