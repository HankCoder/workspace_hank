/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2013 Riverbank Computing Limited <info@riverbankcomputing.com>
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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qdiriterator.sip"
#include <qdiriterator.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qdiriterator.sip"
#include <qdiriterator.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"


extern "C" {static int slot_QDirIterator_IteratorFlags___bool__(PyObject *);}
static int slot_QDirIterator_IteratorFlags___bool__(PyObject *sipSelf)
{
    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDirIterator::IteratorFlags::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDirIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDirIterator::IteratorFlags::Int() != a0->operator QDirIterator::IteratorFlags::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"
            sipReleaseType(const_cast<QDirIterator::IteratorFlags *>(a0),sipType_QDirIterator_IteratorFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QDirIterator_IteratorFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDirIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDirIterator::IteratorFlags::Int() == a0->operator QDirIterator::IteratorFlags::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"
            sipReleaseType(const_cast<QDirIterator::IteratorFlags *>(a0),sipType_QDirIterator_IteratorFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QDirIterator_IteratorFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___invert__(PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___invert__(PyObject *sipSelf)
{
    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QDirIterator::IteratorFlags*sipRes;

            sipRes = new QDirIterator::IteratorFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDirIterator_IteratorFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDirIterator_IteratorFlags, &a0, &a0State, &a1))
        {
            QDirIterator::IteratorFlags*sipRes;

            sipRes = new QDirIterator::IteratorFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDirIterator_IteratorFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;
        QDirIterator::IteratorFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State, sipType_QDirIterator_IteratorFlags, &a1, &a1State))
        {
            QDirIterator::IteratorFlags*sipRes;

            sipRes = new QDirIterator::IteratorFlags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);
            sipReleaseType(a1,sipType_QDirIterator_IteratorFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDirIterator_IteratorFlags,NULL);
        }
    }

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDirIterator_IteratorFlags, &a0, &a0State, &a1))
        {
            QDirIterator::IteratorFlags*sipRes = 0;

#line 103 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = new QDirIterator::IteratorFlags(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDirIterator_IteratorFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;
        QDirIterator::IteratorFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State, sipType_QDirIterator_IteratorFlags, &a1, &a1State))
        {
            QDirIterator::IteratorFlags*sipRes;

            sipRes = new QDirIterator::IteratorFlags((*a0 | *a1));
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);
            sipReleaseType(a1,sipType_QDirIterator_IteratorFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDirIterator_IteratorFlags,NULL);
        }
    }

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDirIterator_IteratorFlags, &a0, &a0State, &a1))
        {
            QDirIterator::IteratorFlags*sipRes = 0;

#line 98 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = new QDirIterator::IteratorFlags(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDirIterator_IteratorFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___int__(PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___int__(PyObject *sipSelf)
{
    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

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


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDirIterator_IteratorFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State))
        {
            sipCpp->QDirIterator::IteratorFlags::operator^=(*a0);
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);

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


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDirIterator_IteratorFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDirIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State))
        {
            sipCpp->QDirIterator::IteratorFlags::operator|=(*a0);
            sipReleaseType(a0,sipType_QDirIterator_IteratorFlags,a0State);

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


extern "C" {static PyObject *slot_QDirIterator_IteratorFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDirIterator_IteratorFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDirIterator_IteratorFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDirIterator::IteratorFlags *sipCpp = reinterpret_cast<QDirIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDirIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QDirIterator::IteratorFlags::operator&=(a0);

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
extern "C" {static void release_QDirIterator_IteratorFlags(void *, int);}
static void release_QDirIterator_IteratorFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QDirIterator::IteratorFlags *>(sipCppV);
}


extern "C" {static void assign_QDirIterator_IteratorFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QDirIterator_IteratorFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDirIterator::IteratorFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDirIterator::IteratorFlags *>(sipSrc);
}


extern "C" {static void *array_QDirIterator_IteratorFlags(SIP_SSIZE_T);}
static void *array_QDirIterator_IteratorFlags(SIP_SSIZE_T sipNrElem)
{
    return new QDirIterator::IteratorFlags[sipNrElem];
}


extern "C" {static void *copy_QDirIterator_IteratorFlags(const void *, SIP_SSIZE_T);}
static void *copy_QDirIterator_IteratorFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDirIterator::IteratorFlags(reinterpret_cast<const QDirIterator::IteratorFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDirIterator_IteratorFlags(sipSimpleWrapper *);}
static void dealloc_QDirIterator_IteratorFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDirIterator_IteratorFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDirIterator_IteratorFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDirIterator_IteratorFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDirIterator::IteratorFlags *sipCpp = 0;

    {
        const QDirIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDirIterator_IteratorFlags, &a0, &a0State))
        {
            sipCpp = new QDirIterator::IteratorFlags(*a0);
            sipReleaseType(const_cast<QDirIterator::IteratorFlags *>(a0),sipType_QDirIterator_IteratorFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QDirIterator::IteratorFlags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDirIterator::IteratorFlags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDirIterator_IteratorFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDirIterator_IteratorFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDirIterator::IteratorFlags **sipCppPtr = reinterpret_cast<QDirIterator::IteratorFlags **>(sipCppPtrV);

#line 124 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDirIterator::IteratorFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDirIterator_IteratorFlag)) ||
            sipCanConvertToType(sipPy, sipType_QDirIterator_IteratorFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDirIterator_IteratorFlag)))
{
    *sipCppPtr = new QDirIterator::IteratorFlags(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDirIterator::IteratorFlags *>(sipConvertToType(sipPy, sipType_QDirIterator_IteratorFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQDirIteratorIteratorFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDirIterator_IteratorFlags[] = {
    {(void *)slot_QDirIterator_IteratorFlags___bool__, bool_slot},
    {(void *)slot_QDirIterator_IteratorFlags___ne__, ne_slot},
    {(void *)slot_QDirIterator_IteratorFlags___eq__, eq_slot},
    {(void *)slot_QDirIterator_IteratorFlags___invert__, invert_slot},
    {(void *)slot_QDirIterator_IteratorFlags___and__, and_slot},
    {(void *)slot_QDirIterator_IteratorFlags___xor__, xor_slot},
    {(void *)slot_QDirIterator_IteratorFlags___or__, or_slot},
    {(void *)slot_QDirIterator_IteratorFlags___int__, int_slot},
    {(void *)slot_QDirIterator_IteratorFlags___ixor__, ixor_slot},
    {(void *)slot_QDirIterator_IteratorFlags___ior__, ior_slot},
    {(void *)slot_QDirIterator_IteratorFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDirIterator_IteratorFlags, "\1QDirIterator.IteratorFlags(QDirIterator.IteratorFlags)\n"
    "QDirIterator.IteratorFlags(int)\n"
    "QDirIterator.IteratorFlags()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QDirIterator_IteratorFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDirIterator__IteratorFlags,
        {0}
    },
    {
        sipNameNr_IteratorFlags,
        {38, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDirIterator_IteratorFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDirIterator_IteratorFlags,
    init_type_QDirIterator_IteratorFlags,
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
    dealloc_QDirIterator_IteratorFlags,
    assign_QDirIterator_IteratorFlags,
    array_QDirIterator_IteratorFlags,
    copy_QDirIterator_IteratorFlags,
    release_QDirIterator_IteratorFlags,
    0,
    convertTo_QDirIterator_IteratorFlags,
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