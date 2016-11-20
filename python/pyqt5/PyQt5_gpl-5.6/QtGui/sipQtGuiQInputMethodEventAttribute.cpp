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

#line 491 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 507 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQInputMethodEventAttribute.cpp"

#line 491 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 35 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQInputMethodEventAttribute.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQInputMethodEventAttribute.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QInputMethodEvent_Attribute(void *, int);}
static void release_QInputMethodEvent_Attribute(void *sipCppV,int)
{
    delete reinterpret_cast<QInputMethodEvent::Attribute *>(sipCppV);
}


extern "C" {static void dealloc_QInputMethodEvent_Attribute(sipSimpleWrapper *);}
static void dealloc_QInputMethodEvent_Attribute(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QInputMethodEvent_Attribute(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QInputMethodEvent_Attribute(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QInputMethodEvent_Attribute(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QInputMethodEvent::Attribute *sipCpp = 0;

    {
        QInputMethodEvent::AttributeType a0;
        int a1;
        int a2;
        QVariant* a3;
        int a3State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EiiJ1", sipType_QInputMethodEvent_AttributeType, &a0, &a1, &a2, sipType_QVariant, &a3, &a3State))
        {
            sipCpp = new QInputMethodEvent::Attribute(a0,a1,a2,*a3);
            sipReleaseType(a3,sipType_QVariant,a3State);

            return sipCpp;
        }
    }

    {
        const QInputMethodEvent::Attribute* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QInputMethodEvent_Attribute, &a0))
        {
            sipCpp = new QInputMethodEvent::Attribute(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_length(void *, PyObject *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_length(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = sipCpp->length;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_length(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_length(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->length = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_start(void *, PyObject *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_start(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = sipCpp->start;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_start(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_start(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->start = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_type(void *sipSelf, PyObject *, PyObject *)
{
    QInputMethodEvent::AttributeType sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = sipCpp->type;

    return sipConvertFromEnum(sipVal, sipType_QInputMethodEvent_AttributeType);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_type(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QInputMethodEvent::AttributeType sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = (QInputMethodEvent::AttributeType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_value(void *, PyObject *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_value(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QVariant*sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -8);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->value;

    sipPy = sipConvertFromType(sipVal, sipType_QVariant, NULL);
    sipKeepReference(sipPySelf, -8, sipPy);

    return sipPy;
}


extern "C" {static int varset_QInputMethodEvent_Attribute_value(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_value(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QVariant*sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QVariant *>(sipForceConvertToType(sipPy,sipType_QVariant,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->value = *sipVal;

    sipReleaseType(sipVal, sipType_QVariant, sipValState);

    return 0;
}

sipVariableDef variables_QInputMethodEvent_Attribute[] = {
    {InstanceVariable, sipName_length, (PyMethodDef *)varget_QInputMethodEvent_Attribute_length, (PyMethodDef *)varset_QInputMethodEvent_Attribute_length, NULL, NULL},
    {InstanceVariable, sipName_start, (PyMethodDef *)varget_QInputMethodEvent_Attribute_start, (PyMethodDef *)varset_QInputMethodEvent_Attribute_start, NULL, NULL},
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QInputMethodEvent_Attribute_type, (PyMethodDef *)varset_QInputMethodEvent_Attribute_type, NULL, NULL},
    {InstanceVariable, sipName_value, (PyMethodDef *)varget_QInputMethodEvent_Attribute_value, (PyMethodDef *)varset_QInputMethodEvent_Attribute_value, NULL, NULL},
};

PyDoc_STRVAR(doc_QInputMethodEvent_Attribute, "\1QInputMethodEvent.Attribute(QInputMethodEvent.AttributeType, int, int, Any)\n"
    "QInputMethodEvent.Attribute(QInputMethodEvent.Attribute)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QInputMethodEvent_Attribute = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QInputMethodEvent__Attribute,
        {0}
    },
    {
        sipNameNr_Attribute,
        {78, 255, 0},
        0, 0,
        0, 0,
        4, variables_QInputMethodEvent_Attribute,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QInputMethodEvent_Attribute,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QInputMethodEvent_Attribute,
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
    dealloc_QInputMethodEvent_Attribute,
    0,
    0,
    0,
    release_QInputMethodEvent_Attribute,
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
