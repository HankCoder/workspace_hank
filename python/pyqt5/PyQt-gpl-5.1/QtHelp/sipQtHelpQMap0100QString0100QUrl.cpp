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

#include "sipAPIQtHelp.h"

#line 28 "sip/QtCore/qmap.sip"
#include <qmap.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtHelp/sipQtHelpQMap0100QString0100QUrl.cpp"

#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtHelp/sipQtHelpQMap0100QString0100QUrl.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtHelp/sipQtHelpQMap0100QString0100QUrl.cpp"


extern "C" {static void assign_QMap_0100QString_0100QUrl(void *, SIP_SSIZE_T, const void *);}
static void assign_QMap_0100QString_0100QUrl(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMap<QString,QUrl> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMap<QString,QUrl> *>(sipSrc);
}


extern "C" {static void *array_QMap_0100QString_0100QUrl(SIP_SSIZE_T);}
static void *array_QMap_0100QString_0100QUrl(SIP_SSIZE_T sipNrElem)
{
    return new QMap<QString,QUrl>[sipNrElem];
}


extern "C" {static void *copy_QMap_0100QString_0100QUrl(const void *, SIP_SSIZE_T);}
static void *copy_QMap_0100QString_0100QUrl(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMap<QString,QUrl>(reinterpret_cast<const QMap<QString,QUrl> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMap_0100QString_0100QUrl(void *, int);}
static void release_QMap_0100QString_0100QUrl(void *ptr, int)
{
    delete reinterpret_cast<QMap<QString,QUrl> *>(ptr);
}



extern "C" {static int convertTo_QMap_0100QString_0100QUrl(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMap_0100QString_0100QUrl(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMap<QString,QUrl> **sipCppPtr = reinterpret_cast<QMap<QString,QUrl> **>(sipCppPtrV);

#line 84 "sip/QtCore/qmap.sip"
    PyObject *t1obj, *t2obj;
    SIP_SSIZE_T i = 0;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyDict_Check(sipPy))
            return 0;

        while (PyDict_Next(sipPy, &i, &t1obj, &t2obj))
        {
            if (!sipCanConvertToType(t1obj, sipType_QString, SIP_NOT_NONE))
                return 0;

            if (!sipCanConvertToType(t2obj, sipType_QUrl, SIP_NOT_NONE))
                return 0;
        } 

        return 1;
    }

    QMap<QString, QUrl> *qm = new QMap<QString, QUrl>;
 
    while (PyDict_Next(sipPy, &i, &t1obj, &t2obj))
    {
        int state1, state2;

        QString *t1 = reinterpret_cast<QString *>(sipConvertToType(t1obj, sipType_QString, sipTransferObj, SIP_NOT_NONE, &state1, sipIsErr));
        QUrl *t2 = reinterpret_cast<QUrl *>(sipConvertToType(t2obj, sipType_QUrl, sipTransferObj, SIP_NOT_NONE, &state2, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t1, sipType_QString, state1);
            sipReleaseType(t2, sipType_QUrl, state2);

            delete qm;
            return 0;
        }

        qm->insert(*t1, *t2);

        sipReleaseType(t1, sipType_QString, state1);
        sipReleaseType(t2, sipType_QUrl, state2);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 123 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtHelp/sipQtHelpQMap0100QString0100QUrl.cpp"
}


extern "C" {static PyObject *convertFrom_QMap_0100QString_0100QUrl(void *, PyObject *);}
static PyObject *convertFrom_QMap_0100QString_0100QUrl(void *sipCppV, PyObject *sipTransferObj)
{
   QMap<QString,QUrl> *sipCpp = reinterpret_cast<QMap<QString,QUrl> *>(sipCppV);

#line 32 "sip/QtCore/qmap.sip"
    // Create the dictionary.
    PyObject *d = PyDict_New();

    if (!d)
        return NULL;

    // Set the dictionary elements.
    QMap<QString, QUrl>::const_iterator i = sipCpp->constBegin();

    while (i != sipCpp->constEnd())
    {
        QString *t1 = new QString(i.key());
        QUrl *t2 = new QUrl(i.value());

        PyObject *t1obj = sipConvertFromNewType(t1, sipType_QString, sipTransferObj);
        PyObject *t2obj = sipConvertFromNewType(t2, sipType_QUrl, sipTransferObj);

        if (t1obj == NULL || t2obj == NULL || PyDict_SetItem(d, t1obj, t2obj) < 0)
        {
            Py_DECREF(d);

            if (t1obj)
            {
                Py_DECREF(t1obj);
            }
            else
            {
                delete t1;
            }

            if (t2obj)
            {
                Py_DECREF(t2obj);
            }
            else
            {
                delete t2;
            }

            return NULL;
        }

        Py_DECREF(t1obj);
        Py_DECREF(t2obj);

        ++i;
    }

    return d;
#line 182 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtHelp/sipQtHelpQMap0100QString0100QUrl.cpp"
}


sipMappedTypeDef sipTypeDef_QtHelp_QMap_0100QString_0100QUrl = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_392,
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
    assign_QMap_0100QString_0100QUrl,
    array_QMap_0100QString_0100QUrl,
    copy_QMap_0100QString_0100QUrl,
    release_QMap_0100QString_0100QUrl,
    convertTo_QMap_0100QString_0100QUrl,
    convertFrom_QMap_0100QString_0100QUrl
};
