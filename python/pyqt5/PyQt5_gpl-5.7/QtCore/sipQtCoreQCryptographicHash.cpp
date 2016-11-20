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

#include "sipAPIQtCore.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qcryptographichash.sip"
#include <qcryptographichash.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCryptographicHash.cpp"

#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCryptographicHash.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCryptographicHash.cpp"


PyDoc_STRVAR(doc_QCryptographicHash_reset, "reset(self)");

extern "C" {static PyObject *meth_QCryptographicHash_reset(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCryptographicHash, &sipCpp))
        {
            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_reset, doc_QCryptographicHash_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QCryptographicHash_addData, "addData(self, bytes)\n"
    "addData(self, Union[QByteArray, bytes, bytearray])\n"
    "addData(self, QIODevice) -> bool");

extern "C" {static PyObject *meth_QCryptographicHash_addData(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_addData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QCryptographicHash, &sipCpp, &a0, &a1))
        {
            sipCpp->addData(a0,(int)a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCryptographicHash, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->addData(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QIODevice* a0;
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QCryptographicHash, &sipCpp, sipType_QIODevice, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->addData(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_addData, doc_QCryptographicHash_addData);

    return NULL;
}


PyDoc_STRVAR(doc_QCryptographicHash_result, "result(self) -> QByteArray");

extern "C" {static PyObject *meth_QCryptographicHash_result(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_result(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCryptographicHash, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->result());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_result, doc_QCryptographicHash_result);

    return NULL;
}


PyDoc_STRVAR(doc_QCryptographicHash_hash, "hash(Union[QByteArray, bytes, bytearray], QCryptographicHash.Algorithm) -> QByteArray");

extern "C" {static PyObject *meth_QCryptographicHash_hash(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_hash(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QCryptographicHash::Algorithm a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1E", sipType_QByteArray, &a0, &a0State, sipType_QCryptographicHash_Algorithm, &a1))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QCryptographicHash::hash(*a0,a1));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_hash, doc_QCryptographicHash_hash);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCryptographicHash(void *, int);}
static void release_QCryptographicHash(void *sipCppV,int)
{
    delete reinterpret_cast<QCryptographicHash *>(sipCppV);
}


extern "C" {static void dealloc_QCryptographicHash(sipSimpleWrapper *);}
static void dealloc_QCryptographicHash(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCryptographicHash(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCryptographicHash(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCryptographicHash(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCryptographicHash *sipCpp = 0;

    {
        QCryptographicHash::Algorithm a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QCryptographicHash_Algorithm, &a0))
        {
            sipCpp = new QCryptographicHash(a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QCryptographicHash[] = {
    {SIP_MLNAME_CAST(sipName_addData), meth_QCryptographicHash_addData, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_addData)},
    {SIP_MLNAME_CAST(sipName_hash), meth_QCryptographicHash_hash, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_hash)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QCryptographicHash_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_reset)},
    {SIP_MLNAME_CAST(sipName_result), meth_QCryptographicHash_result, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_result)}
};

static sipEnumMemberDef enummembers_QCryptographicHash[] = {
    {sipName_Md4, static_cast<int>(QCryptographicHash::Md4), 33},
    {sipName_Md5, static_cast<int>(QCryptographicHash::Md5), 33},
    {sipName_Sha1, static_cast<int>(QCryptographicHash::Sha1), 33},
    {sipName_Sha224, static_cast<int>(QCryptographicHash::Sha224), 33},
    {sipName_Sha256, static_cast<int>(QCryptographicHash::Sha256), 33},
    {sipName_Sha384, static_cast<int>(QCryptographicHash::Sha384), 33},
    {sipName_Sha3_224, static_cast<int>(QCryptographicHash::Sha3_224), 33},
    {sipName_Sha3_256, static_cast<int>(QCryptographicHash::Sha3_256), 33},
    {sipName_Sha3_384, static_cast<int>(QCryptographicHash::Sha3_384), 33},
    {sipName_Sha3_512, static_cast<int>(QCryptographicHash::Sha3_512), 33},
    {sipName_Sha512, static_cast<int>(QCryptographicHash::Sha512), 33},
};

PyDoc_STRVAR(doc_QCryptographicHash, "\1QCryptographicHash(QCryptographicHash.Algorithm)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QCryptographicHash = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCryptographicHash,
        {0}
    },
    {
        sipNameNr_QCryptographicHash,
        {0, 0, 1},
        4, methods_QCryptographicHash,
        11, enummembers_QCryptographicHash,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCryptographicHash,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QCryptographicHash,
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
    dealloc_QCryptographicHash,
    0,
    0,
    0,
    release_QCryptographicHash,
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
