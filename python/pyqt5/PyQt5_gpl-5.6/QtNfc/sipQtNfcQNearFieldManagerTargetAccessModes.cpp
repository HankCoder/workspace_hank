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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qnearfieldmanager.sip"
#include <qnearfieldmanager.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qnearfieldmanager.sip"
#include <qnearfieldmanager.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"


extern "C" {static int slot_QNearFieldManager_TargetAccessModes___bool__(PyObject *);}
static int slot_QNearFieldManager_TargetAccessModes___bool__(PyObject *sipSelf)
{
    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNearFieldManager::TargetAccessModes::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldManager::TargetAccessModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNearFieldManager_TargetAccessModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNearFieldManager::TargetAccessModes::Int() != a0->operator QNearFieldManager::TargetAccessModes::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"
            sipReleaseType(const_cast<QNearFieldManager::TargetAccessModes *>(a0),sipType_QNearFieldManager_TargetAccessModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,ne_slot,sipType_QNearFieldManager_TargetAccessModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNearFieldManager::TargetAccessModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNearFieldManager_TargetAccessModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QNearFieldManager::TargetAccessModes::Int() == a0->operator QNearFieldManager::TargetAccessModes::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"
            sipReleaseType(const_cast<QNearFieldManager::TargetAccessModes *>(a0),sipType_QNearFieldManager_TargetAccessModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,eq_slot,sipType_QNearFieldManager_TargetAccessModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNearFieldManager_TargetAccessModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QNearFieldManager::TargetAccessModes(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"

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


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNearFieldManager::TargetAccessModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNearFieldManager_TargetAccessModes, &a0, &a0State, &a1))
        {
            QNearFieldManager::TargetAccessModes*sipRes;

            sipRes = new QNearFieldManager::TargetAccessModes((*a0 ^ a1));
            sipReleaseType(a0,sipType_QNearFieldManager_TargetAccessModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNearFieldManager_TargetAccessModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNearFieldManager_TargetAccessModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QNearFieldManager::TargetAccessModes(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"

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


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___or__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNearFieldManager::TargetAccessModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNearFieldManager_TargetAccessModes, &a0, &a0State, &a1))
        {
            QNearFieldManager::TargetAccessModes*sipRes;

            sipRes = new QNearFieldManager::TargetAccessModes((*a0 | a1));
            sipReleaseType(a0,sipType_QNearFieldManager_TargetAccessModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNearFieldManager_TargetAccessModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNearFieldManager_TargetAccessModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QNearFieldManager::TargetAccessModes::operator&=(a0);

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


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___and__(PyObject *,PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNearFieldManager::TargetAccessModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNearFieldManager_TargetAccessModes, &a0, &a0State, &a1))
        {
            QNearFieldManager::TargetAccessModes*sipRes;

            sipRes = new QNearFieldManager::TargetAccessModes((*a0 & a1));
            sipReleaseType(a0,sipType_QNearFieldManager_TargetAccessModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNearFieldManager_TargetAccessModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___invert__(PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___invert__(PyObject *sipSelf)
{
    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

    if (!sipCpp)
        return 0;


    {
        {
            QNearFieldManager::TargetAccessModes*sipRes;

            sipRes = new QNearFieldManager::TargetAccessModes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QNearFieldManager_TargetAccessModes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNearFieldManager_TargetAccessModes___int__(PyObject *);}
static PyObject *slot_QNearFieldManager_TargetAccessModes___int__(PyObject *sipSelf)
{
    QNearFieldManager::TargetAccessModes *sipCpp = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNearFieldManager_TargetAccessModes));

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
extern "C" {static void release_QNearFieldManager_TargetAccessModes(void *, int);}
static void release_QNearFieldManager_TargetAccessModes(void *sipCppV,int)
{
    delete reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipCppV);
}


extern "C" {static void assign_QNearFieldManager_TargetAccessModes(void *, SIP_SSIZE_T, const void *);}
static void assign_QNearFieldManager_TargetAccessModes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNearFieldManager::TargetAccessModes *>(sipSrc);
}


extern "C" {static void *array_QNearFieldManager_TargetAccessModes(SIP_SSIZE_T);}
static void *array_QNearFieldManager_TargetAccessModes(SIP_SSIZE_T sipNrElem)
{
    return new QNearFieldManager::TargetAccessModes[sipNrElem];
}


extern "C" {static void *copy_QNearFieldManager_TargetAccessModes(const void *, SIP_SSIZE_T);}
static void *copy_QNearFieldManager_TargetAccessModes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNearFieldManager::TargetAccessModes(reinterpret_cast<const QNearFieldManager::TargetAccessModes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNearFieldManager_TargetAccessModes(sipSimpleWrapper *);}
static void dealloc_QNearFieldManager_TargetAccessModes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNearFieldManager_TargetAccessModes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNearFieldManager_TargetAccessModes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNearFieldManager_TargetAccessModes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNearFieldManager::TargetAccessModes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNearFieldManager::TargetAccessModes();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QNearFieldManager::TargetAccessModes(a0);

            return sipCpp;
        }
    }

    {
        const QNearFieldManager::TargetAccessModes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNearFieldManager_TargetAccessModes, &a0, &a0State))
        {
            sipCpp = new QNearFieldManager::TargetAccessModes(*a0);
            sipReleaseType(const_cast<QNearFieldManager::TargetAccessModes *>(a0),sipType_QNearFieldManager_TargetAccessModes,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNearFieldManager_TargetAccessModes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNearFieldManager_TargetAccessModes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNearFieldManager::TargetAccessModes **sipCppPtr = reinterpret_cast<QNearFieldManager::TargetAccessModes **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNearFieldManager::TargetAccessModes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNearFieldManager_TargetAccessMode)) ||
            sipCanConvertToType(sipPy, sipType_QNearFieldManager_TargetAccessModes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNearFieldManager_TargetAccessMode)))
{
    *sipCppPtr = new QNearFieldManager::TargetAccessModes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNearFieldManager::TargetAccessModes *>(sipConvertToType(sipPy, sipType_QNearFieldManager_TargetAccessModes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNearFieldManagerTargetAccessModes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNearFieldManager_TargetAccessModes[] = {
    {(void *)slot_QNearFieldManager_TargetAccessModes___bool__, bool_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___ne__, ne_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___eq__, eq_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___ixor__, ixor_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___xor__, xor_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___ior__, ior_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___or__, or_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___iand__, iand_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___and__, and_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___invert__, invert_slot},
    {(void *)slot_QNearFieldManager_TargetAccessModes___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNearFieldManager_TargetAccessModes, "\1QNearFieldManager.TargetAccessModes()\n"
    "QNearFieldManager.TargetAccessModes(Union[QNearFieldManager.TargetAccessModes, QNearFieldManager.TargetAccessMode])\n"
    "QNearFieldManager.TargetAccessModes(QNearFieldManager.TargetAccessModes)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNearFieldManager_TargetAccessModes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNearFieldManager__TargetAccessModes,
        {0}
    },
    {
        sipNameNr_TargetAccessModes,
        {15, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNearFieldManager_TargetAccessModes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNearFieldManager_TargetAccessModes,
    init_type_QNearFieldManager_TargetAccessModes,
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
    dealloc_QNearFieldManager_TargetAccessModes,
    assign_QNearFieldManager_TargetAccessModes,
    array_QNearFieldManager_TargetAccessModes,
    copy_QNearFieldManager_TargetAccessModes,
    release_QNearFieldManager_TargetAccessModes,
    0,
    convertTo_QNearFieldManager_TargetAccessModes,
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
