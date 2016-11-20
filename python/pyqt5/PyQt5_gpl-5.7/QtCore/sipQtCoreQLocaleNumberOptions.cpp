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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"


extern "C" {static int slot_QLocale_NumberOptions___bool__(PyObject *);}
static int slot_QLocale_NumberOptions___bool__(PyObject *sipSelf)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLocale::NumberOptions::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLocale::NumberOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLocale::NumberOptions::Int() != a0->operator QLocale::NumberOptions::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"
            sipReleaseType(const_cast<QLocale::NumberOptions *>(a0),sipType_QLocale_NumberOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QLocale_NumberOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLocale::NumberOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLocale::NumberOptions::Int() == a0->operator QLocale::NumberOptions::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"
            sipReleaseType(const_cast<QLocale::NumberOptions *>(a0),sipType_QLocale_NumberOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QLocale_NumberOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocale_NumberOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = QLocale::NumberOptions(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"

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


extern "C" {static PyObject *slot_QLocale_NumberOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocale_NumberOptions, &a0, &a0State, &a1))
        {
            QLocale::NumberOptions*sipRes;

            sipRes = new QLocale::NumberOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocale_NumberOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = QLocale::NumberOptions(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"

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


extern "C" {static PyObject *slot_QLocale_NumberOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocale_NumberOptions, &a0, &a0State, &a1))
        {
            QLocale::NumberOptions*sipRes;

            sipRes = new QLocale::NumberOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocale_NumberOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QLocale::NumberOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QLocale_NumberOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QLocale_NumberOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocale_NumberOptions, &a0, &a0State, &a1))
        {
            QLocale::NumberOptions*sipRes;

            sipRes = new QLocale::NumberOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___invert__(PyObject *);}
static PyObject *slot_QLocale_NumberOptions___invert__(PyObject *sipSelf)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QLocale::NumberOptions*sipRes;

            sipRes = new QLocale::NumberOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___int__(PyObject *);}
static PyObject *slot_QLocale_NumberOptions___int__(PyObject *sipSelf)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

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
extern "C" {static void release_QLocale_NumberOptions(void *, int);}
static void release_QLocale_NumberOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QLocale::NumberOptions *>(sipCppV);
}


extern "C" {static void assign_QLocale_NumberOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QLocale_NumberOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLocale::NumberOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLocale::NumberOptions *>(sipSrc);
}


extern "C" {static void *array_QLocale_NumberOptions(SIP_SSIZE_T);}
static void *array_QLocale_NumberOptions(SIP_SSIZE_T sipNrElem)
{
    return new QLocale::NumberOptions[sipNrElem];
}


extern "C" {static void *copy_QLocale_NumberOptions(const void *, SIP_SSIZE_T);}
static void *copy_QLocale_NumberOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLocale::NumberOptions(reinterpret_cast<const QLocale::NumberOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLocale_NumberOptions(sipSimpleWrapper *);}
static void dealloc_QLocale_NumberOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLocale_NumberOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLocale_NumberOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLocale_NumberOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLocale::NumberOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QLocale::NumberOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QLocale::NumberOptions(a0);

            return sipCpp;
        }
    }

    {
        const QLocale::NumberOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            sipCpp = new QLocale::NumberOptions(*a0);
            sipReleaseType(const_cast<QLocale::NumberOptions *>(a0),sipType_QLocale_NumberOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QLocale_NumberOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLocale_NumberOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QLocale::NumberOptions **sipCppPtr = reinterpret_cast<QLocale::NumberOptions **>(sipCppPtrV);

#line 116 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLocale::NumberOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLocale_NumberOption)) ||
            sipCanConvertToType(sipPy, sipType_QLocale_NumberOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLocale_NumberOption)))
{
    *sipCppPtr = new QLocale::NumberOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLocale::NumberOptions *>(sipConvertToType(sipPy, sipType_QLocale_NumberOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLocaleNumberOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLocale_NumberOptions[] = {
    {(void *)slot_QLocale_NumberOptions___bool__, bool_slot},
    {(void *)slot_QLocale_NumberOptions___ne__, ne_slot},
    {(void *)slot_QLocale_NumberOptions___eq__, eq_slot},
    {(void *)slot_QLocale_NumberOptions___ixor__, ixor_slot},
    {(void *)slot_QLocale_NumberOptions___xor__, xor_slot},
    {(void *)slot_QLocale_NumberOptions___ior__, ior_slot},
    {(void *)slot_QLocale_NumberOptions___or__, or_slot},
    {(void *)slot_QLocale_NumberOptions___iand__, iand_slot},
    {(void *)slot_QLocale_NumberOptions___and__, and_slot},
    {(void *)slot_QLocale_NumberOptions___invert__, invert_slot},
    {(void *)slot_QLocale_NumberOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QLocale_NumberOptions, "\1QLocale.NumberOptions()\n"
    "QLocale.NumberOptions(Union[QLocale.NumberOptions, QLocale.NumberOption])\n"
    "QLocale.NumberOptions(QLocale.NumberOptions)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QLocale_NumberOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLocale__NumberOptions,
        {0}
    },
    {
        sipNameNr_NumberOptions,
        {126, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLocale_NumberOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLocale_NumberOptions,
    init_type_QLocale_NumberOptions,
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
    dealloc_QLocale_NumberOptions,
    assign_QLocale_NumberOptions,
    array_QLocale_NumberOptions,
    copy_QLocale_NumberOptions,
    release_QLocale_NumberOptions,
    0,
    convertTo_QLocale_NumberOptions,
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