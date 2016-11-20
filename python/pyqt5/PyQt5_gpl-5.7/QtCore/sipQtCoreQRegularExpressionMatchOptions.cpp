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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"


extern "C" {static int slot_QRegularExpression_MatchOptions___bool__(PyObject *);}
static int slot_QRegularExpression_MatchOptions___bool__(PyObject *sipSelf)
{
    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::MatchOptions::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRegularExpression::MatchOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_MatchOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::MatchOptions::Int() != a0->operator QRegularExpression::MatchOptions::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"
            sipReleaseType(const_cast<QRegularExpression::MatchOptions *>(a0),sipType_QRegularExpression_MatchOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QRegularExpression_MatchOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRegularExpression::MatchOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_MatchOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::MatchOptions::Int() == a0->operator QRegularExpression::MatchOptions::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"
            sipReleaseType(const_cast<QRegularExpression::MatchOptions *>(a0),sipType_QRegularExpression_MatchOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QRegularExpression_MatchOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_MatchOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = QRegularExpression::MatchOptions(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"

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


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::MatchOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_MatchOptions, &a0, &a0State, &a1))
        {
            QRegularExpression::MatchOptions*sipRes;

            sipRes = new QRegularExpression::MatchOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QRegularExpression_MatchOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_MatchOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = QRegularExpression::MatchOptions(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"

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


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::MatchOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_MatchOptions, &a0, &a0State, &a1))
        {
            QRegularExpression::MatchOptions*sipRes;

            sipRes = new QRegularExpression::MatchOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QRegularExpression_MatchOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_MatchOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QRegularExpression::MatchOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::MatchOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_MatchOptions, &a0, &a0State, &a1))
        {
            QRegularExpression::MatchOptions*sipRes;

            sipRes = new QRegularExpression::MatchOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QRegularExpression_MatchOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___invert__(PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___invert__(PyObject *sipSelf)
{
    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QRegularExpression::MatchOptions*sipRes;

            sipRes = new QRegularExpression::MatchOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression_MatchOptions___int__(PyObject *);}
static PyObject *slot_QRegularExpression_MatchOptions___int__(PyObject *sipSelf)
{
    QRegularExpression::MatchOptions *sipCpp = reinterpret_cast<QRegularExpression::MatchOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_MatchOptions));

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
extern "C" {static void release_QRegularExpression_MatchOptions(void *, int);}
static void release_QRegularExpression_MatchOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QRegularExpression::MatchOptions *>(sipCppV);
}


extern "C" {static void assign_QRegularExpression_MatchOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QRegularExpression_MatchOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QRegularExpression::MatchOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QRegularExpression::MatchOptions *>(sipSrc);
}


extern "C" {static void *array_QRegularExpression_MatchOptions(SIP_SSIZE_T);}
static void *array_QRegularExpression_MatchOptions(SIP_SSIZE_T sipNrElem)
{
    return new QRegularExpression::MatchOptions[sipNrElem];
}


extern "C" {static void *copy_QRegularExpression_MatchOptions(const void *, SIP_SSIZE_T);}
static void *copy_QRegularExpression_MatchOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QRegularExpression::MatchOptions(reinterpret_cast<const QRegularExpression::MatchOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpression_MatchOptions(sipSimpleWrapper *);}
static void dealloc_QRegularExpression_MatchOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRegularExpression_MatchOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QRegularExpression_MatchOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpression_MatchOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QRegularExpression::MatchOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QRegularExpression::MatchOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QRegularExpression::MatchOptions(a0);

            return sipCpp;
        }
    }

    {
        const QRegularExpression::MatchOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QRegularExpression_MatchOptions, &a0, &a0State))
        {
            sipCpp = new QRegularExpression::MatchOptions(*a0);
            sipReleaseType(const_cast<QRegularExpression::MatchOptions *>(a0),sipType_QRegularExpression_MatchOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QRegularExpression_MatchOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QRegularExpression_MatchOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QRegularExpression::MatchOptions **sipCppPtr = reinterpret_cast<QRegularExpression::MatchOptions **>(sipCppPtrV);

#line 116 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QRegularExpression::MatchOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRegularExpression_MatchOption)) ||
            sipCanConvertToType(sipPy, sipType_QRegularExpression_MatchOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRegularExpression_MatchOption)))
{
    *sipCppPtr = new QRegularExpression::MatchOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QRegularExpression::MatchOptions *>(sipConvertToType(sipPy, sipType_QRegularExpression_MatchOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQRegularExpressionMatchOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRegularExpression_MatchOptions[] = {
    {(void *)slot_QRegularExpression_MatchOptions___bool__, bool_slot},
    {(void *)slot_QRegularExpression_MatchOptions___ne__, ne_slot},
    {(void *)slot_QRegularExpression_MatchOptions___eq__, eq_slot},
    {(void *)slot_QRegularExpression_MatchOptions___ixor__, ixor_slot},
    {(void *)slot_QRegularExpression_MatchOptions___xor__, xor_slot},
    {(void *)slot_QRegularExpression_MatchOptions___ior__, ior_slot},
    {(void *)slot_QRegularExpression_MatchOptions___or__, or_slot},
    {(void *)slot_QRegularExpression_MatchOptions___iand__, iand_slot},
    {(void *)slot_QRegularExpression_MatchOptions___and__, and_slot},
    {(void *)slot_QRegularExpression_MatchOptions___invert__, invert_slot},
    {(void *)slot_QRegularExpression_MatchOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QRegularExpression_MatchOptions, "\1QRegularExpression.MatchOptions()\n"
    "QRegularExpression.MatchOptions(Union[QRegularExpression.MatchOptions, QRegularExpression.MatchOption])\n"
    "QRegularExpression.MatchOptions(QRegularExpression.MatchOptions)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QRegularExpression_MatchOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpression__MatchOptions,
        {0}
    },
    {
        sipNameNr_MatchOptions,
        {191, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegularExpression_MatchOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRegularExpression_MatchOptions,
    init_type_QRegularExpression_MatchOptions,
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
    dealloc_QRegularExpression_MatchOptions,
    assign_QRegularExpression_MatchOptions,
    array_QRegularExpression_MatchOptions,
    copy_QRegularExpression_MatchOptions,
    release_QRegularExpression_MatchOptions,
    0,
    convertTo_QRegularExpression_MatchOptions,
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
