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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qcameraimagecapture.sip"
#include <qcameraimagecapture.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qcameraimagecapture.sip"
#include <qcameraimagecapture.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"


extern "C" {static int slot_QCameraImageCapture_CaptureDestinations___bool__(PyObject *);}
static int slot_QCameraImageCapture_CaptureDestinations___bool__(PyObject *sipSelf)
{
    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCameraImageCapture::CaptureDestinations::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___ne__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCameraImageCapture::CaptureDestinations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCameraImageCapture_CaptureDestinations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCameraImageCapture::CaptureDestinations::Int() != a0->operator QCameraImageCapture::CaptureDestinations::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"
            sipReleaseType(const_cast<QCameraImageCapture::CaptureDestinations *>(a0),sipType_QCameraImageCapture_CaptureDestinations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QCameraImageCapture_CaptureDestinations,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___eq__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCameraImageCapture::CaptureDestinations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCameraImageCapture_CaptureDestinations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCameraImageCapture::CaptureDestinations::Int() == a0->operator QCameraImageCapture::CaptureDestinations::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"
            sipReleaseType(const_cast<QCameraImageCapture::CaptureDestinations *>(a0),sipType_QCameraImageCapture_CaptureDestinations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QCameraImageCapture_CaptureDestinations,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCameraImageCapture_CaptureDestinations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QCameraImageCapture::CaptureDestinations(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"

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


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___xor__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraImageCapture::CaptureDestinations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCameraImageCapture_CaptureDestinations, &a0, &a0State, &a1))
        {
            QCameraImageCapture::CaptureDestinations*sipRes;

            sipRes = new QCameraImageCapture::CaptureDestinations((*a0 ^ a1));
            sipReleaseType(a0,sipType_QCameraImageCapture_CaptureDestinations,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCameraImageCapture_CaptureDestinations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___ior__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCameraImageCapture_CaptureDestinations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QCameraImageCapture::CaptureDestinations(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"

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


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___or__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraImageCapture::CaptureDestinations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCameraImageCapture_CaptureDestinations, &a0, &a0State, &a1))
        {
            QCameraImageCapture::CaptureDestinations*sipRes;

            sipRes = new QCameraImageCapture::CaptureDestinations((*a0 | a1));
            sipReleaseType(a0,sipType_QCameraImageCapture_CaptureDestinations,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCameraImageCapture_CaptureDestinations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___iand__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCameraImageCapture_CaptureDestinations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QCameraImageCapture::CaptureDestinations::operator&=(a0);

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


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___and__(PyObject *,PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraImageCapture::CaptureDestinations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCameraImageCapture_CaptureDestinations, &a0, &a0State, &a1))
        {
            QCameraImageCapture::CaptureDestinations*sipRes;

            sipRes = new QCameraImageCapture::CaptureDestinations((*a0 & a1));
            sipReleaseType(a0,sipType_QCameraImageCapture_CaptureDestinations,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCameraImageCapture_CaptureDestinations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___invert__(PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___invert__(PyObject *sipSelf)
{
    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

    if (!sipCpp)
        return 0;


    {
        {
            QCameraImageCapture::CaptureDestinations*sipRes;

            sipRes = new QCameraImageCapture::CaptureDestinations(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QCameraImageCapture_CaptureDestinations,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCameraImageCapture_CaptureDestinations___int__(PyObject *);}
static PyObject *slot_QCameraImageCapture_CaptureDestinations___int__(PyObject *sipSelf)
{
    QCameraImageCapture::CaptureDestinations *sipCpp = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraImageCapture_CaptureDestinations));

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
extern "C" {static void release_QCameraImageCapture_CaptureDestinations(void *, int);}
static void release_QCameraImageCapture_CaptureDestinations(void *sipCppV,int)
{
    delete reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipCppV);
}


extern "C" {static void assign_QCameraImageCapture_CaptureDestinations(void *, SIP_SSIZE_T, const void *);}
static void assign_QCameraImageCapture_CaptureDestinations(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCameraImageCapture::CaptureDestinations *>(sipSrc);
}


extern "C" {static void *array_QCameraImageCapture_CaptureDestinations(SIP_SSIZE_T);}
static void *array_QCameraImageCapture_CaptureDestinations(SIP_SSIZE_T sipNrElem)
{
    return new QCameraImageCapture::CaptureDestinations[sipNrElem];
}


extern "C" {static void *copy_QCameraImageCapture_CaptureDestinations(const void *, SIP_SSIZE_T);}
static void *copy_QCameraImageCapture_CaptureDestinations(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCameraImageCapture::CaptureDestinations(reinterpret_cast<const QCameraImageCapture::CaptureDestinations *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCameraImageCapture_CaptureDestinations(sipSimpleWrapper *);}
static void dealloc_QCameraImageCapture_CaptureDestinations(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCameraImageCapture_CaptureDestinations(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCameraImageCapture_CaptureDestinations(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCameraImageCapture_CaptureDestinations(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCameraImageCapture::CaptureDestinations *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QCameraImageCapture::CaptureDestinations();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QCameraImageCapture::CaptureDestinations(a0);

            return sipCpp;
        }
    }

    {
        const QCameraImageCapture::CaptureDestinations* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QCameraImageCapture_CaptureDestinations, &a0, &a0State))
        {
            sipCpp = new QCameraImageCapture::CaptureDestinations(*a0);
            sipReleaseType(const_cast<QCameraImageCapture::CaptureDestinations *>(a0),sipType_QCameraImageCapture_CaptureDestinations,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QCameraImageCapture_CaptureDestinations(PyObject *, void **, int *, PyObject *);}
static int convertTo_QCameraImageCapture_CaptureDestinations(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QCameraImageCapture::CaptureDestinations **sipCppPtr = reinterpret_cast<QCameraImageCapture::CaptureDestinations **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QCameraImageCapture::CaptureDestinations is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCameraImageCapture_CaptureDestination)) ||
            sipCanConvertToType(sipPy, sipType_QCameraImageCapture_CaptureDestinations, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCameraImageCapture_CaptureDestination)))
{
    *sipCppPtr = new QCameraImageCapture::CaptureDestinations(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QCameraImageCapture::CaptureDestinations *>(sipConvertToType(sipPy, sipType_QCameraImageCapture_CaptureDestinations, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCameraImageCapture_CaptureDestinations[] = {
    {(void *)slot_QCameraImageCapture_CaptureDestinations___bool__, bool_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___ne__, ne_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___eq__, eq_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___ixor__, ixor_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___xor__, xor_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___ior__, ior_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___or__, or_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___iand__, iand_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___and__, and_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___invert__, invert_slot},
    {(void *)slot_QCameraImageCapture_CaptureDestinations___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QCameraImageCapture_CaptureDestinations, "\1QCameraImageCapture.CaptureDestinations()\n"
    "QCameraImageCapture.CaptureDestinations(Union[QCameraImageCapture.CaptureDestinations, QCameraImageCapture.CaptureDestination])\n"
    "QCameraImageCapture.CaptureDestinations(QCameraImageCapture.CaptureDestinations)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QCameraImageCapture_CaptureDestinations = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCameraImageCapture__CaptureDestinations,
        {0}
    },
    {
        sipNameNr_CaptureDestinations,
        {47, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCameraImageCapture_CaptureDestinations,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCameraImageCapture_CaptureDestinations,
    init_type_QCameraImageCapture_CaptureDestinations,
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
    dealloc_QCameraImageCapture_CaptureDestinations,
    assign_QCameraImageCapture_CaptureDestinations,
    array_QCameraImageCapture_CaptureDestinations,
    copy_QCameraImageCapture_CaptureDestinations,
    release_QCameraImageCapture_CaptureDestinations,
    0,
    convertTo_QCameraImageCapture_CaptureDestinations,
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
