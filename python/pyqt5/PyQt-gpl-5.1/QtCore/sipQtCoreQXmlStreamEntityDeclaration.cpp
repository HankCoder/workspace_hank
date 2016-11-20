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

#line 276 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQXmlStreamEntityDeclaration.cpp"

#line 68 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQXmlStreamEntityDeclaration.cpp"


PyDoc_STRVAR(doc_QXmlStreamEntityDeclaration_name, "name(self) -> object");

extern "C" {static PyObject *meth_QXmlStreamEntityDeclaration_name(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamEntityDeclaration_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamEntityDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamEntityDeclaration, sipName_name, doc_QXmlStreamEntityDeclaration_name);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamEntityDeclaration_notationName, "notationName(self) -> object");

extern "C" {static PyObject *meth_QXmlStreamEntityDeclaration_notationName(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamEntityDeclaration_notationName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamEntityDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->notationName());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamEntityDeclaration, sipName_notationName, doc_QXmlStreamEntityDeclaration_notationName);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamEntityDeclaration_systemId, "systemId(self) -> object");

extern "C" {static PyObject *meth_QXmlStreamEntityDeclaration_systemId(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamEntityDeclaration_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamEntityDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->systemId());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamEntityDeclaration, sipName_systemId, doc_QXmlStreamEntityDeclaration_systemId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamEntityDeclaration_publicId, "publicId(self) -> object");

extern "C" {static PyObject *meth_QXmlStreamEntityDeclaration_publicId(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamEntityDeclaration_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamEntityDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->publicId());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamEntityDeclaration, sipName_publicId, doc_QXmlStreamEntityDeclaration_publicId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamEntityDeclaration_value, "value(self) -> object");

extern "C" {static PyObject *meth_QXmlStreamEntityDeclaration_value(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamEntityDeclaration_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamEntityDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamEntityDeclaration, sipName_value, doc_QXmlStreamEntityDeclaration_value);

    return NULL;
}


extern "C" {static PyObject *slot_QXmlStreamEntityDeclaration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamEntityDeclaration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamEntityDeclaration *sipCpp = reinterpret_cast<QXmlStreamEntityDeclaration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamEntityDeclaration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamEntityDeclaration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlStreamEntityDeclaration::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QXmlStreamEntityDeclaration,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlStreamEntityDeclaration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamEntityDeclaration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamEntityDeclaration *sipCpp = reinterpret_cast<QXmlStreamEntityDeclaration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamEntityDeclaration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamEntityDeclaration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamEntityDeclaration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlStreamEntityDeclaration::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QXmlStreamEntityDeclaration,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamEntityDeclaration(void *, int);}
static void release_QXmlStreamEntityDeclaration(void *sipCppV,int)
{
    delete reinterpret_cast<QXmlStreamEntityDeclaration *>(sipCppV);
}


extern "C" {static void assign_QXmlStreamEntityDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlStreamEntityDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlStreamEntityDeclaration *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlStreamEntityDeclaration *>(sipSrc);
}


extern "C" {static void *array_QXmlStreamEntityDeclaration(SIP_SSIZE_T);}
static void *array_QXmlStreamEntityDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QXmlStreamEntityDeclaration[sipNrElem];
}


extern "C" {static void *copy_QXmlStreamEntityDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QXmlStreamEntityDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlStreamEntityDeclaration(reinterpret_cast<const QXmlStreamEntityDeclaration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlStreamEntityDeclaration(sipSimpleWrapper *);}
static void dealloc_QXmlStreamEntityDeclaration(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlStreamEntityDeclaration(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlStreamEntityDeclaration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlStreamEntityDeclaration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlStreamEntityDeclaration *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QXmlStreamEntityDeclaration();

            return sipCpp;
        }
    }

    {
        const QXmlStreamEntityDeclaration* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlStreamEntityDeclaration, &a0))
        {
            sipCpp = new QXmlStreamEntityDeclaration(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlStreamEntityDeclaration[] = {
    {(void *)slot_QXmlStreamEntityDeclaration___ne__, ne_slot},
    {(void *)slot_QXmlStreamEntityDeclaration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlStreamEntityDeclaration[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QXmlStreamEntityDeclaration_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamEntityDeclaration_name)},
    {SIP_MLNAME_CAST(sipName_notationName), meth_QXmlStreamEntityDeclaration_notationName, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamEntityDeclaration_notationName)},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QXmlStreamEntityDeclaration_publicId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamEntityDeclaration_publicId)},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QXmlStreamEntityDeclaration_systemId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamEntityDeclaration_systemId)},
    {SIP_MLNAME_CAST(sipName_value), meth_QXmlStreamEntityDeclaration_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamEntityDeclaration_value)}
};

PyDoc_STRVAR(doc_QXmlStreamEntityDeclaration, "\1QXmlStreamEntityDeclaration()\n"
    "QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QXmlStreamEntityDeclaration = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamEntityDeclaration,
        {0}
    },
    {
        sipNameNr_QXmlStreamEntityDeclaration,
        {0, 0, 1},
        5, methods_QXmlStreamEntityDeclaration,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlStreamEntityDeclaration,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlStreamEntityDeclaration,
    init_type_QXmlStreamEntityDeclaration,
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
    dealloc_QXmlStreamEntityDeclaration,
    assign_QXmlStreamEntityDeclaration,
    array_QXmlStreamEntityDeclaration,
    copy_QXmlStreamEntityDeclaration,
    release_QXmlStreamEntityDeclaration,
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
