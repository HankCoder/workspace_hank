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

#line 89 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qmediaencodersettings.sip"
#include <qmediaencodersettings.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQImageEncoderSettings.cpp"

#line 27 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQImageEncoderSettings.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQImageEncoderSettings.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQImageEncoderSettings.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtMultimedia/qmultimedia.sip"
#include <qmultimedia.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQImageEncoderSettings.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtMultimedia/sipQtMultimediaQImageEncoderSettings.cpp"


PyDoc_STRVAR(doc_QImageEncoderSettings_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QImageEncoderSettings_isNull(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageEncoderSettings, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_isNull, doc_QImageEncoderSettings_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_codec, "codec(self) -> str");

extern "C" {static PyObject *meth_QImageEncoderSettings_codec(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageEncoderSettings, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->codec());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_codec, doc_QImageEncoderSettings_codec);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_setCodec, "setCodec(self, str)");

extern "C" {static PyObject *meth_QImageEncoderSettings_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCodec(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_setCodec, doc_QImageEncoderSettings_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_resolution, "resolution(self) -> QSize");

extern "C" {static PyObject *meth_QImageEncoderSettings_resolution(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_resolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageEncoderSettings, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->resolution());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_resolution, doc_QImageEncoderSettings_resolution);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_setResolution, "setResolution(self, QSize)\n"
    "setResolution(self, int, int)");

extern "C" {static PyObject *meth_QImageEncoderSettings_setResolution(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_setResolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->setResolution(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
        QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, &a0, &a1))
        {
            sipCpp->setResolution(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_setResolution, doc_QImageEncoderSettings_setResolution);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_quality, "quality(self) -> QMultimedia.EncodingQuality");

extern "C" {static PyObject *meth_QImageEncoderSettings_quality(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_quality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageEncoderSettings, &sipCpp))
        {
            QMultimedia::EncodingQuality sipRes;

            sipRes = sipCpp->quality();

            return sipConvertFromEnum(sipRes,sipType_QMultimedia_EncodingQuality);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_quality, doc_QImageEncoderSettings_quality);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_setQuality, "setQuality(self, QMultimedia.EncodingQuality)");

extern "C" {static PyObject *meth_QImageEncoderSettings_setQuality(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_setQuality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMultimedia::EncodingQuality a0;
        QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, sipType_QMultimedia_EncodingQuality, &a0))
        {
            sipCpp->setQuality(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_setQuality, doc_QImageEncoderSettings_setQuality);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_encodingOption, "encodingOption(self, str) -> Any");

extern "C" {static PyObject *meth_QImageEncoderSettings_encodingOption(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_encodingOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->encodingOption(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_encodingOption, doc_QImageEncoderSettings_encodingOption);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_encodingOptions, "encodingOptions(self) -> Dict[str, Any]");

extern "C" {static PyObject *meth_QImageEncoderSettings_encodingOptions(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_encodingOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageEncoderSettings, &sipCpp))
        {
            QVariantMap*sipRes;

            sipRes = new QVariantMap(sipCpp->encodingOptions());

            return sipConvertFromNewType(sipRes,sipType_QMap_0100QString_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_encodingOptions, doc_QImageEncoderSettings_encodingOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_setEncodingOption, "setEncodingOption(self, str, Any)");

extern "C" {static PyObject *meth_QImageEncoderSettings_setEncodingOption(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_setEncodingOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setEncodingOption(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_setEncodingOption, doc_QImageEncoderSettings_setEncodingOption);

    return NULL;
}


PyDoc_STRVAR(doc_QImageEncoderSettings_setEncodingOptions, "setEncodingOptions(self, Dict[str, Any])");

extern "C" {static PyObject *meth_QImageEncoderSettings_setEncodingOptions(PyObject *, PyObject *);}
static PyObject *meth_QImageEncoderSettings_setEncodingOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariantMap* a0;
        int a0State = 0;
        QImageEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageEncoderSettings, &sipCpp, sipType_QMap_0100QString_0100QVariant,&a0, &a0State))
        {
            sipCpp->setEncodingOptions(*a0);
            sipReleaseType(const_cast<QVariantMap *>(a0),sipType_QMap_0100QString_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageEncoderSettings, sipName_setEncodingOptions, doc_QImageEncoderSettings_setEncodingOptions);

    return NULL;
}


extern "C" {static PyObject *slot_QImageEncoderSettings___ne__(PyObject *,PyObject *);}
static PyObject *slot_QImageEncoderSettings___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QImageEncoderSettings *sipCpp = reinterpret_cast<QImageEncoderSettings *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageEncoderSettings));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QImageEncoderSettings, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QImageEncoderSettings::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QImageEncoderSettings,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QImageEncoderSettings___eq__(PyObject *,PyObject *);}
static PyObject *slot_QImageEncoderSettings___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QImageEncoderSettings *sipCpp = reinterpret_cast<QImageEncoderSettings *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageEncoderSettings));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QImageEncoderSettings* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QImageEncoderSettings, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QImageEncoderSettings::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QImageEncoderSettings,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QImageEncoderSettings(void *, int);}
static void release_QImageEncoderSettings(void *sipCppV,int)
{
    delete reinterpret_cast<QImageEncoderSettings *>(sipCppV);
}


