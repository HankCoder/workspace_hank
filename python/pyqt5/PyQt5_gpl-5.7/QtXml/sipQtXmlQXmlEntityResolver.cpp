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

#include "sipAPIQtXml.h"

#line 246 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXml/sipQtXmlQXmlEntityResolver.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXml/sipQtXmlQXmlEntityResolver.cpp"
#line 76 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXml/sipQtXmlQXmlEntityResolver.cpp"


class sipQXmlEntityResolver : public QXmlEntityResolver
{
public:
    sipQXmlEntityResolver();
    sipQXmlEntityResolver(const QXmlEntityResolver&);
    virtual ~sipQXmlEntityResolver();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString errorString() const;
    bool resolveEntity(const QString&,const QString&,QXmlInputSource*&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlEntityResolver(const sipQXmlEntityResolver &);
    sipQXmlEntityResolver &operator = (const sipQXmlEntityResolver &);

    char sipPyMethods[2];
};

sipQXmlEntityResolver::sipQXmlEntityResolver(): QXmlEntityResolver(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlEntityResolver::sipQXmlEntityResolver(const QXmlEntityResolver& a0): QXmlEntityResolver(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlEntityResolver::~sipQXmlEntityResolver()
{
    sipCommonDtor(sipPySelf);
}

QString sipQXmlEntityResolver::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlEntityResolver,sipName_errorString);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_16)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_16)(sipModuleAPI_QtXml_QtCore->em_virthandlers[16]))(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQXmlEntityResolver::resolveEntity(const QString& a0,const QString& a1,QXmlInputSource*&a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlEntityResolver,sipName_resolveEntity);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,QXmlInputSource*&);

    return sipVH_QtXml_3(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QXmlEntityResolver_resolveEntity, "resolveEntity(self, str, str) -> Tuple[bool, QXmlInputSource]");

extern "C" {static PyObject *meth_QXmlEntityResolver_resolveEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlEntityResolver_resolveEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlInputSource* a2;
        QXmlEntityResolver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlEntityResolver, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlEntityResolver, sipName_resolveEntity);
                return NULL;
            }

            sipRes = sipCpp->resolveEntity(*a0,*a1,a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipBuildResult(0,"(bD)",sipRes,a2,sipType_QXmlInputSource,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlEntityResolver, sipName_resolveEntity, doc_QXmlEntityResolver_resolveEntity);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlEntityResolver_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QXmlEntityResolver_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlEntityResolver_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlEntityResolver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlEntityResolver, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlEntityResolver, sipName_errorString);
                return NULL;
            }

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlEntityResolver, sipName_errorString, doc_QXmlEntityResolver_errorString);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlEntityResolver(void *, int);}
static void release_QXmlEntityResolver(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlEntityResolver *>(sipCppV);
    else
        delete reinterpret_cast<QXmlEntityResolver *>(sipCppV);
}


extern "C" {static void dealloc_QXmlEntityResolver(sipSimpleWrapper *);}
static void dealloc_QXmlEntityResolver(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlEntityResolver *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlEntityResolver(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlEntityResolver(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlEntityResolver(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlEntityResolver *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlEntityResolver();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlEntityResolver* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlEntityResolver, &a0))
        {
            sipCpp = new sipQXmlEntityResolver(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlEntityResolver[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QXmlEntityResolver_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlEntityResolver_errorString)},
    {SIP_MLNAME_CAST(sipName_resolveEntity), meth_QXmlEntityResolver_resolveEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlEntityResolver_resolveEntity)}
};

PyDoc_STRVAR(doc_QXmlEntityResolver, "\1QXmlEntityResolver()\n"
    "QXmlEntityResolver(QXmlEntityResolver)");


pyqt5ClassTypeDef sipTypeDef_QtXml_QXmlEntityResolver = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlEntityResolver,
        {0}
    },
    {
        sipNameNr_QXmlEntityResolver,
        {0, 0, 1},
        2, methods_QXmlEntityResolver,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlEntityResolver,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlEntityResolver,
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
    dealloc_QXmlEntityResolver,
    0,
    0,
    0,
    release_QXmlEntityResolver,
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
