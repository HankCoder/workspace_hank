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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeoserviceprovider.sip"
#include <qgeoserviceprovider.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeoserviceprovider.sip"
#include <qgeoserviceprovider.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"


extern "C" {static int slot_QGeoServiceProvider_GeocodingFeatures___bool__(PyObject *);}
static int slot_QGeoServiceProvider_GeocodingFeatures___bool__(PyObject *sipSelf)
{
    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoServiceProvider::GeocodingFeatures::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoServiceProvider::GeocodingFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGeoServiceProvider_GeocodingFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoServiceProvider::GeocodingFeatures::Int() != a0->operator QGeoServiceProvider::GeocodingFeatures::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"
            sipReleaseType(const_cast<QGeoServiceProvider::GeocodingFeatures *>(a0),sipType_QGeoServiceProvider_GeocodingFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QGeoServiceProvider_GeocodingFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoServiceProvider::GeocodingFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGeoServiceProvider_GeocodingFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGeoServiceProvider::GeocodingFeatures::Int() == a0->operator QGeoServiceProvider::GeocodingFeatures::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"
            sipReleaseType(const_cast<QGeoServiceProvider::GeocodingFeatures *>(a0),sipType_QGeoServiceProvider_GeocodingFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QGeoServiceProvider_GeocodingFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoServiceProvider_GeocodingFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGeoServiceProvider::GeocodingFeatures(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"

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


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoServiceProvider::GeocodingFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoServiceProvider_GeocodingFeatures, &a0, &a0State, &a1))
        {
            QGeoServiceProvider::GeocodingFeatures*sipRes;

            sipRes = new QGeoServiceProvider::GeocodingFeatures((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGeoServiceProvider_GeocodingFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoServiceProvider_GeocodingFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoServiceProvider_GeocodingFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGeoServiceProvider::GeocodingFeatures(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"

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


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoServiceProvider::GeocodingFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoServiceProvider_GeocodingFeatures, &a0, &a0State, &a1))
        {
            QGeoServiceProvider::GeocodingFeatures*sipRes;

            sipRes = new QGeoServiceProvider::GeocodingFeatures((*a0 | a1));
            sipReleaseType(a0,sipType_QGeoServiceProvider_GeocodingFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoServiceProvider_GeocodingFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoServiceProvider_GeocodingFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGeoServiceProvider::GeocodingFeatures::operator&=(a0);

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


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoServiceProvider::GeocodingFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGeoServiceProvider_GeocodingFeatures, &a0, &a0State, &a1))
        {
            QGeoServiceProvider::GeocodingFeatures*sipRes;

            sipRes = new QGeoServiceProvider::GeocodingFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QGeoServiceProvider_GeocodingFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGeoServiceProvider_GeocodingFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___invert__(PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___invert__(PyObject *sipSelf)
{
    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QGeoServiceProvider::GeocodingFeatures*sipRes;

            sipRes = new QGeoServiceProvider::GeocodingFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGeoServiceProvider_GeocodingFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___int__(PyObject *);}
static PyObject *slot_QGeoServiceProvider_GeocodingFeatures___int__(PyObject *sipSelf)
{
    QGeoServiceProvider::GeocodingFeatures *sipCpp = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoServiceProvider_GeocodingFeatures));

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
extern "C" {static void release_QGeoServiceProvider_GeocodingFeatures(void *, int);}
static void release_QGeoServiceProvider_GeocodingFeatures(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipCppV);
}


extern "C" {static void assign_QGeoServiceProvider_GeocodingFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoServiceProvider_GeocodingFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoServiceProvider::GeocodingFeatures *>(sipSrc);
}


extern "C" {static void *array_QGeoServiceProvider_GeocodingFeatures(SIP_SSIZE_T);}
static void *array_QGeoServiceProvider_GeocodingFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QGeoServiceProvider::GeocodingFeatures[sipNrElem];
}


extern "C" {static void *copy_QGeoServiceProvider_GeocodingFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QGeoServiceProvider_GeocodingFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoServiceProvider::GeocodingFeatures(reinterpret_cast<const QGeoServiceProvider::GeocodingFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoServiceProvider_GeocodingFeatures(sipSimpleWrapper *);}
static void dealloc_QGeoServiceProvider_GeocodingFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoServiceProvider_GeocodingFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoServiceProvider_GeocodingFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoServiceProvider_GeocodingFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoServiceProvider::GeocodingFeatures *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoServiceProvider::GeocodingFeatures();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGeoServiceProvider::GeocodingFeatures(a0);

            return sipCpp;
        }
    }

    {
        const QGeoServiceProvider::GeocodingFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGeoServiceProvider_GeocodingFeatures, &a0, &a0State))
        {
            sipCpp = new QGeoServiceProvider::GeocodingFeatures(*a0);
            sipReleaseType(const_cast<QGeoServiceProvider::GeocodingFeatures *>(a0),sipType_QGeoServiceProvider_GeocodingFeatures,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGeoServiceProvider_GeocodingFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGeoServiceProvider_GeocodingFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGeoServiceProvider::GeocodingFeatures **sipCppPtr = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGeoServiceProvider::GeocodingFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGeoServiceProvider_GeocodingFeature)) ||
            sipCanConvertToType(sipPy, sipType_QGeoServiceProvider_GeocodingFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGeoServiceProvider_GeocodingFeature)))
{
    *sipCppPtr = new QGeoServiceProvider::GeocodingFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGeoServiceProvider::GeocodingFeatures *>(sipConvertToType(sipPy, sipType_QGeoServiceProvider_GeocodingFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoServiceProvider_GeocodingFeatures[] = {
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___bool__, bool_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___ne__, ne_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___eq__, eq_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___ixor__, ixor_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___xor__, xor_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___ior__, ior_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___or__, or_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___iand__, iand_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___and__, and_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___invert__, invert_slot},
    {(void *)slot_QGeoServiceProvider_GeocodingFeatures___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGeoServiceProvider_GeocodingFeatures, "\1QGeoServiceProvider.GeocodingFeatures()\n"
    "QGeoServiceProvider.GeocodingFeatures(Union[QGeoServiceProvider.GeocodingFeatures, QGeoServiceProvider.GeocodingFeature])\n"
    "QGeoServiceProvider.GeocodingFeatures(QGeoServiceProvider.GeocodingFeatures)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QGeoServiceProvider_GeocodingFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoServiceProvider__GeocodingFeatures,
        {0}
    },
    {
        sipNameNr_GeocodingFeatures,
        {25, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoServiceProvider_GeocodingFeatures,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGeoServiceProvider_GeocodingFeatures,
    init_type_QGeoServiceProvider_GeocodingFeatures,
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
    dealloc_QGeoServiceProvider_GeocodingFeatures,
    assign_QGeoServiceProvider_GeocodingFeatures,
    array_QGeoServiceProvider_GeocodingFeatures,
    copy_QGeoServiceProvider_GeocodingFeatures,
    release_QGeoServiceProvider_GeocodingFeatures,
    0,
    convertTo_QGeoServiceProvider_GeocodingFeatures,
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
