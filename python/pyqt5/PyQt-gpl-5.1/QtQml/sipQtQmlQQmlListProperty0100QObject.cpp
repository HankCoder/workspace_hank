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

#include "sipAPIQtQml.h"

#line 24 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qpyqmllistproperty.sip"
#include <QQmlListProperty>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qpyqmllistproperty.sip"
#if defined(SIP_USE_PYCAPSULE)
extern "C" {
static void qpyqml_QQmlListProperty_delete(PyObject *capsule)
{
    delete reinterpret_cast<QQmlListProperty<QObject> *>(PyCapsule_GetPointer(capsule, 0));
}
}
#else
extern "C" {
static void qpyqml_QQmlListProperty_delete(void *ptr)
{
    delete reinterpret_cast<QQmlListProperty<QObject> *>(ptr);
}
}
#endif
#line 50 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"


extern "C" {static void assign_QQmlListProperty_0100QObject(void *, SIP_SSIZE_T, const void *);}
static void assign_QQmlListProperty_0100QObject(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QQmlListProperty<QObject> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QQmlListProperty<QObject> *>(sipSrc);
}


extern "C" {static void *array_QQmlListProperty_0100QObject(SIP_SSIZE_T);}
static void *array_QQmlListProperty_0100QObject(SIP_SSIZE_T sipNrElem)
{
    return new QQmlListProperty<QObject>[sipNrElem];
}


extern "C" {static void *copy_QQmlListProperty_0100QObject(const void *, SIP_SSIZE_T);}
static void *copy_QQmlListProperty_0100QObject(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QQmlListProperty<QObject>(reinterpret_cast<const QQmlListProperty<QObject> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QQmlListProperty_0100QObject(void *, int);}
static void release_QQmlListProperty_0100QObject(void *ptr, int)
{
    delete reinterpret_cast<QQmlListProperty<QObject> *>(ptr);
}



extern "C" {static int convertTo_QQmlListProperty_0100QObject(PyObject *, void **, int *, PyObject *);}
static int convertTo_QQmlListProperty_0100QObject(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    QQmlListProperty<QObject> **sipCppPtr = reinterpret_cast<QQmlListProperty<QObject> **>(sipCppPtrV);

#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qpyqmllistproperty.sip"
    if (sipIsErr == NULL)
    {
#if defined(SIP_USE_PYCAPSULE)
        return PyCapsule_CheckExact(sipPy);
#else
        return PyCObject_Check(sipPy);
#endif
    }

#if defined(SIP_USE_PYCAPSULE)
    *sipCppPtr = reinterpret_cast<QQmlListProperty<QObject> *>(
            PyCapsule_GetPointer(sipPy, 0));
#else
    *sipCppPtr = reinterpret_cast<QQmlListProperty<QObject> *>(
            PyCObject_AsVoidPtr(sipPy));
#endif

    // It isn't a temporary copy.
    return 0;
#line 108 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"
}


extern "C" {static PyObject *convertFrom_QQmlListProperty_0100QObject(void *, PyObject *);}
static PyObject *convertFrom_QQmlListProperty_0100QObject(void *sipCppV, PyObject *)
{
   QQmlListProperty<QObject> *sipCpp = reinterpret_cast<QQmlListProperty<QObject> *>(sipCppV);

#line 46 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qpyqmllistproperty.sip"
#if defined(SIP_USE_PYCAPSULE)
    return PyCapsule_New(sipCpp, 0, qpyqml_QQmlListProperty_delete);
#else
    return PyCObject_FromVoidPtr(sipCpp, qpyqml_QQmlListProperty_delete);
#endif
#line 123 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"
}


sipMappedTypeDef sipTypeDef_QtQml_QQmlListProperty_0100QObject = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_511,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QQmlListProperty_0100QObject,
    array_QQmlListProperty_0100QObject,
    copy_QQmlListProperty_0100QObject,
    release_QQmlListProperty_0100QObject,
    convertTo_QQmlListProperty_0100QObject,
    convertFrom_QQmlListProperty_0100QObject
};
