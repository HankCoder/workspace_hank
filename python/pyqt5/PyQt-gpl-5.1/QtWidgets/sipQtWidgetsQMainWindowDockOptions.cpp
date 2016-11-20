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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qmainwindow.sip"
#include <qmainwindow.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qmainwindow.sip"
#include <qmainwindow.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"


extern "C" {static int slot_QMainWindow_DockOptions___bool__(PyObject *);}
static int slot_QMainWindow_DockOptions___bool__(PyObject *sipSelf)
{
    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QMainWindow::DockOptions::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMainWindow::DockOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMainWindow_DockOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QMainWindow::DockOptions::Int() != a0->operator QMainWindow::DockOptions::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"
            sipReleaseType(const_cast<QMainWindow::DockOptions *>(a0),sipType_QMainWindow_DockOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QMainWindow_DockOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMainWindow::DockOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMainWindow_DockOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QMainWindow::DockOptions::Int() == a0->operator QMainWindow::DockOptions::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"
            sipReleaseType(const_cast<QMainWindow::DockOptions *>(a0),sipType_QMainWindow_DockOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QMainWindow_DockOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___invert__(PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___invert__(PyObject *sipSelf)
{
    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QMainWindow::DockOptions*sipRes;

            sipRes = new QMainWindow::DockOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMainWindow_DockOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMainWindow_DockOptions, &a0, &a0State, &a1))
        {
            QMainWindow::DockOptions*sipRes;

            sipRes = new QMainWindow::DockOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMainWindow_DockOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;
        QMainWindow::DockOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMainWindow_DockOptions, &a0, &a0State, sipType_QMainWindow_DockOptions, &a1, &a1State))
        {
            QMainWindow::DockOptions*sipRes;

            sipRes = new QMainWindow::DockOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);
            sipReleaseType(a1,sipType_QMainWindow_DockOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMainWindow_DockOptions,NULL);
        }
    }

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMainWindow_DockOptions, &a0, &a0State, &a1))
        {
            QMainWindow::DockOptions*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QMainWindow::DockOptions(*a0 ^ a1);
#line 220 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMainWindow_DockOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;
        QMainWindow::DockOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMainWindow_DockOptions, &a0, &a0State, sipType_QMainWindow_DockOptions, &a1, &a1State))
        {
            QMainWindow::DockOptions*sipRes;

            sipRes = new QMainWindow::DockOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);
            sipReleaseType(a1,sipType_QMainWindow_DockOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMainWindow_DockOptions,NULL);
        }
    }

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMainWindow_DockOptions, &a0, &a0State, &a1))
        {
            QMainWindow::DockOptions*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QMainWindow::DockOptions(*a0 | a1);
#line 270 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMainWindow_DockOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMainWindow_DockOptions___int__(PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___int__(PyObject *sipSelf)
{
    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

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


extern "C" {static PyObject *slot_QMainWindow_DockOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMainWindow_DockOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMainWindow_DockOptions, &a0, &a0State))
        {
            sipCpp->QMainWindow::DockOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);

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


extern "C" {static PyObject *slot_QMainWindow_DockOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMainWindow_DockOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMainWindow::DockOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMainWindow_DockOptions, &a0, &a0State))
        {
            sipCpp->QMainWindow::DockOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QMainWindow_DockOptions,a0State);

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


extern "C" {static PyObject *slot_QMainWindow_DockOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QMainWindow_DockOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMainWindow_DockOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMainWindow::DockOptions *sipCpp = reinterpret_cast<QMainWindow::DockOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMainWindow_DockOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QMainWindow::DockOptions::operator&=(a0);

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
extern "C" {static void release_QMainWindow_DockOptions(void *, int);}
static void release_QMainWindow_DockOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QMainWindow::DockOptions *>(sipCppV);
}


extern "C" {static void assign_QMainWindow_DockOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QMainWindow_DockOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMainWindow::DockOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMainWindow::DockOptions *>(sipSrc);
}


extern "C" {static void *array_QMainWindow_DockOptions(SIP_SSIZE_T);}
static void *array_QMainWindow_DockOptions(SIP_SSIZE_T sipNrElem)
{
    return new QMainWindow::DockOptions[sipNrElem];
}


extern "C" {static void *copy_QMainWindow_DockOptions(const void *, SIP_SSIZE_T);}
static void *copy_QMainWindow_DockOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMainWindow::DockOptions(reinterpret_cast<const QMainWindow::DockOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMainWindow_DockOptions(sipSimpleWrapper *);}
static void dealloc_QMainWindow_DockOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMainWindow_DockOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMainWindow_DockOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMainWindow_DockOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMainWindow::DockOptions *sipCpp = 0;

    {
        const QMainWindow::DockOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMainWindow_DockOptions, &a0, &a0State))
        {
            sipCpp = new QMainWindow::DockOptions(*a0);
            sipReleaseType(const_cast<QMainWindow::DockOptions *>(a0),sipType_QMainWindow_DockOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QMainWindow::DockOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMainWindow::DockOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMainWindow_DockOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMainWindow_DockOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMainWindow::DockOptions **sipCppPtr = reinterpret_cast<QMainWindow::DockOptions **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QMainWindow::DockOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMainWindow_DockOption)) ||
            sipCanConvertToType(sipPy, sipType_QMainWindow_DockOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMainWindow_DockOption)))
{
    *sipCppPtr = new QMainWindow::DockOptions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMainWindow::DockOptions *>(sipConvertToType(sipPy, sipType_QMainWindow_DockOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 536 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQMainWindowDockOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMainWindow_DockOptions[] = {
    {(void *)slot_QMainWindow_DockOptions___bool__, bool_slot},
    {(void *)slot_QMainWindow_DockOptions___ne__, ne_slot},
    {(void *)slot_QMainWindow_DockOptions___eq__, eq_slot},
    {(void *)slot_QMainWindow_DockOptions___invert__, invert_slot},
    {(void *)slot_QMainWindow_DockOptions___and__, and_slot},
    {(void *)slot_QMainWindow_DockOptions___xor__, xor_slot},
    {(void *)slot_QMainWindow_DockOptions___or__, or_slot},
    {(void *)slot_QMainWindow_DockOptions___int__, int_slot},
    {(void *)slot_QMainWindow_DockOptions___ixor__, ixor_slot},
    {(void *)slot_QMainWindow_DockOptions___ior__, ior_slot},
    {(void *)slot_QMainWindow_DockOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMainWindow_DockOptions, "\1QMainWindow.DockOptions(QMainWindow.DockOptions)\n"
    "QMainWindow.DockOptions(int)\n"
    "QMainWindow.DockOptions()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QMainWindow_DockOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMainWindow__DockOptions,
        {0}
    },
    {
        sipNameNr_DockOptions,
        {215, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMainWindow_DockOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMainWindow_DockOptions,
    init_type_QMainWindow_DockOptions,
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
    dealloc_QMainWindow_DockOptions,
    assign_QMainWindow_DockOptions,
    array_QMainWindow_DockOptions,
    copy_QMainWindow_DockOptions,
    release_QMainWindow_DockOptions,
    0,
    convertTo_QMainWindow_DockOptions,
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
