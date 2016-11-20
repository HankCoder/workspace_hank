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

#include "sipAPIQtMultimedia.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qcamerafocus.sip"
#include <qcamerafocus.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraFocusZone.cpp"

#line 161 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraFocusZone.cpp"


PyDoc_STRVAR(doc_QCameraFocusZone_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QCameraFocusZone_isValid(PyObject *, PyObject *);}
static PyObject *meth_QCameraFocusZone_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraFocusZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraFocusZone, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraFocusZone, sipName_isValid, doc_QCameraFocusZone_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraFocusZone_area, "area(self) -> QRectF");

extern "C" {static PyObject *meth_QCameraFocusZone_area(PyObject *, PyObject *);}
static PyObject *meth_QCameraFocusZone_area(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraFocusZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraFocusZone, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->area());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraFocusZone, sipName_area, doc_QCameraFocusZone_area);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraFocusZone_status, "status(self) -> QCameraFocusZone.FocusZoneStatus");

extern "C" {static PyObject *meth_QCameraFocusZone_status(PyObject *, PyObject *);}
static PyObject *meth_QCameraFocusZone_status(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraFocusZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraFocusZone, &sipCpp))
        {
            QCameraFocusZone::FocusZoneStatus sipRes;

            sipRes = sipCpp->status();

            return sipConvertFromEnum(sipRes,sipType_QCameraFocusZone_FocusZoneStatus);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraFocusZone, sipName_status, doc_QCameraFocusZone_status);

    return NULL;
}


extern "C" {static PyObject *slot_QCameraFocusZone___ne__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocusZone___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QCameraFocusZone *sipCpp = reinterpret_cast<QCameraFocusZone *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocusZone));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCameraFocusZone* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCameraFocusZone, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QCameraFocusZone::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QCameraFocusZone,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCameraFocusZone___eq__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocusZone___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QCameraFocusZone *sipCpp = reinterpret_cast<QCameraFocusZone *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocusZone));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCameraFocusZone* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCameraFocusZone, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QCameraFocusZone::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QCameraFocusZone,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QCameraFocusZone(void *, int);}
static void release_QCameraFocusZone(void *sipCppV,int)
{
    delete reinterpret_cast<QCameraFocusZone *>(sipCppV);
}


extern "C" {static void dealloc_QCameraFocusZone(sipSimpleWrapper *);}
static void dealloc_QCameraFocusZone(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCameraFocusZone(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCameraFocusZone(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCameraFocusZone(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCameraFocusZone *sipCpp = 0;

    {
        const QCameraFocusZone* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCameraFocusZone, &a0))
        {
            sipCpp = new QCameraFocusZone(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCameraFocusZone[] = {
    {(void *)slot_QCameraFocusZone___ne__, ne_slot},
    {(void *)slot_QCameraFocusZone___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QCameraFocusZone[] = {
    {SIP_MLNAME_CAST(sipName_area), meth_QCameraFocusZone_area, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraFocusZone_area)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QCameraFocusZone_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraFocusZone_isValid)},
    {SIP_MLNAME_CAST(sipName_status), meth_QCameraFocusZone_status, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraFocusZone_status)}
};

static sipEnumMemberDef enummembers_QCameraFocusZone[] = {
    {sipName_Focused, static_cast<int>(QCameraFocusZone::Focused), 46},
    {sipName_Invalid, static_cast<int>(QCameraFocusZone::Invalid), 46},
    {sipName_Selected, static_cast<int>(QCameraFocusZone::Selected), 46},
    {sipName_Unused, static_cast<int>(QCameraFocusZone::Unused), 46},
};

PyDoc_STRVAR(doc_QCameraFocusZone, "\1QCameraFocusZone(QCameraFocusZone)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QCameraFocusZone = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCameraFocusZone,
        {0}
    },
    {
        sipNameNr_QCameraFocusZone,
        {0, 0, 1},
        3, methods_QCameraFocusZone,
        4, enummembers_QCameraFocusZone,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCameraFocusZone,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCameraFocusZone,
    init_type_QCameraFocusZone,
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
    dealloc_QCameraFocusZone,
    0,
    0,
    0,
    release_QCameraFocusZone,
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
