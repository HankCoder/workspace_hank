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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qfiledialog.sip"
#include <qfiledialog.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qfiledialog.sip"
#include <qfiledialog.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"


extern "C" {static int slot_QFileDialog_Options___bool__(PyObject *);}
static int slot_QFileDialog_Options___bool__(PyObject *sipSelf)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFileDialog::Options::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDialog_Options___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFileDialog::Options* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDialog_Options, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFileDialog::Options::Int() != a0->operator QFileDialog::Options::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"
            sipReleaseType(const_cast<QFileDialog::Options *>(a0),sipType_QFileDialog_Options,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QFileDialog_Options,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFileDialog_Options___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFileDialog::Options* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDialog_Options, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFileDialog::Options::Int() == a0->operator QFileDialog::Options::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"
            sipReleaseType(const_cast<QFileDialog::Options *>(a0),sipType_QFileDialog_Options,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QFileDialog_Options,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFileDialog_Options___invert__(PyObject *);}
static PyObject *slot_QFileDialog_Options___invert__(PyObject *sipSelf)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;


    {
        {
            QFileDialog::Options*sipRes;

            sipRes = new QFileDialog::Options(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFileDialog_Options___and__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFileDialog::Options* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDialog_Options, &a0, &a0State, &a1))
        {
            QFileDialog::Options*sipRes;

            sipRes = new QFileDialog::Options((*a0 & a1));
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFileDialog_Options___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFileDialog::Options* a0;
        int a0State = 0;
        QFileDialog::Options* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QFileDialog_Options, &a0, &a0State, sipType_QFileDialog_Options, &a1, &a1State))
        {
            QFileDialog::Options*sipRes;

            sipRes = new QFileDialog::Options((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);
            sipReleaseType(a1,sipType_QFileDialog_Options,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    {
        QFileDialog::Options* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDialog_Options, &a0, &a0State, &a1))
        {
            QFileDialog::Options*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QFileDialog::Options(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFileDialog_Options___or__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFileDialog::Options* a0;
        int a0State = 0;
        QFileDialog::Options* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QFileDialog_Options, &a0, &a0State, sipType_QFileDialog_Options, &a1, &a1State))
        {
            QFileDialog::Options*sipRes;

            sipRes = new QFileDialog::Options((*a0 | *a1));
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);
            sipReleaseType(a1,sipType_QFileDialog_Options,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    {
        QFileDialog::Options* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFileDialog_Options, &a0, &a0State, &a1))
        {
            QFileDialog::Options*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QFileDialog::Options(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFileDialog_Options___int__(PyObject *);}
static PyObject *slot_QFileDialog_Options___int__(PyObject *sipSelf)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

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


extern "C" {static PyObject *slot_QFileDialog_Options___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDialog_Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QFileDialog::Options* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDialog_Options, &a0, &a0State))
        {
            sipCpp->QFileDialog::Options::operator^=(*a0);
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

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


extern "C" {static PyObject *slot_QFileDialog_Options___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDialog_Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QFileDialog::Options* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFileDialog_Options, &a0, &a0State))
        {
            sipCpp->QFileDialog::Options::operator|=(*a0);
            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

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


extern "C" {static PyObject *slot_QFileDialog_Options___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFileDialog_Options___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDialog_Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QFileDialog::Options::operator&=(a0);

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
extern "C" {static void release_QFileDialog_Options(void *, int);}
static void release_QFileDialog_Options(void *sipCppV,int)
{
    delete reinterpret_cast<QFileDialog::Options *>(sipCppV);
}


extern "C" {static void assign_QFileDialog_Options(void *, SIP_SSIZE_T, const void *);}
static void assign_QFileDialog_Options(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QFileDialog::Options *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QFileDialog::Options *>(sipSrc);
}


extern "C" {static void *array_QFileDialog_Options(SIP_SSIZE_T);}
static void *array_QFileDialog_Options(SIP_SSIZE_T sipNrElem)
{
    return new QFileDialog::Options[sipNrElem];
}


extern "C" {static void *copy_QFileDialog_Options(const void *, SIP_SSIZE_T);}
static void *copy_QFileDialog_Options(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QFileDialog::Options(reinterpret_cast<const QFileDialog::Options *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFileDialog_Options(sipSimpleWrapper *);}
static void dealloc_QFileDialog_Options(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFileDialog_Options(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QFileDialog_Options(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileDialog_Options(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFileDialog::Options *sipCpp = 0;

    {
        const QFileDialog::Options* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QFileDialog_Options, &a0, &a0State))
        {
            sipCpp = new QFileDialog::Options(*a0);
            sipReleaseType(const_cast<QFileDialog::Options *>(a0),sipType_QFileDialog_Options,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QFileDialog::Options(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QFileDialog::Options();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QFileDialog_Options(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFileDialog_Options(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QFileDialog::Options **sipCppPtr = reinterpret_cast<QFileDialog::Options **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFileDialog::Options is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDialog_Option)) ||
            sipCanConvertToType(sipPy, sipType_QFileDialog_Options, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDialog_Option)))
{
    *sipCppPtr = new QFileDialog::Options(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFileDialog::Options *>(sipConvertToType(sipPy, sipType_QFileDialog_Options, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQFileDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFileDialog_Options[] = {
    {(void *)slot_QFileDialog_Options___bool__, bool_slot},
    {(void *)slot_QFileDialog_Options___ne__, ne_slot},
    {(void *)slot_QFileDialog_Options___eq__, eq_slot},
    {(void *)slot_QFileDialog_Options___invert__, invert_slot},
    {(void *)slot_QFileDialog_Options___and__, and_slot},
    {(void *)slot_QFileDialog_Options___xor__, xor_slot},
    {(void *)slot_QFileDialog_Options___or__, or_slot},
    {(void *)slot_QFileDialog_Options___int__, int_slot},
    {(void *)slot_QFileDialog_Options___ixor__, ixor_slot},
    {(void *)slot_QFileDialog_Options___ior__, ior_slot},
    {(void *)slot_QFileDialog_Options___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFileDialog_Options, "\1QFileDialog.Options(QFileDialog.Options)\n"
    "QFileDialog.Options(int)\n"
    "QFileDialog.Options()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QFileDialog_Options = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QFileDialog__Options,
        {0}
    },
    {
        sipNameNr_Options,
        {73, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFileDialog_Options,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFileDialog_Options,
    init_type_QFileDialog_Options,
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
    dealloc_QFileDialog_Options,
    assign_QFileDialog_Options,
    array_QFileDialog_Options,
    copy_QFileDialog_Options,
    release_QFileDialog_Options,
    0,
    convertTo_QFileDialog_Options,
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
