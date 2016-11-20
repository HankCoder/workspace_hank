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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplaceattribute.sip"
#include <qplaceattribute.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceAttribute.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceAttribute.cpp"


class sipQPlaceAttribute : public QPlaceAttribute
{
public:
    sipQPlaceAttribute();
    sipQPlaceAttribute(const QPlaceAttribute&);
    ~sipQPlaceAttribute();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPlaceAttribute(const sipQPlaceAttribute &);
    sipQPlaceAttribute &operator = (const sipQPlaceAttribute &);
};

sipQPlaceAttribute::sipQPlaceAttribute(): QPlaceAttribute(), sipPySelf(0)
{
}

sipQPlaceAttribute::sipQPlaceAttribute(const QPlaceAttribute& a0): QPlaceAttribute(a0), sipPySelf(0)
{
}

sipQPlaceAttribute::~sipQPlaceAttribute()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QPlaceAttribute_label, "label(self) -> str");

extern "C" {static PyObject *meth_QPlaceAttribute_label(PyObject *, PyObject *);}
static PyObject *meth_QPlaceAttribute_label(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceAttribute, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->label());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceAttribute, sipName_label, doc_QPlaceAttribute_label);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceAttribute_setLabel, "setLabel(self, str)");

extern "C" {static PyObject *meth_QPlaceAttribute_setLabel(PyObject *, PyObject *);}
static PyObject *meth_QPlaceAttribute_setLabel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceAttribute, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setLabel(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceAttribute, sipName_setLabel, doc_QPlaceAttribute_setLabel);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceAttribute_text, "text(self) -> str");

extern "C" {static PyObject *meth_QPlaceAttribute_text(PyObject *, PyObject *);}
static PyObject *meth_QPlaceAttribute_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceAttribute, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceAttribute, sipName_text, doc_QPlaceAttribute_text);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceAttribute_setText, "setText(self, str)");

extern "C" {static PyObject *meth_QPlaceAttribute_setText(PyObject *, PyObject *);}
static PyObject *meth_QPlaceAttribute_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceAttribute, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceAttribute, sipName_setText, doc_QPlaceAttribute_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceAttribute_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QPlaceAttribute_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QPlaceAttribute_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceAttribute, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceAttribute, sipName_isEmpty, doc_QPlaceAttribute_isEmpty);

    return NULL;
}


extern "C" {static PyObject *slot_QPlaceAttribute___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPlaceAttribute___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPlaceAttribute *sipCpp = reinterpret_cast<QPlaceAttribute *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPlaceAttribute));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPlaceAttribute* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPlaceAttribute, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPlaceAttribute::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QPlaceAttribute,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPlaceAttribute___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPlaceAttribute___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPlaceAttribute *sipCpp = reinterpret_cast<QPlaceAttribute *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPlaceAttribute));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPlaceAttribute* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPlaceAttribute, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPlaceAttribute::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QPlaceAttribute,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlaceAttribute(void *, int);}
static void release_QPlaceAttribute(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPlaceAttribute *>(sipCppV);
    else
        delete reinterpret_cast<QPlaceAttribute *>(sipCppV);
}


extern "C" {static void assign_QPlaceAttribute(void *, SIP_SSIZE_T, const void *);}
static void assign_QPlaceAttribute(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPlaceAttribute *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPlaceAttribute *>(sipSrc);
}


extern "C" {static void *array_QPlaceAttribute(SIP_SSIZE_T);}
static void *array_QPlaceAttribute(SIP_SSIZE_T sipNrElem)
{
    return new QPlaceAttribute[sipNrElem];
}


extern "C" {static void *copy_QPlaceAttribute(const void *, SIP_SSIZE_T);}
static void *copy_QPlaceAttribute(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPlaceAttribute(reinterpret_cast<const QPlaceAttribute *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPlaceAttribute(sipSimpleWrapper *);}
static void dealloc_QPlaceAttribute(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPlaceAttribute *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPlaceAttribute(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPlaceAttribute(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlaceAttribute(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPlaceAttribute *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPlaceAttribute();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPlaceAttribute* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceAttribute, &a0))
        {
            sipCpp = new sipQPlaceAttribute(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPlaceAttribute[] = {
    {(void *)slot_QPlaceAttribute___ne__, ne_slot},
    {(void *)slot_QPlaceAttribute___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPlaceAttribute[] = {
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QPlaceAttribute_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceAttribute_isEmpty)},
    {SIP_MLNAME_CAST(sipName_label), meth_QPlaceAttribute_label, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceAttribute_label)},
    {SIP_MLNAME_CAST(sipName_setLabel), meth_QPlaceAttribute_setLabel, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceAttribute_setLabel)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QPlaceAttribute_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceAttribute_setText)},
    {SIP_MLNAME_CAST(sipName_text), meth_QPlaceAttribute_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceAttribute_text)}
};


extern "C" {static PyObject *varget_QPlaceAttribute_OpeningHours(void *, PyObject *, PyObject *);}
static PyObject *varget_QPlaceAttribute_OpeningHours(void *, PyObject *, PyObject *)
{
    static PyObject *sipPy = NULL;
    const QString*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = new QString(QPlaceAttribute::OpeningHours);

    sipPy = sipConvertFromNewType(const_cast<QString *>(sipVal), sipType_QString, NULL);
    Py_XINCREF(sipPy);

    return sipPy;
}


extern "C" {static PyObject *varget_QPlaceAttribute_Payment(void *, PyObject *, PyObject *);}
static PyObject *varget_QPlaceAttribute_Payment(void *, PyObject *, PyObject *)
{
    static PyObject *sipPy = NULL;
    const QString*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = new QString(QPlaceAttribute::Payment);

    sipPy = sipConvertFromNewType(const_cast<QString *>(sipVal), sipType_QString, NULL);
    Py_XINCREF(sipPy);

    return sipPy;
}


extern "C" {static PyObject *varget_QPlaceAttribute_Provider(void *, PyObject *, PyObject *);}
static PyObject *varget_QPlaceAttribute_Provider(void *, PyObject *, PyObject *)
{
    static PyObject *sipPy = NULL;
    const QString*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = new QString(QPlaceAttribute::Provider);

    sipPy = sipConvertFromNewType(const_cast<QString *>(sipVal), sipType_QString, NULL);
    Py_XINCREF(sipPy);

    return sipPy;
}

sipVariableDef variables_QPlaceAttribute[] = {
    {ClassVariable, sipName_OpeningHours, (PyMethodDef *)varget_QPlaceAttribute_OpeningHours, NULL, NULL, NULL},
    {ClassVariable, sipName_Payment, (PyMethodDef *)varget_QPlaceAttribute_Payment, NULL, NULL, NULL},
    {ClassVariable, sipName_Provider, (PyMethodDef *)varget_QPlaceAttribute_Provider, NULL, NULL, NULL},
};

PyDoc_STRVAR(doc_QPlaceAttribute, "\1QPlaceAttribute()\n"
    "QPlaceAttribute(QPlaceAttribute)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QPlaceAttribute = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPlaceAttribute,
        {0}
    },
    {
        sipNameNr_QPlaceAttribute,
        {0, 0, 1},
        5, methods_QPlaceAttribute,
        0, 0,
        3, variables_QPlaceAttribute,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlaceAttribute,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPlaceAttribute,
    init_type_QPlaceAttribute,
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
    dealloc_QPlaceAttribute,
    assign_QPlaceAttribute,
    array_QPlaceAttribute,
    copy_QPlaceAttribute,
    release_QPlaceAttribute,
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
