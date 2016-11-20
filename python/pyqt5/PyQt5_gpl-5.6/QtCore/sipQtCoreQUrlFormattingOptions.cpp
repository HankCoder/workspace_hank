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

#line 96 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQUrlFormattingOptions.cpp"

#line 96 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQUrlFormattingOptions.cpp"


extern "C" {static int slot_QUrl_FormattingOptions___bool__(PyObject *);}
static int slot_QUrl_FormattingOptions___bool__(PyObject *sipSelf)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 68 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qurl.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQUrlFormattingOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrl::FormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_FormattingOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qurl.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQUrlFormattingOptions.cpp"
            sipReleaseType(const_cast<QUrl::FormattingOptions *>(a0),sipType_QUrl_FormattingOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUrl_FormattingOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrl::FormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_FormattingOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 58 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qurl.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQUrlFormattingOptions.cpp"
            sipReleaseType(const_cast<QUrl::FormattingOptions *>(a0),sipType_QUrl_FormattingOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUrl_FormattingOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___invert__(PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___invert__(PyObject *sipSelf)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QUrl::FormattingOptions*sipRes;

            sipRes = new QUrl::FormattingOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::FormattingOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_FormattingOptions, &a0, &a0State, &a1))
        {
            QUrl::FormattingOptions*sipRes;

            sipRes = new QUrl::FormattingOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::FormattingOptions* a0;
        int a0State = 0;
        QUrl::FormattingOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUrl_FormattingOptions, &a0, &a0State, sipType_QUrl_FormattingOptions, &a1, &a1State))
        {
            QUrl::FormattingOptions*sipRes;

            sipRes = new QUrl::FormattingOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_FormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::FormattingOptions* a0;
        int a0State = 0;
        QUrl::FormattingOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUrl_FormattingOptions, &a0, &a0State, sipType_QUrl_FormattingOptions, &a1, &a1State))
        {
            QUrl::FormattingOptions*sipRes;

            sipRes = new QUrl::FormattingOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_FormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___int__(PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___int__(PyObject *sipSelf)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

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


extern "C" {static PyObject *slot_QUrl_FormattingOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUrl::FormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_FormattingOptions, &a0, &a0State))
        {
            sipCpp->QUrl::FormattingOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);

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


extern "C" {static PyObject *slot_QUrl_FormattingOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUrl::FormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_FormattingOptions, &a0, &a0State))
        {
            sipCpp->QUrl::FormattingOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);

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


extern "C" {static PyObject *slot_QUrl_FormattingOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_FormattingOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QUrl::FormattingOptions::operator&=(a0);

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


/* Call the instance's destructor. */
extern "C" {static void release_QUrl_FormattingOptions(void *, int);}
static void release_QUrl_FormattingOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QUrl::FormattingOptions *>(sipCppV);
}


extern "C" {static void dealloc_QUrl_FormattingOptions(sipSimpleWrapper *);}
static void dealloc_QUrl_FormattingOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUrl_FormattingOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static int convertTo_QUrl_FormattingOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QUrl_FormattingOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QUrl::FormattingOptions **sipCppPtr = reinterpret_cast<QUrl::FormattingOptions **>(sipCppPtrV);

#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtCore/qurl.sip"
// Allow an instance of the base enums whenever a QUrl::FormattingOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_UrlFormattingOption)) ||
            PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOption)) ||
            sipCanConvertToType(sipPy, sipType_QUrl_FormattingOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_UrlFormattingOption)) ||
     PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOption)))
{
    *sipCppPtr = new QUrl::FormattingOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QUrl::FormattingOptions *>(sipConvertToType(sipPy, sipType_QUrl_FormattingOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 439 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtCore/sipQtCoreQUrlFormattingOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUrl_FormattingOptions[] = {
    {(void *)slot_QUrl_FormattingOptions___bool__, bool_slot},
    {(void *)slot_QUrl_FormattingOptions___ne__, ne_slot},
    {(void *)slot_QUrl_FormattingOptions___eq__, eq_slot},
    {(void *)slot_QUrl_FormattingOptions___invert__, invert_slot},
    {(void *)slot_QUrl_FormattingOptions___and__, and_slot},
    {(void *)slot_QUrl_FormattingOptions___xor__, xor_slot},
    {(void *)slot_QUrl_FormattingOptions___or__, or_slot},
    {(void *)slot_QUrl_FormattingOptions___int__, int_slot},
    {(void *)slot_QUrl_FormattingOptions___ixor__, ixor_slot},
    {(void *)slot_QUrl_FormattingOptions___ior__, ior_slot},
    {(void *)slot_QUrl_FormattingOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt5ClassTypeDef sipTypeDef_QtCore_QUrl_FormattingOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QUrl__FormattingOptions,
        {0}
    },
    {
        sipNameNr_FormattingOptions,
        {276, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUrl_FormattingOptions,
    0,
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
    dealloc_QUrl_FormattingOptions,
    0,
    0,
    0,
    release_QUrl_FormattingOptions,
    0,
    convertTo_QUrl_FormattingOptions,
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