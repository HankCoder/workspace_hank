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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/quuid.sip"
#include <quuid.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQUuid.cpp"

#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQUuid.cpp"
#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQUuid.cpp"


PyDoc_STRVAR(doc_QUuid_toString, "toString(self) -> object");

extern "C" {static PyObject *meth_QUuid_toString(PyObject *, PyObject *);}
static PyObject *meth_QUuid_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_toString, doc_QUuid_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QUuid_isNull(PyObject *, PyObject *);}
static PyObject *meth_QUuid_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_isNull, doc_QUuid_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_createUuid, "createUuid() -> QUuid");

extern "C" {static PyObject *meth_QUuid_createUuid(PyObject *, PyObject *);}
static PyObject *meth_QUuid_createUuid(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QUuid*sipRes;

            sipRes = new QUuid(QUuid::createUuid());

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_createUuid, doc_QUuid_createUuid);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_createUuidV3, "createUuidV3(QUuid, QByteArray) -> QUuid\n"
    "createUuidV3(QUuid, object) -> QUuid");

extern "C" {static PyObject *meth_QUuid_createUuidV3(PyObject *, PyObject *);}
static PyObject *meth_QUuid_createUuidV3(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;
        const QByteArray* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J1", sipType_QUuid, &a0, sipType_QByteArray, &a1, &a1State))
        {
            QUuid*sipRes;

            sipRes = new QUuid(QUuid::createUuidV3(*a0,*a1));
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    {
        const QUuid* a0;
        const QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J1", sipType_QUuid, &a0, sipType_QString,&a1, &a1State))
        {
            QUuid*sipRes;

            sipRes = new QUuid(QUuid::createUuidV3(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_createUuidV3, doc_QUuid_createUuidV3);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_createUuidV5, "createUuidV5(QUuid, QByteArray) -> QUuid\n"
    "createUuidV5(QUuid, object) -> QUuid");

extern "C" {static PyObject *meth_QUuid_createUuidV5(PyObject *, PyObject *);}
static PyObject *meth_QUuid_createUuidV5(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;
        const QByteArray* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J1", sipType_QUuid, &a0, sipType_QByteArray, &a1, &a1State))
        {
            QUuid*sipRes;

            sipRes = new QUuid(QUuid::createUuidV5(*a0,*a1));
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    {
        const QUuid* a0;
        const QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J1", sipType_QUuid, &a0, sipType_QString,&a1, &a1State))
        {
            QUuid*sipRes;

            sipRes = new QUuid(QUuid::createUuidV5(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_createUuidV5, doc_QUuid_createUuidV5);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_variant, "variant(self) -> QUuid.Variant");

extern "C" {static PyObject *meth_QUuid_variant(PyObject *, PyObject *);}
static PyObject *meth_QUuid_variant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QUuid::Variant sipRes;

            sipRes = sipCpp->variant();

            return sipConvertFromEnum(sipRes,sipType_QUuid_Variant);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_variant, doc_QUuid_variant);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_version, "version(self) -> QUuid.Version");

extern "C" {static PyObject *meth_QUuid_version(PyObject *, PyObject *);}
static PyObject *meth_QUuid_version(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QUuid::Version sipRes;

            sipRes = sipCpp->version();

            return sipConvertFromEnum(sipRes,sipType_QUuid_Version);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_version, doc_QUuid_version);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_toByteArray, "toByteArray(self) -> QByteArray");

extern "C" {static PyObject *meth_QUuid_toByteArray(PyObject *, PyObject *);}
static PyObject *meth_QUuid_toByteArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->toByteArray());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_toByteArray, doc_QUuid_toByteArray);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_toRfc4122, "toRfc4122(self) -> QByteArray");

extern "C" {static PyObject *meth_QUuid_toRfc4122(PyObject *, PyObject *);}
static PyObject *meth_QUuid_toRfc4122(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->toRfc4122());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_toRfc4122, doc_QUuid_toRfc4122);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_fromRfc4122, "fromRfc4122(QByteArray) -> QUuid");

extern "C" {static PyObject *meth_QUuid_fromRfc4122(PyObject *, PyObject *);}
static PyObject *meth_QUuid_fromRfc4122(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QUuid*sipRes;

            sipRes = new QUuid(QUuid::fromRfc4122(*a0));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_fromRfc4122, doc_QUuid_fromRfc4122);

    return NULL;
}


extern "C" {static PyObject *slot_QUuid___ge__(PyObject *,PyObject *);}
static PyObject *slot_QUuid___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QUuid::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___le__(PyObject *,PyObject *);}
static PyObject *slot_QUuid___le__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QUuid::operator>(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,le_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___gt__(PyObject *,PyObject *);}
static PyObject *slot_QUuid___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QUuid::operator>(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,gt_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___lt__(PyObject *,PyObject *);}
static PyObject *slot_QUuid___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QUuid::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUuid___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QUuid::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUuid___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QUuid::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___repr__(PyObject *);}
static PyObject *slot_QUuid___repr__(PyObject *sipSelf)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 65 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/quuid.sip"
        PyObject *uni = qpycore_PyObject_FromQString(sipCpp->toString());
        
        if (uni)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtCore.QUuid(%R)", uni);
        #else
            sipRes = PyString_FromFormat("PyQt5.QtCore.QUuid(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(uni));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        
            Py_DECREF(uni);
        }
