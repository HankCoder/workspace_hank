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

#include "sipAPIQtCore.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qlibraryinfo.sip"
#include <qlibraryinfo.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLibraryInfo.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLibraryInfo.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQLibraryInfo.cpp"


PyDoc_STRVAR(doc_QLibraryInfo_licensee, "licensee() -> str");

extern "C" {static PyObject *meth_QLibraryInfo_licensee(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_licensee(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            sipRes = new QString(QLibraryInfo::licensee());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_licensee, doc_QLibraryInfo_licensee);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_licensedProducts, "licensedProducts() -> str");

extern "C" {static PyObject *meth_QLibraryInfo_licensedProducts(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_licensedProducts(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            sipRes = new QString(QLibraryInfo::licensedProducts());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_licensedProducts, doc_QLibraryInfo_licensedProducts);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_location, "location(QLibraryInfo.LibraryLocation) -> str");

extern "C" {static PyObject *meth_QLibraryInfo_location(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_location(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibraryInfo::LibraryLocation a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QLibraryInfo_LibraryLocation, &a0))
        {
            QString*sipRes;

            sipRes = new QString(QLibraryInfo::location(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_location, doc_QLibraryInfo_location);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_buildDate, "buildDate() -> QDate");

extern "C" {static PyObject *meth_QLibraryInfo_buildDate(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_buildDate(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QDate*sipRes;

            sipRes = new QDate(QLibraryInfo::buildDate());

            return sipConvertFromNewType(sipRes,sipType_QDate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_buildDate, doc_QLibraryInfo_buildDate);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_isDebugBuild, "isDebugBuild() -> bool");

extern "C" {static PyObject *meth_QLibraryInfo_isDebugBuild(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_isDebugBuild(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QLibraryInfo::isDebugBuild();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_isDebugBuild, doc_QLibraryInfo_isDebugBuild);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibraryInfo(void *, int);}
static void release_QLibraryInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QLibraryInfo *>(sipCppV);
}


extern "C" {static void dealloc_QLibraryInfo(sipSimpleWrapper *);}
static void dealloc_QLibraryInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLibraryInfo(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QLibraryInfo[] = {
    {SIP_MLNAME_CAST(sipName_buildDate), meth_QLibraryInfo_buildDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_buildDate)},
    {SIP_MLNAME_CAST(sipName_isDebugBuild), meth_QLibraryInfo_isDebugBuild, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_isDebugBuild)},
    {SIP_MLNAME_CAST(sipName_licensedProducts), meth_QLibraryInfo_licensedProducts, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_licensedProducts)},
    {SIP_MLNAME_CAST(sipName_licensee), meth_QLibraryInfo_licensee, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_licensee)},
    {SIP_MLNAME_CAST(sipName_location), meth_QLibraryInfo_location, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_location)}
};

static sipEnumMemberDef enummembers_QLibraryInfo[] = {
    {sipName_ArchDataPath, static_cast<int>(QLibraryInfo::ArchDataPath), 102},
    {sipName_BinariesPath, static_cast<int>(QLibraryInfo::BinariesPath), 102},
    {sipName_DataPath, static_cast<int>(QLibraryInfo::DataPath), 102},
    {sipName_DocumentationPath, static_cast<int>(QLibraryInfo::DocumentationPath), 102},
    {sipName_ExamplesPath, static_cast<int>(QLibraryInfo::ExamplesPath), 102},
    {sipName_HeadersPath, static_cast<int>(QLibraryInfo::HeadersPath), 102},
    {sipName_ImportsPath, static_cast<int>(QLibraryInfo::ImportsPath), 102},
    {sipName_LibrariesPath, static_cast<int>(QLibraryInfo::LibrariesPath), 102},
    {sipName_LibraryExecutablesPath, static_cast<int>(QLibraryInfo::LibraryExecutablesPath), 102},
    {sipName_PluginsPath, static_cast<int>(QLibraryInfo::PluginsPath), 102},
    {sipName_PrefixPath, static_cast<int>(QLibraryInfo::PrefixPath), 102},
    {sipName_Qml2ImportsPath, static_cast<int>(QLibraryInfo::Qml2ImportsPath), 102},
    {sipName_SettingsPath, static_cast<int>(QLibraryInfo::SettingsPath), 102},
    {sipName_TestsPath, static_cast<int>(QLibraryInfo::TestsPath), 102},
    {sipName_TranslationsPath, static_cast<int>(QLibraryInfo::TranslationsPath), 102},
};


pyqt5ClassTypeDef sipTypeDef_QtCore_QLibraryInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLibraryInfo,
        {0}
    },
    {
        sipNameNr_QLibraryInfo,
        {0, 0, 1},
        5, methods_QLibraryInfo,
        15, enummembers_QLibraryInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QLibraryInfo,
    0,
    0,
    0,
    release_QLibraryInfo,
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
