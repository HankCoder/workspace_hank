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

#line 350 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionButton.cpp"

#line 350 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionButton.cpp"
#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionButton.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionButton.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionButton.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionButton.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionButton(void *, int);}
static void release_QStyleOptionButton(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionButton *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionButton(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionButton(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionButton *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionButton *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionButton(SIP_SSIZE_T);}
static void *array_QStyleOptionButton(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionButton[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionButton(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionButton(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionButton(reinterpret_cast<const QStyleOptionButton *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionButton(sipSimpleWrapper *);}
static void dealloc_QStyleOptionButton(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionButton(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionButton(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionButton(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionButton *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionButton();

            return sipCpp;
        }
    }

    {
        const QStyleOptionButton* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionButton, &a0))
        {
            sipCpp = new QStyleOptionButton(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionButton[] = {{310, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionButton[] = {
    {sipName_AutoDefaultButton, static_cast<int>(QStyleOptionButton::AutoDefaultButton), 315},
    {sipName_CommandLinkButton, static_cast<int>(QStyleOptionButton::CommandLinkButton), 315},
    {sipName_DefaultButton, static_cast<int>(QStyleOptionButton::DefaultButton), 315},
    {sipName_Flat, static_cast<int>(QStyleOptionButton::Flat), 315},
    {sipName_HasMenu, static_cast<int>(QStyleOptionButton::HasMenu), 315},
    {sipName_None_, static_cast<int>(QStyleOptionButton::None), 315},
    {sipName_Type, static_cast<int>(QStyleOptionButton::Type), 317},
    {sipName_Version, static_cast<int>(QStyleOptionButton::Version), 318},
};


extern "C" {static PyObject *varget_QStyleOptionButton_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionButton_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionButton::ButtonFeatures*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -111);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionButton_ButtonFeatures, NULL);
    sipKeepReference(sipPySelf, -111, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionButton_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionButton::ButtonFeatures*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionButton_ButtonFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionButton_ButtonFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionButton_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionButton_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -112);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -112, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionButton_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionButton_iconSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionButton_iconSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -113);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->iconSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPySelf, -113, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionButton_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionButton_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionButton_text(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -114);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->text;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -114, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionButton_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionButton[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionButton_features, (PyMethodDef *)varset_QStyleOptionButton_features, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionButton_icon, (PyMethodDef *)varset_QStyleOptionButton_icon, NULL, NULL},
    {InstanceVariable, sipName_iconSize, (PyMethodDef *)varget_QStyleOptionButton_iconSize, (PyMethodDef *)varset_QStyleOptionButton_iconSize, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionButton_text, (PyMethodDef *)varset_QStyleOptionButton_text, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionButton, "\1QStyleOptionButton()\n"
    "QStyleOptionButton(QStyleOptionButton)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionButton = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionButton,
        {0}
    },
    {
        sipNameNr_QStyleOptionButton,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionButton,
        4, variables_QStyleOptionButton,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionButton,
    -1,
    -1,
    supers_QStyleOptionButton,
    0,
    init_type_QStyleOptionButton,
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
    dealloc_QStyleOptionButton,
    assign_QStyleOptionButton,
    array_QStyleOptionButton,
    copy_QStyleOptionButton,
    release_QStyleOptionButton,
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
