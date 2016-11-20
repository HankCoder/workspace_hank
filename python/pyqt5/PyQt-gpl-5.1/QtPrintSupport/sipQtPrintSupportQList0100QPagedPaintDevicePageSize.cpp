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

#include "sipAPIQtPrintSupport.h"

#line 58 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprinterinfo.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"

#line 26 "sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"


extern "C" {static void assign_QList_0100QPagedPaintDevice_PageSize(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QPagedPaintDevice_PageSize(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPagedPaintDevice::PageSize> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPagedPaintDevice::PageSize> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QPagedPaintDevice_PageSize(SIP_SSIZE_T);}
static void *array_QList_0100QPagedPaintDevice_PageSize(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPagedPaintDevice::PageSize>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QPagedPaintDevice_PageSize(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QPagedPaintDevice_PageSize(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPagedPaintDevice::PageSize>(reinterpret_cast<const QList<QPagedPaintDevice::PageSize> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QPagedPaintDevice_PageSize(void *, int);}
static void release_QList_0100QPagedPaintDevice_PageSize(void *ptr, int)
{
    delete reinterpret_cast<QList<QPagedPaintDevice::PageSize> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QPagedPaintDevice_PageSize(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QPagedPaintDevice_PageSize(PyObject *sipPy,void **,int *sipIsErr,PyObject *)
{
#line 86 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprinterinfo.sip"
    if (sipIsErr == NULL)
    {
        // We don't support passing the type as an argument as it isn't
        // currently needed.
        PyErr_SetString(PyExc_NotImplementedError, "converting to QList<QPagedPaintDevice::PageSize> is unsupported");

        return 0;
    }

    // Keep the compiler quiet.
    sipPy = NULL;
    return 0;
#line 82 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QPagedPaintDevice_PageSize(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QPagedPaintDevice_PageSize(void *sipCppV, PyObject *)
{
   QList<QPagedPaintDevice::PageSize> *sipCpp = reinterpret_cast<QList<QPagedPaintDevice::PageSize> *>(sipCppV);

#line 62 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprinterinfo.sip"
    // Create the list.
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *obj = sipConvertFromEnum(sipCpp->at(i), sipType_QPagedPaintDevice_PageSize);

        if (!obj)
        {
            Py_DECREF(l);
            return 0;
        }

        PyList_SET_ITEM(l, i, obj);
    }

    return l;
#line 113 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"
}


sipMappedTypeDef sipTypeDef_QtPrintSupport_QList_0100QPagedPaintDevice_PageSize = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_118,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QPagedPaintDevice_PageSize,
    array_QList_0100QPagedPaintDevice_PageSize,
    copy_QList_0100QPagedPaintDevice_PageSize,
    release_QList_0100QPagedPaintDevice_PageSize,
    convertTo_QList_0100QPagedPaintDevice_PageSize,
    convertFrom_QList_0100QPagedPaintDevice_PageSize
};