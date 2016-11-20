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

#include "sipAPIQtLocation.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplaceicon.sip"
#include <qplaceicon.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"
#line 27 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qplacemanager.sip"
#include <qplacemanager.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQPlaceIcon.cpp"


PyDoc_STRVAR(doc_QPlaceIcon_url, "url(self, size: QSize = QSize()) -> QUrl");

extern "C" {static PyObject *meth_QPlaceIcon_url(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPlaceIcon_url(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize& a0def = QSize();
        const QSize* a0 = &a0def;
        const QPlaceIcon *sipCpp;

        static const char *sipKwdList[] = {
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J9", &sipSelf, sipType_QPlaceIcon, &sipCpp, sipType_QSize, &a0))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->url(*a0));

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceIcon, sipName_url, doc_QPlaceIcon_url);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceIcon_manager, "manager(self) -> QPlaceManager");

extern "C" {static PyObject *meth_QPlaceIcon_manager(PyObject *, PyObject *);}
static PyObject *meth_QPlaceIcon_manager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceIcon, &sipCpp))
        {
            QPlaceManager*sipRes;

            sipRes = sipCpp->manager();

            return sipConvertFromType(sipRes,sipType_QPlaceManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceIcon, sipName_manager, doc_QPlaceIcon_manager);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceIcon_setManager, "setManager(self, QPlaceManager)");

extern "C" {static PyObject *meth_QPlaceIcon_setManager(PyObject *, PyObject *);}
static PyObject *meth_QPlaceIcon_setManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPlaceManager* a0;
        QPlaceIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPlaceIcon, &sipCpp, sipType_QPlaceManager, &a0))
        {
            sipCpp->setManager(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceIcon, sipName_setManager, doc_QPlaceIcon_setManager);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceIcon_parameters, "parameters(self) -> Dict[str, Any]");

extern "C" {static PyObject *meth_QPlaceIcon_parameters(PyObject *, PyObject *);}
static PyObject *meth_QPlaceIcon_parameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceIcon, &sipCpp))
        {
            QVariantMap*sipRes;

            sipRes = new QVariantMap(sipCpp->parameters());

            return sipConvertFromNewType(sipRes,sipType_QMap_0100QString_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceIcon, sipName_parameters, doc_QPlaceIcon_parameters);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceIcon_setParameters, "setParameters(self, Dict[str, Any])");

extern "C" {static PyObject *meth_QPlaceIcon_setParameters(PyObject *, PyObject *);}
static PyObject *meth_QPlaceIcon_setParameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariantMap* a0;
        int a0State = 0;
        QPlaceIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceIcon, &sipCpp, sipType_QMap_0100QString_0100QVariant,&a0, &a0State))
        {
            sipCpp->setParameters(*a0);
            sipReleaseType(const_cast<QVariantMap *>(a0),sipType_QMap_0100QString_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceIcon, sipName_setParameters, doc_QPlaceIcon_setParameters);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceIcon_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QPlaceIcon_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QPlaceIcon_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceIcon, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceIcon, sipName_isEmpty, doc_QPlaceIcon_isEmpty);

    return NULL;
}


extern "C" {static PyObject *slot_QPlaceIcon___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPlaceIcon___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPlaceIcon *sipCpp = reinterpret_cast<QPlaceIcon *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPlaceIcon));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPlaceIcon* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPlaceIcon, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPlaceIcon::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QPlaceIcon,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPlaceIcon___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPlaceIcon___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPlaceIcon *sipCpp = reinterpret_cast<QPlaceIcon *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPlaceIcon));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPlaceIcon* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPlaceIcon, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPlaceIcon::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QPlaceIcon,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlaceIcon(void *, int);}
static void release_QPlaceIcon(void *sipCppV,int)
{
    delete reinterpret_cast<QPlaceIcon *>(sipCppV);
}


extern "C" {static void assign_QPlaceIcon(void *, SIP_SSIZE_T, const void *);}
static void assign_QPlaceIcon(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPlaceIcon *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPlaceIcon *>(sipSrc);
}


extern "C" {static void *array_QPlaceIcon(SIP_SSIZE_T);}
static void *array_QPlaceIcon(SIP_SSIZE_T sipNrElem)
{
    return new QPlaceIcon[sipNrElem];
}


extern "C" {static void *copy_QPlaceIcon(const void *, SIP_SSIZE_T);}
static void *copy_QPlaceIcon(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPlaceIcon(reinterpret_cast<const QPlaceIcon *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPlaceIcon(sipSimpleWrapper *);}
static void dealloc_QPlaceIcon(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPlaceIcon(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPlaceIcon(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlaceIcon(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPlaceIcon *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPlaceIcon();

            return sipCpp;
        }
    }

    {
        const QPlaceIcon* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceIcon, &a0))
        {
            sipCpp = new QPlaceIcon(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPlaceIcon[] = {
    {(void *)slot_QPlaceIcon___ne__, ne_slot},
    {(void *)slot_QPlaceIcon___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPlaceIcon[] = {
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QPlaceIcon_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceIcon_isEmpty)},
    {SIP_MLNAME_CAST(sipName_manager), meth_QPlaceIcon_manager, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceIcon_manager)},
    {SIP_MLNAME_CAST(sipName_parameters), meth_QPlaceIcon_parameters, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceIcon_parameters)},
    {SIP_MLNAME_CAST(sipName_setManager), meth_QPlaceIcon_setManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceIcon_setManager)},
    {SIP_MLNAME_CAST(sipName_setParameters), meth_QPlaceIcon_setParameters, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceIcon_setParameters)},
    {SIP_MLNAME_CAST(sipName_url), (PyCFunction)meth_QPlaceIcon_url, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPlaceIcon_url)}
};


extern "C" {static PyObject *varget_QPlaceIcon_SingleUrl(void *, PyObject *, PyObject *);}
static PyObject *varget_QPlaceIcon_SingleUrl(void *, PyObject *, PyObject *)
{
    static PyObject *sipPy = NULL;
    const QString*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = new QString(QPlaceIcon::SingleUrl);

    sipPy = sipConvertFromNewType(const_cast<QString *>(sipVal), sipType_QString, NULL);
    Py_XINCREF(sipPy);

    return sipPy;
}

sipVariableDef variables_QPlaceIcon[] = {
    {ClassVariable, sipName_SingleUrl, (PyMethodDef *)varget_QPlaceIcon_SingleUrl, NULL, NULL, NULL},
};

PyDoc_STRVAR(doc_QPlaceIcon, "\1QPlaceIcon()\n"
    "QPlaceIcon(QPlaceIcon)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QPlaceIcon = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPlaceIcon,
        {0}
    },
    {
        sipNameNr_QPlaceIcon,
        {0, 0, 1},
        6, methods_QPlaceIcon,
        0, 0,
        1, variables_QPlaceIcon,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlaceIcon,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPlaceIcon,
    init_type_QPlaceIcon,
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
    dealloc_QPlaceIcon,
    assign_QPlaceIcon,
    array_QPlaceIcon,
    copy_QPlaceIcon,
    release_QPlaceIcon,
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
