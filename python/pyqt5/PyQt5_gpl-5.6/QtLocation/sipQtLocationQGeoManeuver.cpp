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

#include "sipAPIQtLocation.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeomaneuver.sip"
#include <qgeomaneuver.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoManeuver.cpp"

#line 28 "sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoManeuver.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoManeuver.cpp"


PyDoc_STRVAR(doc_QGeoManeuver_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QGeoManeuver_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_isValid, doc_QGeoManeuver_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_setPosition, "setPosition(self, QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoManeuver_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoManeuver, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setPosition(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_setPosition, doc_QGeoManeuver_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_position, "position(self) -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoManeuver_position(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->position());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_position, doc_QGeoManeuver_position);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_setInstructionText, "setInstructionText(self, str)");

extern "C" {static PyObject *meth_QGeoManeuver_setInstructionText(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_setInstructionText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoManeuver, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setInstructionText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_setInstructionText, doc_QGeoManeuver_setInstructionText);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_instructionText, "instructionText(self) -> str");

extern "C" {static PyObject *meth_QGeoManeuver_instructionText(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_instructionText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->instructionText());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_instructionText, doc_QGeoManeuver_instructionText);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_setDirection, "setDirection(self, QGeoManeuver.InstructionDirection)");

extern "C" {static PyObject *meth_QGeoManeuver_setDirection(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_setDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoManeuver::InstructionDirection a0;
        QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoManeuver, &sipCpp, sipType_QGeoManeuver_InstructionDirection, &a0))
        {
            sipCpp->setDirection(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_setDirection, doc_QGeoManeuver_setDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_direction, "direction(self) -> QGeoManeuver.InstructionDirection");

extern "C" {static PyObject *meth_QGeoManeuver_direction(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_direction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            QGeoManeuver::InstructionDirection sipRes;

            sipRes = sipCpp->direction();

            return sipConvertFromEnum(sipRes,sipType_QGeoManeuver_InstructionDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_direction, doc_QGeoManeuver_direction);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_setTimeToNextInstruction, "setTimeToNextInstruction(self, int)");

extern "C" {static PyObject *meth_QGeoManeuver_setTimeToNextInstruction(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_setTimeToNextInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGeoManeuver, &sipCpp, &a0))
        {
            sipCpp->setTimeToNextInstruction(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_setTimeToNextInstruction, doc_QGeoManeuver_setTimeToNextInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_timeToNextInstruction, "timeToNextInstruction(self) -> int");

extern "C" {static PyObject *meth_QGeoManeuver_timeToNextInstruction(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_timeToNextInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->timeToNextInstruction();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_timeToNextInstruction, doc_QGeoManeuver_timeToNextInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_setDistanceToNextInstruction, "setDistanceToNextInstruction(self, float)");

extern "C" {static PyObject *meth_QGeoManeuver_setDistanceToNextInstruction(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_setDistanceToNextInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGeoManeuver, &sipCpp, &a0))
        {
            sipCpp->setDistanceToNextInstruction(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_setDistanceToNextInstruction, doc_QGeoManeuver_setDistanceToNextInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_distanceToNextInstruction, "distanceToNextInstruction(self) -> float");

extern "C" {static PyObject *meth_QGeoManeuver_distanceToNextInstruction(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_distanceToNextInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->distanceToNextInstruction();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_distanceToNextInstruction, doc_QGeoManeuver_distanceToNextInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_setWaypoint, "setWaypoint(self, QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoManeuver_setWaypoint(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_setWaypoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoManeuver, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setWaypoint(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_setWaypoint, doc_QGeoManeuver_setWaypoint);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoManeuver_waypoint, "waypoint(self) -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoManeuver_waypoint(PyObject *, PyObject *);}
static PyObject *meth_QGeoManeuver_waypoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoManeuver, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->waypoint());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoManeuver, sipName_waypoint, doc_QGeoManeuver_waypoint);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoManeuver___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoManeuver___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoManeuver *sipCpp = reinterpret_cast<QGeoManeuver *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoManeuver));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoManeuver, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoManeuver::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QGeoManeuver,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoManeuver___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoManeuver___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoManeuver *sipCpp = reinterpret_cast<QGeoManeuver *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoManeuver));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoManeuver* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoManeuver, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoManeuver::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QGeoManeuver,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoManeuver(void *, int);}
static void release_QGeoManeuver(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoManeuver *>(sipCppV);
}


