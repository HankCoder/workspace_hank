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

#include "sipAPIQtSensors.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qtiltsensor.sip"
#include <qtiltsensor.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQTiltReading.cpp"


PyDoc_STRVAR(doc_QTiltReading_yRotation, "yRotation(self) -> float");

extern "C" {static PyObject *meth_QTiltReading_yRotation(PyObject *, PyObject *);}
static PyObject *meth_QTiltReading_yRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTiltReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTiltReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->yRotation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTiltReading, sipName_yRotation, doc_QTiltReading_yRotation);

    return NULL;
}


PyDoc_STRVAR(doc_QTiltReading_setYRotation, "setYRotation(self, float)");

extern "C" {static PyObject *meth_QTiltReading_setYRotation(PyObject *, PyObject *);}
static PyObject *meth_QTiltReading_setYRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTiltReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTiltReading, &sipCpp, &a0))
        {
            sipCpp->setYRotation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTiltReading, sipName_setYRotation, doc_QTiltReading_setYRotation);

    return NULL;
}


PyDoc_STRVAR(doc_QTiltReading_xRotation, "xRotation(self) -> float");

extern "C" {static PyObject *meth_QTiltReading_xRotation(PyObject *, PyObject *);}
static PyObject *meth_QTiltReading_xRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTiltReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTiltReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->xRotation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTiltReading, sipName_xRotation, doc_QTiltReading_xRotation);

    return NULL;
}


PyDoc_STRVAR(doc_QTiltReading_setXRotation, "setXRotation(self, float)");

extern "C" {static PyObject *meth_QTiltReading_setXRotation(PyObject *, PyObject *);}
static PyObject *meth_QTiltReading_setXRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTiltReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTiltReading, &sipCpp, &a0))
        {
            sipCpp->setXRotation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTiltReading, sipName_setXRotation, doc_QTiltReading_setXRotation);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTiltReading(void *, int);}
static void release_QTiltReading(void *sipCppV,int)
{
    QTiltReading *sipCpp = reinterpret_cast<QTiltReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QTiltReading(sipSimpleWrapper *);}
static void dealloc_QTiltReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTiltReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTiltReading[] = {{52, 255, 1}};


static PyMethodDef methods_QTiltReading[] = {
    {SIP_MLNAME_CAST(sipName_setXRotation), meth_QTiltReading_setXRotation, METH_VARARGS, SIP_MLDOC_CAST(doc_QTiltReading_setXRotation)},
    {SIP_MLNAME_CAST(sipName_setYRotation), meth_QTiltReading_setYRotation, METH_VARARGS, SIP_MLDOC_CAST(doc_QTiltReading_setYRotation)},
    {SIP_MLNAME_CAST(sipName_xRotation), meth_QTiltReading_xRotation, METH_VARARGS, SIP_MLDOC_CAST(doc_QTiltReading_xRotation)},
    {SIP_MLNAME_CAST(sipName_yRotation), meth_QTiltReading_yRotation, METH_VARARGS, SIP_MLDOC_CAST(doc_QTiltReading_yRotation)}
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QTiltReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTiltReading,
        {0}
    },
    {
        sipNameNr_QTiltReading,
        {0, 0, 1},
        4, methods_QTiltReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QTiltReading,
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
    dealloc_QTiltReading,
    0,
    0,
    0,
    release_QTiltReading,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QTiltReading::staticMetaObject,
    0,
    0,
    0
};
