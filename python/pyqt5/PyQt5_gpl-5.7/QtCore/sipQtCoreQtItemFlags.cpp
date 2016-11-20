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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"


extern "C" {static int slot_Qt_ItemFlags___bool__(PyObject *);}
static int slot_Qt_ItemFlags___bool__(PyObject *sipSelf)
{
    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ItemFlags::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ItemFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ItemFlags::Int() != a0->operator Qt::ItemFlags::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"
            sipReleaseType(const_cast<Qt::ItemFlags *>(a0),sipType_Qt_ItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_ItemFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ItemFlags::Int() == a0->operator Qt::ItemFlags::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"
            sipReleaseType(const_cast<Qt::ItemFlags *>(a0),sipType_Qt_ItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_ItemFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ItemFlags(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"

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


extern "C" {static PyObject *slot_Qt_ItemFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ItemFlags, &a0, &a0State, &a1))
        {
            Qt::ItemFlags*sipRes;

            sipRes = new Qt::ItemFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_ItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ItemFlags(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"

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


extern "C" {static PyObject *slot_Qt_ItemFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ItemFlags, &a0, &a0State, &a1))
        {
            Qt::ItemFlags*sipRes;

            sipRes = new Qt::ItemFlags((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_ItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->Qt::ItemFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_ItemFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ItemFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ItemFlags, &a0, &a0State, &a1))
        {
            Qt::ItemFlags*sipRes;

            sipRes = new Qt::ItemFlags((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_ItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ItemFlags___invert__(PyObject *);}
static PyObject *slot_Qt_ItemFlags___invert__(PyObject *sipSelf)
{
    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::ItemFlags*sipRes;

            sipRes = new Qt::ItemFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ItemFlags___int__(PyObject *);}
static PyObject *slot_Qt_ItemFlags___int__(PyObject *sipSelf)
{
    Qt::ItemFlags *sipCpp = reinterpret_cast<Qt::ItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ItemFlags));

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
extern "C" {static void release_Qt_ItemFlags(void *, int);}
static void release_Qt_ItemFlags(void *sipCppV,int)
{
    delete reinterpret_cast<Qt::ItemFlags *>(sipCppV);
}


extern "C" {static void assign_Qt_ItemFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_ItemFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::ItemFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::ItemFlags *>(sipSrc);
}


extern "C" {static void *array_Qt_ItemFlags(SIP_SSIZE_T);}
static void *array_Qt_ItemFlags(SIP_SSIZE_T sipNrElem)
{
    return new Qt::ItemFlags[sipNrElem];
}


extern "C" {static void *copy_Qt_ItemFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ItemFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::ItemFlags(reinterpret_cast<const Qt::ItemFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ItemFlags(sipSimpleWrapper *);}
static void dealloc_Qt_ItemFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_ItemFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_ItemFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ItemFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::ItemFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new Qt::ItemFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new Qt::ItemFlags(a0);

            return sipCpp;
        }
    }

    {
        const Qt::ItemFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_ItemFlags, &a0, &a0State))
        {
            sipCpp = new Qt::ItemFlags(*a0);
            sipReleaseType(const_cast<Qt::ItemFlags *>(a0),sipType_Qt_ItemFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_ItemFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ItemFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::ItemFlags **sipCppPtr = reinterpret_cast<Qt::ItemFlags **>(sipCppPtrV);

#line 116 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ItemFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ItemFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ItemFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ItemFlag)))
{
    *sipCppPtr = new Qt::ItemFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ItemFlags *>(sipConvertToType(sipPy, sipType_Qt_ItemFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtItemFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ItemFlags[] = {
    {(void *)slot_Qt_ItemFlags___bool__, bool_slot},
    {(void *)slot_Qt_ItemFlags___ne__, ne_slot},
    {(void *)slot_Qt_ItemFlags___eq__, eq_slot},
    {(void *)slot_Qt_ItemFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_ItemFlags___xor__, xor_slot},
    {(void *)slot_Qt_ItemFlags___ior__, ior_slot},
    {(void *)slot_Qt_ItemFlags___or__, or_slot},
    {(void *)slot_Qt_ItemFlags___iand__, iand_slot},
    {(void *)slot_Qt_ItemFlags___and__, and_slot},
    {(void *)slot_Qt_ItemFlags___invert__, invert_slot},
    {(void *)slot_Qt_ItemFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ItemFlags, "\1Qt.ItemFlags()\n"
    "Qt.ItemFlags(Union[Qt.ItemFlags, Qt.ItemFlag])\n"
    "Qt.ItemFlags(Qt.ItemFlags)");


pyqt5ClassTypeDef sipTypeDef_QtCore_Qt_ItemFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_Qt__ItemFlags,
        {0}
    },
    {
        sipNameNr_ItemFlags,
        {314, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_ItemFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ItemFlags,
    init_type_Qt_ItemFlags,
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
    dealloc_Qt_ItemFlags,
    assign_Qt_ItemFlags,
    array_Qt_ItemFlags,
    copy_Qt_ItemFlags,
    release_Qt_ItemFlags,
    0,
    convertTo_Qt_ItemFlags,
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
