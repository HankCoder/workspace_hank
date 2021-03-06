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

#include "sipAPIQtQml.h"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQList0100QQmlProperty.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlproperty.sip"
#include <qqmlproperty.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQList0100QQmlProperty.cpp"


extern "C" {static void assign_QList_0100QQmlProperty(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QQmlProperty(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QQmlProperty> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QQmlProperty> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QQmlProperty(SIP_SSIZE_T);}
static void *array_QList_0100QQmlProperty(SIP_SSIZE_T sipNrElem)
{
    return new QList<QQmlProperty>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QQmlProperty(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QQmlProperty(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QQmlProperty>(reinterpret_cast<const QList<QQmlProperty> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QQmlProperty(void *, int);}
static void release_QList_0100QQmlProperty(void *ptr, int)
{
    delete reinterpret_cast<QList<QQmlProperty> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QQmlProperty(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QQmlProperty(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QQmlProperty> **sipCppPtr = reinterpret_cast<QList<QQmlProperty> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QQmlProperty, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QQmlProperty> *ql = new QList<QQmlProperty>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QQmlProperty *t = reinterpret_cast<QQmlProperty *>(sipConvertToType(itm, sipType_QQmlProperty, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QQmlProperty, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QQmlProperty, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQList0100QQmlProperty.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QQmlProperty(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QQmlProperty(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QQmlProperty> *sipCpp = reinterpret_cast<QList<QQmlProperty> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QQmlProperty *t = new QQmlProperty(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QQmlProperty, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 155 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQml/sipQtQmlQList0100QQmlProperty.cpp"
}


sipMappedTypeDef sipTypeDef_QtQml_QList_0100QQmlProperty = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_919,
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
    assign_QList_0100QQmlProperty,
    array_QList_0100QQmlProperty,
    copy_QList_0100QQmlProperty,
    release_QList_0100QQmlProperty,
    convertTo_QList_0100QQmlProperty,
    convertFrom_QList_0100QQmlProperty
};
