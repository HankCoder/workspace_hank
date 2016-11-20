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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qaudiodeviceinfo.sip"
#include <qaudiodeviceinfo.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"

#line 638 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qaudio.sip"
#include <qaudio.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 231 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qpymultimedia_qlist.sip"
#include <qaudioformat.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 129 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qpymultimedia_qlist.sip"
#include <qaudioformat.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQAudioDeviceInfo.cpp"


PyDoc_STRVAR(doc_QAudioDeviceInfo_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QAudioDeviceInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_isNull, doc_QAudioDeviceInfo_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_deviceName, "deviceName(self) -> str");

extern "C" {static PyObject *meth_QAudioDeviceInfo_deviceName(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_deviceName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->deviceName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_deviceName, doc_QAudioDeviceInfo_deviceName);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_isFormatSupported, "isFormatSupported(self, QAudioFormat) -> bool");

extern "C" {static PyObject *meth_QAudioDeviceInfo_isFormatSupported(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_isFormatSupported(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat* a0;
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp, sipType_QAudioFormat, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isFormatSupported(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_isFormatSupported, doc_QAudioDeviceInfo_isFormatSupported);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_preferredFormat, "preferredFormat(self) -> QAudioFormat");

extern "C" {static PyObject *meth_QAudioDeviceInfo_preferredFormat(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_preferredFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QAudioFormat*sipRes;

            sipRes = new QAudioFormat(sipCpp->preferredFormat());

            return sipConvertFromNewType(sipRes,sipType_QAudioFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_preferredFormat, doc_QAudioDeviceInfo_preferredFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_nearestFormat, "nearestFormat(self, QAudioFormat) -> QAudioFormat");

extern "C" {static PyObject *meth_QAudioDeviceInfo_nearestFormat(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_nearestFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat* a0;
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp, sipType_QAudioFormat, &a0))
        {
            QAudioFormat*sipRes;

            sipRes = new QAudioFormat(sipCpp->nearestFormat(*a0));

            return sipConvertFromNewType(sipRes,sipType_QAudioFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_nearestFormat, doc_QAudioDeviceInfo_nearestFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_supportedCodecs, "supportedCodecs(self) -> List[str]");

extern "C" {static PyObject *meth_QAudioDeviceInfo_supportedCodecs(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_supportedCodecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->supportedCodecs());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_supportedCodecs, doc_QAudioDeviceInfo_supportedCodecs);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_supportedSampleSizes, "supportedSampleSizes(self) -> List[int]");

extern "C" {static PyObject *meth_QAudioDeviceInfo_supportedSampleSizes(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_supportedSampleSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QList<int>*sipRes;

            sipRes = new QList<int>(sipCpp->supportedSampleSizes());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_supportedSampleSizes, doc_QAudioDeviceInfo_supportedSampleSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_supportedByteOrders, "supportedByteOrders(self) -> List[QAudioFormat.Endian]");

extern "C" {static PyObject *meth_QAudioDeviceInfo_supportedByteOrders(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_supportedByteOrders(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QList<QAudioFormat::Endian>*sipRes;

            sipRes = new QList<QAudioFormat::Endian>(sipCpp->supportedByteOrders());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QAudioFormat_Endian,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_supportedByteOrders, doc_QAudioDeviceInfo_supportedByteOrders);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_supportedSampleTypes, "supportedSampleTypes(self) -> List[QAudioFormat.SampleType]");

extern "C" {static PyObject *meth_QAudioDeviceInfo_supportedSampleTypes(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_supportedSampleTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QList<QAudioFormat::SampleType>*sipRes;

            sipRes = new QList<QAudioFormat::SampleType>(sipCpp->supportedSampleTypes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QAudioFormat_SampleType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_supportedSampleTypes, doc_QAudioDeviceInfo_supportedSampleTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_defaultInputDevice, "defaultInputDevice() -> QAudioDeviceInfo");

extern "C" {static PyObject *meth_QAudioDeviceInfo_defaultInputDevice(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_defaultInputDevice(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QAudioDeviceInfo*sipRes;

            sipRes = new QAudioDeviceInfo(QAudioDeviceInfo::defaultInputDevice());

            return sipConvertFromNewType(sipRes,sipType_QAudioDeviceInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_defaultInputDevice, doc_QAudioDeviceInfo_defaultInputDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_defaultOutputDevice, "defaultOutputDevice() -> QAudioDeviceInfo");

extern "C" {static PyObject *meth_QAudioDeviceInfo_defaultOutputDevice(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_defaultOutputDevice(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QAudioDeviceInfo*sipRes;

            sipRes = new QAudioDeviceInfo(QAudioDeviceInfo::defaultOutputDevice());

            return sipConvertFromNewType(sipRes,sipType_QAudioDeviceInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_defaultOutputDevice, doc_QAudioDeviceInfo_defaultOutputDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_availableDevices, "availableDevices(QAudio.Mode) -> object");

extern "C" {static PyObject *meth_QAudioDeviceInfo_availableDevices(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_availableDevices(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudio::Mode a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QAudio_Mode, &a0))
        {
            QList<QAudioDeviceInfo>*sipRes;

            sipRes = new QList<QAudioDeviceInfo>(QAudioDeviceInfo::availableDevices(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QAudioDeviceInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_availableDevices, doc_QAudioDeviceInfo_availableDevices);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_supportedSampleRates, "supportedSampleRates(self) -> List[int]");

extern "C" {static PyObject *meth_QAudioDeviceInfo_supportedSampleRates(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_supportedSampleRates(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QList<int>*sipRes;

            sipRes = new QList<int>(sipCpp->supportedSampleRates());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_supportedSampleRates, doc_QAudioDeviceInfo_supportedSampleRates);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioDeviceInfo_supportedChannelCounts, "supportedChannelCounts(self) -> List[int]");

extern "C" {static PyObject *meth_QAudioDeviceInfo_supportedChannelCounts(PyObject *, PyObject *);}
static PyObject *meth_QAudioDeviceInfo_supportedChannelCounts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioDeviceInfo, &sipCpp))
        {
            QList<int>*sipRes;

            sipRes = new QList<int>(sipCpp->supportedChannelCounts());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioDeviceInfo, sipName_supportedChannelCounts, doc_QAudioDeviceInfo_supportedChannelCounts);

    return NULL;
}


extern "C" {static PyObject *slot_QAudioDeviceInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAudioDeviceInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAudioDeviceInfo *sipCpp = reinterpret_cast<QAudioDeviceInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAudioDeviceInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAudioDeviceInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QAudioDeviceInfo::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QAudioDeviceInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAudioDeviceInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAudioDeviceInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAudioDeviceInfo *sipCpp = reinterpret_cast<QAudioDeviceInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAudioDeviceInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAudioDeviceInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAudioDeviceInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QAudioDeviceInfo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QAudioDeviceInfo,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioDeviceInfo(void *, int);}
static void release_QAudioDeviceInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QAudioDeviceInfo *>(sipCppV);
}


extern "C" {static void assign_QAudioDeviceInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QAudioDeviceInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAudioDeviceInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAudioDeviceInfo *>(sipSrc);
}


extern "C" {static void *array_QAudioDeviceInfo(SIP_SSIZE_T);}
static void *array_QAudioDeviceInfo(SIP_SSIZE_T sipNrElem)
{
    return new QAudioDeviceInfo[sipNrElem];
}


extern "C" {static void *copy_QAudioDeviceInfo(const void *, SIP_SSIZE_T);}
static void *copy_QAudioDeviceInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAudioDeviceInfo(reinterpret_cast<const QAudioDeviceInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAudioDeviceInfo(sipSimpleWrapper *);}
static void dealloc_QAudioDeviceInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAudioDeviceInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAudioDeviceInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioDeviceInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAudioDeviceInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QAudioDeviceInfo();

            return sipCpp;
        }
    }

    {
        const QAudioDeviceInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAudioDeviceInfo, &a0))
        {
            sipCpp = new QAudioDeviceInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAudioDeviceInfo[] = {
    {(void *)slot_QAudioDeviceInfo___ne__, ne_slot},
    {(void *)slot_QAudioDeviceInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QAudioDeviceInfo[] = {
    {SIP_MLNAME_CAST(sipName_availableDevices), meth_QAudioDeviceInfo_availableDevices, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_availableDevices)},
    {SIP_MLNAME_CAST(sipName_defaultInputDevice), meth_QAudioDeviceInfo_defaultInputDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_defaultInputDevice)},
    {SIP_MLNAME_CAST(sipName_defaultOutputDevice), meth_QAudioDeviceInfo_defaultOutputDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_defaultOutputDevice)},
    {SIP_MLNAME_CAST(sipName_deviceName), meth_QAudioDeviceInfo_deviceName, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_deviceName)},
    {SIP_MLNAME_CAST(sipName_isFormatSupported), meth_QAudioDeviceInfo_isFormatSupported, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_isFormatSupported)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QAudioDeviceInfo_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_isNull)},
    {SIP_MLNAME_CAST(sipName_nearestFormat), meth_QAudioDeviceInfo_nearestFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_nearestFormat)},
    {SIP_MLNAME_CAST(sipName_preferredFormat), meth_QAudioDeviceInfo_preferredFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_preferredFormat)},
    {SIP_MLNAME_CAST(sipName_supportedByteOrders), meth_QAudioDeviceInfo_supportedByteOrders, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_supportedByteOrders)},
    {SIP_MLNAME_CAST(sipName_supportedChannelCounts), meth_QAudioDeviceInfo_supportedChannelCounts, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_supportedChannelCounts)},
    {SIP_MLNAME_CAST(sipName_supportedCodecs), meth_QAudioDeviceInfo_supportedCodecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_supportedCodecs)},
    {SIP_MLNAME_CAST(sipName_supportedSampleRates), meth_QAudioDeviceInfo_supportedSampleRates, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_supportedSampleRates)},
    {SIP_MLNAME_CAST(sipName_supportedSampleSizes), meth_QAudioDeviceInfo_supportedSampleSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_supportedSampleSizes)},
    {SIP_MLNAME_CAST(sipName_supportedSampleTypes), meth_QAudioDeviceInfo_supportedSampleTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioDeviceInfo_supportedSampleTypes)}
};

PyDoc_STRVAR(doc_QAudioDeviceInfo, "\1QAudioDeviceInfo()\n"
    "QAudioDeviceInfo(QAudioDeviceInfo)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QAudioDeviceInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAudioDeviceInfo,
        {0}
    },
    {
        sipNameNr_QAudioDeviceInfo,
        {0, 0, 1},
        14, methods_QAudioDeviceInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioDeviceInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAudioDeviceInfo,
    init_type_QAudioDeviceInfo,
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
    dealloc_QAudioDeviceInfo,
    assign_QAudioDeviceInfo,
    array_QAudioDeviceInfo,
    copy_QAudioDeviceInfo,
    release_QAudioDeviceInfo,
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
