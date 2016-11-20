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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"


extern "C" {static int slot_Qt_KeyboardModifiers___bool__(PyObject *);}
static int slot_Qt_KeyboardModifiers___bool__(PyObject *sipSelf)
{
    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::KeyboardModifiers::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::KeyboardModifiers::Int() != a0->operator Qt::KeyboardModifiers::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
            sipReleaseType(const_cast<Qt::KeyboardModifiers *>(a0),sipType_Qt_KeyboardModifiers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_KeyboardModifiers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::KeyboardModifiers::Int() == a0->operator Qt::KeyboardModifiers::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
            sipReleaseType(const_cast<Qt::KeyboardModifiers *>(a0),sipType_Qt_KeyboardModifiers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_KeyboardModifiers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___invert__(PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___invert__(PyObject *sipSelf)
{
    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_KeyboardModifiers, &a0, &a0State, &a1))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;
        Qt::KeyboardModifiers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State, sipType_Qt_KeyboardModifiers, &a1, &a1State))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers((*a0 ^ *a1));
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);
            sipReleaseType(a1,sipType_Qt_KeyboardModifiers,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_KeyboardModifiers, &a0, &a0State, &a1))
        {
            Qt::KeyboardModifiers*sipRes = 0;

#line 103 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = new Qt::KeyboardModifiers(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;
        Qt::KeyboardModifiers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State, sipType_Qt_KeyboardModifiers, &a1, &a1State))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers((*a0 | *a1));
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);
            sipReleaseType(a1,sipType_Qt_KeyboardModifiers,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_KeyboardModifiers, &a0, &a0State, &a1))
        {
            Qt::KeyboardModifiers*sipRes = 0;

#line 98 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
        sipRes = new Qt::KeyboardModifiers(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___int__(PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___int__(PyObject *sipSelf)
{
    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

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


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifiers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            sipCpp->Qt::KeyboardModifiers::operator^=(*a0);
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

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


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifiers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            sipCpp->Qt::KeyboardModifiers::operator|=(*a0);
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

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


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifiers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::KeyboardModifiers *sipCpp = reinterpret_cast<Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->Qt::KeyboardModifiers::operator&=(a0);

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
extern "C" {static void release_Qt_KeyboardModifiers(void *, int);}
static void release_Qt_KeyboardModifiers(void *sipCppV,int)
{
    delete reinterpret_cast<Qt::KeyboardModifiers *>(sipCppV);
}


extern "C" {static void assign_Qt_KeyboardModifiers(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_KeyboardModifiers(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::KeyboardModifiers *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::KeyboardModifiers *>(sipSrc);
}


extern "C" {static void *array_Qt_KeyboardModifiers(SIP_SSIZE_T);}
static void *array_Qt_KeyboardModifiers(SIP_SSIZE_T sipNrElem)
{
    return new Qt::KeyboardModifiers[sipNrElem];
}


extern "C" {static void *copy_Qt_KeyboardModifiers(const void *, SIP_SSIZE_T);}
static void *copy_Qt_KeyboardModifiers(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::KeyboardModifiers(reinterpret_cast<const Qt::KeyboardModifiers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_KeyboardModifiers(sipSimpleWrapper *);}
static void dealloc_Qt_KeyboardModifiers(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_KeyboardModifiers(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_KeyboardModifiers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_KeyboardModifiers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::KeyboardModifiers *sipCpp = 0;

    {
        const Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            sipCpp = new Qt::KeyboardModifiers(*a0);
            sipReleaseType(const_cast<Qt::KeyboardModifiers *>(a0),sipType_Qt_KeyboardModifiers,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new Qt::KeyboardModifiers(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new Qt::KeyboardModifiers();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_KeyboardModifiers(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_KeyboardModifiers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::KeyboardModifiers **sipCppPtr = reinterpret_cast<Qt::KeyboardModifiers **>(sipCppPtrV);

#line 124 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::KeyboardModifiers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifier)) ||
            sipCanConvertToType(sipPy, sipType_Qt_KeyboardModifiers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifier)))
{
    *sipCppPtr = new Qt::KeyboardModifiers(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::KeyboardModifiers *>(sipConvertToType(sipPy, sipType_Qt_KeyboardModifiers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_KeyboardModifiers[] = {
    {(void *)slot_Qt_KeyboardModifiers___bool__, bool_slot},
    {(void *)slot_Qt_KeyboardModifiers___ne__, ne_slot},
    {(void *)slot_Qt_KeyboardModifiers___eq__, eq_slot},
    {(void *)slot_Qt_KeyboardModifiers___invert__, invert_slot},
    {(void *)slot_Qt_KeyboardModifiers___and__, and_slot},
    {(void *)slot_Qt_KeyboardModifiers___xor__, xor_slot},
    {(void *)slot_Qt_KeyboardModifiers___or__, or_slot},
    {(void *)slot_Qt_KeyboardModifiers___int__, int_slot},
    {(void *)slot_Qt_KeyboardModifiers___ixor__, ixor_slot},
    {(void *)slot_Qt_KeyboardModifiers___ior__, ior_slot},
    {(void *)slot_Qt_KeyboardModifiers___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_KeyboardModifiers, "\1Qt.KeyboardModifiers(Qt.KeyboardModifiers)\n"
    "Qt.KeyboardModifiers(int)\n"
    "Qt.KeyboardModifiers()");


pyqt5ClassTypeDef sipTypeDef_QtCore_Qt_KeyboardModifiers = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_Qt__KeyboardModifiers,
        {0}
    },
    {
        sipNameNr_KeyboardModifiers,
        {284, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_KeyboardModifiers,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_KeyboardModifiers,
    init_type_Qt_KeyboardModifiers,
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
    dealloc_Qt_KeyboardModifiers,
    assign_Qt_KeyboardModifiers,
    array_Qt_KeyboardModifiers,
    copy_Qt_KeyboardModifiers,
    release_Qt_KeyboardModifiers,
    0,
    convertTo_Qt_KeyboardModifiers,
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
