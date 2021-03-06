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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplacesearchresult.sip"
#include <qplacesearchresult.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceSearchResult.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplaceicon.sip"
#include <qplaceicon.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceSearchResult.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceSearchResult.cpp"


class sipQPlaceSearchResult : public QPlaceSearchResult
{
public:
    sipQPlaceSearchResult();
    sipQPlaceSearchResult(const QPlaceSearchResult&);
    ~sipQPlaceSearchResult();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPlaceSearchResult(const sipQPlaceSearchResult &);
    sipQPlaceSearchResult &operator = (const sipQPlaceSearchResult &);
};

sipQPlaceSearchResult::sipQPlaceSearchResult(): QPlaceSearchResult(), sipPySelf(0)
{
}

sipQPlaceSearchResult::sipQPlaceSearchResult(const QPlaceSearchResult& a0): QPlaceSearchResult(a0), sipPySelf(0)
{
}

sipQPlaceSearchResult::~sipQPlaceSearchResult()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QPlaceSearchResult_type, "type(self) -> QPlaceSearchResult.SearchResultType");

extern "C" {static PyObject *meth_QPlaceSearchResult_type(PyObject *, PyObject *);}
static PyObject *meth_QPlaceSearchResult_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceSearchResult, &sipCpp))
        {
            QPlaceSearchResult::SearchResultType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QPlaceSearchResult_SearchResultType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceSearchResult, sipName_type, doc_QPlaceSearchResult_type);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceSearchResult_title, "title(self) -> str");

extern "C" {static PyObject *meth_QPlaceSearchResult_title(PyObject *, PyObject *);}
static PyObject *meth_QPlaceSearchResult_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceSearchResult, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->title());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceSearchResult, sipName_title, doc_QPlaceSearchResult_title);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceSearchResult_setTitle, "setTitle(self, str)");

extern "C" {static PyObject *meth_QPlaceSearchResult_setTitle(PyObject *, PyObject *);}
static PyObject *meth_QPlaceSearchResult_setTitle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceSearchResult, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setTitle(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceSearchResult, sipName_setTitle, doc_QPlaceSearchResult_setTitle);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceSearchResult_icon, "icon(self) -> QPlaceIcon");

extern "C" {static PyObject *meth_QPlaceSearchResult_icon(PyObject *, PyObject *);}
static PyObject *meth_QPlaceSearchResult_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceSearchResult, &sipCpp))
        {
            QPlaceIcon*sipRes;

            sipRes = new QPlaceIcon(sipCpp->icon());

            return sipConvertFromNewType(sipRes,sipType_QPlaceIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceSearchResult, sipName_icon, doc_QPlaceSearchResult_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceSearchResult_setIcon, "setIcon(self, QPlaceIcon)");

extern "C" {static PyObject *meth_QPlaceSearchResult_setIcon(PyObject *, PyObject *);}
static PyObject *meth_QPlaceSearchResult_setIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceIcon* a0;
        QPlaceSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPlaceSearchResult, &sipCpp, sipType_QPlaceIcon, &a0))
        {
            sipCpp->setIcon(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceSearchResult, sipName_setIcon, doc_QPlaceSearchResult_setIcon);

    return NULL;
}


extern "C" {static PyObject *slot_QPlaceSearchResult___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPlaceSearchResult___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPlaceSearchResult *sipCpp = reinterpret_cast<QPlaceSearchResult *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPlaceSearchResult));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPlaceSearchResult* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPlaceSearchResult, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPlaceSearchResult::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QPlaceSearchResult,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPlaceSearchResult___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPlaceSearchResult___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPlaceSearchResult *sipCpp = reinterpret_cast<QPlaceSearchResult *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPlaceSearchResult));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPlaceSearchResult* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPlaceSearchResult, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPlaceSearchResult::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QPlaceSearchResult,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlaceSearchResult(void *, int);}
static void release_QPlaceSearchResult(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPlaceSearchResult *>(sipCppV);
    else
        delete reinterpret_cast<QPlaceSearchResult *>(sipCppV);
}


extern "C" {static void assign_QPlaceSearchResult(void *, SIP_SSIZE_T, const void *);}
static void assign_QPlaceSearchResult(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPlaceSearchResult *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPlaceSearchResult *>(sipSrc);
}


extern "C" {static void *array_QPlaceSearchResult(SIP_SSIZE_T);}
static void *array_QPlaceSearchResult(SIP_SSIZE_T sipNrElem)
{
    return new QPlaceSearchResult[sipNrElem];
}


extern "C" {static void *copy_QPlaceSearchResult(const void *, SIP_SSIZE_T);}
static void *copy_QPlaceSearchResult(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPlaceSearchResult(reinterpret_cast<const QPlaceSearchResult *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPlaceSearchResult(sipSimpleWrapper *);}
static void dealloc_QPlaceSearchResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPlaceSearchResult *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPlaceSearchResult(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPlaceSearchResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlaceSearchResult(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPlaceSearchResult *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPlaceSearchResult();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPlaceSearchResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceSearchResult, &a0))
        {
            sipCpp = new sipQPlaceSearchResult(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPlaceSearchResult[] = {
    {(void *)slot_QPlaceSearchResult___ne__, ne_slot},
    {(void *)slot_QPlaceSearchResult___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPlaceSearchResult[] = {
    {SIP_MLNAME_CAST(sipName_icon), meth_QPlaceSearchResult_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceSearchResult_icon)},
    {SIP_MLNAME_CAST(sipName_setIcon), meth_QPlaceSearchResult_setIcon, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceSearchResult_setIcon)},
    {SIP_MLNAME_CAST(sipName_setTitle), meth_QPlaceSearchResult_setTitle, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceSearchResult_setTitle)},
    {SIP_MLNAME_CAST(sipName_title), meth_QPlaceSearchResult_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceSearchResult_title)},
    {SIP_MLNAME_CAST(sipName_type), meth_QPlaceSearchResult_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceSearchResult_type)}
};

static sipEnumMemberDef enummembers_QPlaceSearchResult[] = {
    {sipName_PlaceResult, static_cast<int>(QPlaceSearchResult::PlaceResult), 76},
    {sipName_ProposedSearchResult, static_cast<int>(QPlaceSearchResult::ProposedSearchResult), 76},
    {sipName_UnknownSearchResult, static_cast<int>(QPlaceSearchResult::UnknownSearchResult), 76},
};

PyDoc_STRVAR(doc_QPlaceSearchResult, "\1QPlaceSearchResult()\n"
    "QPlaceSearchResult(QPlaceSearchResult)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QPlaceSearchResult = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPlaceSearchResult,
        {0}
    },
    {
        sipNameNr_QPlaceSearchResult,
        {0, 0, 1},
        5, methods_QPlaceSearchResult,
        3, enummembers_QPlaceSearchResult,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlaceSearchResult,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPlaceSearchResult,
    init_type_QPlaceSearchResult,
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
    dealloc_QPlaceSearchResult,
    assign_QPlaceSearchResult,
    array_QPlaceSearchResult,
    copy_QPlaceSearchResult,
    release_QPlaceSearchResult,
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
