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

#include "sipAPIQtCore.h"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qeasingcurve.sip"
#include <qeasingcurve.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"
#line 99 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"
#line 34 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qeasingcurve.sip"
// The EasingFunction callback doesn't provide a context so we support a fixed
// number of different functions.

const int ec_nr_custom_types = 10;

struct ec_custom_type {
    PyObject *py_func;
    QEasingCurve::EasingFunction func;
};

static qreal ec_call(int ec, qreal v);

static qreal ec_func_0(qreal v)
{
    return ec_call(0, v);
}

static qreal ec_func_1(qreal v)
{
    return ec_call(1, v);
}

static qreal ec_func_2(qreal v)
{
    return ec_call(2, v);
}

static qreal ec_func_3(qreal v)
{
    return ec_call(3, v);
}

static qreal ec_func_4(qreal v)
{
    return ec_call(4, v);
}

static qreal ec_func_5(qreal v)
{
    return ec_call(5, v);
}

static qreal ec_func_6(qreal v)
{
    return ec_call(6, v);
}

static qreal ec_func_7(qreal v)
{
    return ec_call(7, v);
}

static qreal ec_func_8(qreal v)
{
    return ec_call(8, v);
}

static qreal ec_func_9(qreal v)
{
    return ec_call(9, v);
}

static ec_custom_type ec_custom_types[ec_nr_custom_types] = {
    {0, ec_func_0},
    {0, ec_func_1},
    {0, ec_func_2},
    {0, ec_func_3},
    {0, ec_func_4},
    {0, ec_func_5},
    {0, ec_func_6},
    {0, ec_func_7},
    {0, ec_func_8},
    {0, ec_func_9},
};

static qreal ec_call(int ec, qreal v)
{
    PyObject *res_obj;
    qreal res = 0.0;

    SIP_BLOCK_THREADS

    res_obj = PyObject_CallFunction(ec_custom_types[ec].py_func, (char *)"(d)", (double)v);

    if (res_obj)
    {
        PyErr_Clear();

        res = PyFloat_AsDouble(res_obj);
        Py_DECREF(res_obj);

        if (PyErr_Occurred())
            res_obj = 0;
    }

    if (!res_obj)
        PyErr_Print();

    SIP_UNBLOCK_THREADS

    return res;
}
#line 140 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"


PyDoc_STRVAR(doc_QEasingCurve_amplitude, "amplitude(self) -> float");

extern "C" {static PyObject *meth_QEasingCurve_amplitude(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_amplitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEasingCurve, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->amplitude();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_amplitude, doc_QEasingCurve_amplitude);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_setAmplitude, "setAmplitude(self, float)");

