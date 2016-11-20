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

#include "sipAPIQtSensors.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtSensors/qcompass.sip"
#include <qcompass.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSensors/sipQtSensorsQCompassReading.cpp"


PyDoc_STRVAR(doc_QCompassReading_azimuth, "azimuth(self) -> float");

extern "C" {static PyObject *meth_QCompassReading_azimuth(PyObject *, PyObject *);}
static PyObject *meth_QCompassReading_azimuth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCompassReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCompassReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->azimuth();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCompassReading, sipName_azimuth, doc_QCompassReading_azimuth);

    return NULL;
}


PyDoc_STRVAR(doc_QCompassReading_setAzimuth, "setAzimuth(self, float)");

extern "C" {static PyObject *meth_QCompassReading_setAzimuth(PyObject *, PyObject *);}
static PyObject *meth_QCompassReading_setAzimuth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCompassReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCompassReading, &sipCpp, &a0))
        {
            sipCpp->setAzimuth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCompassReading, sipName_setAzimuth, doc_QCompassReading_setAzimuth);

    return NULL;
}


PyDoc_STRVAR(doc_QCompassReading_calibrationLevel, "calibrationLevel(self) -> float");

extern "C" {static PyObject *meth_QCompassReading_calibrationLevel(PyObject *, PyObject *);}
static PyObject *meth_QCompassReading_calibrationLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCompassReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCompassReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->calibrationLevel();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCompassReading, sipName_calibrationLevel, doc_QCompassReading_calibrationLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QCompassReading_setCalibrationLevel, "setCalibrationLevel(self, float)");

extern "C" {static PyObject *meth_QCompassReading_setCalibrationLevel(PyObject *, PyObject *);}
static PyObject *meth_QCompassReading_setCalibrationLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCompassReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCompassReading, &sipCpp, &a0))
        {
            sipCpp->setCalibrationLevel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCompassReading, sipName_setCalibrationLevel, doc_QCompassReading_setCalibrationLevel);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCompassReading(void *, int);}
static void release_QCompassReading(void *sipCppV,int)
{
    QCompassReading *sipCpp = reinterpret_cast<QCompassReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QCompassReading(sipSimpleWrapper *);}
static void dealloc_QCompassReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCompassReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QCompassReading[] = {{54, 255, 1}};


static PyMethodDef methods_QCompassReading[] = {
    {SIP_MLNAME_CAST(sipName_azimuth), meth_QCompassReading_azimuth, METH_VARARGS, SIP_MLDOC_CAST(doc_QCompassReading_azimuth)},
    {SIP_MLNAME_CAST(sipName_calibrationLevel), meth_QCompassReading_calibrationLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QCompassReading_calibrationLevel)},
    {SIP_MLNAME_CAST(sipName_setAzimuth), meth_QCompassReading_setAzimuth, METH_VARARGS, SIP_MLDOC_CAST(doc_QCompassReading_setAzimuth)},
    {SIP_MLNAME_CAST(sipName_setCalibrationLevel), meth_QCompassReading_setCalibrationLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QCompassReading_setCalibrationLevel)}
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QCompassReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCompassReading,
        {0}
    },
    {
        sipNameNr_QCompassReading,
        {0, 0, 1},
        4, methods_QCompassReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QCompassReading,
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
    dealloc_QCompassReading,
    0,
    0,
    0,
    release_QCompassReading,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QCompassReading::staticMetaObject,
    0,
    0,
    0
};
