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

#include "sipAPIQtGui.h"

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"


extern "C" {static int slot_QOpenGLDebugMessage_Types___bool__(PyObject *);}
static int slot_QOpenGLDebugMessage_Types___bool__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() != a0->operator QOpenGLDebugMessage::Types::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(const_cast<QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QOpenGLDebugMessage_Types,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() == a0->operator QOpenGLDebugMessage::Types::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(const_cast<QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QOpenGLDebugMessage_Types,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLDebugMessage::Types(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types((*a0 ^ a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLDebugMessage::Types(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types((*a0 | a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QOpenGLDebugMessage::Types::operator&=(a0);

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___invert__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___invert__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;


    {
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___int__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___int__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

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
extern "C" {static void release_QOpenGLDebugMessage_Types(void *, int);}
static void release_QOpenGLDebugMessage_Types(void *sipCppV,int)
{
    delete reinterpret_cast<QOpenGLDebugMessage::Types *>(sipCppV);
}


extern "C" {static void assign_QOpenGLDebugMessage_Types(void *, SIP_SSIZE_T, const void *);}
static void assign_QOpenGLDebugMessage_Types(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QOpenGLDebugMessage::Types *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QOpenGLDebugMessage::Types *>(sipSrc);
}


extern "C" {static void *array_QOpenGLDebugMessage_Types(SIP_SSIZE_T);}
static void *array_QOpenGLDebugMessage_Types(SIP_SSIZE_T sipNrElem)
{
    return new QOpenGLDebugMessage::Types[sipNrElem];
}


extern "C" {static void *copy_QOpenGLDebugMessage_Types(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLDebugMessage_Types(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QOpenGLDebugMessage::Types(reinterpret_cast<const QOpenGLDebugMessage::Types *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLDebugMessage_Types(sipSimpleWrapper *);}
static void dealloc_QOpenGLDebugMessage_Types(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLDebugMessage_Types(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QOpenGLDebugMessage_Types(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLDebugMessage_Types(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QOpenGLDebugMessage::Types *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QOpenGLDebugMessage::Types();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QOpenGLDebugMessage::Types(a0);

            return sipCpp;
        }
    }

    {
        const QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            sipCpp = new QOpenGLDebugMessage::Types(*a0);
            sipReleaseType(const_cast<QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QOpenGLDebugMessage_Types(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLDebugMessage_Types(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QOpenGLDebugMessage::Types **sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Types **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLDebugMessage::Types is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Type)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLDebugMessage_Types, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Type)))
{
    *sipCppPtr = new QOpenGLDebugMessage::Types(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipConvertToType(sipPy, sipType_QOpenGLDebugMessage_Types, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLDebugMessage_Types[] = {
    {(void *)slot_QOpenGLDebugMessage_Types___bool__, bool_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ne__, ne_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___eq__, eq_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ixor__, ixor_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___xor__, xor_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ior__, ior_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___or__, or_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___iand__, iand_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___and__, and_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___invert__, invert_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLDebugMessage_Types, "\1QOpenGLDebugMessage.Types()\n"
    "QOpenGLDebugMessage.Types(Union[QOpenGLDebugMessage.Types, QOpenGLDebugMessage.Type])\n"
    "QOpenGLDebugMessage.Types(QOpenGLDebugMessage.Types)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLDebugMessage_Types = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLDebugMessage__Types,
        {0}
    },
    {
        sipNameNr_Types,
        {134, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLDebugMessage_Types,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLDebugMessage_Types,
    init_type_QOpenGLDebugMessage_Types,
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
    dealloc_QOpenGLDebugMessage_Types,
    assign_QOpenGLDebugMessage_Types,
    array_QOpenGLDebugMessage_Types,
    copy_QOpenGLDebugMessage_Types,
    release_QOpenGLDebugMessage_Types,
    0,
    convertTo_QOpenGLDebugMessage_Types,
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
