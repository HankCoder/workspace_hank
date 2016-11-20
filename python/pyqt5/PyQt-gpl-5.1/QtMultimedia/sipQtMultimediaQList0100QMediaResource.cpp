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

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaresource.sip"
#include <qmediaresource.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"


extern "C" {static void assign_QList_0100QMediaResource(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QMediaResource(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QMediaResource> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QMediaResource> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QMediaResource(SIP_SSIZE_T);}
static void *array_QList_0100QMediaResource(SIP_SSIZE_T sipNrElem)
{
    return new QList<QMediaResource>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QMediaResource(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QMediaResource(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QMediaResource>(reinterpret_cast<const QList<QMediaResource> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QMediaResource(void *, int);}
static void release_QList_0100QMediaResource(void *ptr, int)
{
    delete reinterpret_cast<QList<QMediaResource> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QMediaResource(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QMediaResource(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QMediaResource> **sipCppPtr = reinterpret_cast<QList<QMediaResource> **>(sipCppPtrV);

#line 59 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QMediaResource, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QMediaResource> *ql = new QList<QMediaResource>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QMediaResource *t = reinterpret_cast<QMediaResource *>(sipConvertToType(itm, sipType_QMediaResource, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QMediaResource, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QMediaResource, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QMediaResource(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QMediaResource(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QMediaResource> *sipCpp = reinterpret_cast<QList<QMediaResource> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QMediaResource *t = new QMediaResource(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QMediaResource, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 155 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"
}


sipMappedTypeDef sipTypeDef_QtMultimedia_QList_0100QMediaResource = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2566,
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
    assign_QList_0100QMediaResource,
    array_QList_0100QMediaResource,
    copy_QList_0100QMediaResource,
    release_QList_0100QMediaResource,
    convertTo_QList_0100QMediaResource,
    convertFrom_QList_0100QMediaResource
};
