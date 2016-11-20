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

#include "sipAPIQtX11Extras.h"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtX11Extras/qx11info_x11.sip"
#include <qx11info_x11.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtX11Extras/sipQtX11ExtrasQX11Info.cpp"

#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtX11Extras/sipQtX11ExtrasQX11Info.cpp"


PyDoc_STRVAR(doc_QX11Info_isPlatformX11, "isPlatformX11() -> bool");

extern "C" {static PyObject *meth_QX11Info_isPlatformX11(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_isPlatformX11(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QX11Info::isPlatformX11();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_isPlatformX11, doc_QX11Info_isPlatformX11);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_appDpiX, "appDpiX(screen: int = -1) -> int");

extern "C" {static PyObject *meth_QX11Info_appDpiX(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QX11Info_appDpiX(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_screen,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|i", &a0))
        {
            int sipRes;

            sipRes = QX11Info::appDpiX(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_appDpiX, doc_QX11Info_appDpiX);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_appDpiY, "appDpiY(screen: int = -1) -> int");

extern "C" {static PyObject *meth_QX11Info_appDpiY(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QX11Info_appDpiY(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_screen,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|i", &a0))
        {
            int sipRes;

            sipRes = QX11Info::appDpiY(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_appDpiY, doc_QX11Info_appDpiY);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_appRootWindow, "appRootWindow(screen: int = -1) -> int");

extern "C" {static PyObject *meth_QX11Info_appRootWindow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QX11Info_appRootWindow(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_screen,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|i", &a0))
        {
            unsigned long sipRes;

            sipRes = QX11Info::appRootWindow(a0);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_appRootWindow, doc_QX11Info_appRootWindow);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_appScreen, "appScreen() -> int");

extern "C" {static PyObject *meth_QX11Info_appScreen(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_appScreen(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            sipRes = QX11Info::appScreen();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_appScreen, doc_QX11Info_appScreen);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_appTime, "appTime() -> int");

extern "C" {static PyObject *meth_QX11Info_appTime(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_appTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            unsigned long sipRes;

            sipRes = QX11Info::appTime();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_appTime, doc_QX11Info_appTime);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_appUserTime, "appUserTime() -> int");

extern "C" {static PyObject *meth_QX11Info_appUserTime(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_appUserTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            unsigned long sipRes;

            sipRes = QX11Info::appUserTime();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_appUserTime, doc_QX11Info_appUserTime);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_setAppTime, "setAppTime(int)");

extern "C" {static PyObject *meth_QX11Info_setAppTime(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_setAppTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "m", &a0))
        {
            QX11Info::setAppTime(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_setAppTime, doc_QX11Info_setAppTime);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_setAppUserTime, "setAppUserTime(int)");

extern "C" {static PyObject *meth_QX11Info_setAppUserTime(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_setAppUserTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "m", &a0))
        {
            QX11Info::setAppUserTime(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_setAppUserTime, doc_QX11Info_setAppUserTime);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_getTimestamp, "getTimestamp() -> int");

extern "C" {static PyObject *meth_QX11Info_getTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_getTimestamp(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            unsigned long sipRes;

            sipRes = QX11Info::getTimestamp();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_getTimestamp, doc_QX11Info_getTimestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_nextStartupId, "nextStartupId() -> QByteArray");

extern "C" {static PyObject *meth_QX11Info_nextStartupId(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_nextStartupId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QX11Info::nextStartupId());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_nextStartupId, doc_QX11Info_nextStartupId);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_setNextStartupId, "setNextStartupId(Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QX11Info_setNextStartupId(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_setNextStartupId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QX11Info::setNextStartupId(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_setNextStartupId, doc_QX11Info_setNextStartupId);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_display, "display() -> Display");

extern "C" {static PyObject *meth_QX11Info_display(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_display(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Display*sipRes;

            sipRes = QX11Info::display();

            return sipConvertFromType(sipRes,sipType_Display,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_display, doc_QX11Info_display);

    return NULL;
}


PyDoc_STRVAR(doc_QX11Info_connection, "connection() -> xcb_connection_t");

extern "C" {static PyObject *meth_QX11Info_connection(PyObject *, PyObject *);}
static PyObject *meth_QX11Info_connection(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            xcb_connection_t*sipRes;

            sipRes = QX11Info::connection();

            return sipConvertFromType(sipRes,sipType_xcb_connection_t,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QX11Info, sipName_connection, doc_QX11Info_connection);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QX11Info(void *, int);}
static void release_QX11Info(void *sipCppV,int)
{
    delete reinterpret_cast<QX11Info *>(sipCppV);
}


extern "C" {static void dealloc_QX11Info(sipSimpleWrapper *);}
static void dealloc_QX11Info(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QX11Info(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QX11Info[] = {
    {SIP_MLNAME_CAST(sipName_appDpiX), (PyCFunction)meth_QX11Info_appDpiX, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QX11Info_appDpiX)},
    {SIP_MLNAME_CAST(sipName_appDpiY), (PyCFunction)meth_QX11Info_appDpiY, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QX11Info_appDpiY)},
    {SIP_MLNAME_CAST(sipName_appRootWindow), (PyCFunction)meth_QX11Info_appRootWindow, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QX11Info_appRootWindow)},
    {SIP_MLNAME_CAST(sipName_appScreen), meth_QX11Info_appScreen, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_appScreen)},
    {SIP_MLNAME_CAST(sipName_appTime), meth_QX11Info_appTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_appTime)},
    {SIP_MLNAME_CAST(sipName_appUserTime), meth_QX11Info_appUserTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_appUserTime)},
    {SIP_MLNAME_CAST(sipName_connection), meth_QX11Info_connection, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_connection)},
    {SIP_MLNAME_CAST(sipName_display), meth_QX11Info_display, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_display)},
    {SIP_MLNAME_CAST(sipName_getTimestamp), meth_QX11Info_getTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_getTimestamp)},
    {SIP_MLNAME_CAST(sipName_isPlatformX11), meth_QX11Info_isPlatformX11, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_isPlatformX11)},
    {SIP_MLNAME_CAST(sipName_nextStartupId), meth_QX11Info_nextStartupId, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_nextStartupId)},
    {SIP_MLNAME_CAST(sipName_setAppTime), meth_QX11Info_setAppTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_setAppTime)},
    {SIP_MLNAME_CAST(sipName_setAppUserTime), meth_QX11Info_setAppUserTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_setAppUserTime)},
    {SIP_MLNAME_CAST(sipName_setNextStartupId), meth_QX11Info_setNextStartupId, METH_VARARGS, SIP_MLDOC_CAST(doc_QX11Info_setNextStartupId)}
};


pyqt5ClassTypeDef sipTypeDef_QtX11Extras_QX11Info = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QX11Info,
        {0}
    },
    {
        sipNameNr_QX11Info,
        {0, 0, 1},
        14, methods_QX11Info,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
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
    dealloc_QX11Info,
    0,
    0,
    0,
    release_QX11Info,
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