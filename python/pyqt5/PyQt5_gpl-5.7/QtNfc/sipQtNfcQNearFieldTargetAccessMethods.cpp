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

#include "sipAPIQtNfc.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNfc/qnearfieldtarget.sip"
#include <qnearfieldtarget.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNfc/qnearfieldtarget.sip"
#include <qnearfieldtarget.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"


extern "C" {static int slot_QNearFieldTarget_AccessMethods___bool__(PyObject *);}
static int slot_QNearFieldTarget_AccessMethods___bool__(PyObject *sipSelf)
{
    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNearFieldTarget::AccessMethods::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::AccessMethods* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNearFieldTarget_AccessMethods, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNearFieldTarget::AccessMethods::Int() != a0->operator QNearFieldTarget::AccessMethods::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"
            sipReleaseType(const_cast<QNearFieldTarget::AccessMethods *>(a0),sipType_QNearFieldTarget_AccessMethods,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,ne_slot,sipType_QNearFieldTarget_AccessMethods,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldTarget::AccessMethods* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNearFieldTarget_AccessMethods, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNearFieldTarget::AccessMethods::Int() == a0->operator QNearFieldTarget::AccessMethods::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"
            sipReleaseType(const_cast<QNearFieldTarget::AccessMethods *>(a0),sipType_QNearFieldTarget_AccessMethods,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,eq_slot,sipType_QNearFieldTarget_AccessMethods,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNearFieldTarget_AccessMethods)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QNearFieldTarget::AccessMethods(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"

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


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___xor__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNearFieldTarget::AccessMethods* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNearFieldTarget_AccessMethods, &a0, &a0State, &a1))
        {
            QNearFieldTarget::AccessMethods*sipRes;

            sipRes = new QNearFieldTarget::AccessMethods((*a0 ^ a1));
            sipReleaseType(a0,sipType_QNearFieldTarget_AccessMethods,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNearFieldTarget_AccessMethods,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___ior__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNearFieldTarget_AccessMethods)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QNearFieldTarget::AccessMethods(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"

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


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___or__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNearFieldTarget::AccessMethods* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNearFieldTarget_AccessMethods, &a0, &a0State, &a1))
        {
            QNearFieldTarget::AccessMethods*sipRes;

            sipRes = new QNearFieldTarget::AccessMethods((*a0 | a1));
            sipReleaseType(a0,sipType_QNearFieldTarget_AccessMethods,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNearFieldTarget_AccessMethods,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___iand__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNearFieldTarget_AccessMethods)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QNearFieldTarget::AccessMethods::operator&=(a0);

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


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___and__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNearFieldTarget::AccessMethods* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNearFieldTarget_AccessMethods, &a0, &a0State, &a1))
        {
            QNearFieldTarget::AccessMethods*sipRes;

            sipRes = new QNearFieldTarget::AccessMethods((*a0 & a1));
            sipReleaseType(a0,sipType_QNearFieldTarget_AccessMethods,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNearFieldTarget_AccessMethods,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___invert__(PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___invert__(PyObject *sipSelf)
{
    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

    if (!sipCpp)
        return 0;


    {
        {
            QNearFieldTarget::AccessMethods*sipRes;

            sipRes = new QNearFieldTarget::AccessMethods(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QNearFieldTarget_AccessMethods,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNearFieldTarget_AccessMethods___int__(PyObject *);}
static PyObject *slot_QNearFieldTarget_AccessMethods___int__(PyObject *sipSelf)
{
    QNearFieldTarget::AccessMethods *sipCpp = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldTarget_AccessMethods));

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
extern "C" {static void release_QNearFieldTarget_AccessMethods(void *, int);}
static void release_QNearFieldTarget_AccessMethods(void *sipCppV,int)
{
    delete reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipCppV);
}


extern "C" {static void assign_QNearFieldTarget_AccessMethods(void *, SIP_SSIZE_T, const void *);}
static void assign_QNearFieldTarget_AccessMethods(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNearFieldTarget::AccessMethods *>(sipSrc);
}


extern "C" {static void *array_QNearFieldTarget_AccessMethods(SIP_SSIZE_T);}
static void *array_QNearFieldTarget_AccessMethods(SIP_SSIZE_T sipNrElem)
{
    return new QNearFieldTarget::AccessMethods[sipNrElem];
}


extern "C" {static void *copy_QNearFieldTarget_AccessMethods(const void *, SIP_SSIZE_T);}
static void *copy_QNearFieldTarget_AccessMethods(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNearFieldTarget::AccessMethods(reinterpret_cast<const QNearFieldTarget::AccessMethods *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNearFieldTarget_AccessMethods(sipSimpleWrapper *);}
static void dealloc_QNearFieldTarget_AccessMethods(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNearFieldTarget_AccessMethods(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNearFieldTarget_AccessMethods(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNearFieldTarget_AccessMethods(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNearFieldTarget::AccessMethods *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNearFieldTarget::AccessMethods();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QNearFieldTarget::AccessMethods(a0);

            return sipCpp;
        }
    }

    {
        const QNearFieldTarget::AccessMethods* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNearFieldTarget_AccessMethods, &a0, &a0State))
        {
            sipCpp = new QNearFieldTarget::AccessMethods(*a0);
            sipReleaseType(const_cast<QNearFieldTarget::AccessMethods *>(a0),sipType_QNearFieldTarget_AccessMethods,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNearFieldTarget_AccessMethods(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNearFieldTarget_AccessMethods(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNearFieldTarget::AccessMethods **sipCppPtr = reinterpret_cast<QNearFieldTarget::AccessMethods **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNearFieldTarget::AccessMethods is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNearFieldTarget_AccessMethod)) ||
            sipCanConvertToType(sipPy, sipType_QNearFieldTarget_AccessMethods, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNearFieldTarget_AccessMethod)))
{
    *sipCppPtr = new QNearFieldTarget::AccessMethods(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNearFieldTarget::AccessMethods *>(sipConvertToType(sipPy, sipType_QNearFieldTarget_AccessMethods, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNfc/sipQtNfcQNearFieldTargetAccessMethods.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNearFieldTarget_AccessMethods[] = {
    {(void *)slot_QNearFieldTarget_AccessMethods___bool__, bool_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___ne__, ne_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___eq__, eq_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___ixor__, ixor_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___xor__, xor_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___ior__, ior_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___or__, or_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___iand__, iand_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___and__, and_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___invert__, invert_slot},
    {(void *)slot_QNearFieldTarget_AccessMethods___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNearFieldTarget_AccessMethods, "\1QNearFieldTarget.AccessMethods()\n"
    "QNearFieldTarget.AccessMethods(Union[QNearFieldTarget.AccessMethods, QNearFieldTarget.AccessMethod])\n"
    "QNearFieldTarget.AccessMethods(QNearFieldTarget.AccessMethods)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNearFieldTarget_AccessMethods = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNearFieldTarget__AccessMethods,
        {0}
    },
    {
        sipNameNr_AccessMethods,
        {23, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNearFieldTarget_AccessMethods,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNearFieldTarget_AccessMethods,
    init_type_QNearFieldTarget_AccessMethods,
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
    dealloc_QNearFieldTarget_AccessMethods,
    assign_QNearFieldTarget_AccessMethods,
    array_QNearFieldTarget_AccessMethods,
    copy_QNearFieldTarget_AccessMethods,
    release_QNearFieldTarget_AccessMethods,
    0,
    convertTo_QNearFieldTarget_AccessMethods,
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