extern "C" {static PyObject *meth_QEasingCurve_setAmplitude(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_setAmplitude(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QEasingCurve, &sipCpp, &a0))
        {
            sipCpp->setAmplitude(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_setAmplitude, doc_QEasingCurve_setAmplitude);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_period, "period(self) -> float");

extern "C" {static PyObject *meth_QEasingCurve_period(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_period(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEasingCurve, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->period();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_period, doc_QEasingCurve_period);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_setPeriod, "setPeriod(self, float)");

extern "C" {static PyObject *meth_QEasingCurve_setPeriod(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_setPeriod(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QEasingCurve, &sipCpp, &a0))
        {
            sipCpp->setPeriod(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_setPeriod, doc_QEasingCurve_setPeriod);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_overshoot, "overshoot(self) -> float");

extern "C" {static PyObject *meth_QEasingCurve_overshoot(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_overshoot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEasingCurve, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->overshoot();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_overshoot, doc_QEasingCurve_overshoot);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_setOvershoot, "setOvershoot(self, float)");

extern "C" {static PyObject *meth_QEasingCurve_setOvershoot(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_setOvershoot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QEasingCurve, &sipCpp, &a0))
        {
            sipCpp->setOvershoot(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_setOvershoot, doc_QEasingCurve_setOvershoot);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_type, "type(self) -> QEasingCurve.Type");

extern "C" {static PyObject *meth_QEasingCurve_type(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEasingCurve, &sipCpp))
        {
            QEasingCurve::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QEasingCurve_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_type, doc_QEasingCurve_type);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_setType, "setType(self, QEasingCurve.Type)");

extern "C" {static PyObject *meth_QEasingCurve_setType(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QEasingCurve::Type a0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QEasingCurve, &sipCpp, sipType_QEasingCurve_Type, &a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_setType, doc_QEasingCurve_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_setCustomType, "setCustomType(self, Callable[..., None])");

extern "C" {static PyObject *meth_QEasingCurve_setCustomType(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_setCustomType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BF", &sipSelf, sipType_QEasingCurve, &sipCpp, &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 232 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qeasingcurve.sip"
        int i;
        ec_custom_type *ct;
        
        for (i = 0; i < ec_nr_custom_types; ++i)
        {
            ct = &ec_custom_types[i];
        
            if (!ct->py_func || ct->py_func == a0)
                break;
        }
        
        if (i == ec_nr_custom_types)
        {
            PyErr_Format(PyExc_ValueError, "a maximum of %d different easing functions are supported", ec_nr_custom_types);
            sipError = sipErrorFail;
        }
        else
        {
            if (!ct->py_func)
            {
                ct->py_func = a0;
                Py_INCREF(a0);
            }
        
            sipCpp->setCustomType(ct->func);
        }
#line 410 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            Py_INCREF(Py_None);
            return Py_None;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_setCustomType, doc_QEasingCurve_setCustomType);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_customType, "customType(self) -> Callable[..., None]");

extern "C" {static PyObject *meth_QEasingCurve_customType(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_customType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEasingCurve, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 262 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qeasingcurve.sip"
        QEasingCurve::EasingFunction func = sipCpp->customType();
        
        sipRes = Py_None;
        
        if (func)
        {
            for (int i = 0; i < ec_nr_custom_types; ++i)
            {
                if (ec_custom_types[i].func == func)
                {
                    sipRes = ec_custom_types[i].py_func;
                    break;
                }
            }
        }
        
        Py_INCREF(sipRes);
#line 465 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_customType, doc_QEasingCurve_customType);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_valueForProgress, "valueForProgress(self, float) -> float");

extern "C" {static PyObject *meth_QEasingCurve_valueForProgress(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_valueForProgress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QEasingCurve, &sipCpp, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->valueForProgress(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_valueForProgress, doc_QEasingCurve_valueForProgress);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_swap, "swap(self, QEasingCurve)");

extern "C" {static PyObject *meth_QEasingCurve_swap(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QEasingCurve* a0;
        int a0State = 0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QEasingCurve, &sipCpp, sipType_QEasingCurve, &a0, &a0State))
        {
            sipCpp->swap(*a0);
            sipReleaseType(a0,sipType_QEasingCurve,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_swap, doc_QEasingCurve_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_addCubicBezierSegment, "addCubicBezierSegment(self, QPointF, QPointF, QPointF)");

extern "C" {static PyObject *meth_QEasingCurve_addCubicBezierSegment(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_addCubicBezierSegment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;
        const QPointF* a2;
        int a2State = 0;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QEasingCurve, &sipCpp, sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State))
        {
            sipCpp->addCubicBezierSegment(*a0,*a1,*a2);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast<QPointF *>(a2),sipType_QPointF,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_addCubicBezierSegment, doc_QEasingCurve_addCubicBezierSegment);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_addTCBSegment, "addTCBSegment(self, QPointF, float, float, float)");

extern "C" {static PyObject *meth_QEasingCurve_addTCBSegment(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_addTCBSegment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        qreal a1;
        qreal a2;
        qreal a3;
        QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1ddd", &sipSelf, sipType_QEasingCurve, &sipCpp, sipType_QPointF, &a0, &a0State, &a1, &a2, &a3))
        {
            sipCpp->addTCBSegment(*a0,a1,a2,a3);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_addTCBSegment, doc_QEasingCurve_addTCBSegment);

    return NULL;
}


PyDoc_STRVAR(doc_QEasingCurve_toCubicSpline, "toCubicSpline(self) -> object");

extern "C" {static PyObject *meth_QEasingCurve_toCubicSpline(PyObject *, PyObject *);}
static PyObject *meth_QEasingCurve_toCubicSpline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEasingCurve, &sipCpp))
        {
            QVector<QPointF>*sipRes;

            sipRes = new QVector<QPointF>(sipCpp->toCubicSpline());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEasingCurve, sipName_toCubicSpline, doc_QEasingCurve_toCubicSpline);

    return NULL;
}


extern "C" {static PyObject *slot_QEasingCurve___ne__(PyObject *,PyObject *);}
static PyObject *slot_QEasingCurve___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QEasingCurve *sipCpp = reinterpret_cast<QEasingCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEasingCurve));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QEasingCurve, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QEasingCurve::operator!=(*a0);
            sipReleaseType(const_cast<QEasingCurve *>(a0),sipType_QEasingCurve,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QEasingCurve,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QEasingCurve___eq__(PyObject *,PyObject *);}
static PyObject *slot_QEasingCurve___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QEasingCurve *sipCpp = reinterpret_cast<QEasingCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEasingCurve));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QEasingCurve* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QEasingCurve, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QEasingCurve::operator==(*a0);
            sipReleaseType(const_cast<QEasingCurve *>(a0),sipType_QEasingCurve,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QEasingCurve,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QEasingCurve(void *, int);}
