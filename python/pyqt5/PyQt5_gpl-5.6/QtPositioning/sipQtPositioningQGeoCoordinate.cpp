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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtPositioning/sipQtPositioningQGeoCoordinate.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtPositioning/sipQtPositioningQGeoCoordinate.cpp"


PyDoc_STRVAR(doc_QGeoCoordinate_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QGeoCoordinate_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoCoordinate, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_isValid, doc_QGeoCoordinate_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_type, "type(self) -> QGeoCoordinate.CoordinateType");

extern "C" {static PyObject *meth_QGeoCoordinate_type(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoCoordinate, &sipCpp))
        {
            QGeoCoordinate::CoordinateType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QGeoCoordinate_CoordinateType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_type, doc_QGeoCoordinate_type);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_setLatitude, "setLatitude(self, float)");

extern "C" {static PyObject *meth_QGeoCoordinate_setLatitude(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_setLatitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGeoCoordinate, &sipCpp, &a0))
        {
            sipCpp->setLatitude(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_setLatitude, doc_QGeoCoordinate_setLatitude);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_latitude, "latitude(self) -> float");

extern "C" {static PyObject *meth_QGeoCoordinate_latitude(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_latitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoCoordinate, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->latitude();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_latitude, doc_QGeoCoordinate_latitude);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_setLongitude, "setLongitude(self, float)");

extern "C" {static PyObject *meth_QGeoCoordinate_setLongitude(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_setLongitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGeoCoordinate, &sipCpp, &a0))
        {
            sipCpp->setLongitude(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_setLongitude, doc_QGeoCoordinate_setLongitude);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_longitude, "longitude(self) -> float");

extern "C" {static PyObject *meth_QGeoCoordinate_longitude(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_longitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoCoordinate, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->longitude();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_longitude, doc_QGeoCoordinate_longitude);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_setAltitude, "setAltitude(self, float)");

extern "C" {static PyObject *meth_QGeoCoordinate_setAltitude(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_setAltitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGeoCoordinate, &sipCpp, &a0))
        {
            sipCpp->setAltitude(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_setAltitude, doc_QGeoCoordinate_setAltitude);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_altitude, "altitude(self) -> float");

extern "C" {static PyObject *meth_QGeoCoordinate_altitude(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_altitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoCoordinate, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->altitude();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_altitude, doc_QGeoCoordinate_altitude);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_distanceTo, "distanceTo(self, QGeoCoordinate) -> float");

extern "C" {static PyObject *meth_QGeoCoordinate_distanceTo(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_distanceTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoCoordinate, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->distanceTo(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_distanceTo, doc_QGeoCoordinate_distanceTo);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_azimuthTo, "azimuthTo(self, QGeoCoordinate) -> float");

extern "C" {static PyObject *meth_QGeoCoordinate_azimuthTo(PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_azimuthTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        const QGeoCoordinate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoCoordinate, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->azimuthTo(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_azimuthTo, doc_QGeoCoordinate_azimuthTo);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_atDistanceAndAzimuth, "atDistanceAndAzimuth(self, float, float, distanceUp: float = 0) -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoCoordinate_atDistanceAndAzimuth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_atDistanceAndAzimuth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2 = 0;
        const QGeoCoordinate *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_distanceUp,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bdd|d", &sipSelf, sipType_QGeoCoordinate, &sipCpp, &a0, &a1, &a2))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->atDistanceAndAzimuth(a0,a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_atDistanceAndAzimuth, doc_QGeoCoordinate_atDistanceAndAzimuth);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoCoordinate_toString, "toString(self, format: QGeoCoordinate.CoordinateFormat = QGeoCoordinate.DegreesMinutesSecondsWithHemisphere) -> str");

extern "C" {static PyObject *meth_QGeoCoordinate_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGeoCoordinate_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoCoordinate::CoordinateFormat a0 = QGeoCoordinate::DegreesMinutesSecondsWithHemisphere;
        const QGeoCoordinate *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QGeoCoordinate, &sipCpp, sipType_QGeoCoordinate_CoordinateFormat, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoCoordinate, sipName_toString, doc_QGeoCoordinate_toString);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoCoordinate___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoCoordinate___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoCoordinate *sipCpp = reinterpret_cast<QGeoCoordinate *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoCoordinate));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoCoordinate, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoCoordinate::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoCoordinate,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoCoordinate___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoCoordinate___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoCoordinate *sipCpp = reinterpret_cast<QGeoCoordinate *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoCoordinate));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoCoordinate, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoCoordinate::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoCoordinate,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoCoordinate(void *, int);}
static void release_QGeoCoordinate(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoCoordinate *>(sipCppV);
}