extern "C" {static void assign_QGeoManeuver(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoManeuver(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoManeuver *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoManeuver *>(sipSrc);
}


extern "C" {static void *array_QGeoManeuver(SIP_SSIZE_T);}
static void *array_QGeoManeuver(SIP_SSIZE_T sipNrElem)
{
    return new QGeoManeuver[sipNrElem];
}


extern "C" {static void *copy_QGeoManeuver(const void *, SIP_SSIZE_T);}
static void *copy_QGeoManeuver(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoManeuver(reinterpret_cast<const QGeoManeuver *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoManeuver(sipSimpleWrapper *);}
static void dealloc_QGeoManeuver(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoManeuver(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoManeuver(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoManeuver(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoManeuver *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoManeuver();

            return sipCpp;
        }
    }

    {
        const QGeoManeuver* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoManeuver, &a0))
        {
            sipCpp = new QGeoManeuver(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoManeuver[] = {
    {(void *)slot_QGeoManeuver___ne__, ne_slot},
    {(void *)slot_QGeoManeuver___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoManeuver[] = {
    {SIP_MLNAME_CAST(sipName_direction), meth_QGeoManeuver_direction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_direction)},
    {SIP_MLNAME_CAST(sipName_distanceToNextInstruction), meth_QGeoManeuver_distanceToNextInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_distanceToNextInstruction)},
    {SIP_MLNAME_CAST(sipName_instructionText), meth_QGeoManeuver_instructionText, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_instructionText)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGeoManeuver_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_isValid)},
    {SIP_MLNAME_CAST(sipName_position), meth_QGeoManeuver_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_position)},
    {SIP_MLNAME_CAST(sipName_setDirection), meth_QGeoManeuver_setDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_setDirection)},
    {SIP_MLNAME_CAST(sipName_setDistanceToNextInstruction), meth_QGeoManeuver_setDistanceToNextInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_setDistanceToNextInstruction)},
    {SIP_MLNAME_CAST(sipName_setInstructionText), meth_QGeoManeuver_setInstructionText, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_setInstructionText)},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QGeoManeuver_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_setPosition)},
    {SIP_MLNAME_CAST(sipName_setTimeToNextInstruction), meth_QGeoManeuver_setTimeToNextInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_setTimeToNextInstruction)},
    {SIP_MLNAME_CAST(sipName_setWaypoint), meth_QGeoManeuver_setWaypoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_setWaypoint)},
    {SIP_MLNAME_CAST(sipName_timeToNextInstruction), meth_QGeoManeuver_timeToNextInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_timeToNextInstruction)},
    {SIP_MLNAME_CAST(sipName_waypoint), meth_QGeoManeuver_waypoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoManeuver_waypoint)}
};

static sipEnumMemberDef enummembers_QGeoManeuver[] = {
    {sipName_DirectionBearLeft, static_cast<int>(QGeoManeuver::DirectionBearLeft), 5},
    {sipName_DirectionBearRight, static_cast<int>(QGeoManeuver::DirectionBearRight), 5},
    {sipName_DirectionForward, static_cast<int>(QGeoManeuver::DirectionForward), 5},
    {sipName_DirectionHardLeft, static_cast<int>(QGeoManeuver::DirectionHardLeft), 5},
    {sipName_DirectionHardRight, static_cast<int>(QGeoManeuver::DirectionHardRight), 5},
    {sipName_DirectionLeft, static_cast<int>(QGeoManeuver::DirectionLeft), 5},
    {sipName_DirectionLightLeft, static_cast<int>(QGeoManeuver::DirectionLightLeft), 5},
    {sipName_DirectionLightRight, static_cast<int>(QGeoManeuver::DirectionLightRight), 5},
    {sipName_DirectionRight, static_cast<int>(QGeoManeuver::DirectionRight), 5},
    {sipName_DirectionUTurnLeft, static_cast<int>(QGeoManeuver::DirectionUTurnLeft), 5},
    {sipName_DirectionUTurnRight, static_cast<int>(QGeoManeuver::DirectionUTurnRight), 5},
    {sipName_NoDirection, static_cast<int>(QGeoManeuver::NoDirection), 5},
};

PyDoc_STRVAR(doc_QGeoManeuver, "\1QGeoManeuver()\n"
    "QGeoManeuver(QGeoManeuver)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QGeoManeuver = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoManeuver,
        {0}
    },
    {
        sipNameNr_QGeoManeuver,
        {0, 0, 1},
        13, methods_QGeoManeuver,
        12, enummembers_QGeoManeuver,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoManeuver,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGeoManeuver,
    init_type_QGeoManeuver,
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
    dealloc_QGeoManeuver,
    assign_QGeoManeuver,
    array_QGeoManeuver,
    copy_QGeoManeuver,
    release_QGeoManeuver,
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
