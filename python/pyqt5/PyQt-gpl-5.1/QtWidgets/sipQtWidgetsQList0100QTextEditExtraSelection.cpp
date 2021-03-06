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

#include "sipAPIQtWidgets.h"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0100QTextEditExtraSelection.cpp"

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qtextedit.sip"
#include <qtextedit.h>
#line 37 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qtextedit.sip"
#include <qtextedit.h>
#line 35 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0100QTextEditExtraSelection.cpp"


extern "C" {static void assign_QList_0100QTextEdit_ExtraSelection(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QTextEdit_ExtraSelection(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QTextEdit::ExtraSelection> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QTextEdit::ExtraSelection> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QTextEdit_ExtraSelection(SIP_SSIZE_T);}
static void *array_QList_0100QTextEdit_ExtraSelection(SIP_SSIZE_T sipNrElem)
{
    return new QList<QTextEdit::ExtraSelection>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QTextEdit_ExtraSelection(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QTextEdit_ExtraSelection(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QTextEdit::ExtraSelection>(reinterpret_cast<const QList<QTextEdit::ExtraSelection> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QTextEdit_ExtraSelection(void *, int);}
static void release_QList_0100QTextEdit_ExtraSelection(void *ptr, int)
{
    delete reinterpret_cast<QList<QTextEdit::ExtraSelection> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QTextEdit_ExtraSelection(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QTextEdit_ExtraSelection(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QTextEdit::ExtraSelection> **sipCppPtr = reinterpret_cast<QList<QTextEdit::ExtraSelection> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QTextEdit_ExtraSelection, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QTextEdit::ExtraSelection> *ql = new QList<QTextEdit::ExtraSelection>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QTextEdit::ExtraSelection *t = reinterpret_cast<QTextEdit::ExtraSelection *>(sipConvertToType(itm, sipType_QTextEdit_ExtraSelection, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QTextEdit_ExtraSelection, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QTextEdit_ExtraSelection, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 123 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0100QTextEditExtraSelection.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QTextEdit_ExtraSelection(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QTextEdit_ExtraSelection(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QTextEdit::ExtraSelection> *sipCpp = reinterpret_cast<QList<QTextEdit::ExtraSelection> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTextEdit::ExtraSelection *t = new QTextEdit::ExtraSelection(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QTextEdit_ExtraSelection, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 157 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQList0100QTextEditExtraSelection.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0100QTextEdit_ExtraSelection = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4407,
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
    assign_QList_0100QTextEdit_ExtraSelection,
    array_QList_0100QTextEdit_ExtraSelection,
    copy_QList_0100QTextEdit_ExtraSelection,
    release_QList_0100QTextEdit_ExtraSelection,
    convertTo_QList_0100QTextEdit_ExtraSelection,
    convertFrom_QList_0100QTextEdit_ExtraSelection
};
