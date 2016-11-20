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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQAudioFormat.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQAudioFormat.cpp"


PyDoc_STRVAR(doc_QAudioFormat_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QAudioFormat_isValid(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_isValid, doc_QAudioFormat_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setSampleSize, "setSampleSize(self, int)");

extern "C" {static PyObject *meth_QAudioFormat_setSampleSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setSampleSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            sipCpp->setSampleSize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setSampleSize, doc_QAudioFormat_setSampleSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_sampleSize, "sampleSize(self) -> int");

extern "C" {static PyObject *meth_QAudioFormat_sampleSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_sampleSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sampleSize();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_sampleSize, doc_QAudioFormat_sampleSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setCodec, "setCodec(self, str)");

extern "C" {static PyObject *meth_QAudioFormat_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAudioFormat, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCodec(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setCodec, doc_QAudioFormat_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_codec, "codec(self) -> str");

extern "C" {static PyObject *meth_QAudioFormat_codec(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->codec());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_codec, doc_QAudioFormat_codec);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setByteOrder, "setByteOrder(self, QAudioFormat.Endian)");

extern "C" {static PyObject *meth_QAudioFormat_setByteOrder(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setByteOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioFormat::Endian a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QAudioFormat, &sipCpp, sipType_QAudioFormat_Endian, &a0))
        {
            sipCpp->setByteOrder(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setByteOrder, doc_QAudioFormat_setByteOrder);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_byteOrder, "byteOrder(self) -> QAudioFormat.Endian");

extern "C" {static PyObject *meth_QAudioFormat_byteOrder(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_byteOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            QAudioFormat::Endian sipRes;

            sipRes = sipCpp->byteOrder();

            return sipConvertFromEnum(sipRes,sipType_QAudioFormat_Endian);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_byteOrder, doc_QAudioFormat_byteOrder);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setSampleType, "setSampleType(self, QAudioFormat.SampleType)");

extern "C" {static PyObject *meth_QAudioFormat_setSampleType(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setSampleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioFormat::SampleType a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QAudioFormat, &sipCpp, sipType_QAudioFormat_SampleType, &a0))
        {
            sipCpp->setSampleType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setSampleType, doc_QAudioFormat_setSampleType);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_sampleType, "sampleType(self) -> QAudioFormat.SampleType");

