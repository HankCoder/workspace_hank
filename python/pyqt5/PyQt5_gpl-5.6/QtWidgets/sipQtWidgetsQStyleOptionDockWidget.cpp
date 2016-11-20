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

#include "sipAPIQtWidgets.h"

#line 534 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionDockWidget.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionDockWidget.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQStyleOptionDockWidget.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionDockWidget(void *, int);}
static void release_QStyleOptionDockWidget(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionDockWidget *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionDockWidget(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionDockWidget(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionDockWidget *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionDockWidget *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionDockWidget(SIP_SSIZE_T);}
static void *array_QStyleOptionDockWidget(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionDockWidget[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionDockWidget(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionDockWidget(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionDockWidget(reinterpret_cast<const QStyleOptionDockWidget *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionDockWidget(sipSimpleWrapper *);}
static void dealloc_QStyleOptionDockWidget(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionDockWidget(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionDockWidget(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionDockWidget(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionDockWidget *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionDockWidget();

            return sipCpp;
        }
    }

    {
        const QStyleOptionDockWidget* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionDockWidget, &a0))
        {
            sipCpp = new QStyleOptionDockWidget(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionDockWidget[] = {{310, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionDockWidget[] = {
    {sipName_Type, static_cast<int>(QStyleOptionDockWidget::Type), 326},
    {sipName_Version, static_cast<int>(QStyleOptionDockWidget::Version), 327},
};


extern "C" {static PyObject *varget_QStyleOptionDockWidget_closable(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidget_closable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = sipCpp->closable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionDockWidget_closable(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidget_closable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->closable = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionDockWidget_floatable(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidget_floatable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = sipCpp->floatable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionDockWidget_floatable(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidget_floatable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->floatable = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionDockWidget_movable(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidget_movable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = sipCpp->movable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionDockWidget_movable(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidget_movable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->movable = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionDockWidget_title(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidget_title(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -97);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->title;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -97, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionDockWidget_title(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidget_title(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->title = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionDockWidget_verticalTitleBar(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidget_verticalTitleBar(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = sipCpp->verticalTitleBar;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionDockWidget_verticalTitleBar(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidget_verticalTitleBar(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidget *sipCpp = reinterpret_cast<QStyleOptionDockWidget *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->verticalTitleBar = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionDockWidget[] = {
    {InstanceVariable, sipName_closable, (PyMethodDef *)varget_QStyleOptionDockWidget_closable, (PyMethodDef *)varset_QStyleOptionDockWidget_closable, NULL, NULL},
    {InstanceVariable, sipName_floatable, (PyMethodDef *)varget_QStyleOptionDockWidget_floatable, (PyMethodDef *)varset_QStyleOptionDockWidget_floatable, NULL, NULL},
    {InstanceVariable, sipName_movable, (PyMethodDef *)varget_QStyleOptionDockWidget_movable, (PyMethodDef *)varset_QStyleOptionDockWidget_movable, NULL, NULL},
    {InstanceVariable, sipName_title, (PyMethodDef *)varget_QStyleOptionDockWidget_title, (PyMethodDef *)varset_QStyleOptionDockWidget_title, NULL, NULL},
    {InstanceVariable, sipName_verticalTitleBar, (PyMethodDef *)varget_QStyleOptionDockWidget_verticalTitleBar, (PyMethodDef *)varset_QStyleOptionDockWidget_verticalTitleBar, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionDockWidget, "\1QStyleOptionDockWidget()\n"
    "QStyleOptionDockWidget(QStyleOptionDockWidget)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionDockWidget = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionDockWidget,
        {0}
    },
    {
        sipNameNr_QStyleOptionDockWidget,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionDockWidget,
        5, variables_QStyleOptionDockWidget,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionDockWidget,
    -1,
    -1,
    supers_QStyleOptionDockWidget,
    0,
    init_type_QStyleOptionDockWidget,
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
    dealloc_QStyleOptionDockWidget,
    assign_QStyleOptionDockWidget,
    array_QStyleOptionDockWidget,
    copy_QStyleOptionDockWidget,
    release_QStyleOptionDockWidget,
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