extern "C" {static void assign_QGeoCoordinate(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoCoordinate(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoCoordinate *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoCoordinate *>(sipSrc);
}


extern "C" {static void *array_QGeoCoordinate(SIP_SSIZE_T);}
static void *array_QGeoCoordinate(SIP_SSIZE_T sipNrElem)
{
    return new QGeoCoordinate[sipNrElem];
}


extern "C" {static void *copy_QGeoCoordinate(const void *, SIP_SSIZE_T);}
static void *copy_QGeoCoordinate(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoCoordinate(reinterpret_cast<const QGeoCoordinate *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoCoordinate(sipSimpleWrapper *);}
static void dealloc_QGeoCoordinate(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoCoordinate(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoCoordinate(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoCoordinate(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoCoordinate *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoCoordinate();

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dd", &a0, &a1))
        {
            sipCpp = new QGeoCoordinate(a0,a1);

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;
        double a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ddd", &a0, &a1, &a2))
        {
            sipCpp = new QGeoCoordinate(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QGeoCoordinate* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoCoordinate, &a0))
        {
            sipCpp = new QGeoCoordinate(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoCoordinate[] = {
    {(void *)slot_QGeoCoordinate___ne__, ne_slot},
    {(void *)slot_QGeoCoordinate___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoCoordinate[] = {
    {SIP_MLNAME_CAST(sipName_altitude), meth_QGeoCoordinate_altitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_altitude)},
    {SIP_MLNAME_CAST(sipName_atDistanceAndAzimuth), (PyCFunction)meth_QGeoCoordinate_atDistanceAndAzimuth, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGeoCoordinate_atDistanceAndAzimuth)},
    {SIP_MLNAME_CAST(sipName_azimuthTo), meth_QGeoCoordinate_azimuthTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_azimuthTo)},
    {SIP_MLNAME_CAST(sipName_distanceTo), meth_QGeoCoordinate_distanceTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_distanceTo)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGeoCoordinate_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_isValid)},
    {SIP_MLNAME_CAST(sipName_latitude), meth_QGeoCoordinate_latitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_latitude)},
    {SIP_MLNAME_CAST(sipName_longitude), meth_QGeoCoordinate_longitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_longitude)},
    {SIP_MLNAME_CAST(sipName_setAltitude), meth_QGeoCoordinate_setAltitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_setAltitude)},
    {SIP_MLNAME_CAST(sipName_setLatitude), meth_QGeoCoordinate_setLatitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_setLatitude)},
    {SIP_MLNAME_CAST(sipName_setLongitude), meth_QGeoCoordinate_setLongitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_setLongitude)},
    {SIP_MLNAME_CAST(sipName_toString), (PyCFunction)meth_QGeoCoordinate_toString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGeoCoordinate_toString)},
    {SIP_MLNAME_CAST(sipName_type), meth_QGeoCoordinate_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoCoordinate_type)}
};

static sipEnumMemberDef enummembers_QGeoCoordinate[] = {
    {sipName_Coordinate2D, static_cast<int>(QGeoCoordinate::Coordinate2D), 9},
    {sipName_Coordinate3D, static_cast<int>(QGeoCoordinate::Coordinate3D), 9},
    {sipName_Degrees, static_cast<int>(QGeoCoordinate::Degrees), 8},
    {sipName_DegreesMinutes, static_cast<int>(QGeoCoordinate::DegreesMinutes), 8},
    {sipName_DegreesMinutesSeconds, static_cast<int>(QGeoCoordinate::DegreesMinutesSeconds), 8},
    {sipName_DegreesMinutesSecondsWithHemisphere, static_cast<int>(QGeoCoordinate::DegreesMinutesSecondsWithHemisphere), 8},
    {sipName_DegreesMinutesWithHemisphere, static_cast<int>(QGeoCoordinate::DegreesMinutesWithHemisphere), 8},
    {sipName_DegreesWithHemisphere, static_cast<int>(QGeoCoordinate::DegreesWithHemisphere), 8},
    {sipName_InvalidCoordinate, static_cast<int>(QGeoCoordinate::InvalidCoordinate), 9},
};

PyDoc_STRVAR(doc_QGeoCoordinate, "\1QGeoCoordinate()\n"
    "QGeoCoordinate(float, float)\n"
    "QGeoCoordinate(float, float, float)\n"
    "QGeoCoordinate(QGeoCoordinate)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoCoordinate = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoCoordinate,
        {0}
    },
    {
        sipNameNr_QGeoCoordinate,
        {0, 0, 1},
        12, methods_QGeoCoordinate,
        9, enummembers_QGeoCoordinate,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoCoordinate,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QGeoCoordinate,
    init_type_QGeoCoordinate,
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
    dealloc_QGeoCoordinate,
    assign_QGeoCoordinate,
    array_QGeoCoordinate,
    copy_QGeoCoordinate,
    release_QGeoCoordinate,
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
