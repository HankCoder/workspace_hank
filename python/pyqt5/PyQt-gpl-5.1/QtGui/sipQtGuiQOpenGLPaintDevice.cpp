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

#include "sipAPIQtGui.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qopenglpaintdevice.sip"
#include <qopenglpaintdevice.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLPaintDevice.cpp"

#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLPaintDevice.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLPaintDevice.cpp"
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qopenglcontext.sip"
#include <qopenglcontext.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLPaintDevice.cpp"
#line 56 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQOpenGLPaintDevice.cpp"


class sipQOpenGLPaintDevice : public QOpenGLPaintDevice
{
public:
    sipQOpenGLPaintDevice();
    sipQOpenGLPaintDevice(const QSize&);
    sipQOpenGLPaintDevice(int,int);
    virtual ~sipQOpenGLPaintDevice();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    void ensureActiveTarget();
    QPaintEngine* paintEngine() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQOpenGLPaintDevice(const sipQOpenGLPaintDevice &);
    sipQOpenGLPaintDevice &operator = (const sipQOpenGLPaintDevice &);

    char sipPyMethods[3];
};

sipQOpenGLPaintDevice::sipQOpenGLPaintDevice(): QOpenGLPaintDevice(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLPaintDevice::sipQOpenGLPaintDevice(const QSize& a0): QOpenGLPaintDevice(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLPaintDevice::sipQOpenGLPaintDevice(int a0,int a1): QOpenGLPaintDevice(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLPaintDevice::~sipQOpenGLPaintDevice()
{
    sipCommonDtor(sipPySelf);
}

int sipQOpenGLPaintDevice::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QOpenGLPaintDevice::metric(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_28(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQOpenGLPaintDevice::ensureActiveTarget()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_ensureActiveTarget);

    if (!sipMeth)
    {
        QOpenGLPaintDevice::ensureActiveTarget();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

QPaintEngine* sipQOpenGLPaintDevice::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_paintEngine);

    if (!sipMeth)
        return QOpenGLPaintDevice::paintEngine();

    extern QPaintEngine* sipVH_QtGui_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_29(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_paintEngine, "paintEngine(self) -> QPaintEngine");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_paintEngine(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_paintEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            QPaintEngine*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QOpenGLPaintDevice::paintEngine() : sipCpp->paintEngine());

            return sipConvertFromType(sipRes,sipType_QPaintEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_paintEngine, doc_QOpenGLPaintDevice_paintEngine);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_context, "context(self) -> QOpenGLContext");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_context(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_context(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            QOpenGLContext*sipRes;

            sipRes = sipCpp->context();

            return sipConvertFromType(sipRes,sipType_QOpenGLContext,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_context, doc_QOpenGLPaintDevice_context);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_size, "size(self) -> QSize");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_size(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_size, doc_QOpenGLPaintDevice_size);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_setSize, "setSize(self, QSize)");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_setSize(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_setSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->setSize(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_setSize, doc_QOpenGLPaintDevice_setSize);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_dotsPerMeterX, "dotsPerMeterX(self) -> float");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_dotsPerMeterX(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_dotsPerMeterX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->dotsPerMeterX();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_dotsPerMeterX, doc_QOpenGLPaintDevice_dotsPerMeterX);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_dotsPerMeterY, "dotsPerMeterY(self) -> float");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_dotsPerMeterY(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_dotsPerMeterY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->dotsPerMeterY();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_dotsPerMeterY, doc_QOpenGLPaintDevice_dotsPerMeterY);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_setDotsPerMeterX, "setDotsPerMeterX(self, float)");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_setDotsPerMeterX(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_setDotsPerMeterX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp, &a0))
        {
            sipCpp->setDotsPerMeterX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_setDotsPerMeterX, doc_QOpenGLPaintDevice_setDotsPerMeterX);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_setDotsPerMeterY, "setDotsPerMeterY(self, float)");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_setDotsPerMeterY(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_setDotsPerMeterY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp, &a0))
        {
            sipCpp->setDotsPerMeterY(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_setDotsPerMeterY, doc_QOpenGLPaintDevice_setDotsPerMeterY);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_setPaintFlipped, "setPaintFlipped(self, bool)");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_setPaintFlipped(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_setPaintFlipped(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp, &a0))
        {
            sipCpp->setPaintFlipped(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_setPaintFlipped, doc_QOpenGLPaintDevice_setPaintFlipped);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_paintFlipped, "paintFlipped(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_paintFlipped(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_paintFlipped(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->paintFlipped();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_paintFlipped, doc_QOpenGLPaintDevice_paintFlipped);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_ensureActiveTarget, "ensureActiveTarget(self)");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_ensureActiveTarget(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_ensureActiveTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QOpenGLPaintDevice::ensureActiveTarget() : sipCpp->ensureActiveTarget());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_ensureActiveTarget, doc_QOpenGLPaintDevice_ensureActiveTarget);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_setDevicePixelRatio, "setDevicePixelRatio(self, float)");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_setDevicePixelRatio(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_setDevicePixelRatio(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp, &a0))
        {
            sipCpp->setDevicePixelRatio(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_setDevicePixelRatio, doc_QOpenGLPaintDevice_setDevicePixelRatio);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPaintDevice_metric, "metric(self, QPaintDevice.PaintDeviceMetric) -> int");

extern "C" {static PyObject *meth_QOpenGLPaintDevice_metric(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPaintDevice_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPaintDevice::PaintDeviceMetric a0;
        const QOpenGLPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pE", &sipSelf, sipType_QOpenGLPaintDevice, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QOpenGLPaintDevice::metric(a0) : sipCpp->metric(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPaintDevice, sipName_metric, doc_QOpenGLPaintDevice_metric);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLPaintDevice(void *, int);}
static void release_QOpenGLPaintDevice(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQOpenGLPaintDevice *>(sipCppV);
    else
        delete reinterpret_cast<QOpenGLPaintDevice *>(sipCppV);
}


extern "C" {static void dealloc_QOpenGLPaintDevice(sipSimpleWrapper *);}
static void dealloc_QOpenGLPaintDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQOpenGLPaintDevice *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLPaintDevice(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QOpenGLPaintDevice(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLPaintDevice(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQOpenGLPaintDevice *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQOpenGLPaintDevice();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSize, &a0))
        {
            sipCpp = new sipQOpenGLPaintDevice(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii", &a0, &a1))
        {
            sipCpp = new sipQOpenGLPaintDevice(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOpenGLPaintDevice[] = {{149, 255, 1}};


static PyMethodDef methods_QOpenGLPaintDevice[] = {
    {SIP_MLNAME_CAST(sipName_context), meth_QOpenGLPaintDevice_context, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_context)},
    {SIP_MLNAME_CAST(sipName_dotsPerMeterX), meth_QOpenGLPaintDevice_dotsPerMeterX, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_dotsPerMeterX)},
    {SIP_MLNAME_CAST(sipName_dotsPerMeterY), meth_QOpenGLPaintDevice_dotsPerMeterY, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_dotsPerMeterY)},
    {SIP_MLNAME_CAST(sipName_ensureActiveTarget), meth_QOpenGLPaintDevice_ensureActiveTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_ensureActiveTarget)},
    {SIP_MLNAME_CAST(sipName_metric), meth_QOpenGLPaintDevice_metric, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_metric)},
    {SIP_MLNAME_CAST(sipName_paintEngine), meth_QOpenGLPaintDevice_paintEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_paintEngine)},
    {SIP_MLNAME_CAST(sipName_paintFlipped), meth_QOpenGLPaintDevice_paintFlipped, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_paintFlipped)},
    {SIP_MLNAME_CAST(sipName_setDevicePixelRatio), meth_QOpenGLPaintDevice_setDevicePixelRatio, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_setDevicePixelRatio)},
    {SIP_MLNAME_CAST(sipName_setDotsPerMeterX), meth_QOpenGLPaintDevice_setDotsPerMeterX, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_setDotsPerMeterX)},
    {SIP_MLNAME_CAST(sipName_setDotsPerMeterY), meth_QOpenGLPaintDevice_setDotsPerMeterY, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_setDotsPerMeterY)},
    {SIP_MLNAME_CAST(sipName_setPaintFlipped), meth_QOpenGLPaintDevice_setPaintFlipped, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_setPaintFlipped)},
    {SIP_MLNAME_CAST(sipName_setSize), meth_QOpenGLPaintDevice_setSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_setSize)},
    {SIP_MLNAME_CAST(sipName_size), meth_QOpenGLPaintDevice_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPaintDevice_size)}
};

PyDoc_STRVAR(doc_QOpenGLPaintDevice, "\1QOpenGLPaintDevice()\n"
    "QOpenGLPaintDevice(QSize)\n"
    "QOpenGLPaintDevice(int, int)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLPaintDevice = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLPaintDevice,
        {0}
    },
    {
        sipNameNr_QOpenGLPaintDevice,
        {0, 0, 1},
        13, methods_QOpenGLPaintDevice,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLPaintDevice,
    -1,
    -1,
    supers_QOpenGLPaintDevice,
    0,
    init_type_QOpenGLPaintDevice,
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
    dealloc_QOpenGLPaintDevice,
    0,
    0,
    0,
    release_QOpenGLPaintDevice,
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
