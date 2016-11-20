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

#line 208 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"

#line 208 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qframe.sip"
#include <qframe.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrame(void *, int);}
static void release_QStyleOptionFrame(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionFrame *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionFrame(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrame(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFrame *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFrame *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrame(SIP_SSIZE_T);}
static void *array_QStyleOptionFrame(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFrame[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrame(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrame(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFrame(reinterpret_cast<const QStyleOptionFrame *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrame(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrame(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFrame(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionFrame(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFrame(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFrame *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionFrame();

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrame, &a0))
        {
            sipCpp = new QStyleOptionFrame(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFrame[] = {{310, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFrame[] = {
    {sipName_Flat, static_cast<int>(QStyleOptionFrame::Flat), 332},
    {sipName_None_, static_cast<int>(QStyleOptionFrame::None), 332},
    {sipName_Rounded, static_cast<int>(QStyleOptionFrame::Rounded), 332},
    {sipName_Type, static_cast<int>(QStyleOptionFrame::Type), 334},
    {sipName_Version, static_cast<int>(QStyleOptionFrame::Version), 335},
};


extern "C" {static PyObject *varget_QStyleOptionFrame_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionFrame::FrameFeatures*sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -126);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionFrame_FrameFeatures, NULL);
    sipKeepReference(sipPySelf, -126, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionFrame_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionFrame::FrameFeatures*sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrame_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrame_FrameFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrame_frameShape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_frameShape(void *sipSelf, PyObject *, PyObject *)
{
    QFrame::Shape sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipVal = sipCpp->frameShape;

    return sipConvertFromEnum(sipVal, sipType_QFrame_Shape);
}


extern "C" {static int varset_QStyleOptionFrame_frameShape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_frameShape(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFrame::Shape sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipVal = (QFrame::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->frameShape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrame_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionFrame_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrame_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionFrame_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionFrame *sipCpp = reinterpret_cast<QStyleOptionFrame *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionFrame[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionFrame_features, (PyMethodDef *)varset_QStyleOptionFrame_features, NULL, NULL},
    {InstanceVariable, sipName_frameShape, (PyMethodDef *)varget_QStyleOptionFrame_frameShape, (PyMethodDef *)varset_QStyleOptionFrame_frameShape, NULL, NULL},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionFrame_lineWidth, (PyMethodDef *)varset_QStyleOptionFrame_lineWidth, NULL, NULL},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionFrame_midLineWidth, (PyMethodDef *)varset_QStyleOptionFrame_midLineWidth, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFrame, "\1QStyleOptionFrame()\n"
    "QStyleOptionFrame(QStyleOptionFrame)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionFrame = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrame,
        {0}
    },
    {
        sipNameNr_QStyleOptionFrame,
        {0, 0, 1},
        0, 0,
        5, enummembers_QStyleOptionFrame,
        4, variables_QStyleOptionFrame,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrame,
    -1,
    -1,
    supers_QStyleOptionFrame,
    0,
    init_type_QStyleOptionFrame,
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
    dealloc_QStyleOptionFrame,
    assign_QStyleOptionFrame,
    array_QStyleOptionFrame,
    copy_QStyleOptionFrame,
    release_QStyleOptionFrame,
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
