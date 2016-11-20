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

#line 184 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXml/sipQtXmlQXmlLocator.cpp"



class sipQXmlLocator : public QXmlLocator
{
public:
    sipQXmlLocator();
    sipQXmlLocator(const QXmlLocator&);
    virtual ~sipQXmlLocator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int lineNumber() const;
    int columnNumber() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlLocator(const sipQXmlLocator &);
    sipQXmlLocator &operator = (const sipQXmlLocator &);

    char sipPyMethods[2];
};

sipQXmlLocator::sipQXmlLocator(): QXmlLocator(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlLocator::sipQXmlLocator(const QXmlLocator& a0): QXmlLocator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlLocator::~sipQXmlLocator()
{
    sipCommonDtor(sipPySelf);
}

int sipQXmlLocator::lineNumber() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlLocator,sipName_lineNumber);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtXml_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQXmlLocator::columnNumber() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QXmlLocator,sipName_columnNumber);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtXml_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QXmlLocator_columnNumber, "columnNumber(self) -> int");

extern "C" {static PyObject *meth_QXmlLocator_columnNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlLocator_columnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlLocator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLocator, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLocator, sipName_columnNumber);
                return NULL;
            }

            sipRes = sipCpp->columnNumber();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLocator, sipName_columnNumber, doc_QXmlLocator_columnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLocator_lineNumber, "lineNumber(self) -> int");

extern "C" {static PyObject *meth_QXmlLocator_lineNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlLocator_lineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlLocator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLocator, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLocator, sipName_lineNumber);
                return NULL;
            }

            sipRes = sipCpp->lineNumber();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLocator, sipName_lineNumber, doc_QXmlLocator_lineNumber);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlLocator(void *, int);}
static void release_QXmlLocator(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlLocator *>(sipCppV);
    else
        delete reinterpret_cast<QXmlLocator *>(sipCppV);
}


extern "C" {static void dealloc_QXmlLocator(sipSimpleWrapper *);}
static void dealloc_QXmlLocator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlLocator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlLocator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlLocator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlLocator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlLocator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlLocator();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlLocator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlLocator, &a0))
        {
            sipCpp = new sipQXmlLocator(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlLocator[] = {
    {SIP_MLNAME_CAST(sipName_columnNumber), meth_QXmlLocator_columnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLocator_columnNumber)},
    {SIP_MLNAME_CAST(sipName_lineNumber), meth_QXmlLocator_lineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLocator_lineNumber)}
};

PyDoc_STRVAR(doc_QXmlLocator, "\1QXmlLocator()\n"
    "QXmlLocator(QXmlLocator)");


pyqt5ClassTypeDef sipTypeDef_QtXml_QXmlLocator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlLocator,
        {0}
    },
    {
        sipNameNr_QXmlLocator,
        {0, 0, 1},
        2, methods_QXmlLocator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlLocator,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlLocator,
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
    dealloc_QXmlLocator,
    0,
    0,
    0,
    release_QXmlLocator,
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