#line 581 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQUuid.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static long slot_QUuid___hash__(PyObject *);}
static long slot_QUuid___hash__(PyObject *sipSelf)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/quuid.sip"
        sipRes = qHash(*sipCpp);
#line 606 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQUuid.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUuid(void *, int);}
static void release_QUuid(void *sipCppV,int)
{
    delete reinterpret_cast<QUuid *>(sipCppV);
}


extern "C" {static void assign_QUuid(void *, SIP_SSIZE_T, const void *);}
static void assign_QUuid(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUuid *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUuid *>(sipSrc);
}


extern "C" {static void *array_QUuid(SIP_SSIZE_T);}
static void *array_QUuid(SIP_SSIZE_T sipNrElem)
{
    return new QUuid[sipNrElem];
}


extern "C" {static void *copy_QUuid(const void *, SIP_SSIZE_T);}
static void *copy_QUuid(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUuid(reinterpret_cast<const QUuid *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUuid(sipSimpleWrapper *);}
static void dealloc_QUuid(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUuid(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QUuid(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUuid(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QUuid *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QUuid();

            return sipCpp;
        }
    }

    {
        uint a0;
        ushort a1;
        ushort a2;
        uchar a3;
        uchar a4;
        uchar a5;
        uchar a6;
        uchar a7;
        uchar a8;
        uchar a9;
        uchar a10;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "uttcccccccc", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
        {
            sipCpp = new QUuid(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QUuid(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QByteArray, &a0, &a0State))
        {
            sipCpp = new QUuid(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    {
        const QUuid* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QUuid, &a0))
        {
            sipCpp = new QUuid(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUuid[] = {
    {(void *)slot_QUuid___ge__, ge_slot},
    {(void *)slot_QUuid___le__, le_slot},
    {(void *)slot_QUuid___gt__, gt_slot},
    {(void *)slot_QUuid___lt__, lt_slot},
    {(void *)slot_QUuid___ne__, ne_slot},
    {(void *)slot_QUuid___eq__, eq_slot},
    {(void *)slot_QUuid___repr__, repr_slot},
    {(void *)slot_QUuid___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QUuid[] = {
    {SIP_MLNAME_CAST(sipName_createUuid), meth_QUuid_createUuid, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_createUuid)},
    {SIP_MLNAME_CAST(sipName_createUuidV3), meth_QUuid_createUuidV3, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_createUuidV3)},
    {SIP_MLNAME_CAST(sipName_createUuidV5), meth_QUuid_createUuidV5, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_createUuidV5)},
    {SIP_MLNAME_CAST(sipName_fromRfc4122), meth_QUuid_fromRfc4122, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_fromRfc4122)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QUuid_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_isNull)},
    {SIP_MLNAME_CAST(sipName_toByteArray), meth_QUuid_toByteArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_toByteArray)},
    {SIP_MLNAME_CAST(sipName_toRfc4122), meth_QUuid_toRfc4122, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_toRfc4122)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QUuid_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_toString)},
    {SIP_MLNAME_CAST(sipName_variant), meth_QUuid_variant, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_variant)},
    {SIP_MLNAME_CAST(sipName_version), meth_QUuid_version, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_version)}
};

static sipEnumMemberDef enummembers_QUuid[] = {
    {sipName_DCE, static_cast<int>(QUuid::DCE), 256},
    {sipName_EmbeddedPOSIX, static_cast<int>(QUuid::EmbeddedPOSIX), 257},
    {sipName_Md5, static_cast<int>(QUuid::Md5), 257},
    {sipName_Microsoft, static_cast<int>(QUuid::Microsoft), 256},
    {sipName_NCS, static_cast<int>(QUuid::NCS), 256},
    {sipName_Name, static_cast<int>(QUuid::Name), 257},
    {sipName_Random, static_cast<int>(QUuid::Random), 257},
    {sipName_Reserved, static_cast<int>(QUuid::Reserved), 256},
    {sipName_Sha1, static_cast<int>(QUuid::Sha1), 257},
    {sipName_Time, static_cast<int>(QUuid::Time), 257},
    {sipName_VarUnknown, static_cast<int>(QUuid::VarUnknown), 256},
    {sipName_VerUnknown, static_cast<int>(QUuid::VerUnknown), 257},
};

PyDoc_STRVAR(doc_QUuid, "\1QUuid()\n"
    "QUuid(int, int, int, str, str, str, str, str, str, str, str)\n"
    "QUuid(object)\n"
    "QUuid(QByteArray)\n"
    "QUuid(QUuid)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QUuid = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QUuid,
        {0}
    },
    {
        sipNameNr_QUuid,
        {0, 0, 1},
        10, methods_QUuid,
        12, enummembers_QUuid,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUuid,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUuid,
    init_type_QUuid,
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
    dealloc_QUuid,
    assign_QUuid,
    array_QUuid,
    copy_QUuid,
    release_QUuid,
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
