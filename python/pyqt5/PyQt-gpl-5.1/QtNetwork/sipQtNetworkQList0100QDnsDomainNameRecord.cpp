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

#include "sipAPIQtNetwork.h"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtNetwork/sipQtNetworkQList0100QDnsDomainNameRecord.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtNetwork/sipQtNetworkQList0100QDnsDomainNameRecord.cpp"


extern "C" {static void assign_QList_0100QDnsDomainNameRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QDnsDomainNameRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QDnsDomainNameRecord> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QDnsDomainNameRecord> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QDnsDomainNameRecord(SIP_SSIZE_T);}
static void *array_QList_0100QDnsDomainNameRecord(SIP_SSIZE_T sipNrElem)
{
    return new QList<QDnsDomainNameRecord>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QDnsDomainNameRecord(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QDnsDomainNameRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QDnsDomainNameRecord>(reinterpret_cast<const QList<QDnsDomainNameRecord> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QDnsDomainNameRecord(void *, int);}
static void release_QList_0100QDnsDomainNameRecord(void *ptr, int)
{
    delete reinterpret_cast<QList<QDnsDomainNameRecord> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QDnsDomainNameRecord(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QDnsDomainNameRecord(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QDnsDomainNameRecord> **sipCppPtr = reinterpret_cast<QList<QDnsDomainNameRecord> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QDnsDomainNameRecord, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QDnsDomainNameRecord> *ql = new QList<QDnsDomainNameRecord>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QDnsDomainNameRecord *t = reinterpret_cast<QDnsDomainNameRecord *>(sipConvertToType(itm, sipType_QDnsDomainNameRecord, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QDnsDomainNameRecord, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QDnsDomainNameRecord, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtNetwork/sipQtNetworkQList0100QDnsDomainNameRecord.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QDnsDomainNameRecord(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QDnsDomainNameRecord(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QDnsDomainNameRecord> *sipCpp = reinterpret_cast<QList<QDnsDomainNameRecord> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QDnsDomainNameRecord *t = new QDnsDomainNameRecord(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QDnsDomainNameRecord, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 155 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtNetwork/sipQtNetworkQList0100QDnsDomainNameRecord.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0100QDnsDomainNameRecord = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2075,
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
    assign_QList_0100QDnsDomainNameRecord,
    array_QList_0100QDnsDomainNameRecord,
    copy_QList_0100QDnsDomainNameRecord,
    release_QList_0100QDnsDomainNameRecord,
    convertTo_QList_0100QDnsDomainNameRecord,
    convertFrom_QList_0100QDnsDomainNameRecord
};
