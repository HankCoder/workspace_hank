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

#include "sipAPIQtNetwork.h"

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNetwork/qsslellipticcurve.sip"
#include <qsslellipticcurve.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQSslEllipticCurve.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQSslEllipticCurve.cpp"


PyDoc_STRVAR(doc_QSslEllipticCurve_fromShortName, "fromShortName(str) -> QSslEllipticCurve");

extern "C" {static PyObject *meth_QSslEllipticCurve_fromShortName(PyObject *, PyObject *);}
static PyObject *meth_QSslEllipticCurve_fromShortName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QSslEllipticCurve*sipRes;

            sipRes = new QSslEllipticCurve(QSslEllipticCurve::fromShortName(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSslEllipticCurve,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslEllipticCurve, sipName_fromShortName, doc_QSslEllipticCurve_fromShortName);

    return NULL;
}


PyDoc_STRVAR(doc_QSslEllipticCurve_fromLongName, "fromLongName(str) -> QSslEllipticCurve");

extern "C" {static PyObject *meth_QSslEllipticCurve_fromLongName(PyObject *, PyObject *);}
static PyObject *meth_QSslEllipticCurve_fromLongName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QSslEllipticCurve*sipRes;

            sipRes = new QSslEllipticCurve(QSslEllipticCurve::fromLongName(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSslEllipticCurve,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslEllipticCurve, sipName_fromLongName, doc_QSslEllipticCurve_fromLongName);

    return NULL;
}


PyDoc_STRVAR(doc_QSslEllipticCurve_shortName, "shortName(self) -> str");

extern "C" {static PyObject *meth_QSslEllipticCurve_shortName(PyObject *, PyObject *);}
static PyObject *meth_QSslEllipticCurve_shortName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslEllipticCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslEllipticCurve, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->shortName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslEllipticCurve, sipName_shortName, doc_QSslEllipticCurve_shortName);

    return NULL;
}


PyDoc_STRVAR(doc_QSslEllipticCurve_longName, "longName(self) -> str");

extern "C" {static PyObject *meth_QSslEllipticCurve_longName(PyObject *, PyObject *);}
static PyObject *meth_QSslEllipticCurve_longName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslEllipticCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslEllipticCurve, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->longName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslEllipticCurve, sipName_longName, doc_QSslEllipticCurve_longName);

    return NULL;
}


PyDoc_STRVAR(doc_QSslEllipticCurve_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QSslEllipticCurve_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSslEllipticCurve_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslEllipticCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslEllipticCurve, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslEllipticCurve, sipName_isValid, doc_QSslEllipticCurve_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QSslEllipticCurve_isTlsNamedCurve, "isTlsNamedCurve(self) -> bool");

extern "C" {static PyObject *meth_QSslEllipticCurve_isTlsNamedCurve(PyObject *, PyObject *);}
static PyObject *meth_QSslEllipticCurve_isTlsNamedCurve(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslEllipticCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslEllipticCurve, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isTlsNamedCurve();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslEllipticCurve, sipName_isTlsNamedCurve, doc_QSslEllipticCurve_isTlsNamedCurve);

    return NULL;
}


extern "C" {static PyObject *slot_QSslEllipticCurve___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSslEllipticCurve___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslEllipticCurve *sipCpp = reinterpret_cast<QSslEllipticCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslEllipticCurve));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSslEllipticCurve* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslEllipticCurve, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSslEllipticCurve,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSslEllipticCurve___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSslEllipticCurve___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslEllipticCurve *sipCpp = reinterpret_cast<QSslEllipticCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslEllipticCurve));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSslEllipticCurve* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslEllipticCurve, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSslEllipticCurve,sipSelf,sipArg);
}


extern "C" {static long slot_QSslEllipticCurve___hash__(PyObject *);}
static long slot_QSslEllipticCurve___hash__(PyObject *sipSelf)
{
    QSslEllipticCurve *sipCpp = reinterpret_cast<QSslEllipticCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslEllipticCurve));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtNetwork/qsslellipticcurve.sip"
        sipRes = qHash(*sipCpp);
#line 287 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtNetwork/sipQtNetworkQSslEllipticCurve.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslEllipticCurve(void *, int);}
static void release_QSslEllipticCurve(void *sipCppV,int)
{
    delete reinterpret_cast<QSslEllipticCurve *>(sipCppV);
}


extern "C" {static void assign_QSslEllipticCurve(void *, SIP_SSIZE_T, const void *);}
static void assign_QSslEllipticCurve(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSslEllipticCurve *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSslEllipticCurve *>(sipSrc);
}


extern "C" {static void *array_QSslEllipticCurve(SIP_SSIZE_T);}
static void *array_QSslEllipticCurve(SIP_SSIZE_T sipNrElem)
{
    return new QSslEllipticCurve[sipNrElem];
}


extern "C" {static void *copy_QSslEllipticCurve(const void *, SIP_SSIZE_T);}
static void *copy_QSslEllipticCurve(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSslEllipticCurve(reinterpret_cast<const QSslEllipticCurve *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslEllipticCurve(sipSimpleWrapper *);}
static void dealloc_QSslEllipticCurve(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSslEllipticCurve(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSslEllipticCurve(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSslEllipticCurve(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSslEllipticCurve *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSslEllipticCurve();

            return sipCpp;
        }
    }

    {
        const QSslEllipticCurve* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSslEllipticCurve, &a0))
        {
            sipCpp = new QSslEllipticCurve(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSslEllipticCurve[] = {
    {(void *)slot_QSslEllipticCurve___eq__, eq_slot},
    {(void *)slot_QSslEllipticCurve___ne__, ne_slot},
    {(void *)slot_QSslEllipticCurve___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSslEllipticCurve[] = {
    {SIP_MLNAME_CAST(sipName_fromLongName), meth_QSslEllipticCurve_fromLongName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslEllipticCurve_fromLongName)},
    {SIP_MLNAME_CAST(sipName_fromShortName), meth_QSslEllipticCurve_fromShortName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslEllipticCurve_fromShortName)},
    {SIP_MLNAME_CAST(sipName_isTlsNamedCurve), meth_QSslEllipticCurve_isTlsNamedCurve, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslEllipticCurve_isTlsNamedCurve)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSslEllipticCurve_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslEllipticCurve_isValid)},
    {SIP_MLNAME_CAST(sipName_longName), meth_QSslEllipticCurve_longName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslEllipticCurve_longName)},
    {SIP_MLNAME_CAST(sipName_shortName), meth_QSslEllipticCurve_shortName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslEllipticCurve_shortName)}
};

PyDoc_STRVAR(doc_QSslEllipticCurve, "\1QSslEllipticCurve()\n"
    "QSslEllipticCurve(QSslEllipticCurve)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QSslEllipticCurve = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSslEllipticCurve,
        {0}
    },
    {
        sipNameNr_QSslEllipticCurve,
        {0, 0, 1},
        6, methods_QSslEllipticCurve,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSslEllipticCurve,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSslEllipticCurve,
    init_type_QSslEllipticCurve,
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
    dealloc_QSslEllipticCurve,
    assign_QSslEllipticCurve,
    array_QSslEllipticCurve,
    copy_QSslEllipticCurve,
    release_QSslEllipticCurve,
    0,
    0,
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
