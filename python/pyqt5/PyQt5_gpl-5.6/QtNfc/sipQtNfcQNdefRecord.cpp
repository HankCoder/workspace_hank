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

#include "sipAPIQtNfc.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qndefrecord.sip"
#include <qndefrecord.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefRecord.cpp"

#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefRecord.cpp"


PyDoc_STRVAR(doc_QNdefRecord_setTypeNameFormat, "setTypeNameFormat(self, QNdefRecord.TypeNameFormat)");

extern "C" {static PyObject *meth_QNdefRecord_setTypeNameFormat(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_setTypeNameFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNdefRecord::TypeNameFormat a0;
        QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNdefRecord, &sipCpp, sipType_QNdefRecord_TypeNameFormat, &a0))
        {
            sipCpp->setTypeNameFormat(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_setTypeNameFormat, doc_QNdefRecord_setTypeNameFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_typeNameFormat, "typeNameFormat(self) -> QNdefRecord.TypeNameFormat");

extern "C" {static PyObject *meth_QNdefRecord_typeNameFormat(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_typeNameFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefRecord, &sipCpp))
        {
            QNdefRecord::TypeNameFormat sipRes;

            sipRes = sipCpp->typeNameFormat();

            return sipConvertFromEnum(sipRes,sipType_QNdefRecord_TypeNameFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_typeNameFormat, doc_QNdefRecord_typeNameFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_setType, "setType(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QNdefRecord_setType(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNdefRecord, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setType(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_setType, doc_QNdefRecord_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_type, "type(self) -> QByteArray");

extern "C" {static PyObject *meth_QNdefRecord_type(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefRecord, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->type());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_type, doc_QNdefRecord_type);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_setId, "setId(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QNdefRecord_setId(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_setId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNdefRecord, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setId(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_setId, doc_QNdefRecord_setId);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_id, "id(self) -> QByteArray");

extern "C" {static PyObject *meth_QNdefRecord_id(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefRecord, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->id());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_id, doc_QNdefRecord_id);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_setPayload, "setPayload(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QNdefRecord_setPayload(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_setPayload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNdefRecord, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setPayload(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_setPayload, doc_QNdefRecord_setPayload);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_payload, "payload(self) -> QByteArray");

extern "C" {static PyObject *meth_QNdefRecord_payload(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_payload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefRecord, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->payload());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_payload, doc_QNdefRecord_payload);

    return NULL;
}


PyDoc_STRVAR(doc_QNdefRecord_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QNdefRecord_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QNdefRecord_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNdefRecord, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNdefRecord, sipName_isEmpty, doc_QNdefRecord_isEmpty);

    return NULL;
}


extern "C" {static long slot_QNdefRecord___hash__(PyObject *);}
static long slot_QNdefRecord___hash__(PyObject *sipSelf)
{
    QNdefRecord *sipCpp = reinterpret_cast<QNdefRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNdefRecord));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 88 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtNfc/qndefrecord.sip"
        sipRes = qHash(*sipCpp);
#line 309 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtNfc/sipQtNfcQNdefRecord.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNdefRecord___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNdefRecord___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNdefRecord *sipCpp = reinterpret_cast<QNdefRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNdefRecord));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNdefRecord, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNdefRecord::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,ne_slot,sipType_QNdefRecord,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNdefRecord___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNdefRecord___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNdefRecord *sipCpp = reinterpret_cast<QNdefRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNdefRecord));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNdefRecord* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNdefRecord, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNdefRecord::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNfc,eq_slot,sipType_QNdefRecord,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QNdefRecord(void *, int);}
static void release_QNdefRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QNdefRecord *>(sipCppV);
}


extern "C" {static void assign_QNdefRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QNdefRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNdefRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNdefRecord *>(sipSrc);
}


extern "C" {static void *array_QNdefRecord(SIP_SSIZE_T);}
static void *array_QNdefRecord(SIP_SSIZE_T sipNrElem)
{
    return new QNdefRecord[sipNrElem];
}


extern "C" {static void *copy_QNdefRecord(const void *, SIP_SSIZE_T);}
static void *copy_QNdefRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNdefRecord(reinterpret_cast<const QNdefRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNdefRecord(sipSimpleWrapper *);}
static void dealloc_QNdefRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNdefRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNdefRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNdefRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNdefRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNdefRecord();

            return sipCpp;
        }
    }

    {
        const QNdefRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNdefRecord, &a0))
        {
            sipCpp = new QNdefRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNdefRecord[] = {
    {(void *)slot_QNdefRecord___hash__, hash_slot},
    {(void *)slot_QNdefRecord___ne__, ne_slot},
    {(void *)slot_QNdefRecord___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNdefRecord[] = {
    {SIP_MLNAME_CAST(sipName_id), meth_QNdefRecord_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_id)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QNdefRecord_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_isEmpty)},
    {SIP_MLNAME_CAST(sipName_payload), meth_QNdefRecord_payload, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_payload)},
    {SIP_MLNAME_CAST(sipName_setId), meth_QNdefRecord_setId, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_setId)},
    {SIP_MLNAME_CAST(sipName_setPayload), meth_QNdefRecord_setPayload, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_setPayload)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QNdefRecord_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_setType)},
    {SIP_MLNAME_CAST(sipName_setTypeNameFormat), meth_QNdefRecord_setTypeNameFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_setTypeNameFormat)},
    {SIP_MLNAME_CAST(sipName_type), meth_QNdefRecord_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_type)},
    {SIP_MLNAME_CAST(sipName_typeNameFormat), meth_QNdefRecord_typeNameFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QNdefRecord_typeNameFormat)}
};

static sipEnumMemberDef enummembers_QNdefRecord[] = {
    {sipName_Empty, static_cast<int>(QNdefRecord::Empty), 14},
    {sipName_ExternalRtd, static_cast<int>(QNdefRecord::ExternalRtd), 14},
    {sipName_Mime, static_cast<int>(QNdefRecord::Mime), 14},
    {sipName_NfcRtd, static_cast<int>(QNdefRecord::NfcRtd), 14},
    {sipName_Unknown, static_cast<int>(QNdefRecord::Unknown), 14},
    {sipName_Uri, static_cast<int>(QNdefRecord::Uri), 14},
};

PyDoc_STRVAR(doc_QNdefRecord, "\1QNdefRecord()\n"
    "QNdefRecord(QNdefRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNfc_QNdefRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNdefRecord,
        {0}
    },
    {
        sipNameNr_QNdefRecord,
        {0, 0, 1},
        9, methods_QNdefRecord,
        6, enummembers_QNdefRecord,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNdefRecord,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNdefRecord,
    init_type_QNdefRecord,
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
    dealloc_QNdefRecord,
    assign_QNdefRecord,
    array_QNdefRecord,
    copy_QNdefRecord,
    release_QNdefRecord,
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
