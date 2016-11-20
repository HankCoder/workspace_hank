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

#include "sipAPIQtMultimedia.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcameraimageprocessing.sip"
#include <qcameraimageprocessing.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcamera.sip"
#include <qcamera.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQCameraImageProcessing.cpp"


PyDoc_STRVAR(doc_QCameraImageProcessing_isAvailable, "isAvailable(self) -> bool");

extern "C" {static PyObject *meth_QCameraImageProcessing_isAvailable(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_isAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_isAvailable, doc_QCameraImageProcessing_isAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_whiteBalanceMode, "whiteBalanceMode(self) -> QCameraImageProcessing.WhiteBalanceMode");

extern "C" {static PyObject *meth_QCameraImageProcessing_whiteBalanceMode(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_whiteBalanceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            QCameraImageProcessing::WhiteBalanceMode sipRes;

            sipRes = sipCpp->whiteBalanceMode();

            return sipConvertFromEnum(sipRes,sipType_QCameraImageProcessing_WhiteBalanceMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_whiteBalanceMode, doc_QCameraImageProcessing_whiteBalanceMode);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_setWhiteBalanceMode, "setWhiteBalanceMode(self, QCameraImageProcessing.WhiteBalanceMode)");

extern "C" {static PyObject *meth_QCameraImageProcessing_setWhiteBalanceMode(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_setWhiteBalanceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraImageProcessing::WhiteBalanceMode a0;
        QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, sipType_QCameraImageProcessing_WhiteBalanceMode, &a0))
        {
            sipCpp->setWhiteBalanceMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_setWhiteBalanceMode, doc_QCameraImageProcessing_setWhiteBalanceMode);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_isWhiteBalanceModeSupported, "isWhiteBalanceModeSupported(self, QCameraImageProcessing.WhiteBalanceMode) -> bool");

extern "C" {static PyObject *meth_QCameraImageProcessing_isWhiteBalanceModeSupported(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_isWhiteBalanceModeSupported(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraImageProcessing::WhiteBalanceMode a0;
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, sipType_QCameraImageProcessing_WhiteBalanceMode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isWhiteBalanceModeSupported(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_isWhiteBalanceModeSupported, doc_QCameraImageProcessing_isWhiteBalanceModeSupported);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_manualWhiteBalance, "manualWhiteBalance(self) -> float");

extern "C" {static PyObject *meth_QCameraImageProcessing_manualWhiteBalance(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_manualWhiteBalance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->manualWhiteBalance();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_manualWhiteBalance, doc_QCameraImageProcessing_manualWhiteBalance);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_setManualWhiteBalance, "setManualWhiteBalance(self, float)");

extern "C" {static PyObject *meth_QCameraImageProcessing_setManualWhiteBalance(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_setManualWhiteBalance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, &a0))
        {
            sipCpp->setManualWhiteBalance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_setManualWhiteBalance, doc_QCameraImageProcessing_setManualWhiteBalance);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_contrast, "contrast(self) -> float");

extern "C" {static PyObject *meth_QCameraImageProcessing_contrast(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_contrast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->contrast();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_contrast, doc_QCameraImageProcessing_contrast);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_setContrast, "setContrast(self, float)");

extern "C" {static PyObject *meth_QCameraImageProcessing_setContrast(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_setContrast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, &a0))
        {
            sipCpp->setContrast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_setContrast, doc_QCameraImageProcessing_setContrast);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_saturation, "saturation(self) -> float");

extern "C" {static PyObject *meth_QCameraImageProcessing_saturation(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_saturation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->saturation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_saturation, doc_QCameraImageProcessing_saturation);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_setSaturation, "setSaturation(self, float)");

extern "C" {static PyObject *meth_QCameraImageProcessing_setSaturation(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_setSaturation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, &a0))
        {
            sipCpp->setSaturation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_setSaturation, doc_QCameraImageProcessing_setSaturation);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_sharpeningLevel, "sharpeningLevel(self) -> float");

extern "C" {static PyObject *meth_QCameraImageProcessing_sharpeningLevel(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_sharpeningLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->sharpeningLevel();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_sharpeningLevel, doc_QCameraImageProcessing_sharpeningLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_setSharpeningLevel, "setSharpeningLevel(self, float)");

extern "C" {static PyObject *meth_QCameraImageProcessing_setSharpeningLevel(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_setSharpeningLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, &a0))
        {
            sipCpp->setSharpeningLevel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_setSharpeningLevel, doc_QCameraImageProcessing_setSharpeningLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_denoisingLevel, "denoisingLevel(self) -> float");

extern "C" {static PyObject *meth_QCameraImageProcessing_denoisingLevel(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_denoisingLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraImageProcessing, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->denoisingLevel();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_denoisingLevel, doc_QCameraImageProcessing_denoisingLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraImageProcessing_setDenoisingLevel, "setDenoisingLevel(self, float)");

extern "C" {static PyObject *meth_QCameraImageProcessing_setDenoisingLevel(PyObject *, PyObject *);}
static PyObject *meth_QCameraImageProcessing_setDenoisingLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QCameraImageProcessing *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QCameraImageProcessing, &sipCpp, &a0))
        {
            sipCpp->setDenoisingLevel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraImageProcessing, sipName_setDenoisingLevel, doc_QCameraImageProcessing_setDenoisingLevel);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCameraImageProcessing(void *, int);}
