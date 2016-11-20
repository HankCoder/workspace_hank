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

#include "sipAPIQtQml.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtQml/qqmlnetworkaccessmanagerfactory.sip"
#include <qqmlnetworkaccessmanagerfactory.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQml/sipQtQmlQQmlNetworkAccessManagerFactory.cpp"

#line 26 "sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQml/sipQtQmlQQmlNetworkAccessManagerFactory.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtQml/sipQtQmlQQmlNetworkAccessManagerFactory.cpp"


class sipQQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory
{
public:
    sipQQmlNetworkAccessManagerFactory();
    sipQQmlNetworkAccessManagerFactory(const QQmlNetworkAccessManagerFactory&);
    virtual ~sipQQmlNetworkAccessManagerFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QNetworkAccessManager* create(QObject*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlNetworkAccessManagerFactory(const sipQQmlNetworkAccessManagerFactory &);
    sipQQmlNetworkAccessManagerFactory &operator = (const sipQQmlNetworkAccessManagerFactory &);

    char sipPyMethods[1];
};

sipQQmlNetworkAccessManagerFactory::sipQQmlNetworkAccessManagerFactory(): QQmlNetworkAccessManagerFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlNetworkAccessManagerFactory::sipQQmlNetworkAccessManagerFactory(const QQmlNetworkAccessManagerFactory& a0): QQmlNetworkAccessManagerFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlNetworkAccessManagerFactory::~sipQQmlNetworkAccessManagerFactory()
{
    sipCommonDtor(sipPySelf);
}

QNetworkAccessManager* sipQQmlNetworkAccessManagerFactory::create(QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QQmlNetworkAccessManagerFactory,sipName_create);

    if (!sipMeth)
        return 0;

    extern QNetworkAccessManager* sipVH_QtQml_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*);

    return sipVH_QtQml_2(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQmlNetworkAccessManagerFactory_create, "create(self, QObject) -> QNetworkAccessManager");

extern "C" {static PyObject *meth_QQmlNetworkAccessManagerFactory_create(PyObject *, PyObject *);}
static PyObject *meth_QQmlNetworkAccessManagerFactory_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QObject* a0;
        QQmlNetworkAccessManagerFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlNetworkAccessManagerFactory, &sipCpp, sipType_QObject, &a0))
        {
            QNetworkAccessManager*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QQmlNetworkAccessManagerFactory, sipName_create);
                return NULL;
            }

            sipRes = sipCpp->create(a0);

            return sipConvertFromNewType(sipRes,sipType_QNetworkAccessManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlNetworkAccessManagerFactory, sipName_create, doc_QQmlNetworkAccessManagerFactory_create);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlNetworkAccessManagerFactory(void *, int);}
static void release_QQmlNetworkAccessManagerFactory(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQmlNetworkAccessManagerFactory *>(sipCppV);
    else
        delete reinterpret_cast<QQmlNetworkAccessManagerFactory *>(sipCppV);
}


extern "C" {static void dealloc_QQmlNetworkAccessManagerFactory(sipSimpleWrapper *);}
static void dealloc_QQmlNetworkAccessManagerFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlNetworkAccessManagerFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlNetworkAccessManagerFactory(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlNetworkAccessManagerFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlNetworkAccessManagerFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQmlNetworkAccessManagerFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQQmlNetworkAccessManagerFactory();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QQmlNetworkAccessManagerFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlNetworkAccessManagerFactory, &a0))
        {
            sipCpp = new sipQQmlNetworkAccessManagerFactory(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQmlNetworkAccessManagerFactory[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QQmlNetworkAccessManagerFactory_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlNetworkAccessManagerFactory_create)}
};

PyDoc_STRVAR(doc_QQmlNetworkAccessManagerFactory, "\1QQmlNetworkAccessManagerFactory()\n"
    "QQmlNetworkAccessManagerFactory(QQmlNetworkAccessManagerFactory)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlNetworkAccessManagerFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlNetworkAccessManagerFactory,
        {0}
    },
    {
        sipNameNr_QQmlNetworkAccessManagerFactory,
        {0, 0, 1},
        1, methods_QQmlNetworkAccessManagerFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlNetworkAccessManagerFactory,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlNetworkAccessManagerFactory,
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
    dealloc_QQmlNetworkAccessManagerFactory,
    0,
    0,
    0,
    release_QQmlNetworkAccessManagerFactory,
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