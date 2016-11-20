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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qambientlightsensor.sip"
#include <qambientlightsensor.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtSensors/sipQtSensorsQAmbientLightReading.cpp"


PyDoc_STRVAR(doc_QAmbientLightReading_lightLevel, "lightLevel(self) -> QAmbientLightReading.LightLevel");

extern "C" {static PyObject *meth_QAmbientLightReading_lightLevel(PyObject *, PyObject *);}
static PyObject *meth_QAmbientLightReading_lightLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAmbientLightReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAmbientLightReading, &sipCpp))
        {
            QAmbientLightReading::LightLevel sipRes;

            sipRes = sipCpp->lightLevel();

            return sipConvertFromEnum(sipRes,sipType_QAmbientLightReading_LightLevel);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAmbientLightReading, sipName_lightLevel, doc_QAmbientLightReading_lightLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QAmbientLightReading_setLightLevel, "setLightLevel(self, QAmbientLightReading.LightLevel)");

extern "C" {static PyObject *meth_QAmbientLightReading_setLightLevel(PyObject *, PyObject *);}
static PyObject *meth_QAmbientLightReading_setLightLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAmbientLightReading::LightLevel a0;
        QAmbientLightReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QAmbientLightReading, &sipCpp, sipType_QAmbientLightReading_LightLevel, &a0))
        {
            sipCpp->setLightLevel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAmbientLightReading, sipName_setLightLevel, doc_QAmbientLightReading_setLightLevel);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAmbientLightReading(void *, int);}
static void release_QAmbientLightReading(void *sipCppV,int)
{
    QAmbientLightReading *sipCpp = reinterpret_cast<QAmbientLightReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QAmbientLightReading(sipSimpleWrapper *);}
static void dealloc_QAmbientLightReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAmbientLightReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAmbientLightReading[] = {{52, 255, 1}};


static PyMethodDef methods_QAmbientLightReading[] = {
    {SIP_MLNAME_CAST(sipName_lightLevel), meth_QAmbientLightReading_lightLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QAmbientLightReading_lightLevel)},
    {SIP_MLNAME_CAST(sipName_setLightLevel), meth_QAmbientLightReading_setLightLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QAmbientLightReading_setLightLevel)}
};

static sipEnumMemberDef enummembers_QAmbientLightReading[] = {
    {sipName_Bright, static_cast<int>(QAmbientLightReading::Bright), 9},
    {sipName_Dark, static_cast<int>(QAmbientLightReading::Dark), 9},
    {sipName_Light, static_cast<int>(QAmbientLightReading::Light), 9},
    {sipName_Sunny, static_cast<int>(QAmbientLightReading::Sunny), 9},
    {sipName_Twilight, static_cast<int>(QAmbientLightReading::Twilight), 9},
    {sipName_Undefined, static_cast<int>(QAmbientLightReading::Undefined), 9},
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QAmbientLightReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAmbientLightReading,
        {0}
    },
    {
        sipNameNr_QAmbientLightReading,
        {0, 0, 1},
        2, methods_QAmbientLightReading,
        6, enummembers_QAmbientLightReading,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QAmbientLightReading,
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
    dealloc_QAmbientLightReading,
    0,
    0,
    0,
    release_QAmbientLightReading,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QAmbientLightReading::staticMetaObject,
    0,
    0,
    0
};