extern "C" {static PyObject *meth_QAudioFormat_sampleType(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_sampleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            QAudioFormat::SampleType sipRes;

            sipRes = sipCpp->sampleType();

            return sipConvertFromEnum(sipRes,sipType_QAudioFormat_SampleType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_sampleType, doc_QAudioFormat_sampleType);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setSampleRate, "setSampleRate(self, int)");

extern "C" {static PyObject *meth_QAudioFormat_setSampleRate(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setSampleRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            sipCpp->setSampleRate(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setSampleRate, doc_QAudioFormat_setSampleRate);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_sampleRate, "sampleRate(self) -> int");

extern "C" {static PyObject *meth_QAudioFormat_sampleRate(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_sampleRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sampleRate();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_sampleRate, doc_QAudioFormat_sampleRate);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setChannelCount, "setChannelCount(self, int)");

extern "C" {static PyObject *meth_QAudioFormat_setChannelCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setChannelCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            sipCpp->setChannelCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setChannelCount, doc_QAudioFormat_setChannelCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_channelCount, "channelCount(self) -> int");

extern "C" {static PyObject *meth_QAudioFormat_channelCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_channelCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->channelCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_channelCount, doc_QAudioFormat_channelCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_bytesForDuration, "bytesForDuration(self, int) -> int");

extern "C" {static PyObject *meth_QAudioFormat_bytesForDuration(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_bytesForDuration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            qint32 sipRes;

            sipRes = sipCpp->bytesForDuration(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_bytesForDuration, doc_QAudioFormat_bytesForDuration);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_durationForBytes, "durationForBytes(self, int) -> int");

extern "C" {static PyObject *meth_QAudioFormat_durationForBytes(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_durationForBytes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint32 a0;
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            qint64 sipRes;

            sipRes = sipCpp->durationForBytes(a0);

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_durationForBytes, doc_QAudioFormat_durationForBytes);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_bytesForFrames, "bytesForFrames(self, int) -> int");

extern "C" {static PyObject *meth_QAudioFormat_bytesForFrames(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_bytesForFrames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint32 a0;
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            qint32 sipRes;

            sipRes = sipCpp->bytesForFrames(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_bytesForFrames, doc_QAudioFormat_bytesForFrames);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_framesForBytes, "framesForBytes(self, int) -> int");

extern "C" {static PyObject *meth_QAudioFormat_framesForBytes(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_framesForBytes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint32 a0;
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            qint32 sipRes;

            sipRes = sipCpp->framesForBytes(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_framesForBytes, doc_QAudioFormat_framesForBytes);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_framesForDuration, "framesForDuration(self, int) -> int");

extern "C" {static PyObject *meth_QAudioFormat_framesForDuration(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_framesForDuration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            qint32 sipRes;

            sipRes = sipCpp->framesForDuration(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_framesForDuration, doc_QAudioFormat_framesForDuration);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_durationForFrames, "durationForFrames(self, int) -> int");

extern "C" {static PyObject *meth_QAudioFormat_durationForFrames(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_durationForFrames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint32 a0;
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            qint64 sipRes;

            sipRes = sipCpp->durationForFrames(a0);

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_durationForFrames, doc_QAudioFormat_durationForFrames);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_bytesPerFrame, "bytesPerFrame(self) -> int");

extern "C" {static PyObject *meth_QAudioFormat_bytesPerFrame(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_bytesPerFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->bytesPerFrame();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_bytesPerFrame, doc_QAudioFormat_bytesPerFrame);

    return NULL;
}


extern "C" {static PyObject *slot_QAudioFormat___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAudioFormat___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAudioFormat *sipCpp = reinterpret_cast<QAudioFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAudioFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAudioFormat, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QAudioFormat::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QAudioFormat,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAudioFormat___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAudioFormat___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAudioFormat *sipCpp = reinterpret_cast<QAudioFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAudioFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAudioFormat, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QAudioFormat::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QAudioFormat,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioFormat(void *, int);}
static void release_QAudioFormat(void *sipCppV,int)
{
    delete reinterpret_cast<QAudioFormat *>(sipCppV);
}


extern "C" {static void assign_QAudioFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QAudioFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAudioFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAudioFormat *>(sipSrc);
}


extern "C" {static void *array_QAudioFormat(SIP_SSIZE_T);}
static void *array_QAudioFormat(SIP_SSIZE_T sipNrElem)
{
    return new QAudioFormat[sipNrElem];
}


extern "C" {static void *copy_QAudioFormat(const void *, SIP_SSIZE_T);}
static void *copy_QAudioFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAudioFormat(reinterpret_cast<const QAudioFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAudioFormat(sipSimpleWrapper *);}
static void dealloc_QAudioFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAudioFormat(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAudioFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAudioFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QAudioFormat();

            return sipCpp;
        }
    }

    {
        const QAudioFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAudioFormat, &a0))
        {
            sipCpp = new QAudioFormat(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAudioFormat[] = {
    {(void *)slot_QAudioFormat___ne__, ne_slot},
    {(void *)slot_QAudioFormat___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QAudioFormat[] = {
    {SIP_MLNAME_CAST(sipName_byteOrder), meth_QAudioFormat_byteOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_byteOrder)},
    {SIP_MLNAME_CAST(sipName_bytesForDuration), meth_QAudioFormat_bytesForDuration, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_bytesForDuration)},
    {SIP_MLNAME_CAST(sipName_bytesForFrames), meth_QAudioFormat_bytesForFrames, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_bytesForFrames)},
    {SIP_MLNAME_CAST(sipName_bytesPerFrame), meth_QAudioFormat_bytesPerFrame, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_bytesPerFrame)},
    {SIP_MLNAME_CAST(sipName_channelCount), meth_QAudioFormat_channelCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_channelCount)},
    {SIP_MLNAME_CAST(sipName_codec), meth_QAudioFormat_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_codec)},
    {SIP_MLNAME_CAST(sipName_durationForBytes), meth_QAudioFormat_durationForBytes, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_durationForBytes)},
    {SIP_MLNAME_CAST(sipName_durationForFrames), meth_QAudioFormat_durationForFrames, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_durationForFrames)},
    {SIP_MLNAME_CAST(sipName_framesForBytes), meth_QAudioFormat_framesForBytes, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_framesForBytes)},
    {SIP_MLNAME_CAST(sipName_framesForDuration), meth_QAudioFormat_framesForDuration, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_framesForDuration)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QAudioFormat_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_isValid)},
    {SIP_MLNAME_CAST(sipName_sampleRate), meth_QAudioFormat_sampleRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_sampleRate)},
    {SIP_MLNAME_CAST(sipName_sampleSize), meth_QAudioFormat_sampleSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_sampleSize)},
    {SIP_MLNAME_CAST(sipName_sampleType), meth_QAudioFormat_sampleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_sampleType)},
    {SIP_MLNAME_CAST(sipName_setByteOrder), meth_QAudioFormat_setByteOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setByteOrder)},
    {SIP_MLNAME_CAST(sipName_setChannelCount), meth_QAudioFormat_setChannelCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setChannelCount)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QAudioFormat_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setCodec)},
    {SIP_MLNAME_CAST(sipName_setSampleRate), meth_QAudioFormat_setSampleRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setSampleRate)},
    {SIP_MLNAME_CAST(sipName_setSampleSize), meth_QAudioFormat_setSampleSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setSampleSize)},
    {SIP_MLNAME_CAST(sipName_setSampleType), meth_QAudioFormat_setSampleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setSampleType)}
};

static sipEnumMemberDef enummembers_QAudioFormat[] = {
    {sipName_BigEndian, static_cast<int>(QAudioFormat::BigEndian), 18},
    {sipName_Float, static_cast<int>(QAudioFormat::Float), 19},
    {sipName_LittleEndian, static_cast<int>(QAudioFormat::LittleEndian), 18},
    {sipName_SignedInt, static_cast<int>(QAudioFormat::SignedInt), 19},
    {sipName_UnSignedInt, static_cast<int>(QAudioFormat::UnSignedInt), 19},
    {sipName_Unknown, static_cast<int>(QAudioFormat::Unknown), 19},
};

PyDoc_STRVAR(doc_QAudioFormat, "\1QAudioFormat()\n"
    "QAudioFormat(QAudioFormat)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QAudioFormat = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAudioFormat,
        {0}
    },
    {
        sipNameNr_QAudioFormat,
        {0, 0, 1},
        20, methods_QAudioFormat,
        6, enummembers_QAudioFormat,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioFormat,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAudioFormat,
    init_type_QAudioFormat,
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
    dealloc_QAudioFormat,
    assign_QAudioFormat,
    array_QAudioFormat,
    copy_QAudioFormat,
    release_QAudioFormat,
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
