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

#include "sipAPIQtQuick.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtQuick/qsgsimpletexturenode.sip"
#include <qsgsimpletexturenode.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtQuick/qsgsimpletexturenode.sip"
#include <qsgsimpletexturenode.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"


extern "C" {static int slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___bool__(PyObject *);}
static int slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___bool__(PyObject *sipSelf)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGSimpleTextureNode::TextureCoordinatesTransformMode::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGSimpleTextureNode::TextureCoordinatesTransformMode::Int() != a0->operator QSGSimpleTextureNode::TextureCoordinatesTransformMode::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"
            sipReleaseType(const_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(a0),sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,ne_slot,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGSimpleTextureNode::TextureCoordinatesTransformMode::Int() == a0->operator QSGSimpleTextureNode::TextureCoordinatesTransformMode::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"
            sipReleaseType(const_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(a0),sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,eq_slot,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGSimpleTextureNode::TextureCoordinatesTransformMode(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"

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


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State, &a1))
        {
            QSGSimpleTextureNode::TextureCoordinatesTransformMode*sipRes;

            sipRes = new QSGSimpleTextureNode::TextureCoordinatesTransformMode((*a0 ^ a1));
            sipReleaseType(a0,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGSimpleTextureNode::TextureCoordinatesTransformMode(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"

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


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State, &a1))
        {
            QSGSimpleTextureNode::TextureCoordinatesTransformMode*sipRes;

            sipRes = new QSGSimpleTextureNode::TextureCoordinatesTransformMode((*a0 | a1));
            sipReleaseType(a0,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSGSimpleTextureNode::TextureCoordinatesTransformMode::operator&=(a0);

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


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State, &a1))
        {
            QSGSimpleTextureNode::TextureCoordinatesTransformMode*sipRes;

            sipRes = new QSGSimpleTextureNode::TextureCoordinatesTransformMode((*a0 & a1));
            sipReleaseType(a0,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___invert__(PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___invert__(PyObject *sipSelf)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

    if (!sipCpp)
        return 0;


    {
        {
            QSGSimpleTextureNode::TextureCoordinatesTransformMode*sipRes;

            sipRes = new QSGSimpleTextureNode::TextureCoordinatesTransformMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___int__(PyObject *);}
static PyObject *slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___int__(PyObject *sipSelf)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode));

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
extern "C" {static void release_QSGSimpleTextureNode_TextureCoordinatesTransformMode(void *, int);}
static void release_QSGSimpleTextureNode_TextureCoordinatesTransformMode(void *sipCppV,int)
{
    delete reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipCppV);
}


extern "C" {static void assign_QSGSimpleTextureNode_TextureCoordinatesTransformMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QSGSimpleTextureNode_TextureCoordinatesTransformMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipSrc);
}


extern "C" {static void *array_QSGSimpleTextureNode_TextureCoordinatesTransformMode(SIP_SSIZE_T);}
static void *array_QSGSimpleTextureNode_TextureCoordinatesTransformMode(SIP_SSIZE_T sipNrElem)
{
    return new QSGSimpleTextureNode::TextureCoordinatesTransformMode[sipNrElem];
}


extern "C" {static void *copy_QSGSimpleTextureNode_TextureCoordinatesTransformMode(const void *, SIP_SSIZE_T);}
static void *copy_QSGSimpleTextureNode_TextureCoordinatesTransformMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSGSimpleTextureNode::TextureCoordinatesTransformMode(reinterpret_cast<const QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGSimpleTextureNode_TextureCoordinatesTransformMode(sipSimpleWrapper *);}
static void dealloc_QSGSimpleTextureNode_TextureCoordinatesTransformMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGSimpleTextureNode_TextureCoordinatesTransformMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSGSimpleTextureNode_TextureCoordinatesTransformMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGSimpleTextureNode_TextureCoordinatesTransformMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSGSimpleTextureNode::TextureCoordinatesTransformMode();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSGSimpleTextureNode::TextureCoordinatesTransformMode(a0);

            return sipCpp;
        }
    }

    {
        const QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State))
        {
            sipCpp = new QSGSimpleTextureNode::TextureCoordinatesTransformMode(*a0);
            sipReleaseType(const_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(a0),sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSGSimpleTextureNode_TextureCoordinatesTransformMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSGSimpleTextureNode_TextureCoordinatesTransformMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSGSimpleTextureNode::TextureCoordinatesTransformMode **sipCppPtr = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSGSimpleTextureNode::TextureCoordinatesTransformMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGSimpleTextureNode_TextureCoordinatesTransformFlag)) ||
            sipCanConvertToType(sipPy, sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGSimpleTextureNode_TextureCoordinatesTransformFlag)))
{
    *sipCppPtr = new QSGSimpleTextureNode::TextureCoordinatesTransformMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSGSimpleTextureNode::TextureCoordinatesTransformMode *>(sipConvertToType(sipPy, sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQuick/sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGSimpleTextureNode_TextureCoordinatesTransformMode[] = {
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___bool__, bool_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ne__, ne_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___eq__, eq_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ixor__, ixor_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___xor__, xor_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___ior__, ior_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___or__, or_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___iand__, iand_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___and__, and_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___invert__, invert_slot},
    {(void *)slot_QSGSimpleTextureNode_TextureCoordinatesTransformMode___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSGSimpleTextureNode_TextureCoordinatesTransformMode, "\1QSGSimpleTextureNode.TextureCoordinatesTransformMode()\n"
    "QSGSimpleTextureNode.TextureCoordinatesTransformMode(Union[QSGSimpleTextureNode.TextureCoordinatesTransformMode, QSGSimpleTextureNode.TextureCoordinatesTransformFlag])\n"
    "QSGSimpleTextureNode.TextureCoordinatesTransformMode(QSGSimpleTextureNode.TextureCoordinatesTransformMode)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGSimpleTextureNode_TextureCoordinatesTransformMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGSimpleTextureNode__TextureCoordinatesTransformMode,
        {0}
    },
    {
        sipNameNr_TextureCoordinatesTransformMode,
        {65, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    init_type_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
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
    dealloc_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    assign_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    array_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    copy_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    release_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
    0,
    convertTo_QSGSimpleTextureNode_TextureCoordinatesTransformMode,
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