static void release_QEasingCurve(void *sipCppV,int)
{
    delete reinterpret_cast<QEasingCurve *>(sipCppV);
}


extern "C" {static void assign_QEasingCurve(void *, SIP_SSIZE_T, const void *);}
static void assign_QEasingCurve(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QEasingCurve *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QEasingCurve *>(sipSrc);
}


extern "C" {static void *array_QEasingCurve(SIP_SSIZE_T);}
static void *array_QEasingCurve(SIP_SSIZE_T sipNrElem)
{
    return new QEasingCurve[sipNrElem];
}


extern "C" {static void *copy_QEasingCurve(const void *, SIP_SSIZE_T);}
static void *copy_QEasingCurve(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QEasingCurve(reinterpret_cast<const QEasingCurve *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QEasingCurve(sipSimpleWrapper *);}
static void dealloc_QEasingCurve(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QEasingCurve(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QEasingCurve(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEasingCurve(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QEasingCurve *sipCpp = 0;

    {
        QEasingCurve::Type a0 = QEasingCurve::Linear;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_QEasingCurve_Type, &a0))
        {
            sipCpp = new QEasingCurve(a0);

            return sipCpp;
        }
    }

    {
        const QEasingCurve* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QEasingCurve, &a0, &a0State))
        {
            sipCpp = new QEasingCurve(*a0);
            sipReleaseType(const_cast<QEasingCurve *>(a0),sipType_QEasingCurve,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QEasingCurve(PyObject *, void **, int *, PyObject *);}
static int convertTo_QEasingCurve(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QEasingCurve **sipCppPtr = reinterpret_cast<QEasingCurve **>(sipCppPtrV);

#line 139 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qeasingcurve.sip"
// Allow a QEasingCurve::Type whenever a QEasingCurve is expected.

if (sipIsErr == NULL)
{
    if (sipCanConvertToType(sipPy, sipType_QEasingCurve, SIP_NO_CONVERTORS))
        return 1;

    if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QEasingCurve_Type)))
        return 1;

    return 0;
}

if (sipCanConvertToType(sipPy, sipType_QEasingCurve, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QEasingCurve *>(sipConvertToType(sipPy, sipType_QEasingCurve, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

*sipCppPtr = new QEasingCurve((QEasingCurve::Type)SIPLong_AsLong(sipPy));

return sipGetState(sipTransferObj);
#line 807 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEasingCurve.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QEasingCurve[] = {
    {(void *)slot_QEasingCurve___ne__, ne_slot},
    {(void *)slot_QEasingCurve___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QEasingCurve[] = {
    {SIP_MLNAME_CAST(sipName_addCubicBezierSegment), meth_QEasingCurve_addCubicBezierSegment, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_addCubicBezierSegment)},
    {SIP_MLNAME_CAST(sipName_addTCBSegment), meth_QEasingCurve_addTCBSegment, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_addTCBSegment)},
    {SIP_MLNAME_CAST(sipName_amplitude), meth_QEasingCurve_amplitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_amplitude)},
    {SIP_MLNAME_CAST(sipName_customType), meth_QEasingCurve_customType, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_customType)},
    {SIP_MLNAME_CAST(sipName_overshoot), meth_QEasingCurve_overshoot, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_overshoot)},
    {SIP_MLNAME_CAST(sipName_period), meth_QEasingCurve_period, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_period)},
    {SIP_MLNAME_CAST(sipName_setAmplitude), meth_QEasingCurve_setAmplitude, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_setAmplitude)},
    {SIP_MLNAME_CAST(sipName_setCustomType), meth_QEasingCurve_setCustomType, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_setCustomType)},
    {SIP_MLNAME_CAST(sipName_setOvershoot), meth_QEasingCurve_setOvershoot, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_setOvershoot)},
    {SIP_MLNAME_CAST(sipName_setPeriod), meth_QEasingCurve_setPeriod, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_setPeriod)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QEasingCurve_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_setType)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QEasingCurve_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_swap)},
    {SIP_MLNAME_CAST(sipName_toCubicSpline), meth_QEasingCurve_toCubicSpline, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_toCubicSpline)},
    {SIP_MLNAME_CAST(sipName_type), meth_QEasingCurve_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_type)},
    {SIP_MLNAME_CAST(sipName_valueForProgress), meth_QEasingCurve_valueForProgress, METH_VARARGS, SIP_MLDOC_CAST(doc_QEasingCurve_valueForProgress)}
};

