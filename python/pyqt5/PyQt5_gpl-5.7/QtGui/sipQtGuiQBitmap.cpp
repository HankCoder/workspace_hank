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

#include "sipAPIQtGui.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qbitmap.sip"
#include <qbitmap.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 54 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 60 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 52 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 63 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 66 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qimagereader.sip"
#include <qimagereader.h>
#line 72 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 78 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"


class sipQBitmap : public QBitmap
{
public:
    sipQBitmap();
    sipQBitmap(const QBitmap&);
    sipQBitmap(const QPixmap&);
    sipQBitmap(int,int);
    sipQBitmap(const QSize&);
    sipQBitmap(const QString&,const char*);
    virtual ~sipQBitmap();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPaintEngine* paintEngine() const;
    int devType() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQBitmap(const sipQBitmap &);
    sipQBitmap &operator = (const sipQBitmap &);

    char sipPyMethods[3];
};

sipQBitmap::sipQBitmap(): QBitmap(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QBitmap& a0): QBitmap(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QPixmap& a0): QBitmap(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(int a0,int a1): QBitmap(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QSize& a0): QBitmap(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::sipQBitmap(const QString& a0,const char*a1): QBitmap(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBitmap::~sipQBitmap()
{
    sipCommonDtor(sipPySelf);
}

int sipQBitmap::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QBitmap::metric(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_28(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QPaintEngine* sipQBitmap::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_paintEngine);

    if (!sipMeth)
        return QBitmap::paintEngine();

    extern QPaintEngine* sipVH_QtGui_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_29(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQBitmap::devType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_devType);

    if (!sipMeth)
        return QBitmap::devType();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QBitmap_clear, "clear(self)");

extern "C" {static PyObject *meth_QBitmap_clear(PyObject *, PyObject *);}
static PyObject *meth_QBitmap_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBitmap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBitmap, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitmap, sipName_clear, doc_QBitmap_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QBitmap_fromImage, "fromImage(QImage, flags: Union[Qt.ImageConversionFlags, Qt.ImageConversionFlag] = Qt.AutoColor) -> QBitmap");

extern "C" {static PyObject *meth_QBitmap_fromImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QBitmap_fromImage(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QImage* a0;
        Qt::ImageConversionFlags a1def = Qt::AutoColor;
        Qt::ImageConversionFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9|J1", sipType_QImage, &a0, sipType_Qt_ImageConversionFlags, &a1, &a1State))
        {
            QBitmap*sipRes;

            sipRes = new QBitmap(QBitmap::fromImage(*a0,*a1));
            sipReleaseType(a1,sipType_Qt_ImageConversionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitmap, sipName_fromImage, doc_QBitmap_fromImage);

    return NULL;
}


PyDoc_STRVAR(doc_QBitmap_fromData, "fromData(QSize, str, format: QImage.Format = QImage.Format_MonoLSB) -> QBitmap");

extern "C" {static PyObject *meth_QBitmap_fromData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QBitmap_fromData(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        const uchar* a1;
        QImage::Format a2 = QImage::Format_MonoLSB;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9s|E", sipType_QSize, &a0, &a1, sipType_QImage_Format, &a2))
        {
            QBitmap*sipRes;

            sipRes = new QBitmap(QBitmap::fromData(*a0,a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitmap, sipName_fromData, doc_QBitmap_fromData);

    return NULL;
}


PyDoc_STRVAR(doc_QBitmap_transformed, "transformed(self, QTransform) -> QBitmap");

extern "C" {static PyObject *meth_QBitmap_transformed(PyObject *, PyObject *);}
static PyObject *meth_QBitmap_transformed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTransform* a0;
        const QBitmap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBitmap, &sipCpp, sipType_QTransform, &a0))
        {
            QBitmap*sipRes;

            sipRes = new QBitmap(sipCpp->transformed(*a0));

            return sipConvertFromNewType(sipRes,sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitmap, sipName_transformed, doc_QBitmap_transformed);

    return NULL;
}


PyDoc_STRVAR(doc_QBitmap_swap, "swap(self, QBitmap)");

extern "C" {static PyObject *meth_QBitmap_swap(PyObject *, PyObject *);}
static PyObject *meth_QBitmap_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBitmap* a0;
        QBitmap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBitmap, &sipCpp, sipType_QBitmap, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBitmap, sipName_swap, doc_QBitmap_swap);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBitmap(void *, int);}
static void release_QBitmap(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQBitmap *>(sipCppV);
    else
        delete reinterpret_cast<QBitmap *>(sipCppV);
}


extern "C" {static void assign_QBitmap(void *, SIP_SSIZE_T, const void *);}
static void assign_QBitmap(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBitmap *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBitmap *>(sipSrc);
}


extern "C" {static void *array_QBitmap(SIP_SSIZE_T);}
static void *array_QBitmap(SIP_SSIZE_T sipNrElem)
{
    return new QBitmap[sipNrElem];
}


extern "C" {static void *copy_QBitmap(const void *, SIP_SSIZE_T);}
static void *copy_QBitmap(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBitmap(reinterpret_cast<const QBitmap *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBitmap(sipSimpleWrapper *);}
static void dealloc_QBitmap(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQBitmap *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QBitmap(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QBitmap(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBitmap(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQBitmap *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQBitmap();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QBitmap* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBitmap, &a0))
        {
            sipCpp = new sipQBitmap(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPixmap* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmap, &a0))
        {
            sipCpp = new sipQBitmap(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii", &a0, &a1))
        {
            sipCpp = new sipQBitmap(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSize, &a0))
        {
            sipCpp = new sipQBitmap(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const char* a1 = 0;
        PyObject *a1Keep = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|AA", sipType_QString,&a0, &a0State, &a1Keep, &a1))
        {
            sipCpp = new sipQBitmap(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            Py_XDECREF(a1Keep);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QVariant* a0;
        PyObject *a0Wrapper;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "@J1", &a0Wrapper, sipType_QVariant, &a0, &a0State))
        {
            sipErrorState sipError = sipErrorNone;

#line 40 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qbitmap.sip"
        if (a0->canConvert<QBitmap>())
            sipCpp = new sipQBitmap(a0->value<QBitmap>());
        else
            sipError = sipBadCallableArg(0, a0Wrapper);
#line 500 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQBitmap.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            if (sipError == sipErrorNone)
            {
                sipCpp->sipPySelf = sipSelf;

                return sipCpp;
            }

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QBitmap[] = {{228, 255, 1}};


static PyMethodDef methods_QBitmap[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QBitmap_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitmap_clear)},
    {SIP_MLNAME_CAST(sipName_fromData), (PyCFunction)meth_QBitmap_fromData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QBitmap_fromData)},
    {SIP_MLNAME_CAST(sipName_fromImage), (PyCFunction)meth_QBitmap_fromImage, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QBitmap_fromImage)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QBitmap_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitmap_swap)},
    {SIP_MLNAME_CAST(sipName_transformed), meth_QBitmap_transformed, METH_VARARGS, SIP_MLDOC_CAST(doc_QBitmap_transformed)}
};

PyDoc_STRVAR(doc_QBitmap, "\1QBitmap()\n"
    "QBitmap(QBitmap)\n"
    "QBitmap(QPixmap)\n"
    "QBitmap(int, int)\n"
    "QBitmap(QSize)\n"
    "QBitmap(str, format: str = None)\n"
    "QBitmap(Any)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QBitmap = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBitmap,
        {0}
    },
    {
        sipNameNr_QBitmap,
        {0, 0, 1},
        5, methods_QBitmap,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBitmap,
    -1,
    -1,
    supers_QBitmap,
    0,
    init_type_QBitmap,
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
    dealloc_QBitmap,
    assign_QBitmap,
    array_QBitmap,
    copy_QBitmap,
    release_QBitmap,
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
