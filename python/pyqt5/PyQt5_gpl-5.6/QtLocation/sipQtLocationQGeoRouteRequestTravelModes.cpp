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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeorouterequest.sip"
#include <qgeorouterequest.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeorouterequest.sip"
#include <qgeorouterequest.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"


extern "C" {static int slot_QGeoRouteRequest_TravelModes___bool__(PyObject *);}
static int slot_QGeoRouteRequest_TravelModes___bool__(PyObject *sipSelf)
{
    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoRouteRequest::TravelModes::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGeoRouteRequest_TravelModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoRouteRequest::TravelModes::Int() != a0->operator QGeoRouteRequest::TravelModes::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"
            sipReleaseType(const_cast<QGeoRouteRequest::TravelModes *>(a0),sipType_QGeoRouteRequest_TravelModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QGeoRouteRequest_TravelModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGeoRouteRequest_TravelModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoRouteRequest::TravelModes::Int() == a0->operator QGeoRouteRequest::TravelModes::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"
            sipReleaseType(const_cast<QGeoRouteRequest::TravelModes *>(a0),sipType_QGeoRouteRequest_TravelModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QGeoRouteRequest_TravelModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_TravelModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGeoRouteRequest::TravelModes(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoRouteRequest_TravelModes, &a0, &a0State, &a1))
        {
            QGeoRouteRequest::TravelModes*sipRes;

            sipRes = new QGeoRouteRequest::TravelModes((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGeoRouteRequest_TravelModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_TravelModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_TravelModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGeoRouteRequest::TravelModes(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___or__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoRouteRequest_TravelModes, &a0, &a0State, &a1))
        {
            QGeoRouteRequest::TravelModes*sipRes;

            sipRes = new QGeoRouteRequest::TravelModes((*a0 | a1));
            sipReleaseType(a0,sipType_QGeoRouteRequest_TravelModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_TravelModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_TravelModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGeoRouteRequest::TravelModes::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___and__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoRouteRequest_TravelModes, &a0, &a0State, &a1))
        {
            QGeoRouteRequest::TravelModes*sipRes;

            sipRes = new QGeoRouteRequest::TravelModes((*a0 & a1));
            sipReleaseType(a0,sipType_QGeoRouteRequest_TravelModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_TravelModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___invert__(PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___invert__(PyObject *sipSelf)
{
    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;


    {
        {
            QGeoRouteRequest::TravelModes*sipRes;

            sipRes = new QGeoRouteRequest::TravelModes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_TravelModes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_TravelModes___int__(PyObject *);}
static PyObject *slot_QGeoRouteRequest_TravelModes___int__(PyObject *sipSelf)
{
    QGeoRouteRequest::TravelModes *sipCpp = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_TravelModes));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoRouteRequest_TravelModes(void *, int);}
static void release_QGeoRouteRequest_TravelModes(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipCppV);
}


extern "C" {static void assign_QGeoRouteRequest_TravelModes(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoRouteRequest_TravelModes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoRouteRequest::TravelModes *>(sipSrc);
}


extern "C" {static void *array_QGeoRouteRequest_TravelModes(SIP_SSIZE_T);}
static void *array_QGeoRouteRequest_TravelModes(SIP_SSIZE_T sipNrElem)
{
    return new QGeoRouteRequest::TravelModes[sipNrElem];
}


extern "C" {static void *copy_QGeoRouteRequest_TravelModes(const void *, SIP_SSIZE_T);}
static void *copy_QGeoRouteRequest_TravelModes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoRouteRequest::TravelModes(reinterpret_cast<const QGeoRouteRequest::TravelModes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoRouteRequest_TravelModes(sipSimpleWrapper *);}
static void dealloc_QGeoRouteRequest_TravelModes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoRouteRequest_TravelModes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoRouteRequest_TravelModes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoRouteRequest_TravelModes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoRouteRequest::TravelModes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoRouteRequest::TravelModes();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGeoRouteRequest::TravelModes(a0);

            return sipCpp;
        }
    }

    {
        const QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGeoRouteRequest_TravelModes, &a0, &a0State))
        {
            sipCpp = new QGeoRouteRequest::TravelModes(*a0);
            sipReleaseType(const_cast<QGeoRouteRequest::TravelModes *>(a0),sipType_QGeoRouteRequest_TravelModes,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGeoRouteRequest_TravelModes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGeoRouteRequest_TravelModes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGeoRouteRequest::TravelModes **sipCppPtr = reinterpret_cast<QGeoRouteRequest::TravelModes **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGeoRouteRequest::TravelModes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_TravelMode)) ||
            sipCanConvertToType(sipPy, sipType_QGeoRouteRequest_TravelModes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_TravelMode)))
{
    *sipCppPtr = new QGeoRouteRequest::TravelModes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGeoRouteRequest::TravelModes *>(sipConvertToType(sipPy, sipType_QGeoRouteRequest_TravelModes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestTravelModes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoRouteRequest_TravelModes[] = {
    {(void *)slot_QGeoRouteRequest_TravelModes___bool__, bool_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___ne__, ne_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___eq__, eq_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___ixor__, ixor_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___xor__, xor_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___ior__, ior_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___or__, or_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___iand__, iand_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___and__, and_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___invert__, invert_slot},
    {(void *)slot_QGeoRouteRequest_TravelModes___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGeoRouteRequest_TravelModes, "\1QGeoRouteRequest.TravelModes()\n"
    "QGeoRouteRequest.TravelModes(Union[QGeoRouteRequest.TravelModes, QGeoRouteRequest.TravelMode])\n"
    "QGeoRouteRequest.TravelModes(QGeoRouteRequest.TravelModes)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QGeoRouteRequest_TravelModes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoRouteRequest__TravelModes,
        {0}
    },
    {
        sipNameNr_TravelModes,
        {9, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoRouteRequest_TravelModes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGeoRouteRequest_TravelModes,
    init_type_QGeoRouteRequest_TravelModes,
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
    dealloc_QGeoRouteRequest_TravelModes,
    assign_QGeoRouteRequest_TravelModes,
    array_QGeoRouteRequest_TravelModes,
    copy_QGeoRouteRequest_TravelModes,
    release_QGeoRouteRequest_TravelModes,
    0,
    convertTo_QGeoRouteRequest_TravelModes,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