static sipEnumMemberDef enummembers_QEasingCurve[] = {
    {sipName_BezierSpline, static_cast<int>(QEasingCurve::BezierSpline), 43},
    {sipName_CosineCurve, static_cast<int>(QEasingCurve::CosineCurve), 43},
    {sipName_Custom, static_cast<int>(QEasingCurve::Custom), 43},
    {sipName_InBack, static_cast<int>(QEasingCurve::InBack), 43},
    {sipName_InBounce, static_cast<int>(QEasingCurve::InBounce), 43},
    {sipName_InCirc, static_cast<int>(QEasingCurve::InCirc), 43},
    {sipName_InCubic, static_cast<int>(QEasingCurve::InCubic), 43},
    {sipName_InCurve, static_cast<int>(QEasingCurve::InCurve), 43},
    {sipName_InElastic, static_cast<int>(QEasingCurve::InElastic), 43},
    {sipName_InExpo, static_cast<int>(QEasingCurve::InExpo), 43},
    {sipName_InOutBack, static_cast<int>(QEasingCurve::InOutBack), 43},
    {sipName_InOutBounce, static_cast<int>(QEasingCurve::InOutBounce), 43},
    {sipName_InOutCirc, static_cast<int>(QEasingCurve::InOutCirc), 43},
    {sipName_InOutCubic, static_cast<int>(QEasingCurve::InOutCubic), 43},
    {sipName_InOutElastic, static_cast<int>(QEasingCurve::InOutElastic), 43},
    {sipName_InOutExpo, static_cast<int>(QEasingCurve::InOutExpo), 43},
    {sipName_InOutQuad, static_cast<int>(QEasingCurve::InOutQuad), 43},
    {sipName_InOutQuart, static_cast<int>(QEasingCurve::InOutQuart), 43},
    {sipName_InOutQuint, static_cast<int>(QEasingCurve::InOutQuint), 43},
    {sipName_InOutSine, static_cast<int>(QEasingCurve::InOutSine), 43},
    {sipName_InQuad, static_cast<int>(QEasingCurve::InQuad), 43},
    {sipName_InQuart, static_cast<int>(QEasingCurve::InQuart), 43},
    {sipName_InQuint, static_cast<int>(QEasingCurve::InQuint), 43},
    {sipName_InSine, static_cast<int>(QEasingCurve::InSine), 43},
    {sipName_Linear, static_cast<int>(QEasingCurve::Linear), 43},
    {sipName_OutBack, static_cast<int>(QEasingCurve::OutBack), 43},
    {sipName_OutBounce, static_cast<int>(QEasingCurve::OutBounce), 43},
    {sipName_OutCirc, static_cast<int>(QEasingCurve::OutCirc), 43},
    {sipName_OutCubic, static_cast<int>(QEasingCurve::OutCubic), 43},
    {sipName_OutCurve, static_cast<int>(QEasingCurve::OutCurve), 43},
    {sipName_OutElastic, static_cast<int>(QEasingCurve::OutElastic), 43},
    {sipName_OutExpo, static_cast<int>(QEasingCurve::OutExpo), 43},
    {sipName_OutInBack, static_cast<int>(QEasingCurve::OutInBack), 43},
    {sipName_OutInBounce, static_cast<int>(QEasingCurve::OutInBounce), 43},
    {sipName_OutInCirc, static_cast<int>(QEasingCurve::OutInCirc), 43},
    {sipName_OutInCubic, static_cast<int>(QEasingCurve::OutInCubic), 43},
    {sipName_OutInElastic, static_cast<int>(QEasingCurve::OutInElastic), 43},
    {sipName_OutInExpo, static_cast<int>(QEasingCurve::OutInExpo), 43},
    {sipName_OutInQuad, static_cast<int>(QEasingCurve::OutInQuad), 43},
    {sipName_OutInQuart, static_cast<int>(QEasingCurve::OutInQuart), 43},
    {sipName_OutInQuint, static_cast<int>(QEasingCurve::OutInQuint), 43},
    {sipName_OutInSine, static_cast<int>(QEasingCurve::OutInSine), 43},
    {sipName_OutQuad, static_cast<int>(QEasingCurve::OutQuad), 43},
    {sipName_OutQuart, static_cast<int>(QEasingCurve::OutQuart), 43},
    {sipName_OutQuint, static_cast<int>(QEasingCurve::OutQuint), 43},
    {sipName_OutSine, static_cast<int>(QEasingCurve::OutSine), 43},
    {sipName_SineCurve, static_cast<int>(QEasingCurve::SineCurve), 43},
    {sipName_TCBSpline, static_cast<int>(QEasingCurve::TCBSpline), 43},
};

PyDoc_STRVAR(doc_QEasingCurve, "\1QEasingCurve(type: QEasingCurve.Type = QEasingCurve.Linear)\n"
    "QEasingCurve(QEasingCurve)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QEasingCurve = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QEasingCurve,
        {0}
    },
    {
        sipNameNr_QEasingCurve,
        {0, 0, 1},
        15, methods_QEasingCurve,
        48, enummembers_QEasingCurve,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QEasingCurve,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QEasingCurve,
    init_type_QEasingCurve,
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
    dealloc_QEasingCurve,
    assign_QEasingCurve,
    array_QEasingCurve,
    copy_QEasingCurve,
    release_QEasingCurve,
    0,
    convertTo_QEasingCurve,
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
