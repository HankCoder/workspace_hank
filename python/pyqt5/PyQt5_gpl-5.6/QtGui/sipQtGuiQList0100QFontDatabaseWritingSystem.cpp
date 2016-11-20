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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpygui_qlist.sip"
#include <qfontdatabase.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"


extern "C" {static void assign_QList_0100QFontDatabase_WritingSystem(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QFontDatabase_WritingSystem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QFontDatabase::WritingSystem> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QFontDatabase::WritingSystem> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QFontDatabase_WritingSystem(SIP_SSIZE_T);}
static void *array_QList_0100QFontDatabase_WritingSystem(SIP_SSIZE_T sipNrElem)
{
    return new QList<QFontDatabase::WritingSystem>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QFontDatabase_WritingSystem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QFontDatabase_WritingSystem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QFontDatabase::WritingSystem>(reinterpret_cast<const QList<QFontDatabase::WritingSystem> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QFontDatabase_WritingSystem(void *, int);}
static void release_QList_0100QFontDatabase_WritingSystem(void *ptr, int)
{
    delete reinterpret_cast<QList<QFontDatabase::WritingSystem> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QFontDatabase_WritingSystem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QFontDatabase_WritingSystem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QFontDatabase::WritingSystem> **sipCppPtr = reinterpret_cast<QList<QFontDatabase::WritingSystem> **>(sipCppPtrV);

#line 56 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpygui_qlist.sip"
    if (!sipIsErr)
        return (PySequence_Check(sipPy)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));

    Py_ssize_t len = PySequence_Size(sipPy);

    if (len < 0)
        return 0;

    QList<QFontDatabase::WritingSystem> *ql = new QList<QFontDatabase::WritingSystem>;

    for (Py_ssize_t i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);

        if (!itm)
        {
            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        if (!sipCanConvertToEnum(itm, sipType_QFontDatabase_WritingSystem))
        {
            PyErr_Format(PyExc_TypeError,
                    "element %zd has type '%s' but 'QFontDatabase.WritingSystem' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        ql->append(
                static_cast<QFontDatabase::WritingSystem>(
                        SIPLong_AsLong(itm)));

        Py_DECREF(itm);
    }

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 121 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QFontDatabase_WritingSystem(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QFontDatabase_WritingSystem(void *sipCppV, PyObject *)
{
   QList<QFontDatabase::WritingSystem> *sipCpp = reinterpret_cast<QList<QFontDatabase::WritingSystem> *>(sipCppV);

#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpygui_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *eobj = sipConvertFromEnum(sipCpp->at(i),
                sipType_QFontDatabase_WritingSystem);

        if (!eobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, eobj);
    }

    return l;
#line 152 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QFontDatabase_WritingSystem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_421,
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
    assign_QList_0100QFontDatabase_WritingSystem,
    array_QList_0100QFontDatabase_WritingSystem,
    copy_QList_0100QFontDatabase_WritingSystem,
    release_QList_0100QFontDatabase_WritingSystem,
    convertTo_QList_0100QFontDatabase_WritingSystem,
    convertFrom_QList_0100QFontDatabase_WritingSystem
};
