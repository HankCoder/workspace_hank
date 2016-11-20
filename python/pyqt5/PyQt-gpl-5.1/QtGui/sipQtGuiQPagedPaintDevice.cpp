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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 77 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 35 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 101 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 38 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 41 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 56 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 44 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"


class sipQPagedPaintDevice : public QPagedPaintDevice
{
public:
    sipQPagedPaintDevice();
    virtual ~sipQPagedPaintDevice();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPaintEngine* paintEngine() const;
    void setMargins(const QPagedPaintDevice::Margins&);
    void setPageSizeMM(const QSizeF&);
    void setPageSize(QPagedPaintDevice::PageSize);
    bool newPage();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPagedPaintDevice(const sipQPagedPaintDevice &);
    sipQPagedPaintDevice &operator = (const sipQPagedPaintDevice &);

    char sipPyMethods[6];
};

sipQPagedPaintDevice::sipQPagedPaintDevice(): QPagedPaintDevice(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPagedPaintDevice::~sipQPagedPaintDevice()
{
    sipCommonDtor(sipPySelf);
}

int sipQPagedPaintDevice::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QPagedPaintDevice::metric(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_28(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QPaintEngine* sipQPagedPaintDevice::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPagedPaintDevice,sipName_paintEngine);

    if (!sipMeth)
        return 0;

    extern QPaintEngine* sipVH_QtGui_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_29(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPagedPaintDevice::setMargins(const QPagedPaintDevice::Margins& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_setMargins);

    if (!sipMeth)
    {
        QPagedPaintDevice::setMargins(a0);
        return;
    }

    extern void sipVH_QtGui_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QPagedPaintDevice::Margins&);

    sipVH_QtGui_31(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPagedPaintDevice::setPageSizeMM(const QSizeF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_setPageSizeMM);

    if (!sipMeth)
    {
        QPagedPaintDevice::setPageSizeMM(a0);
        return;
    }

    extern void sipVH_QtGui_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSizeF&);

    sipVH_QtGui_32(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPagedPaintDevice::setPageSize(QPagedPaintDevice::PageSize a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_setPageSize);

    if (!sipMeth)
    {
        QPagedPaintDevice::setPageSize(a0);
        return;
    }

    extern void sipVH_QtGui_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPagedPaintDevice::PageSize);

    sipVH_QtGui_33(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPagedPaintDevice::newPage()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QPagedPaintDevice,sipName_newPage);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QPagedPaintDevice_newPage, "newPage(self) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_newPage(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_newPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPagedPaintDevice, sipName_newPage);
                return NULL;
            }

            sipRes = sipCpp->newPage();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_newPage, doc_QPagedPaintDevice_newPage);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageSize, "setPageSize(self, QPagedPaintDevice.PageSize)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPagedPaintDevice::PageSize a0;
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPagedPaintDevice_PageSize, &a0))
        {
            (sipSelfWasArg ? sipCpp->QPagedPaintDevice::setPageSize(a0) : sipCpp->setPageSize(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageSize, doc_QPagedPaintDevice_setPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageSize, "pageSize(self) -> QPagedPaintDevice.PageSize");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageSize(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            QPagedPaintDevice::PageSize sipRes;

            sipRes = sipCpp->pageSize();

            return sipConvertFromEnum(sipRes,sipType_QPagedPaintDevice_PageSize);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageSize, doc_QPagedPaintDevice_pageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageSizeMM, "setPageSizeMM(self, QSizeF)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageSizeMM(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageSizeMM(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSizeF* a0;
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QSizeF, &a0))
        {
            (sipSelfWasArg ? sipCpp->QPagedPaintDevice::setPageSizeMM(*a0) : sipCpp->setPageSizeMM(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageSizeMM, doc_QPagedPaintDevice_setPageSizeMM);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageSizeMM, "pageSizeMM(self) -> QSizeF");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageSizeMM(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageSizeMM(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->pageSizeMM());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageSizeMM, doc_QPagedPaintDevice_pageSizeMM);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setMargins, "setMargins(self, QPagedPaintDevice.Margins)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setMargins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QPagedPaintDevice::Margins* a0;
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPagedPaintDevice_Margins, &a0))
        {
            (sipSelfWasArg ? sipCpp->QPagedPaintDevice::setMargins(*a0) : sipCpp->setMargins(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setMargins, doc_QPagedPaintDevice_setMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_margins, "margins(self) -> QPagedPaintDevice.Margins");

extern "C" {static PyObject *meth_QPagedPaintDevice_margins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_margins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            QPagedPaintDevice::Margins*sipRes;

            sipRes = new QPagedPaintDevice::Margins(sipCpp->margins());

            return sipConvertFromNewType(sipRes,sipType_QPagedPaintDevice_Margins,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_margins, doc_QPagedPaintDevice_margins);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPagedPaintDevice(void *, int);}
static void release_QPagedPaintDevice(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPagedPaintDevice *>(sipCppV);
    else
        delete reinterpret_cast<QPagedPaintDevice *>(sipCppV);
}


extern "C" {static void dealloc_QPagedPaintDevice(sipSimpleWrapper *);}
static void dealloc_QPagedPaintDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPagedPaintDevice *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPagedPaintDevice(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPagedPaintDevice(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPagedPaintDevice(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPagedPaintDevice *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPagedPaintDevice();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPagedPaintDevice[] = {{149, 255, 1}};


static PyMethodDef methods_QPagedPaintDevice[] = {
    {SIP_MLNAME_CAST(sipName_margins), meth_QPagedPaintDevice_margins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_margins)},
    {SIP_MLNAME_CAST(sipName_newPage), meth_QPagedPaintDevice_newPage, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_newPage)},
    {SIP_MLNAME_CAST(sipName_pageSize), meth_QPagedPaintDevice_pageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageSize)},
    {SIP_MLNAME_CAST(sipName_pageSizeMM), meth_QPagedPaintDevice_pageSizeMM, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageSizeMM)},
    {SIP_MLNAME_CAST(sipName_setMargins), meth_QPagedPaintDevice_setMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setMargins)},
    {SIP_MLNAME_CAST(sipName_setPageSize), meth_QPagedPaintDevice_setPageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageSize)},
    {SIP_MLNAME_CAST(sipName_setPageSizeMM), meth_QPagedPaintDevice_setPageSizeMM, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageSizeMM)}
};

