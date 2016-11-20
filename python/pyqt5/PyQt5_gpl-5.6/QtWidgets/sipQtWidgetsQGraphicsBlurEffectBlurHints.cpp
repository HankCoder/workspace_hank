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

#include "sipAPIQtWidgets.h"

#line 105 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"

#line 105 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"


extern "C" {static int slot_QGraphicsBlurEffect_BlurHints___bool__(PyObject *);}
static int slot_QGraphicsBlurEffect_BlurHints___bool__(PyObject *sipSelf)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsBlurEffect::BlurHints::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsBlurEffect::BlurHints::Int() != a0->operator QGraphicsBlurEffect::BlurHints::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"
            sipReleaseType(const_cast<QGraphicsBlurEffect::BlurHints *>(a0),sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QGraphicsBlurEffect_BlurHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsBlurEffect::BlurHints::Int() == a0->operator QGraphicsBlurEffect::BlurHints::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"
            sipReleaseType(const_cast<QGraphicsBlurEffect::BlurHints *>(a0),sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QGraphicsBlurEffect_BlurHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsBlurEffect::BlurHints(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"

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


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, &a1))
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            sipRes = new QGraphicsBlurEffect::BlurHints((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsBlurEffect::BlurHints(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"

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


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, &a1))
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            sipRes = new QGraphicsBlurEffect::BlurHints((*a0 | a1));
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGraphicsBlurEffect::BlurHints::operator&=(a0);

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


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, &a1))
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            sipRes = new QGraphicsBlurEffect::BlurHints((*a0 & a1));
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___invert__(PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___invert__(PyObject *sipSelf)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            sipRes = new QGraphicsBlurEffect::BlurHints(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___int__(PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___int__(PyObject *sipSelf)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

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
extern "C" {static void release_QGraphicsBlurEffect_BlurHints(void *, int);}
static void release_QGraphicsBlurEffect_BlurHints(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipCppV);
}


extern "C" {static void assign_QGraphicsBlurEffect_BlurHints(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsBlurEffect_BlurHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsBlurEffect::BlurHints *>(sipSrc);
}


extern "C" {static void *array_QGraphicsBlurEffect_BlurHints(SIP_SSIZE_T);}
static void *array_QGraphicsBlurEffect_BlurHints(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsBlurEffect::BlurHints[sipNrElem];
}


extern "C" {static void *copy_QGraphicsBlurEffect_BlurHints(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsBlurEffect_BlurHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsBlurEffect::BlurHints(reinterpret_cast<const QGraphicsBlurEffect::BlurHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *);}
static void dealloc_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsBlurEffect_BlurHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGraphicsBlurEffect::BlurHints();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGraphicsBlurEffect::BlurHints(a0);

            return sipCpp;
        }
    }

    {
        const QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            sipCpp = new QGraphicsBlurEffect::BlurHints(*a0);
            sipReleaseType(const_cast<QGraphicsBlurEffect::BlurHints *>(a0),sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsBlurEffect_BlurHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsBlurEffect_BlurHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsBlurEffect::BlurHints **sipCppPtr = reinterpret_cast<QGraphicsBlurEffect::BlurHints **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsBlurEffect::BlurHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHint)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsBlurEffect_BlurHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHint)))
{
    *sipCppPtr = new QGraphicsBlurEffect::BlurHints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipConvertToType(sipPy, sipType_QGraphicsBlurEffect_BlurHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsBlurEffectBlurHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsBlurEffect_BlurHints[] = {
    {(void *)slot_QGraphicsBlurEffect_BlurHints___bool__, bool_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___ne__, ne_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___eq__, eq_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___ixor__, ixor_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___xor__, xor_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___ior__, ior_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___or__, or_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___iand__, iand_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___and__, and_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___invert__, invert_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsBlurEffect_BlurHints, "\1QGraphicsBlurEffect.BlurHints()\n"
    "QGraphicsBlurEffect.BlurHints(Union[QGraphicsBlurEffect.BlurHints, QGraphicsBlurEffect.BlurHint])\n"
    "QGraphicsBlurEffect.BlurHints(QGraphicsBlurEffect.BlurHints)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsBlurEffect_BlurHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsBlurEffect__BlurHints,
        {0}
    },
    {
        sipNameNr_BlurHints,
        {110, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsBlurEffect_BlurHints,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsBlurEffect_BlurHints,
    init_type_QGraphicsBlurEffect_BlurHints,
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
    dealloc_QGraphicsBlurEffect_BlurHints,
    assign_QGraphicsBlurEffect_BlurHints,
    array_QGraphicsBlurEffect_BlurHints,
    copy_QGraphicsBlurEffect_BlurHints,
    release_QGraphicsBlurEffect_BlurHints,
    0,
    convertTo_QGraphicsBlurEffect_BlurHints,
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
