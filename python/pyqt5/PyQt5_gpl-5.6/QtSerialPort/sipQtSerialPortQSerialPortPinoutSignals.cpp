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

#include "sipAPIQtSerialPort.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"


extern "C" {static int slot_QSerialPort_PinoutSignals___bool__(PyObject *);}
static int slot_QSerialPort_PinoutSignals___bool__(PyObject *sipSelf)
{
    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSerialPort::PinoutSignals::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSerialPort::PinoutSignals* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSerialPort_PinoutSignals, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSerialPort::PinoutSignals::Int() != a0->operator QSerialPort::PinoutSignals::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"
            sipReleaseType(const_cast<QSerialPort::PinoutSignals *>(a0),sipType_QSerialPort_PinoutSignals,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,ne_slot,sipType_QSerialPort_PinoutSignals,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSerialPort::PinoutSignals* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSerialPort_PinoutSignals, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSerialPort::PinoutSignals::Int() == a0->operator QSerialPort::PinoutSignals::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"
            sipReleaseType(const_cast<QSerialPort::PinoutSignals *>(a0),sipType_QSerialPort_PinoutSignals,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,eq_slot,sipType_QSerialPort_PinoutSignals,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSerialPort_PinoutSignals)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QSerialPort::PinoutSignals(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"

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


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::PinoutSignals* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSerialPort_PinoutSignals, &a0, &a0State, &a1))
        {
            QSerialPort::PinoutSignals*sipRes;

            sipRes = new QSerialPort::PinoutSignals((*a0 ^ a1));
            sipReleaseType(a0,sipType_QSerialPort_PinoutSignals,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_PinoutSignals,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSerialPort_PinoutSignals)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QSerialPort::PinoutSignals(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"

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


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___or__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::PinoutSignals* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSerialPort_PinoutSignals, &a0, &a0State, &a1))
        {
            QSerialPort::PinoutSignals*sipRes;

            sipRes = new QSerialPort::PinoutSignals((*a0 | a1));
            sipReleaseType(a0,sipType_QSerialPort_PinoutSignals,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_PinoutSignals,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSerialPort_PinoutSignals)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSerialPort::PinoutSignals::operator&=(a0);

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


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___and__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::PinoutSignals* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSerialPort_PinoutSignals, &a0, &a0State, &a1))
        {
            QSerialPort::PinoutSignals*sipRes;

            sipRes = new QSerialPort::PinoutSignals((*a0 & a1));
            sipReleaseType(a0,sipType_QSerialPort_PinoutSignals,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_PinoutSignals,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___invert__(PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___invert__(PyObject *sipSelf)
{
    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

    if (!sipCpp)
        return 0;


    {
        {
            QSerialPort::PinoutSignals*sipRes;

            sipRes = new QSerialPort::PinoutSignals(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_PinoutSignals,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignals___int__(PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignals___int__(PyObject *sipSelf)
{
    QSerialPort::PinoutSignals *sipCpp = reinterpret_cast<QSerialPort::PinoutSignals *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_PinoutSignals));

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
extern "C" {static void release_QSerialPort_PinoutSignals(void *, int);}
static void release_QSerialPort_PinoutSignals(void *sipCppV,int)
{
    delete reinterpret_cast<QSerialPort::PinoutSignals *>(sipCppV);
}


extern "C" {static void assign_QSerialPort_PinoutSignals(void *, SIP_SSIZE_T, const void *);}
static void assign_QSerialPort_PinoutSignals(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSerialPort::PinoutSignals *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSerialPort::PinoutSignals *>(sipSrc);
}


extern "C" {static void *array_QSerialPort_PinoutSignals(SIP_SSIZE_T);}
static void *array_QSerialPort_PinoutSignals(SIP_SSIZE_T sipNrElem)
{
    return new QSerialPort::PinoutSignals[sipNrElem];
}


extern "C" {static void *copy_QSerialPort_PinoutSignals(const void *, SIP_SSIZE_T);}
static void *copy_QSerialPort_PinoutSignals(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSerialPort::PinoutSignals(reinterpret_cast<const QSerialPort::PinoutSignals *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSerialPort_PinoutSignals(sipSimpleWrapper *);}
static void dealloc_QSerialPort_PinoutSignals(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSerialPort_PinoutSignals(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSerialPort_PinoutSignals(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSerialPort_PinoutSignals(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSerialPort::PinoutSignals *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSerialPort::PinoutSignals();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSerialPort::PinoutSignals(a0);

            return sipCpp;
        }
    }

    {
        const QSerialPort::PinoutSignals* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSerialPort_PinoutSignals, &a0, &a0State))
        {
            sipCpp = new QSerialPort::PinoutSignals(*a0);
            sipReleaseType(const_cast<QSerialPort::PinoutSignals *>(a0),sipType_QSerialPort_PinoutSignals,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSerialPort_PinoutSignals(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSerialPort_PinoutSignals(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSerialPort::PinoutSignals **sipCppPtr = reinterpret_cast<QSerialPort::PinoutSignals **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSerialPort::PinoutSignals is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSerialPort_PinoutSignal)) ||
            sipCanConvertToType(sipPy, sipType_QSerialPort_PinoutSignals, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSerialPort_PinoutSignal)))
{
    *sipCppPtr = new QSerialPort::PinoutSignals(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSerialPort::PinoutSignals *>(sipConvertToType(sipPy, sipType_QSerialPort_PinoutSignals, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtSerialPort/sipQtSerialPortQSerialPortPinoutSignals.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSerialPort_PinoutSignals[] = {
    {(void *)slot_QSerialPort_PinoutSignals___bool__, bool_slot},
    {(void *)slot_QSerialPort_PinoutSignals___ne__, ne_slot},
    {(void *)slot_QSerialPort_PinoutSignals___eq__, eq_slot},
    {(void *)slot_QSerialPort_PinoutSignals___ixor__, ixor_slot},
    {(void *)slot_QSerialPort_PinoutSignals___xor__, xor_slot},
    {(void *)slot_QSerialPort_PinoutSignals___ior__, ior_slot},
    {(void *)slot_QSerialPort_PinoutSignals___or__, or_slot},
    {(void *)slot_QSerialPort_PinoutSignals___iand__, iand_slot},
    {(void *)slot_QSerialPort_PinoutSignals___and__, and_slot},
    {(void *)slot_QSerialPort_PinoutSignals___invert__, invert_slot},
    {(void *)slot_QSerialPort_PinoutSignals___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSerialPort_PinoutSignals, "\1QSerialPort.PinoutSignals()\n"
    "QSerialPort.PinoutSignals(Union[QSerialPort.PinoutSignals, QSerialPort.PinoutSignal])\n"
    "QSerialPort.PinoutSignals(QSerialPort.PinoutSignals)");


pyqt5ClassTypeDef sipTypeDef_QtSerialPort_QSerialPort_PinoutSignals = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSerialPort__PinoutSignals,
        {0}
    },
    {
        sipNameNr_PinoutSignals,
        {1, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSerialPort_PinoutSignals,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSerialPort_PinoutSignals,
    init_type_QSerialPort_PinoutSignals,
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
    dealloc_QSerialPort_PinoutSignals,
    assign_QSerialPort_PinoutSignals,
    array_QSerialPort_PinoutSignals,
    copy_QSerialPort_PinoutSignals,
    release_QSerialPort_PinoutSignals,
    0,
    convertTo_QSerialPort_PinoutSignals,
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
