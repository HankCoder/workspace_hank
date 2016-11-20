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

#include "sipAPIQtCore.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"


extern "C" {static int slot_QTextCodec_ConversionFlags___bool__(PyObject *);}
static int slot_QTextCodec_ConversionFlags___bool__(PyObject *sipSelf)
{
    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextCodec::ConversionFlags::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextCodec::ConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextCodec::ConversionFlags::Int() != a0->operator QTextCodec::ConversionFlags::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"
            sipReleaseType(const_cast<QTextCodec::ConversionFlags *>(a0),sipType_QTextCodec_ConversionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QTextCodec_ConversionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextCodec::ConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextCodec::ConversionFlags::Int() == a0->operator QTextCodec::ConversionFlags::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"
            sipReleaseType(const_cast<QTextCodec::ConversionFlags *>(a0),sipType_QTextCodec_ConversionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QTextCodec_ConversionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextCodec_ConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qglobal.sip"
        *sipCpp = QTextCodec::ConversionFlags(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"

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


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec::ConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextCodec_ConversionFlags, &a0, &a0State, &a1))
        {
            QTextCodec::ConversionFlags*sipRes;

            sipRes = new QTextCodec::ConversionFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextCodec_ConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextCodec_ConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qglobal.sip"
        *sipCpp = QTextCodec::ConversionFlags(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"

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


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec::ConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextCodec_ConversionFlags, &a0, &a0State, &a1))
        {
            QTextCodec::ConversionFlags*sipRes;

            sipRes = new QTextCodec::ConversionFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextCodec_ConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextCodec_ConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTextCodec::ConversionFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec::ConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextCodec_ConversionFlags, &a0, &a0State, &a1))
        {
            QTextCodec::ConversionFlags*sipRes;

            sipRes = new QTextCodec::ConversionFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextCodec_ConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___invert__(PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___invert__(PyObject *sipSelf)
{
    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextCodec::ConversionFlags*sipRes;

            sipRes = new QTextCodec::ConversionFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTextCodec_ConversionFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextCodec_ConversionFlags___int__(PyObject *);}
static PyObject *slot_QTextCodec_ConversionFlags___int__(PyObject *sipSelf)
{
    QTextCodec::ConversionFlags *sipCpp = reinterpret_cast<QTextCodec::ConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextCodec_ConversionFlags));

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
extern "C" {static void release_QTextCodec_ConversionFlags(void *, int);}
static void release_QTextCodec_ConversionFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QTextCodec::ConversionFlags *>(sipCppV);
}


extern "C" {static void assign_QTextCodec_ConversionFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextCodec_ConversionFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextCodec::ConversionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextCodec::ConversionFlags *>(sipSrc);
}


extern "C" {static void *array_QTextCodec_ConversionFlags(SIP_SSIZE_T);}
static void *array_QTextCodec_ConversionFlags(SIP_SSIZE_T sipNrElem)
{
    return new QTextCodec::ConversionFlags[sipNrElem];
}


extern "C" {static void *copy_QTextCodec_ConversionFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTextCodec_ConversionFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextCodec::ConversionFlags(reinterpret_cast<const QTextCodec::ConversionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextCodec_ConversionFlags(sipSimpleWrapper *);}
static void dealloc_QTextCodec_ConversionFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextCodec_ConversionFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextCodec_ConversionFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextCodec_ConversionFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextCodec::ConversionFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextCodec::ConversionFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QTextCodec::ConversionFlags(a0);

            return sipCpp;
        }
    }

    {
        const QTextCodec::ConversionFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
            sipCpp = new QTextCodec::ConversionFlags(*a0);
            sipReleaseType(const_cast<QTextCodec::ConversionFlags *>(a0),sipType_QTextCodec_ConversionFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextCodec_ConversionFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextCodec_ConversionFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextCodec::ConversionFlags **sipCppPtr = reinterpret_cast<QTextCodec::ConversionFlags **>(sipCppPtrV);

#line 116 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextCodec::ConversionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextCodec_ConversionFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextCodec_ConversionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextCodec_ConversionFlag)))
{
    *sipCppPtr = new QTextCodec::ConversionFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextCodec::ConversionFlags *>(sipConvertToType(sipPy, sipType_QTextCodec_ConversionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQTextCodecConversionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextCodec_ConversionFlags[] = {
    {(void *)slot_QTextCodec_ConversionFlags___bool__, bool_slot},
    {(void *)slot_QTextCodec_ConversionFlags___ne__, ne_slot},
    {(void *)slot_QTextCodec_ConversionFlags___eq__, eq_slot},
    {(void *)slot_QTextCodec_ConversionFlags___ixor__, ixor_slot},
    {(void *)slot_QTextCodec_ConversionFlags___xor__, xor_slot},
    {(void *)slot_QTextCodec_ConversionFlags___ior__, ior_slot},
    {(void *)slot_QTextCodec_ConversionFlags___or__, or_slot},
    {(void *)slot_QTextCodec_ConversionFlags___iand__, iand_slot},
    {(void *)slot_QTextCodec_ConversionFlags___and__, and_slot},
    {(void *)slot_QTextCodec_ConversionFlags___invert__, invert_slot},
    {(void *)slot_QTextCodec_ConversionFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextCodec_ConversionFlags, "\1QTextCodec.ConversionFlags()\n"
    "QTextCodec.ConversionFlags(Union[QTextCodec.ConversionFlags, QTextCodec.ConversionFlag])\n"
    "QTextCodec.ConversionFlags(QTextCodec.ConversionFlags)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QTextCodec_ConversionFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextCodec__ConversionFlags,
        {0}
    },
    {
        sipNameNr_ConversionFlags,
        {248, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextCodec_ConversionFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextCodec_ConversionFlags,
    init_type_QTextCodec_ConversionFlags,
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
    dealloc_QTextCodec_ConversionFlags,
    assign_QTextCodec_ConversionFlags,
    array_QTextCodec_ConversionFlags,
    copy_QTextCodec_ConversionFlags,
    release_QTextCodec_ConversionFlags,
    0,
    convertTo_QTextCodec_ConversionFlags,
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
