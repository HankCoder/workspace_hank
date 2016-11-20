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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qaudiobuffer.sip"
#include <qaudiobuffer.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQAudioBuffer.cpp"

#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQAudioBuffer.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQAudioBuffer.cpp"


PyDoc_STRVAR(doc_QAudioBuffer_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QAudioBuffer_isValid(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_isValid, doc_QAudioBuffer_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_format, "format(self) -> QAudioFormat");

extern "C" {static PyObject *meth_QAudioBuffer_format(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            QAudioFormat*sipRes;

            sipRes = new QAudioFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QAudioFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_format, doc_QAudioBuffer_format);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_frameCount, "frameCount(self) -> int");

extern "C" {static PyObject *meth_QAudioBuffer_frameCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_frameCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->frameCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_frameCount, doc_QAudioBuffer_frameCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_sampleCount, "sampleCount(self) -> int");

extern "C" {static PyObject *meth_QAudioBuffer_sampleCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_sampleCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sampleCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_sampleCount, doc_QAudioBuffer_sampleCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_byteCount, "byteCount(self) -> int");

extern "C" {static PyObject *meth_QAudioBuffer_byteCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_byteCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->byteCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_byteCount, doc_QAudioBuffer_byteCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_duration, "duration(self) -> int");

extern "C" {static PyObject *meth_QAudioBuffer_duration(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_duration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->duration();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_duration, doc_QAudioBuffer_duration);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_startTime, "startTime(self) -> int");

extern "C" {static PyObject *meth_QAudioBuffer_startTime(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_startTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->startTime();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_startTime, doc_QAudioBuffer_startTime);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_constData, "constData(self) -> sip.voidptr");

extern "C" {static PyObject *meth_QAudioBuffer_constData(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_constData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            const void*sipRes;

            sipRes = sipCpp->constData();

            return sipConvertFromConstVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_constData, doc_QAudioBuffer_constData);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioBuffer_data, "data(self) -> sip.voidptr");

extern "C" {static PyObject *meth_QAudioBuffer_data(PyObject *, PyObject *);}
static PyObject *meth_QAudioBuffer_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioBuffer, &sipCpp))
        {
            void*sipRes;

            sipRes = sipCpp->data();

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioBuffer, sipName_data, doc_QAudioBuffer_data);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioBuffer(void *, int);}
static void release_QAudioBuffer(void *sipCppV,int)
{
    delete reinterpret_cast<QAudioBuffer *>(sipCppV);
}


extern "C" {static void assign_QAudioBuffer(void *, SIP_SSIZE_T, const void *);}
static void assign_QAudioBuffer(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAudioBuffer *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAudioBuffer *>(sipSrc);
}


extern "C" {static void *array_QAudioBuffer(SIP_SSIZE_T);}
static void *array_QAudioBuffer(SIP_SSIZE_T sipNrElem)
{
    return new QAudioBuffer[sipNrElem];
}


extern "C" {static void *copy_QAudioBuffer(const void *, SIP_SSIZE_T);}
static void *copy_QAudioBuffer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAudioBuffer(reinterpret_cast<const QAudioBuffer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAudioBuffer(sipSimpleWrapper *);}
static void dealloc_QAudioBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAudioBuffer(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAudioBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioBuffer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAudioBuffer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QAudioBuffer();

            return sipCpp;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        const QAudioFormat* a1;
        qint64 a2 = -1;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_startTime,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J9|n", sipType_QByteArray, &a0, &a0State, sipType_QAudioFormat, &a1, &a2))
        {
            sipCpp = new QAudioBuffer(*a0,*a1,a2);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    {
        int a0;
        const QAudioFormat* a1;
        qint64 a2 = -1;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_startTime,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iJ9|n", &a0, sipType_QAudioFormat, &a1, &a2))
        {
            sipCpp = new QAudioBuffer(a0,*a1,a2);

            return sipCpp;
        }
    }

    {
        const QAudioBuffer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAudioBuffer, &a0))
        {
            sipCpp = new QAudioBuffer(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAudioBuffer[] = {
    {SIP_MLNAME_CAST(sipName_byteCount), meth_QAudioBuffer_byteCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_byteCount)},
    {SIP_MLNAME_CAST(sipName_constData), meth_QAudioBuffer_constData, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_constData)},
    {SIP_MLNAME_CAST(sipName_data), meth_QAudioBuffer_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_data)},
    {SIP_MLNAME_CAST(sipName_duration), meth_QAudioBuffer_duration, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_duration)},
    {SIP_MLNAME_CAST(sipName_format), meth_QAudioBuffer_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_format)},
    {SIP_MLNAME_CAST(sipName_frameCount), meth_QAudioBuffer_frameCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_frameCount)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QAudioBuffer_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_isValid)},
    {SIP_MLNAME_CAST(sipName_sampleCount), meth_QAudioBuffer_sampleCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_sampleCount)},
    {SIP_MLNAME_CAST(sipName_startTime), meth_QAudioBuffer_startTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioBuffer_startTime)}
};

PyDoc_STRVAR(doc_QAudioBuffer, "\1QAudioBuffer()\n"
    "QAudioBuffer(Union[QByteArray, bytes, bytearray], QAudioFormat, startTime: int = -1)\n"
    "QAudioBuffer(int, QAudioFormat, startTime: int = -1)\n"
    "QAudioBuffer(QAudioBuffer)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QAudioBuffer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAudioBuffer,
        {0}
    },
    {
        sipNameNr_QAudioBuffer,
        {0, 0, 1},
        9, methods_QAudioBuffer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioBuffer,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAudioBuffer,
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
    dealloc_QAudioBuffer,
    assign_QAudioBuffer,
    array_QAudioBuffer,
    copy_QAudioBuffer,
    release_QAudioBuffer,
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