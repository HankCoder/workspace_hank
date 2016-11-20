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

#include "sipAPIQtHelp.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtHelp/qhelpsearchengine.sip"
#include <qhelpsearchengine.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtHelp/sipQtHelpQHelpSearchQuery.cpp"

#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtHelp/sipQtHelpQHelpSearchQuery.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QHelpSearchQuery(void *, int);}
static void release_QHelpSearchQuery(void *sipCppV,int)
{
    delete reinterpret_cast<QHelpSearchQuery *>(sipCppV);
}


extern "C" {static void assign_QHelpSearchQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QHelpSearchQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHelpSearchQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHelpSearchQuery *>(sipSrc);
}


extern "C" {static void *array_QHelpSearchQuery(SIP_SSIZE_T);}
static void *array_QHelpSearchQuery(SIP_SSIZE_T sipNrElem)
{
    return new QHelpSearchQuery[sipNrElem];
}


extern "C" {static void *copy_QHelpSearchQuery(const void *, SIP_SSIZE_T);}
static void *copy_QHelpSearchQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHelpSearchQuery(reinterpret_cast<const QHelpSearchQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHelpSearchQuery(sipSimpleWrapper *);}
static void dealloc_QHelpSearchQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QHelpSearchQuery(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QHelpSearchQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHelpSearchQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QHelpSearchQuery *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QHelpSearchQuery();

            return sipCpp;
        }
    }

    {
        QHelpSearchQuery::FieldName a0;
        const QStringList* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1", sipType_QHelpSearchQuery_FieldName, &a0, sipType_QStringList,&a1, &a1State))
        {
            sipCpp = new QHelpSearchQuery(a0,*a1);
            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);

            return sipCpp;
        }
    }

    {
        const QHelpSearchQuery* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHelpSearchQuery, &a0))
        {
            sipCpp = new QHelpSearchQuery(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_QHelpSearchQuery[] = {
    {sipName_ALL, static_cast<int>(QHelpSearchQuery::ALL), 9},
    {sipName_ATLEAST, static_cast<int>(QHelpSearchQuery::ATLEAST), 9},
    {sipName_DEFAULT, static_cast<int>(QHelpSearchQuery::DEFAULT), 9},
    {sipName_FUZZY, static_cast<int>(QHelpSearchQuery::FUZZY), 9},
    {sipName_PHRASE, static_cast<int>(QHelpSearchQuery::PHRASE), 9},
    {sipName_WITHOUT, static_cast<int>(QHelpSearchQuery::WITHOUT), 9},
};

PyDoc_STRVAR(doc_QHelpSearchQuery, "\1QHelpSearchQuery()\n"
    "QHelpSearchQuery(QHelpSearchQuery.FieldName, Iterable[str])\n"
    "QHelpSearchQuery(QHelpSearchQuery)");


pyqt5ClassTypeDef sipTypeDef_QtHelp_QHelpSearchQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QHelpSearchQuery,
        {0}
    },
    {
        sipNameNr_QHelpSearchQuery,
        {0, 0, 1},
        0, 0,
        6, enummembers_QHelpSearchQuery,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHelpSearchQuery,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QHelpSearchQuery,
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
    dealloc_QHelpSearchQuery,
    assign_QHelpSearchQuery,
    array_QHelpSearchQuery,
    copy_QHelpSearchQuery,
    release_QHelpSearchQuery,
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