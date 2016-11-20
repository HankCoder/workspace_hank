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

#include "sipAPIQtLocation.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplaceresult.sip"
#include <qplaceresult.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceResult.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplacesearchresult.sip"
#include <qplacesearchresult.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceResult.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplace.sip"
#include <qplace.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceResult.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplaceicon.sip"
#include <qplaceicon.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceResult.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceResult.cpp"


class sipQPlaceResult : public QPlaceResult
{
public:
    sipQPlaceResult();
    sipQPlaceResult(const QPlaceSearchResult&);
    sipQPlaceResult(const QPlaceResult&);
    ~sipQPlaceResult();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPlaceResult(const sipQPlaceResult &);
    sipQPlaceResult &operator = (const sipQPlaceResult &);
};

sipQPlaceResult::sipQPlaceResult(): QPlaceResult(), sipPySelf(0)
{
}

sipQPlaceResult::sipQPlaceResult(const QPlaceSearchResult& a0): QPlaceResult(a0), sipPySelf(0)
{
}

sipQPlaceResult::sipQPlaceResult(const QPlaceResult& a0): QPlaceResult(a0), sipPySelf(0)
{
}

sipQPlaceResult::~sipQPlaceResult()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QPlaceResult_distance, "distance(self) -> float");

extern "C" {static PyObject *meth_QPlaceResult_distance(PyObject *, PyObject *);}
static PyObject *meth_QPlaceResult_distance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceResult, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->distance();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceResult, sipName_distance, doc_QPlaceResult_distance);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceResult_setDistance, "setDistance(self, float)");

extern "C" {static PyObject *meth_QPlaceResult_setDistance(PyObject *, PyObject *);}
static PyObject *meth_QPlaceResult_setDistance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPlaceResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPlaceResult, &sipCpp, &a0))
        {
            sipCpp->setDistance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceResult, sipName_setDistance, doc_QPlaceResult_setDistance);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceResult_place, "place(self) -> QPlace");

extern "C" {static PyObject *meth_QPlaceResult_place(PyObject *, PyObject *);}
static PyObject *meth_QPlaceResult_place(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceResult, &sipCpp))
        {
            QPlace*sipRes;

            sipRes = new QPlace(sipCpp->place());

            return sipConvertFromNewType(sipRes,sipType_QPlace,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceResult, sipName_place, doc_QPlaceResult_place);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceResult_setPlace, "setPlace(self, QPlace)");

extern "C" {static PyObject *meth_QPlaceResult_setPlace(PyObject *, PyObject *);}
static PyObject *meth_QPlaceResult_setPlace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlace* a0;
        QPlaceResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPlaceResult, &sipCpp, sipType_QPlace, &a0))
        {
            sipCpp->setPlace(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceResult, sipName_setPlace, doc_QPlaceResult_setPlace);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceResult_isSponsored, "isSponsored(self) -> bool");

extern "C" {static PyObject *meth_QPlaceResult_isSponsored(PyObject *, PyObject *);}
static PyObject *meth_QPlaceResult_isSponsored(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceResult, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSponsored();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceResult, sipName_isSponsored, doc_QPlaceResult_isSponsored);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceResult_setSponsored, "setSponsored(self, bool)");

extern "C" {static PyObject *meth_QPlaceResult_setSponsored(PyObject *, PyObject *);}
static PyObject *meth_QPlaceResult_setSponsored(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QPlaceResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QPlaceResult, &sipCpp, &a0))
        {
            sipCpp->setSponsored(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceResult, sipName_setSponsored, doc_QPlaceResult_setSponsored);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlaceResult(void *, int);}
static void release_QPlaceResult(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPlaceResult *>(sipCppV);
    else
        delete reinterpret_cast<QPlaceResult *>(sipCppV);
}


extern "C" {static void assign_QPlaceResult(void *, SIP_SSIZE_T, const void *);}
static void assign_QPlaceResult(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPlaceResult *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPlaceResult *>(sipSrc);
}


extern "C" {static void *array_QPlaceResult(SIP_SSIZE_T);}
static void *array_QPlaceResult(SIP_SSIZE_T sipNrElem)
{
    return new QPlaceResult[sipNrElem];
}


extern "C" {static void *copy_QPlaceResult(const void *, SIP_SSIZE_T);}
static void *copy_QPlaceResult(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPlaceResult(reinterpret_cast<const QPlaceResult *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPlaceResult(sipSimpleWrapper *);}
static void dealloc_QPlaceResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPlaceResult *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPlaceResult(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPlaceResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlaceResult(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPlaceResult *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPlaceResult();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPlaceSearchResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceSearchResult, &a0))
        {
            sipCpp = new sipQPlaceResult(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPlaceResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceResult, &a0))
        {
            sipCpp = new sipQPlaceResult(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPlaceResult[] = {{75, 255, 1}};


static PyMethodDef methods_QPlaceResult[] = {
    {SIP_MLNAME_CAST(sipName_distance), meth_QPlaceResult_distance, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceResult_distance)},
    {SIP_MLNAME_CAST(sipName_isSponsored), meth_QPlaceResult_isSponsored, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceResult_isSponsored)},
    {SIP_MLNAME_CAST(sipName_place), meth_QPlaceResult_place, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceResult_place)},
    {SIP_MLNAME_CAST(sipName_setDistance), meth_QPlaceResult_setDistance, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceResult_setDistance)},
    {SIP_MLNAME_CAST(sipName_setPlace), meth_QPlaceResult_setPlace, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceResult_setPlace)},
    {SIP_MLNAME_CAST(sipName_setSponsored), meth_QPlaceResult_setSponsored, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceResult_setSponsored)}
};

PyDoc_STRVAR(doc_QPlaceResult, "\1QPlaceResult()\n"
    "QPlaceResult(QPlaceSearchResult)\n"
    "QPlaceResult(QPlaceResult)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QPlaceResult = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPlaceResult,
        {0}
    },
    {
        sipNameNr_QPlaceResult,
        {0, 0, 1},
        6, methods_QPlaceResult,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlaceResult,
    -1,
    -1,
    supers_QPlaceResult,
    0,
    init_type_QPlaceResult,
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
    dealloc_QPlaceResult,
    assign_QPlaceResult,
    array_QPlaceResult,
    copy_QPlaceResult,
    release_QPlaceResult,
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