extern "C" {static void assign_QImageEncoderSettings(void *, SIP_SSIZE_T, const void *);}
static void assign_QImageEncoderSettings(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QImageEncoderSettings *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QImageEncoderSettings *>(sipSrc);
}


extern "C" {static void *array_QImageEncoderSettings(SIP_SSIZE_T);}
static void *array_QImageEncoderSettings(SIP_SSIZE_T sipNrElem)
{
    return new QImageEncoderSettings[sipNrElem];
}


extern "C" {static void *copy_QImageEncoderSettings(const void *, SIP_SSIZE_T);}
static void *copy_QImageEncoderSettings(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QImageEncoderSettings(reinterpret_cast<const QImageEncoderSettings *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QImageEncoderSettings(sipSimpleWrapper *);}
static void dealloc_QImageEncoderSettings(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QImageEncoderSettings(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QImageEncoderSettings(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QImageEncoderSettings(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QImageEncoderSettings *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QImageEncoderSettings();

            return sipCpp;
        }
    }

    {
        const QImageEncoderSettings* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QImageEncoderSettings, &a0))
        {
            sipCpp = new QImageEncoderSettings(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QImageEncoderSettings[] = {
    {(void *)slot_QImageEncoderSettings___ne__, ne_slot},
    {(void *)slot_QImageEncoderSettings___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QImageEncoderSettings[] = {
    {SIP_MLNAME_CAST(sipName_codec), meth_QImageEncoderSettings_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_codec)},
    {SIP_MLNAME_CAST(sipName_encodingOption), meth_QImageEncoderSettings_encodingOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_encodingOption)},
    {SIP_MLNAME_CAST(sipName_encodingOptions), meth_QImageEncoderSettings_encodingOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_encodingOptions)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QImageEncoderSettings_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_isNull)},
    {SIP_MLNAME_CAST(sipName_quality), meth_QImageEncoderSettings_quality, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_quality)},
    {SIP_MLNAME_CAST(sipName_resolution), meth_QImageEncoderSettings_resolution, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_resolution)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QImageEncoderSettings_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_setCodec)},
    {SIP_MLNAME_CAST(sipName_setEncodingOption), meth_QImageEncoderSettings_setEncodingOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_setEncodingOption)},
    {SIP_MLNAME_CAST(sipName_setEncodingOptions), meth_QImageEncoderSettings_setEncodingOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_setEncodingOptions)},
    {SIP_MLNAME_CAST(sipName_setQuality), meth_QImageEncoderSettings_setQuality, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_setQuality)},
    {SIP_MLNAME_CAST(sipName_setResolution), meth_QImageEncoderSettings_setResolution, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageEncoderSettings_setResolution)}
};

PyDoc_STRVAR(doc_QImageEncoderSettings, "\1QImageEncoderSettings()\n"
    "QImageEncoderSettings(QImageEncoderSettings)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QImageEncoderSettings = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QImageEncoderSettings,
        {0}
    },
    {
        sipNameNr_QImageEncoderSettings,
        {0, 0, 1},
        11, methods_QImageEncoderSettings,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QImageEncoderSettings,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QImageEncoderSettings,
    init_type_QImageEncoderSettings,
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
    dealloc_QImageEncoderSettings,
    assign_QImageEncoderSettings,
    array_QImageEncoderSettings,
    copy_QImageEncoderSettings,
    release_QImageEncoderSettings,
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