static sipEnumMemberDef enummembers_QPagedPaintDevice[] = {
    {sipName_A0, static_cast<int>(QPagedPaintDevice::A0), 148},
    {sipName_A1, static_cast<int>(QPagedPaintDevice::A1), 148},
    {sipName_A2, static_cast<int>(QPagedPaintDevice::A2), 148},
    {sipName_A3, static_cast<int>(QPagedPaintDevice::A3), 148},
    {sipName_A4, static_cast<int>(QPagedPaintDevice::A4), 148},
    {sipName_A5, static_cast<int>(QPagedPaintDevice::A5), 148},
    {sipName_A6, static_cast<int>(QPagedPaintDevice::A6), 148},
    {sipName_A7, static_cast<int>(QPagedPaintDevice::A7), 148},
    {sipName_A8, static_cast<int>(QPagedPaintDevice::A8), 148},
    {sipName_A9, static_cast<int>(QPagedPaintDevice::A9), 148},
    {sipName_B0, static_cast<int>(QPagedPaintDevice::B0), 148},
    {sipName_B1, static_cast<int>(QPagedPaintDevice::B1), 148},
    {sipName_B10, static_cast<int>(QPagedPaintDevice::B10), 148},
    {sipName_B2, static_cast<int>(QPagedPaintDevice::B2), 148},
    {sipName_B3, static_cast<int>(QPagedPaintDevice::B3), 148},
    {sipName_B4, static_cast<int>(QPagedPaintDevice::B4), 148},
    {sipName_B5, static_cast<int>(QPagedPaintDevice::B5), 148},
    {sipName_B6, static_cast<int>(QPagedPaintDevice::B6), 148},
    {sipName_B7, static_cast<int>(QPagedPaintDevice::B7), 148},
    {sipName_B8, static_cast<int>(QPagedPaintDevice::B8), 148},
    {sipName_B9, static_cast<int>(QPagedPaintDevice::B9), 148},
    {sipName_C5E, static_cast<int>(QPagedPaintDevice::C5E), 148},
    {sipName_Comm10E, static_cast<int>(QPagedPaintDevice::Comm10E), 148},
    {sipName_Custom, static_cast<int>(QPagedPaintDevice::Custom), 148},
    {sipName_DLE, static_cast<int>(QPagedPaintDevice::DLE), 148},
    {sipName_Executive, static_cast<int>(QPagedPaintDevice::Executive), 148},
    {sipName_Folio, static_cast<int>(QPagedPaintDevice::Folio), 148},
    {sipName_Ledger, static_cast<int>(QPagedPaintDevice::Ledger), 148},
    {sipName_Legal, static_cast<int>(QPagedPaintDevice::Legal), 148},
    {sipName_Letter, static_cast<int>(QPagedPaintDevice::Letter), 148},
    {sipName_Tabloid, static_cast<int>(QPagedPaintDevice::Tabloid), 148},
};

PyDoc_STRVAR(doc_QPagedPaintDevice, "\1QPagedPaintDevice()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPagedPaintDevice = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPagedPaintDevice,
        {0}
    },
    {
        sipNameNr_QPagedPaintDevice,
        {0, 0, 1},
        7, methods_QPagedPaintDevice,
        31, enummembers_QPagedPaintDevice,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPagedPaintDevice,
    -1,
    -1,
    supers_QPagedPaintDevice,
    0,
    init_type_QPagedPaintDevice,
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
    dealloc_QPagedPaintDevice,
    0,
    0,
    0,
    release_QPagedPaintDevice,
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
