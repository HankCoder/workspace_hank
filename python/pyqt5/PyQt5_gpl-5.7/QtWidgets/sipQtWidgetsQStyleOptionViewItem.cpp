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

#line 560 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"

#line 26 "sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 560 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionViewItem.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItem(void *, int);}
static void release_QStyleOptionViewItem(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionViewItem *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionViewItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItem *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItem(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItem(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItem[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItem(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItem(reinterpret_cast<const QStyleOptionViewItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItem(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionViewItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionViewItem();

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItem, &a0))
        {
            sipCpp = new QStyleOptionViewItem(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItem[] = {{310, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItem[] = {
    {sipName_Alternate, static_cast<int>(QStyleOptionViewItem::Alternate), 406},
    {sipName_Beginning, static_cast<int>(QStyleOptionViewItem::Beginning), 408},
    {sipName_Bottom, static_cast<int>(QStyleOptionViewItem::Bottom), 403},
    {sipName_End, static_cast<int>(QStyleOptionViewItem::End), 408},
    {sipName_HasCheckIndicator, static_cast<int>(QStyleOptionViewItem::HasCheckIndicator), 406},
    {sipName_HasDecoration, static_cast<int>(QStyleOptionViewItem::HasDecoration), 406},
    {sipName_HasDisplay, static_cast<int>(QStyleOptionViewItem::HasDisplay), 406},
    {sipName_Invalid, static_cast<int>(QStyleOptionViewItem::Invalid), 408},
    {sipName_Left, static_cast<int>(QStyleOptionViewItem::Left), 403},
    {sipName_Middle, static_cast<int>(QStyleOptionViewItem::Middle), 408},
    {sipName_None_, static_cast<int>(QStyleOptionViewItem::None), 406},
    {sipName_OnlyOne, static_cast<int>(QStyleOptionViewItem::OnlyOne), 408},
    {sipName_Right, static_cast<int>(QStyleOptionViewItem::Right), 403},
    {sipName_Top, static_cast<int>(QStyleOptionViewItem::Top), 403},
    {sipName_Type, static_cast<int>(QStyleOptionViewItem::Type), 404},
    {sipName_Version, static_cast<int>(QStyleOptionViewItem::Version), 405},
    {sipName_WrapText, static_cast<int>(QStyleOptionViewItem::WrapText), 406},
};


extern "C" {static PyObject *varget_QStyleOptionViewItem_backgroundBrush(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_backgroundBrush(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QBrush*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -87);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->backgroundBrush;

    sipPy = sipConvertFromType(sipVal, sipType_QBrush, NULL);
    sipKeepReference(sipPySelf, -87, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_backgroundBrush(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_backgroundBrush(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QBrush*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QBrush *>(sipForceConvertToType(sipPy,sipType_QBrush,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->backgroundBrush = *sipVal;

    sipReleaseType(sipVal, sipType_QBrush, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_checkState(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_checkState(void *sipSelf, PyObject *, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->checkState;

    return sipConvertFromEnum(sipVal, sipType_Qt_CheckState);
}


extern "C" {static int varset_QStyleOptionViewItem_checkState(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_checkState(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (Qt::CheckState)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->checkState = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -88);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->decorationAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPySelf, -88, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionViewItem::Position sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->decorationPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItem_Position);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::Position sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (QStyleOptionViewItem::Position)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->decorationPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -89);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->decorationSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPySelf, -89, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -90);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->displayAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPySelf, -90, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->displayAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionViewItem::ViewItemFeatures*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -91);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionViewItem_ViewItemFeatures, NULL);
    sipKeepReference(sipPySelf, -91, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::ViewItemFeatures*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionViewItem_ViewItemFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_font(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QFont*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -92);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->font;

    sipPy = sipConvertFromType(sipVal, sipType_QFont, NULL);
    sipKeepReference(sipPySelf, -92, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFont*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -93);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -93, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_index(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_index(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QModelIndex*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -94);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->index;

    sipPy = sipConvertFromType(sipVal, sipType_QModelIndex, NULL);
    sipKeepReference(sipPySelf, -94, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_index(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_index(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QModelIndex*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QModelIndex *>(sipForceConvertToType(sipPy,sipType_QModelIndex,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->index = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_locale(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_locale(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QLocale*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -95);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->locale;

    sipPy = sipConvertFromType(sipVal, sipType_QLocale, NULL);
    sipKeepReference(sipPySelf, -95, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_locale(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_locale(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QLocale*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QLocale *>(sipForceConvertToType(sipPy,sipType_QLocale,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->locale = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->showDecorationSelected;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->showDecorationSelected = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_text(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -96);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->text;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -96, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *, PyObject *)
{
    Qt::TextElideMode sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->textElideMode;

    return sipConvertFromEnum(sipVal, sipType_Qt_TextElideMode);
}


extern "C" {static int varset_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::TextElideMode sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (Qt::TextElideMode)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->textElideMode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_viewItemPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_viewItemPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionViewItem::ViewItemPosition sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->viewItemPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItem_ViewItemPosition);
}


extern "C" {static int varset_QStyleOptionViewItem_viewItemPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_viewItemPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::ViewItemPosition sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (QStyleOptionViewItem::ViewItemPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->viewItemPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_widget(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_widget(void *sipSelf, PyObject *, PyObject *)
{
    const QWidget*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->widget;

    return sipConvertFromType(const_cast<QWidget *>(sipVal), sipType_QWidget, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_widget(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_widget(void *sipSelf, PyObject *sipPy, PyObject *)
{
    const QWidget*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QWidget *>(sipForceConvertToType(sipPy,sipType_QWidget,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->widget = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItem[] = {
    {InstanceVariable, sipName_backgroundBrush, (PyMethodDef *)varget_QStyleOptionViewItem_backgroundBrush, (PyMethodDef *)varset_QStyleOptionViewItem_backgroundBrush, NULL, NULL},
    {InstanceVariable, sipName_checkState, (PyMethodDef *)varget_QStyleOptionViewItem_checkState, (PyMethodDef *)varset_QStyleOptionViewItem_checkState, NULL, NULL},
    {InstanceVariable, sipName_decorationAlignment, (PyMethodDef *)varget_QStyleOptionViewItem_decorationAlignment, (PyMethodDef *)varset_QStyleOptionViewItem_decorationAlignment, NULL, NULL},
    {InstanceVariable, sipName_decorationPosition, (PyMethodDef *)varget_QStyleOptionViewItem_decorationPosition, (PyMethodDef *)varset_QStyleOptionViewItem_decorationPosition, NULL, NULL},
    {InstanceVariable, sipName_decorationSize, (PyMethodDef *)varget_QStyleOptionViewItem_decorationSize, (PyMethodDef *)varset_QStyleOptionViewItem_decorationSize, NULL, NULL},
    {InstanceVariable, sipName_displayAlignment, (PyMethodDef *)varget_QStyleOptionViewItem_displayAlignment, (PyMethodDef *)varset_QStyleOptionViewItem_displayAlignment, NULL, NULL},
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionViewItem_features, (PyMethodDef *)varset_QStyleOptionViewItem_features, NULL, NULL},
    {InstanceVariable, sipName_font, (PyMethodDef *)varget_QStyleOptionViewItem_font, (PyMethodDef *)varset_QStyleOptionViewItem_font, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionViewItem_icon, (PyMethodDef *)varset_QStyleOptionViewItem_icon, NULL, NULL},
    {InstanceVariable, sipName_index, (PyMethodDef *)varget_QStyleOptionViewItem_index, (PyMethodDef *)varset_QStyleOptionViewItem_index, NULL, NULL},
    {InstanceVariable, sipName_locale, (PyMethodDef *)varget_QStyleOptionViewItem_locale, (PyMethodDef *)varset_QStyleOptionViewItem_locale, NULL, NULL},
    {InstanceVariable, sipName_showDecorationSelected, (PyMethodDef *)varget_QStyleOptionViewItem_showDecorationSelected, (PyMethodDef *)varset_QStyleOptionViewItem_showDecorationSelected, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionViewItem_text, (PyMethodDef *)varset_QStyleOptionViewItem_text, NULL, NULL},
    {InstanceVariable, sipName_textElideMode, (PyMethodDef *)varget_QStyleOptionViewItem_textElideMode, (PyMethodDef *)varset_QStyleOptionViewItem_textElideMode, NULL, NULL},
    {InstanceVariable, sipName_viewItemPosition, (PyMethodDef *)varget_QStyleOptionViewItem_viewItemPosition, (PyMethodDef *)varset_QStyleOptionViewItem_viewItemPosition, NULL, NULL},
    {InstanceVariable, sipName_widget, (PyMethodDef *)varget_QStyleOptionViewItem_widget, (PyMethodDef *)varset_QStyleOptionViewItem_widget, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionViewItem, "\1QStyleOptionViewItem()\n"
    "QStyleOptionViewItem(QStyleOptionViewItem)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionViewItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItem,
        {0}
    },
    {
        sipNameNr_QStyleOptionViewItem,
        {0, 0, 1},
        0, 0,
        17, enummembers_QStyleOptionViewItem,
        16, variables_QStyleOptionViewItem,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionViewItem,
    -1,
    -1,
    supers_QStyleOptionViewItem,
    0,
    init_type_QStyleOptionViewItem,
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
    dealloc_QStyleOptionViewItem,
    assign_QStyleOptionViewItem,
    array_QStyleOptionViewItem,
    copy_QStyleOptionViewItem,
    release_QStyleOptionViewItem,
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
