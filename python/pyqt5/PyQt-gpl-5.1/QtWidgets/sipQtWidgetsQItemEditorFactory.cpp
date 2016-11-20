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

#line 38 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qitemeditorfactory.sip"
#include <qitemeditorfactory.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQItemEditorFactory.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qitemeditorfactory.sip"
#include <qitemeditorfactory.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQItemEditorFactory.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQItemEditorFactory.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQItemEditorFactory.cpp"


class sipQItemEditorFactory : public QItemEditorFactory
{
public:
    sipQItemEditorFactory();
    sipQItemEditorFactory(const QItemEditorFactory&);
    virtual ~sipQItemEditorFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QByteArray valuePropertyName(int) const;
    QWidget* createEditor(int,QWidget*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQItemEditorFactory(const sipQItemEditorFactory &);
    sipQItemEditorFactory &operator = (const sipQItemEditorFactory &);

    char sipPyMethods[2];
};

sipQItemEditorFactory::sipQItemEditorFactory(): QItemEditorFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQItemEditorFactory::sipQItemEditorFactory(const QItemEditorFactory& a0): QItemEditorFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQItemEditorFactory::~sipQItemEditorFactory()
{
    sipCommonDtor(sipPySelf);
}

QByteArray sipQItemEditorFactory::valuePropertyName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_valuePropertyName);

    if (!sipMeth)
        return QItemEditorFactory::valuePropertyName(a0);

    extern QByteArray sipVH_QtWidgets_99(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_99(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QWidget* sipQItemEditorFactory::createEditor(int a0,QWidget*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_createEditor);

    if (!sipMeth)
        return QItemEditorFactory::createEditor(a0,a1);

    extern QWidget* sipVH_QtWidgets_100(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,QWidget*);

    return sipVH_QtWidgets_100(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QItemEditorFactory_createEditor, "createEditor(self, int, QWidget) -> QWidget");

extern "C" {static PyObject *meth_QItemEditorFactory_createEditor(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_createEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QWidget* a1;
        sipWrapper *sipOwner = 0;
        const QItemEditorFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJH", &sipSelf, sipType_QItemEditorFactory, &sipCpp, &a0, sipType_QWidget, &a1, &sipOwner))
        {
            QWidget*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QItemEditorFactory::createEditor(a0,a1) : sipCpp->createEditor(a0,a1));

            if (sipOwner)
                sipTransferTo(sipSelf, (PyObject *)sipOwner);
            else
                sipTransferBack(sipSelf);

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_createEditor, doc_QItemEditorFactory_createEditor);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_valuePropertyName, "valuePropertyName(self, int) -> QByteArray");

extern "C" {static PyObject *meth_QItemEditorFactory_valuePropertyName(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_valuePropertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QItemEditorFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QItemEditorFactory, &sipCpp, &a0))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray((sipSelfWasArg ? sipCpp->QItemEditorFactory::valuePropertyName(a0) : sipCpp->valuePropertyName(a0)));

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_valuePropertyName, doc_QItemEditorFactory_valuePropertyName);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_registerEditor, "registerEditor(self, int, QItemEditorCreatorBase)");

extern "C" {static PyObject *meth_QItemEditorFactory_registerEditor(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_registerEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QItemEditorCreatorBase* a1;
        QItemEditorFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ:", &sipSelf, sipType_QItemEditorFactory, &sipCpp, &a0, sipType_QItemEditorCreatorBase, &a1))
        {
            sipCpp->registerEditor(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_registerEditor, doc_QItemEditorFactory_registerEditor);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_defaultFactory, "defaultFactory() -> QItemEditorFactory");

extern "C" {static PyObject *meth_QItemEditorFactory_defaultFactory(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_defaultFactory(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const QItemEditorFactory*sipRes;

            sipRes = QItemEditorFactory::defaultFactory();

            return sipConvertFromType(const_cast<QItemEditorFactory *>(sipRes),sipType_QItemEditorFactory,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_defaultFactory, doc_QItemEditorFactory_defaultFactory);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_setDefaultFactory, "setDefaultFactory(QItemEditorFactory)");

extern "C" {static PyObject *meth_QItemEditorFactory_setDefaultFactory(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_setDefaultFactory(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QItemEditorFactory* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J:", sipType_QItemEditorFactory, &a0))
        {
            QItemEditorFactory::setDefaultFactory(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_setDefaultFactory, doc_QItemEditorFactory_setDefaultFactory);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QItemEditorFactory(void *, int);}
static void release_QItemEditorFactory(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQItemEditorFactory *>(sipCppV);
    else
        delete reinterpret_cast<QItemEditorFactory *>(sipCppV);
}


extern "C" {static void assign_QItemEditorFactory(void *, SIP_SSIZE_T, const void *);}
static void assign_QItemEditorFactory(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QItemEditorFactory *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QItemEditorFactory *>(sipSrc);
}


extern "C" {static void *array_QItemEditorFactory(SIP_SSIZE_T);}
static void *array_QItemEditorFactory(SIP_SSIZE_T sipNrElem)
{
    return new QItemEditorFactory[sipNrElem];
}


extern "C" {static void *copy_QItemEditorFactory(const void *, SIP_SSIZE_T);}
static void *copy_QItemEditorFactory(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QItemEditorFactory(reinterpret_cast<const QItemEditorFactory *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QItemEditorFactory(sipSimpleWrapper *);}
static void dealloc_QItemEditorFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQItemEditorFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QItemEditorFactory(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QItemEditorFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QItemEditorFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQItemEditorFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQItemEditorFactory();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QItemEditorFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QItemEditorFactory, &a0))
        {
            sipCpp = new sipQItemEditorFactory(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QItemEditorFactory[] = {
    {SIP_MLNAME_CAST(sipName_createEditor), meth_QItemEditorFactory_createEditor, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_createEditor)},
    {SIP_MLNAME_CAST(sipName_defaultFactory), meth_QItemEditorFactory_defaultFactory, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_defaultFactory)},
    {SIP_MLNAME_CAST(sipName_registerEditor), meth_QItemEditorFactory_registerEditor, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_registerEditor)},
    {SIP_MLNAME_CAST(sipName_setDefaultFactory), meth_QItemEditorFactory_setDefaultFactory, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_setDefaultFactory)},
    {SIP_MLNAME_CAST(sipName_valuePropertyName), meth_QItemEditorFactory_valuePropertyName, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_valuePropertyName)}
};

PyDoc_STRVAR(doc_QItemEditorFactory, "\1QItemEditorFactory()\n"
    "QItemEditorFactory(QItemEditorFactory)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QItemEditorFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QItemEditorFactory,
        {0}
    },
    {
        sipNameNr_QItemEditorFactory,
        {0, 0, 1},
        5, methods_QItemEditorFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QItemEditorFactory,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QItemEditorFactory,
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
    dealloc_QItemEditorFactory,
    assign_QItemEditorFactory,
    array_QItemEditorFactory,
    copy_QItemEditorFactory,
    release_QItemEditorFactory,
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