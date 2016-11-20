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

#include "sipAPIQtWidgets.h"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"


extern "C" {static int slot_QStyle_SubControls___bool__(PyObject *);}
static int slot_QStyle_SubControls___bool__(PyObject *sipSelf)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyle::SubControls::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyle_SubControls___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyle::SubControls::Int() != a0->operator QStyle::SubControls::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
            sipReleaseType(const_cast<QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QStyle_SubControls,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyle_SubControls___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyle::SubControls::Int() == a0->operator QStyle::SubControls::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
            sipReleaseType(const_cast<QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QStyle_SubControls,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyle_SubControls___invert__(PyObject *);}
static PyObject *slot_QStyle_SubControls___invert__(PyObject *sipSelf)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;


    {
        {
            QStyle::SubControls*sipRes;

            sipRes = new QStyle::SubControls(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyle_SubControls___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyle::SubControls* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_SubControls, &a0, &a0State, &a1))
        {
            QStyle::SubControls*sipRes;

            sipRes = new QStyle::SubControls((*a0 & a1));
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyle::SubControls* a0;
        int a0State = 0;
        QStyle::SubControls* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyle_SubControls, &a0, &a0State, sipType_QStyle_SubControls, &a1, &a1State))
        {
            QStyle::SubControls*sipRes;

            sipRes = new QStyle::SubControls((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);
            sipReleaseType(a1,sipType_QStyle_SubControls,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    {
        QStyle::SubControls* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_SubControls, &a0, &a0State, &a1))
        {
            QStyle::SubControls*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QStyle::SubControls(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyle::SubControls* a0;
        int a0State = 0;
        QStyle::SubControls* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyle_SubControls, &a0, &a0State, sipType_QStyle_SubControls, &a1, &a1State))
        {
            QStyle::SubControls*sipRes;

            sipRes = new QStyle::SubControls((*a0 | *a1));
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);
            sipReleaseType(a1,sipType_QStyle_SubControls,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    {
        QStyle::SubControls* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_SubControls, &a0, &a0State, &a1))
        {
            QStyle::SubControls*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QStyle::SubControls(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___int__(PyObject *);}
static PyObject *slot_QStyle_SubControls___int__(PyObject *sipSelf)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

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


extern "C" {static PyObject *slot_QStyle_SubControls___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            sipCpp->QStyle::SubControls::operator^=(*a0);
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

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


extern "C" {static PyObject *slot_QStyle_SubControls___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            sipCpp->QStyle::SubControls::operator|=(*a0);
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

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


extern "C" {static PyObject *slot_QStyle_SubControls___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStyle::SubControls::operator&=(a0);

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
extern "C" {static void release_QStyle_SubControls(void *, int);}
static void release_QStyle_SubControls(void *sipCppV,int)
{
    delete reinterpret_cast<QStyle::SubControls *>(sipCppV);
}


extern "C" {static void assign_QStyle_SubControls(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyle_SubControls(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyle::SubControls *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyle::SubControls *>(sipSrc);
}


extern "C" {static void *array_QStyle_SubControls(SIP_SSIZE_T);}
static void *array_QStyle_SubControls(SIP_SSIZE_T sipNrElem)
{
    return new QStyle::SubControls[sipNrElem];
}


extern "C" {static void *copy_QStyle_SubControls(const void *, SIP_SSIZE_T);}
static void *copy_QStyle_SubControls(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyle::SubControls(reinterpret_cast<const QStyle::SubControls *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyle_SubControls(sipSimpleWrapper *);}
static void dealloc_QStyle_SubControls(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyle_SubControls(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyle_SubControls(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyle_SubControls(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyle::SubControls *sipCpp = 0;

    {
        const QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            sipCpp = new QStyle::SubControls(*a0);
            sipReleaseType(const_cast<QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStyle::SubControls(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyle::SubControls();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyle_SubControls(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyle_SubControls(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyle::SubControls **sipCppPtr = reinterpret_cast<QStyle::SubControls **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyle::SubControls is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_SubControl)) ||
            sipCanConvertToType(sipPy, sipType_QStyle_SubControls, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_SubControl)))
{
    *sipCppPtr = new QStyle::SubControls(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyle::SubControls *>(sipConvertToType(sipPy, sipType_QStyle_SubControls, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyle_SubControls[] = {
    {(void *)slot_QStyle_SubControls___bool__, bool_slot},
    {(void *)slot_QStyle_SubControls___ne__, ne_slot},
    {(void *)slot_QStyle_SubControls___eq__, eq_slot},
    {(void *)slot_QStyle_SubControls___invert__, invert_slot},
    {(void *)slot_QStyle_SubControls___and__, and_slot},
    {(void *)slot_QStyle_SubControls___xor__, xor_slot},
    {(void *)slot_QStyle_SubControls___or__, or_slot},
    {(void *)slot_QStyle_SubControls___int__, int_slot},
    {(void *)slot_QStyle_SubControls___ixor__, ixor_slot},
    {(void *)slot_QStyle_SubControls___ior__, ior_slot},
    {(void *)slot_QStyle_SubControls___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyle_SubControls, "\1QStyle.SubControls(QStyle.SubControls)\n"
    "QStyle.SubControls(int)\n"
    "QStyle.SubControls()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyle_SubControls = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyle__SubControls,
        {0}
    },
    {
        sipNameNr_SubControls,
        {277, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyle_SubControls,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyle_SubControls,
    init_type_QStyle_SubControls,
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
    dealloc_QStyle_SubControls,
    assign_QStyle_SubControls,
    array_QStyle_SubControls,
    copy_QStyle_SubControls,
    release_QStyle_SubControls,
    0,
    convertTo_QStyle_SubControls,
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
