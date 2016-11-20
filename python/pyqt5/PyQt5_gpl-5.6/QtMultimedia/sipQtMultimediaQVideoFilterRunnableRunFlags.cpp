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

#include "sipAPIQtMultimedia.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qabstractvideofilter.sip"
#include <qabstractvideofilter.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qabstractvideofilter.sip"
#include <qabstractvideofilter.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"


extern "C" {static int slot_QVideoFilterRunnable_RunFlags___bool__(PyObject *);}
static int slot_QVideoFilterRunnable_RunFlags___bool__(PyObject *sipSelf)
{
    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QVideoFilterRunnable::RunFlags::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVideoFilterRunnable::RunFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVideoFilterRunnable_RunFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QVideoFilterRunnable::RunFlags::Int() != a0->operator QVideoFilterRunnable::RunFlags::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"
            sipReleaseType(const_cast<QVideoFilterRunnable::RunFlags *>(a0),sipType_QVideoFilterRunnable_RunFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QVideoFilterRunnable_RunFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVideoFilterRunnable::RunFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVideoFilterRunnable_RunFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QVideoFilterRunnable::RunFlags::Int() == a0->operator QVideoFilterRunnable::RunFlags::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"
            sipReleaseType(const_cast<QVideoFilterRunnable::RunFlags *>(a0),sipType_QVideoFilterRunnable_RunFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QVideoFilterRunnable_RunFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVideoFilterRunnable_RunFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QVideoFilterRunnable::RunFlags(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"

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


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFilterRunnable::RunFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QVideoFilterRunnable_RunFlags, &a0, &a0State, &a1))
        {
            QVideoFilterRunnable::RunFlags*sipRes;

            sipRes = new QVideoFilterRunnable::RunFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QVideoFilterRunnable_RunFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVideoFilterRunnable_RunFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVideoFilterRunnable_RunFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QVideoFilterRunnable::RunFlags(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"

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


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFilterRunnable::RunFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QVideoFilterRunnable_RunFlags, &a0, &a0State, &a1))
        {
            QVideoFilterRunnable::RunFlags*sipRes;

            sipRes = new QVideoFilterRunnable::RunFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QVideoFilterRunnable_RunFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVideoFilterRunnable_RunFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVideoFilterRunnable_RunFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QVideoFilterRunnable::RunFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFilterRunnable::RunFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QVideoFilterRunnable_RunFlags, &a0, &a0State, &a1))
        {
            QVideoFilterRunnable::RunFlags*sipRes;

            sipRes = new QVideoFilterRunnable::RunFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QVideoFilterRunnable_RunFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVideoFilterRunnable_RunFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___invert__(PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___invert__(PyObject *sipSelf)
{
    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QVideoFilterRunnable::RunFlags*sipRes;

            sipRes = new QVideoFilterRunnable::RunFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QVideoFilterRunnable_RunFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QVideoFilterRunnable_RunFlags___int__(PyObject *);}
static PyObject *slot_QVideoFilterRunnable_RunFlags___int__(PyObject *sipSelf)
{
    QVideoFilterRunnable::RunFlags *sipCpp = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoFilterRunnable_RunFlags));

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
extern "C" {static void release_QVideoFilterRunnable_RunFlags(void *, int);}
static void release_QVideoFilterRunnable_RunFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipCppV);
}


extern "C" {static void assign_QVideoFilterRunnable_RunFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QVideoFilterRunnable_RunFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVideoFilterRunnable::RunFlags *>(sipSrc);
}


extern "C" {static void *array_QVideoFilterRunnable_RunFlags(SIP_SSIZE_T);}
static void *array_QVideoFilterRunnable_RunFlags(SIP_SSIZE_T sipNrElem)
{
    return new QVideoFilterRunnable::RunFlags[sipNrElem];
}


extern "C" {static void *copy_QVideoFilterRunnable_RunFlags(const void *, SIP_SSIZE_T);}
static void *copy_QVideoFilterRunnable_RunFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVideoFilterRunnable::RunFlags(reinterpret_cast<const QVideoFilterRunnable::RunFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVideoFilterRunnable_RunFlags(sipSimpleWrapper *);}
static void dealloc_QVideoFilterRunnable_RunFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QVideoFilterRunnable_RunFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QVideoFilterRunnable_RunFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVideoFilterRunnable_RunFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QVideoFilterRunnable::RunFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QVideoFilterRunnable::RunFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QVideoFilterRunnable::RunFlags(a0);

            return sipCpp;
        }
    }

    {
        const QVideoFilterRunnable::RunFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVideoFilterRunnable_RunFlags, &a0, &a0State))
        {
            sipCpp = new QVideoFilterRunnable::RunFlags(*a0);
            sipReleaseType(const_cast<QVideoFilterRunnable::RunFlags *>(a0),sipType_QVideoFilterRunnable_RunFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QVideoFilterRunnable_RunFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVideoFilterRunnable_RunFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVideoFilterRunnable::RunFlags **sipCppPtr = reinterpret_cast<QVideoFilterRunnable::RunFlags **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QVideoFilterRunnable::RunFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QVideoFilterRunnable_RunFlag)) ||
            sipCanConvertToType(sipPy, sipType_QVideoFilterRunnable_RunFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QVideoFilterRunnable_RunFlag)))
{
    *sipCppPtr = new QVideoFilterRunnable::RunFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QVideoFilterRunnable::RunFlags *>(sipConvertToType(sipPy, sipType_QVideoFilterRunnable_RunFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQVideoFilterRunnableRunFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVideoFilterRunnable_RunFlags[] = {
    {(void *)slot_QVideoFilterRunnable_RunFlags___bool__, bool_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___ne__, ne_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___eq__, eq_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___ixor__, ixor_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___xor__, xor_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___ior__, ior_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___or__, or_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___iand__, iand_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___and__, and_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___invert__, invert_slot},
    {(void *)slot_QVideoFilterRunnable_RunFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QVideoFilterRunnable_RunFlags, "\1QVideoFilterRunnable.RunFlags()\n"
    "QVideoFilterRunnable.RunFlags(Union[QVideoFilterRunnable.RunFlags, QVideoFilterRunnable.RunFlag])\n"
    "QVideoFilterRunnable.RunFlags(QVideoFilterRunnable.RunFlags)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QVideoFilterRunnable_RunFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QVideoFilterRunnable__RunFlags,
        {0}
    },
    {
        sipNameNr_RunFlags,
        {113, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVideoFilterRunnable_RunFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVideoFilterRunnable_RunFlags,
    init_type_QVideoFilterRunnable_RunFlags,
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
    dealloc_QVideoFilterRunnable_RunFlags,
    assign_QVideoFilterRunnable_RunFlags,
    array_QVideoFilterRunnable_RunFlags,
    copy_QVideoFilterRunnable_RunFlags,
    release_QVideoFilterRunnable_RunFlags,
    0,
    convertTo_QVideoFilterRunnable_RunFlags,
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