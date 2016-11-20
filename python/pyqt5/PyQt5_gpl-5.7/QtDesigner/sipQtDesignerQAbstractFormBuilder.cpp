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

#include "sipAPIQtDesigner.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtDesigner/abstractformbuilder.sip"
#include <abstractformbuilder.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtDesigner/sipQtDesignerQAbstractFormBuilder.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtDesigner/sipQtDesignerQAbstractFormBuilder.cpp"
#line 26 "sip/QtCore/qdir.sip"
#include <qdir.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtDesigner/sipQtDesignerQAbstractFormBuilder.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtDesigner/sipQtDesignerQAbstractFormBuilder.cpp"
#line 28 "sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtDesigner/sipQtDesignerQAbstractFormBuilder.cpp"


class sipQAbstractFormBuilder : public QAbstractFormBuilder
{
public:
    sipQAbstractFormBuilder();
    virtual ~sipQAbstractFormBuilder();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void save(QIODevice*,QWidget*);
    QWidget* load(QIODevice*,QWidget*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractFormBuilder(const sipQAbstractFormBuilder &);
    sipQAbstractFormBuilder &operator = (const sipQAbstractFormBuilder &);

    char sipPyMethods[2];
};

sipQAbstractFormBuilder::sipQAbstractFormBuilder(): QAbstractFormBuilder(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractFormBuilder::~sipQAbstractFormBuilder()
{
    sipCommonDtor(sipPySelf);
}

void sipQAbstractFormBuilder::save(QIODevice*a0,QWidget*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_save);

    if (!sipMeth)
    {
        QAbstractFormBuilder::save(a0,a1);
        return;
    }

    extern void sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QIODevice*,QWidget*);

    sipVH_QtDesigner_40(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

QWidget* sipQAbstractFormBuilder::load(QIODevice*a0,QWidget*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_load);

    if (!sipMeth)
        return QAbstractFormBuilder::load(a0,a1);

    extern QWidget* sipVH_QtDesigner_41(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QIODevice*,QWidget*);

    return sipVH_QtDesigner_41(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_load, "load(self, QIODevice, parent: QWidget = None) -> QWidget");

extern "C" {static PyObject *meth_QAbstractFormBuilder_load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIODevice* a0;
        QWidget* a1 = 0;
        sipWrapper *sipOwner = 0;
        QAbstractFormBuilder *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|JH", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp, sipType_QIODevice, &a0, sipType_QWidget, &a1, &sipOwner))
        {
            QWidget*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QAbstractFormBuilder::load(a0,a1) : sipCpp->load(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QWidget,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_load, doc_QAbstractFormBuilder_load);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_save, "save(self, QIODevice, QWidget)");

extern "C" {static PyObject *meth_QAbstractFormBuilder_save(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIODevice* a0;
        QWidget* a1;
        QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp, sipType_QIODevice, &a0, sipType_QWidget, &a1))
        {
            (sipSelfWasArg ? sipCpp->QAbstractFormBuilder::save(a0,a1) : sipCpp->save(a0,a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_save, doc_QAbstractFormBuilder_save);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_setWorkingDirectory, "setWorkingDirectory(self, QDir)");

extern "C" {static PyObject *meth_QAbstractFormBuilder_setWorkingDirectory(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_setWorkingDirectory(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDir* a0;
        QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp, sipType_QDir, &a0))
        {
            sipCpp->setWorkingDirectory(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_setWorkingDirectory, doc_QAbstractFormBuilder_setWorkingDirectory);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_workingDirectory, "workingDirectory(self) -> QDir");

extern "C" {static PyObject *meth_QAbstractFormBuilder_workingDirectory(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_workingDirectory(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp))
        {
            QDir*sipRes;

            sipRes = new QDir(sipCpp->workingDirectory());

            return sipConvertFromNewType(sipRes,sipType_QDir,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_workingDirectory, doc_QAbstractFormBuilder_workingDirectory);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QAbstractFormBuilder_errorString(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_errorString, doc_QAbstractFormBuilder_errorString);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractFormBuilder(void *, int);}
static void release_QAbstractFormBuilder(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractFormBuilder *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractFormBuilder *>(sipCppV);
}


extern "C" {static void dealloc_QAbstractFormBuilder(sipSimpleWrapper *);}
static void dealloc_QAbstractFormBuilder(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractFormBuilder *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractFormBuilder(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractFormBuilder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractFormBuilder(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractFormBuilder *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQAbstractFormBuilder();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractFormBuilder[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QAbstractFormBuilder_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_errorString)},
    {SIP_MLNAME_CAST(sipName_load), (PyCFunction)meth_QAbstractFormBuilder_load, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_load)},
    {SIP_MLNAME_CAST(sipName_save), meth_QAbstractFormBuilder_save, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_save)},
    {SIP_MLNAME_CAST(sipName_setWorkingDirectory), meth_QAbstractFormBuilder_setWorkingDirectory, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_setWorkingDirectory)},
    {SIP_MLNAME_CAST(sipName_workingDirectory), meth_QAbstractFormBuilder_workingDirectory, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_workingDirectory)}
};

PyDoc_STRVAR(doc_QAbstractFormBuilder, "\1QAbstractFormBuilder()");


pyqt5ClassTypeDef sipTypeDef_QtDesigner_QAbstractFormBuilder = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractFormBuilder,
        {0}
    },
    {
        sipNameNr_QAbstractFormBuilder,
        {0, 0, 1},
        5, methods_QAbstractFormBuilder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractFormBuilder,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractFormBuilder,
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
    dealloc_QAbstractFormBuilder,
    0,
    0,
    0,
    release_QAbstractFormBuilder,
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