static void release_QCameraImageProcessing(void *,int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QCameraImageProcessing[] = {{142, 0, 1}};


static PyMethodDef methods_QCameraImageProcessing[] = {
    {SIP_MLNAME_CAST(sipName_contrast), meth_QCameraImageProcessing_contrast, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_contrast)},
    {SIP_MLNAME_CAST(sipName_denoisingLevel), meth_QCameraImageProcessing_denoisingLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_denoisingLevel)},
    {SIP_MLNAME_CAST(sipName_isAvailable), meth_QCameraImageProcessing_isAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_isAvailable)},
    {SIP_MLNAME_CAST(sipName_isWhiteBalanceModeSupported), meth_QCameraImageProcessing_isWhiteBalanceModeSupported, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_isWhiteBalanceModeSupported)},
    {SIP_MLNAME_CAST(sipName_manualWhiteBalance), meth_QCameraImageProcessing_manualWhiteBalance, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_manualWhiteBalance)},
    {SIP_MLNAME_CAST(sipName_saturation), meth_QCameraImageProcessing_saturation, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_saturation)},
    {SIP_MLNAME_CAST(sipName_setContrast), meth_QCameraImageProcessing_setContrast, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_setContrast)},
    {SIP_MLNAME_CAST(sipName_setDenoisingLevel), meth_QCameraImageProcessing_setDenoisingLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_setDenoisingLevel)},
    {SIP_MLNAME_CAST(sipName_setManualWhiteBalance), meth_QCameraImageProcessing_setManualWhiteBalance, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_setManualWhiteBalance)},
    {SIP_MLNAME_CAST(sipName_setSaturation), meth_QCameraImageProcessing_setSaturation, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_setSaturation)},
    {SIP_MLNAME_CAST(sipName_setSharpeningLevel), meth_QCameraImageProcessing_setSharpeningLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_setSharpeningLevel)},
    {SIP_MLNAME_CAST(sipName_setWhiteBalanceMode), meth_QCameraImageProcessing_setWhiteBalanceMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_setWhiteBalanceMode)},
    {SIP_MLNAME_CAST(sipName_sharpeningLevel), meth_QCameraImageProcessing_sharpeningLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_sharpeningLevel)},
    {SIP_MLNAME_CAST(sipName_whiteBalanceMode), meth_QCameraImageProcessing_whiteBalanceMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraImageProcessing_whiteBalanceMode)}
};

static sipEnumMemberDef enummembers_QCameraImageProcessing[] = {
    {sipName_WhiteBalanceAuto, static_cast<int>(QCameraImageProcessing::WhiteBalanceAuto), 49},
    {sipName_WhiteBalanceCloudy, static_cast<int>(QCameraImageProcessing::WhiteBalanceCloudy), 49},
    {sipName_WhiteBalanceFlash, static_cast<int>(QCameraImageProcessing::WhiteBalanceFlash), 49},
    {sipName_WhiteBalanceFluorescent, static_cast<int>(QCameraImageProcessing::WhiteBalanceFluorescent), 49},
    {sipName_WhiteBalanceManual, static_cast<int>(QCameraImageProcessing::WhiteBalanceManual), 49},
    {sipName_WhiteBalanceShade, static_cast<int>(QCameraImageProcessing::WhiteBalanceShade), 49},
    {sipName_WhiteBalanceSunlight, static_cast<int>(QCameraImageProcessing::WhiteBalanceSunlight), 49},
    {sipName_WhiteBalanceSunset, static_cast<int>(QCameraImageProcessing::WhiteBalanceSunset), 49},
    {sipName_WhiteBalanceTungsten, static_cast<int>(QCameraImageProcessing::WhiteBalanceTungsten), 49},
    {sipName_WhiteBalanceVendor, static_cast<int>(QCameraImageProcessing::WhiteBalanceVendor), 49},
};


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QCameraImageProcessing = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCameraImageProcessing,
        {0}
    },
    {
        sipNameNr_QCameraImageProcessing,
        {0, 0, 1},
        14, methods_QCameraImageProcessing,
        10, enummembers_QCameraImageProcessing,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QCameraImageProcessing,
    0,
    0,
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
    0,
    0,
    0,
    0,
    release_QCameraImageProcessing,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QCameraImageProcessing::staticMetaObject,
    0,
    0,
    0
};
