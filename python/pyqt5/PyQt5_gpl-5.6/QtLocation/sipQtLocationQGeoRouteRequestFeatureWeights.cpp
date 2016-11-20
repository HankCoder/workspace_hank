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
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeorouterequest.sip"
#include <qgeorouterequest.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"


extern "C" {static int slot_QGeoRouteRequest_FeatureWeights___bool__(PyObject *);}
static int slot_QGeoRouteRequest_FeatureWeights___bool__(PyObject *sipSelf)
{
    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoRouteRequest::FeatureWeights::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest::FeatureWeights* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGeoRouteRequest_FeatureWeights, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoRouteRequest::FeatureWeights::Int() != a0->operator QGeoRouteRequest::FeatureWeights::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"
            sipReleaseType(const_cast<QGeoRouteRequest::FeatureWeights *>(a0),sipType_QGeoRouteRequest_FeatureWeights,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QGeoRouteRequest_FeatureWeights,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest::FeatureWeights* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGeoRouteRequest_FeatureWeights, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoRouteRequest::FeatureWeights::Int() == a0->operator QGeoRouteRequest::FeatureWeights::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"
            sipReleaseType(const_cast<QGeoRouteRequest::FeatureWeights *>(a0),sipType_QGeoRouteRequest_FeatureWeights,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QGeoRouteRequest_FeatureWeights,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_FeatureWeights)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGeoRouteRequest::FeatureWeights(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"

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


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::FeatureWeights* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoRouteRequest_FeatureWeights, &a0, &a0State, &a1))
        {
            QGeoRouteRequest::FeatureWeights*sipRes;

            sipRes = new QGeoRouteRequest::FeatureWeights((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGeoRouteRequest_FeatureWeights,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_FeatureWeights,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_FeatureWeights)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGeoRouteRequest::FeatureWeights(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"

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


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___or__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::FeatureWeights* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoRouteRequest_FeatureWeights, &a0, &a0State, &a1))
        {
            QGeoRouteRequest::FeatureWeights*sipRes;

            sipRes = new QGeoRouteRequest::FeatureWeights((*a0 | a1));
            sipReleaseType(a0,sipType_QGeoRouteRequest_FeatureWeights,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_FeatureWeights,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_FeatureWeights)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGeoRouteRequest::FeatureWeights::operator&=(a0);

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


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___and__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::FeatureWeights* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoRouteRequest_FeatureWeights, &a0, &a0State, &a1))
        {
            QGeoRouteRequest::FeatureWeights*sipRes;

            sipRes = new QGeoRouteRequest::FeatureWeights((*a0 & a1));
            sipReleaseType(a0,sipType_QGeoRouteRequest_FeatureWeights,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_FeatureWeights,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___invert__(PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___invert__(PyObject *sipSelf)
{
    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

    if (!sipCpp)
        return 0;


    {
        {
            QGeoRouteRequest::FeatureWeights*sipRes;

            sipRes = new QGeoRouteRequest::FeatureWeights(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_FeatureWeights,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGeoRouteRequest_FeatureWeights___int__(PyObject *);}
static PyObject *slot_QGeoRouteRequest_FeatureWeights___int__(PyObject *sipSelf)
{
    QGeoRouteRequest::FeatureWeights *sipCpp = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest_FeatureWeights));

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
extern "C" {static void release_QGeoRouteRequest_FeatureWeights(void *, int);}
static void release_QGeoRouteRequest_FeatureWeights(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipCppV);
}


extern "C" {static void assign_QGeoRouteRequest_FeatureWeights(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoRouteRequest_FeatureWeights(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoRouteRequest::FeatureWeights *>(sipSrc);
}


extern "C" {static void *array_QGeoRouteRequest_FeatureWeights(SIP_SSIZE_T);}
static void *array_QGeoRouteRequest_FeatureWeights(SIP_SSIZE_T sipNrElem)
{
    return new QGeoRouteRequest::FeatureWeights[sipNrElem];
}


extern "C" {static void *copy_QGeoRouteRequest_FeatureWeights(const void *, SIP_SSIZE_T);}
static void *copy_QGeoRouteRequest_FeatureWeights(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoRouteRequest::FeatureWeights(reinterpret_cast<const QGeoRouteRequest::FeatureWeights *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoRouteRequest_FeatureWeights(sipSimpleWrapper *);}
static void dealloc_QGeoRouteRequest_FeatureWeights(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoRouteRequest_FeatureWeights(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoRouteRequest_FeatureWeights(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoRouteRequest_FeatureWeights(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoRouteRequest::FeatureWeights *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoRouteRequest::FeatureWeights();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGeoRouteRequest::FeatureWeights(a0);

            return sipCpp;
        }
    }

    {
        const QGeoRouteRequest::FeatureWeights* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGeoRouteRequest_FeatureWeights, &a0, &a0State))
        {
            sipCpp = new QGeoRouteRequest::FeatureWeights(*a0);
            sipReleaseType(const_cast<QGeoRouteRequest::FeatureWeights *>(a0),sipType_QGeoRouteRequest_FeatureWeights,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGeoRouteRequest_FeatureWeights(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGeoRouteRequest_FeatureWeights(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGeoRouteRequest::FeatureWeights **sipCppPtr = reinterpret_cast<QGeoRouteRequest::FeatureWeights **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGeoRouteRequest::FeatureWeights is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_FeatureWeight)) ||
            sipCanConvertToType(sipPy, sipType_QGeoRouteRequest_FeatureWeights, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGeoRouteRequest_FeatureWeight)))
{
    *sipCppPtr = new QGeoRouteRequest::FeatureWeights(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGeoRouteRequest::FeatureWeights *>(sipConvertToType(sipPy, sipType_QGeoRouteRequest_FeatureWeights, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequestFeatureWeights.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoRouteRequest_FeatureWeights[] = {
    {(void *)slot_QGeoRouteRequest_FeatureWeights___bool__, bool_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___ne__, ne_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___eq__, eq_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___ixor__, ixor_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___xor__, xor_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___ior__, ior_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___or__, or_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___iand__, iand_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___and__, and_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___invert__, invert_slot},
    {(void *)slot_QGeoRouteRequest_FeatureWeights___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGeoRouteRequest_FeatureWeights, "\1QGeoRouteRequest.FeatureWeights()\n"
    "QGeoRouteRequest.FeatureWeights(Union[QGeoRouteRequest.FeatureWeights, QGeoRouteRequest.FeatureWeight])\n"
    "QGeoRouteRequest.FeatureWeights(QGeoRouteRequest.FeatureWeights)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QGeoRouteRequest_FeatureWeights = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoRouteRequest__FeatureWeights,
        {0}
    },
    {
        sipNameNr_FeatureWeights,
        {9, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoRouteRequest_FeatureWeights,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGeoRouteRequest_FeatureWeights,
    init_type_QGeoRouteRequest_FeatureWeights,
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
    dealloc_QGeoRouteRequest_FeatureWeights,
    assign_QGeoRouteRequest_FeatureWeights,
    array_QGeoRouteRequest_FeatureWeights,
    copy_QGeoRouteRequest_FeatureWeights,
    release_QGeoRouteRequest_FeatureWeights,
    0,
    convertTo_QGeoRouteRequest_FeatureWeights,
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