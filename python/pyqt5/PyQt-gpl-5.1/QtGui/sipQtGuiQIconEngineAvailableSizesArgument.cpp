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

#include "sipAPIQtGui.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 50 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQIconEngineAvailableSizesArgument.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 35 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQIconEngineAvailableSizesArgument.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 38 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQIconEngineAvailableSizesArgument.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 41 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQIconEngineAvailableSizesArgument.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngine_AvailableSizesArgument(void *, int);}
static void release_QIconEngine_AvailableSizesArgument(void *sipCppV,int)
{
    delete reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipCppV);
}


extern "C" {static void assign_QIconEngine_AvailableSizesArgument(void *, SIP_SSIZE_T, const void *);}
static void assign_QIconEngine_AvailableSizesArgument(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QIconEngine::AvailableSizesArgument *>(sipSrc);
}


extern "C" {static void *array_QIconEngine_AvailableSizesArgument(SIP_SSIZE_T);}
static void *array_QIconEngine_AvailableSizesArgument(SIP_SSIZE_T sipNrElem)
{
    return new QIconEngine::AvailableSizesArgument[sipNrElem];
}


extern "C" {static void *copy_QIconEngine_AvailableSizesArgument(const void *, SIP_SSIZE_T);}
static void *copy_QIconEngine_AvailableSizesArgument(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QIconEngine::AvailableSizesArgument(reinterpret_cast<const QIconEngine::AvailableSizesArgument *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIconEngine_AvailableSizesArgument(sipSimpleWrapper *);}
static void dealloc_QIconEngine_AvailableSizesArgument(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QIconEngine_AvailableSizesArgument(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QIconEngine_AvailableSizesArgument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconEngine_AvailableSizesArgument(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QIconEngine::AvailableSizesArgument *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QIconEngine::AvailableSizesArgument();

            return sipCpp;
        }
    }

    {
        const QIconEngine::AvailableSizesArgument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngine_AvailableSizesArgument, &a0))
        {
            sipCpp = new QIconEngine::AvailableSizesArgument(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QIconEngine_AvailableSizesArgument_mode(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_AvailableSizesArgument_mode(void *sipSelf, PyObject *, PyObject *)
{
    QIcon::Mode sipVal;
    QIconEngine::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipSelf);

    sipVal = sipCpp->mode;

    return sipConvertFromEnum(sipVal, sipType_QIcon_Mode);
}


extern "C" {static int varset_QIconEngine_AvailableSizesArgument_mode(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_AvailableSizesArgument_mode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon::Mode sipVal;
    QIconEngine::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipSelf);

    sipVal = (QIcon::Mode)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QIconEngine_AvailableSizesArgument_sizes(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_AvailableSizesArgument_sizes(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QList<QSize>*sipVal;
    QIconEngine::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -8);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->sizes;

    sipPy = sipConvertFromType(sipVal, sipType_QList_0100QSize, NULL);
    sipKeepReference(sipPySelf, -8, sipPy);

    return sipPy;
}


extern "C" {static int varset_QIconEngine_AvailableSizesArgument_sizes(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_AvailableSizesArgument_sizes(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QList<QSize>*sipVal;
    QIconEngine::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QList<QSize> *>(sipForceConvertToType(sipPy,sipType_QList_0100QSize,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->sizes = *sipVal;

    sipReleaseType(sipVal, sipType_QList_0100QSize, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QIconEngine_AvailableSizesArgument_state(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_AvailableSizesArgument_state(void *sipSelf, PyObject *, PyObject *)
{
    QIcon::State sipVal;
    QIconEngine::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipSelf);

    sipVal = sipCpp->state;

    return sipConvertFromEnum(sipVal, sipType_QIcon_State);
}


extern "C" {static int varset_QIconEngine_AvailableSizesArgument_state(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_AvailableSizesArgument_state(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon::State sipVal;
    QIconEngine::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngine::AvailableSizesArgument *>(sipSelf);

    sipVal = (QIcon::State)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->state = sipVal;

    return 0;
}

sipVariableDef variables_QIconEngine_AvailableSizesArgument[] = {
    {InstanceVariable, sipName_mode, (PyMethodDef *)varget_QIconEngine_AvailableSizesArgument_mode, (PyMethodDef *)varset_QIconEngine_AvailableSizesArgument_mode, NULL, NULL},
    {InstanceVariable, sipName_sizes, (PyMethodDef *)varget_QIconEngine_AvailableSizesArgument_sizes, (PyMethodDef *)varset_QIconEngine_AvailableSizesArgument_sizes, NULL, NULL},
    {InstanceVariable, sipName_state, (PyMethodDef *)varget_QIconEngine_AvailableSizesArgument_state, (PyMethodDef *)varset_QIconEngine_AvailableSizesArgument_state, NULL, NULL},
};

PyDoc_STRVAR(doc_QIconEngine_AvailableSizesArgument, "\1QIconEngine.AvailableSizesArgument()\n"
    "QIconEngine.AvailableSizesArgument(QIconEngine.AvailableSizesArgument)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QIconEngine_AvailableSizesArgument = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QIconEngine__AvailableSizesArgument,
        {0}
    },
    {
        sipNameNr_AvailableSizesArgument,
        {59, 255, 0},
        0, 0,
        0, 0,
        3, variables_QIconEngine_AvailableSizesArgument,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconEngine_AvailableSizesArgument,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QIconEngine_AvailableSizesArgument,
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
    dealloc_QIconEngine_AvailableSizesArgument,
    assign_QIconEngine_AvailableSizesArgument,
    array_QIconEngine_AvailableSizesArgument,
    copy_QIconEngine_AvailableSizesArgument,
    release_QIconEngine_AvailableSizesArgument,
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
