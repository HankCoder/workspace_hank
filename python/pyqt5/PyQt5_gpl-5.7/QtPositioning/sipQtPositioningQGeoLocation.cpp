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

#include "sipAPIQtPositioning.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtPositioning/qgeolocation.sip"
#include <qgeolocation.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtPositioning/sipQtPositioningQGeoLocation.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtPositioning/qgeorectangle.sip"
#include <qgeorectangle.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtPositioning/sipQtPositioningQGeoLocation.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtPositioning/sipQtPositioningQGeoLocation.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtPositioning/qgeoaddress.sip"
#include <qgeoaddress.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtPositioning/sipQtPositioningQGeoLocation.cpp"


PyDoc_STRVAR(doc_QGeoLocation_address, "address(self) -> QGeoAddress");

extern "C" {static PyObject *meth_QGeoLocation_address(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoLocation, &sipCpp))
        {
            QGeoAddress*sipRes;

            sipRes = new QGeoAddress(sipCpp->address());

            return sipConvertFromNewType(sipRes,sipType_QGeoAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_address, doc_QGeoLocation_address);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoLocation_setAddress, "setAddress(self, QGeoAddress)");

extern "C" {static PyObject *meth_QGeoLocation_setAddress(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_setAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress* a0;
        QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoLocation, &sipCpp, sipType_QGeoAddress, &a0))
        {
            sipCpp->setAddress(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_setAddress, doc_QGeoLocation_setAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoLocation_coordinate, "coordinate(self) -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoLocation_coordinate(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_coordinate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoLocation, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->coordinate());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_coordinate, doc_QGeoLocation_coordinate);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoLocation_setCoordinate, "setCoordinate(self, QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoLocation_setCoordinate(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_setCoordinate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoLocation, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setCoordinate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_setCoordinate, doc_QGeoLocation_setCoordinate);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoLocation_boundingBox, "boundingBox(self) -> QGeoRectangle");

extern "C" {static PyObject *meth_QGeoLocation_boundingBox(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_boundingBox(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoLocation, &sipCpp))
        {
            QGeoRectangle*sipRes;

            sipRes = new QGeoRectangle(sipCpp->boundingBox());

            return sipConvertFromNewType(sipRes,sipType_QGeoRectangle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_boundingBox, doc_QGeoLocation_boundingBox);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoLocation_setBoundingBox, "setBoundingBox(self, QGeoRectangle)");

extern "C" {static PyObject *meth_QGeoLocation_setBoundingBox(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_setBoundingBox(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle* a0;
        QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoLocation, &sipCpp, sipType_QGeoRectangle, &a0))
        {
            sipCpp->setBoundingBox(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_setBoundingBox, doc_QGeoLocation_setBoundingBox);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoLocation_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QGeoLocation_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QGeoLocation_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoLocation, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoLocation, sipName_isEmpty, doc_QGeoLocation_isEmpty);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoLocation___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoLocation___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoLocation *sipCpp = reinterpret_cast<QGeoLocation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoLocation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoLocation* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoLocation, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoLocation::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoLocation,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoLocation___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoLocation___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoLocation *sipCpp = reinterpret_cast<QGeoLocation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoLocation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoLocation* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoLocation, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoLocation::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoLocation,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoLocation(void *, int);}
static void release_QGeoLocation(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoLocation *>(sipCppV);
}


extern "C" {static void assign_QGeoLocation(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoLocation(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoLocation *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoLocation *>(sipSrc);
}


extern "C" {static void *array_QGeoLocation(SIP_SSIZE_T);}
static void *array_QGeoLocation(SIP_SSIZE_T sipNrElem)
{
    return new QGeoLocation[sipNrElem];
}


extern "C" {static void *copy_QGeoLocation(const void *, SIP_SSIZE_T);}
static void *copy_QGeoLocation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoLocation(reinterpret_cast<const QGeoLocation *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoLocation(sipSimpleWrapper *);}
static void dealloc_QGeoLocation(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoLocation(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoLocation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoLocation(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoLocation *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoLocation();

            return sipCpp;
        }
    }

    {
        const QGeoLocation* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoLocation, &a0))
        {
            sipCpp = new QGeoLocation(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoLocation[] = {
    {(void *)slot_QGeoLocation___ne__, ne_slot},
    {(void *)slot_QGeoLocation___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoLocation[] = {
    {SIP_MLNAME_CAST(sipName_address), meth_QGeoLocation_address, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_address)},
    {SIP_MLNAME_CAST(sipName_boundingBox), meth_QGeoLocation_boundingBox, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_boundingBox)},
    {SIP_MLNAME_CAST(sipName_coordinate), meth_QGeoLocation_coordinate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_coordinate)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QGeoLocation_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_isEmpty)},
    {SIP_MLNAME_CAST(sipName_setAddress), meth_QGeoLocation_setAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_setAddress)},
    {SIP_MLNAME_CAST(sipName_setBoundingBox), meth_QGeoLocation_setBoundingBox, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_setBoundingBox)},
    {SIP_MLNAME_CAST(sipName_setCoordinate), meth_QGeoLocation_setCoordinate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoLocation_setCoordinate)}
};

PyDoc_STRVAR(doc_QGeoLocation, "\1QGeoLocation()\n"
    "QGeoLocation(QGeoLocation)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoLocation = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoLocation,
        {0}
    },
    {
        sipNameNr_QGeoLocation,
        {0, 0, 1},
        7, methods_QGeoLocation,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoLocation,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QGeoLocation,
    init_type_QGeoLocation,
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
    dealloc_QGeoLocation,
    assign_QGeoLocation,
    array_QGeoLocation,
    copy_QGeoLocation,
    release_QGeoLocation,
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
