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
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"


extern "C" {static int slot_Qt_ToolBarAreas___bool__(PyObject *);}
static int slot_Qt_ToolBarAreas___bool__(PyObject *sipSelf)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ToolBarAreas::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ToolBarAreas* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ToolBarAreas, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ToolBarAreas::Int() != a0->operator Qt::ToolBarAreas::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"
            sipReleaseType(const_cast<Qt::ToolBarAreas *>(a0),sipType_Qt_ToolBarAreas,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_ToolBarAreas,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ToolBarAreas* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ToolBarAreas, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ToolBarAreas::Int() == a0->operator Qt::ToolBarAreas::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"
            sipReleaseType(const_cast<Qt::ToolBarAreas *>(a0),sipType_Qt_ToolBarAreas,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_ToolBarAreas,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ToolBarAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ToolBarAreas(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"

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


extern "C" {static PyObject *slot_Qt_ToolBarAreas___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ToolBarAreas* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ToolBarAreas, &a0, &a0State, &a1))
        {
            Qt::ToolBarAreas*sipRes;

            sipRes = new Qt::ToolBarAreas((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ToolBarAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ToolBarAreas(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"

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


extern "C" {static PyObject *slot_Qt_ToolBarAreas___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ToolBarAreas* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ToolBarAreas, &a0, &a0State, &a1))
        {
            Qt::ToolBarAreas*sipRes;

            sipRes = new Qt::ToolBarAreas((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ToolBarAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->Qt::ToolBarAreas::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_ToolBarAreas___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ToolBarAreas* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ToolBarAreas, &a0, &a0State, &a1))
        {
            Qt::ToolBarAreas*sipRes;

            sipRes = new Qt::ToolBarAreas((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___invert__(PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___invert__(PyObject *sipSelf)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::ToolBarAreas*sipRes;

            sipRes = new Qt::ToolBarAreas(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___int__(PyObject *);}
static PyObject *slot_Qt_ToolBarAreas___int__(PyObject *sipSelf)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

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
extern "C" {static void release_Qt_ToolBarAreas(void *, int);}
static void release_Qt_ToolBarAreas(void *sipCppV,int)
{
    delete reinterpret_cast<Qt::ToolBarAreas *>(sipCppV);
}


extern "C" {static void assign_Qt_ToolBarAreas(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_ToolBarAreas(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::ToolBarAreas *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::ToolBarAreas *>(sipSrc);
}


extern "C" {static void *array_Qt_ToolBarAreas(SIP_SSIZE_T);}
static void *array_Qt_ToolBarAreas(SIP_SSIZE_T sipNrElem)
{
    return new Qt::ToolBarAreas[sipNrElem];
}


extern "C" {static void *copy_Qt_ToolBarAreas(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ToolBarAreas(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::ToolBarAreas(reinterpret_cast<const Qt::ToolBarAreas *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ToolBarAreas(sipSimpleWrapper *);}
static void dealloc_Qt_ToolBarAreas(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_ToolBarAreas(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_ToolBarAreas(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ToolBarAreas(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::ToolBarAreas *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new Qt::ToolBarAreas();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new Qt::ToolBarAreas(a0);

            return sipCpp;
        }
    }

    {
        const Qt::ToolBarAreas* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_ToolBarAreas, &a0, &a0State))
        {
            sipCpp = new Qt::ToolBarAreas(*a0);
            sipReleaseType(const_cast<Qt::ToolBarAreas *>(a0),sipType_Qt_ToolBarAreas,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_ToolBarAreas(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ToolBarAreas(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::ToolBarAreas **sipCppPtr = reinterpret_cast<Qt::ToolBarAreas **>(sipCppPtrV);

#line 116 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ToolBarAreas is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ToolBarArea)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ToolBarAreas, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ToolBarArea)))
{
    *sipCppPtr = new Qt::ToolBarAreas(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ToolBarAreas *>(sipConvertToType(sipPy, sipType_Qt_ToolBarAreas, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQtToolBarAreas.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ToolBarAreas[] = {
    {(void *)slot_Qt_ToolBarAreas___bool__, bool_slot},
    {(void *)slot_Qt_ToolBarAreas___ne__, ne_slot},
    {(void *)slot_Qt_ToolBarAreas___eq__, eq_slot},
    {(void *)slot_Qt_ToolBarAreas___ixor__, ixor_slot},
    {(void *)slot_Qt_ToolBarAreas___xor__, xor_slot},
    {(void *)slot_Qt_ToolBarAreas___ior__, ior_slot},
    {(void *)slot_Qt_ToolBarAreas___or__, or_slot},
    {(void *)slot_Qt_ToolBarAreas___iand__, iand_slot},
    {(void *)slot_Qt_ToolBarAreas___and__, and_slot},
    {(void *)slot_Qt_ToolBarAreas___invert__, invert_slot},
    {(void *)slot_Qt_ToolBarAreas___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ToolBarAreas, "\1Qt.ToolBarAreas()\n"
    "Qt.ToolBarAreas(Union[Qt.ToolBarAreas, Qt.ToolBarArea])\n"
    "Qt.ToolBarAreas(Qt.ToolBarAreas)");


pyqt5ClassTypeDef sipTypeDef_QtCore_Qt_ToolBarAreas = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_Qt__ToolBarAreas,
        {0}
    },
    {
        sipNameNr_ToolBarAreas,
        {314, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_ToolBarAreas,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ToolBarAreas,
    init_type_Qt_ToolBarAreas,
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
    dealloc_Qt_ToolBarAreas,
    assign_Qt_ToolBarAreas,
    array_Qt_ToolBarAreas,
    copy_Qt_ToolBarAreas,
    release_Qt_ToolBarAreas,
    0,
    convertTo_Qt_ToolBarAreas,
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
