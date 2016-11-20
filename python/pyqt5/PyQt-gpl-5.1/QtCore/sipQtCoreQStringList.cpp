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

#include "sipAPIQtCore.h"

#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQStringList.cpp"



extern "C" {static void assign_QStringList(void *, SIP_SSIZE_T, const void *);}
static void assign_QStringList(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStringList *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStringList *>(sipSrc);
}


extern "C" {static void *array_QStringList(SIP_SSIZE_T);}
static void *array_QStringList(SIP_SSIZE_T sipNrElem)
{
    return new QStringList[sipNrElem];
}


extern "C" {static void *copy_QStringList(const void *, SIP_SSIZE_T);}
static void *copy_QStringList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStringList(reinterpret_cast<const QStringList *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringList(void *, int);}
static void release_QStringList(void *ptr, int)
{
    delete reinterpret_cast<QStringList *>(ptr);
}



extern "C" {static int convertTo_QStringList(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStringList **sipCppPtr = reinterpret_cast<QStringList **>(sipCppPtrV);

#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstringlist.sip"
if (sipIsErr == NULL)
    return qpycore_PySequence_Check_QStringList(sipPy);

*sipCppPtr = new QStringList(qpycore_PySequence_AsQStringList(sipPy));

return sipGetState(sipTransferObj);
#line 75 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQStringList.cpp"
}


extern "C" {static PyObject *convertFrom_QStringList(void *, PyObject *);}
static PyObject *convertFrom_QStringList(void *sipCppV, PyObject *)
{
   QStringList *sipCpp = reinterpret_cast<QStringList *>(sipCppV);

#line 40 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstringlist.sip"
    return qpycore_PyObject_FromQStringList(*sipCpp);
#line 86 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQStringList.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringList = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringList,
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
    assign_QStringList,
    array_QStringList,
    copy_QStringList,
    release_QStringList,
    convertTo_QStringList,
    convertFrom_QStringList
};