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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qmimetype.sip"
#include <qmimetype.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQMimeType.cpp"

#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQMimeType.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQMimeType.cpp"


PyDoc_STRVAR(doc_QMimeType_swap, "swap(self, QMimeType)");

extern "C" {static PyObject *meth_QMimeType_swap(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMimeType* a0;
        QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMimeType, &sipCpp, sipType_QMimeType, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_swap, doc_QMimeType_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QMimeType_isValid(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_isValid, doc_QMimeType_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_isDefault, "isDefault(self) -> bool");

extern "C" {static PyObject *meth_QMimeType_isDefault(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_isDefault(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefault();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_isDefault, doc_QMimeType_isDefault);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_name, "name(self) -> object");

extern "C" {static PyObject *meth_QMimeType_name(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_name, doc_QMimeType_name);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_comment, "comment(self) -> object");

extern "C" {static PyObject *meth_QMimeType_comment(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->comment());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_comment, doc_QMimeType_comment);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_genericIconName, "genericIconName(self) -> object");

extern "C" {static PyObject *meth_QMimeType_genericIconName(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_genericIconName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->genericIconName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_genericIconName, doc_QMimeType_genericIconName);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_iconName, "iconName(self) -> object");

extern "C" {static PyObject *meth_QMimeType_iconName(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_iconName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->iconName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_iconName, doc_QMimeType_iconName);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_globPatterns, "globPatterns(self) -> object");

extern "C" {static PyObject *meth_QMimeType_globPatterns(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_globPatterns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->globPatterns());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_globPatterns, doc_QMimeType_globPatterns);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_parentMimeTypes, "parentMimeTypes(self) -> object");

extern "C" {static PyObject *meth_QMimeType_parentMimeTypes(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_parentMimeTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->parentMimeTypes());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_parentMimeTypes, doc_QMimeType_parentMimeTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_allAncestors, "allAncestors(self) -> object");

extern "C" {static PyObject *meth_QMimeType_allAncestors(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_allAncestors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->allAncestors());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_allAncestors, doc_QMimeType_allAncestors);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_aliases, "aliases(self) -> object");

extern "C" {static PyObject *meth_QMimeType_aliases(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_aliases(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->aliases());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_aliases, doc_QMimeType_aliases);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_suffixes, "suffixes(self) -> object");

extern "C" {static PyObject *meth_QMimeType_suffixes(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_suffixes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->suffixes());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_suffixes, doc_QMimeType_suffixes);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_preferredSuffix, "preferredSuffix(self) -> object");

extern "C" {static PyObject *meth_QMimeType_preferredSuffix(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_preferredSuffix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->preferredSuffix());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_preferredSuffix, doc_QMimeType_preferredSuffix);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_inherits, "inherits(self, object) -> bool");

extern "C" {static PyObject *meth_QMimeType_inherits(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_inherits(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QMimeType, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->inherits(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_inherits, doc_QMimeType_inherits);

    return NULL;
}


PyDoc_STRVAR(doc_QMimeType_filterString, "filterString(self) -> object");

extern "C" {static PyObject *meth_QMimeType_filterString(PyObject *, PyObject *);}
static PyObject *meth_QMimeType_filterString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMimeType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMimeType, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->filterString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeType, sipName_filterString, doc_QMimeType_filterString);

    return NULL;
}


extern "C" {static PyObject *slot_QMimeType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMimeType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMimeType *sipCpp = reinterpret_cast<QMimeType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMimeType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMimeType* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMimeType, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QMimeType::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QMimeType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMimeType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMimeType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMimeType *sipCpp = reinterpret_cast<QMimeType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMimeType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMimeType* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMimeType, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QMimeType::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QMimeType,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QMimeType(void *, int);}
static void release_QMimeType(void *sipCppV,int)
{
    delete reinterpret_cast<QMimeType *>(sipCppV);
}


extern "C" {static void assign_QMimeType(void *, SIP_SSIZE_T, const void *);}
static void assign_QMimeType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMimeType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMimeType *>(sipSrc);
}


extern "C" {static void *array_QMimeType(SIP_SSIZE_T);}
static void *array_QMimeType(SIP_SSIZE_T sipNrElem)
{
    return new QMimeType[sipNrElem];
}


extern "C" {static void *copy_QMimeType(const void *, SIP_SSIZE_T);}
static void *copy_QMimeType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMimeType(reinterpret_cast<const QMimeType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMimeType(sipSimpleWrapper *);}
static void dealloc_QMimeType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMimeType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMimeType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMimeType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMimeType *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMimeType();

            return sipCpp;
        }
    }

    {
        const QMimeType* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMimeType, &a0))
        {
            sipCpp = new QMimeType(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMimeType[] = {
    {(void *)slot_QMimeType___ne__, ne_slot},
    {(void *)slot_QMimeType___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMimeType[] = {
    {SIP_MLNAME_CAST(sipName_aliases), meth_QMimeType_aliases, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_aliases)},
    {SIP_MLNAME_CAST(sipName_allAncestors), meth_QMimeType_allAncestors, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_allAncestors)},
    {SIP_MLNAME_CAST(sipName_comment), meth_QMimeType_comment, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_comment)},
    {SIP_MLNAME_CAST(sipName_filterString), meth_QMimeType_filterString, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_filterString)},
    {SIP_MLNAME_CAST(sipName_genericIconName), meth_QMimeType_genericIconName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_genericIconName)},
    {SIP_MLNAME_CAST(sipName_globPatterns), meth_QMimeType_globPatterns, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_globPatterns)},
    {SIP_MLNAME_CAST(sipName_iconName), meth_QMimeType_iconName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_iconName)},
    {SIP_MLNAME_CAST(sipName_inherits), meth_QMimeType_inherits, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_inherits)},
    {SIP_MLNAME_CAST(sipName_isDefault), meth_QMimeType_isDefault, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_isDefault)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QMimeType_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_isValid)},
    {SIP_MLNAME_CAST(sipName_name), meth_QMimeType_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_name)},
    {SIP_MLNAME_CAST(sipName_parentMimeTypes), meth_QMimeType_parentMimeTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_parentMimeTypes)},
    {SIP_MLNAME_CAST(sipName_preferredSuffix), meth_QMimeType_preferredSuffix, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_preferredSuffix)},
    {SIP_MLNAME_CAST(sipName_suffixes), meth_QMimeType_suffixes, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_suffixes)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QMimeType_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QMimeType_swap)}
};

PyDoc_STRVAR(doc_QMimeType, "\1QMimeType()\n"
    "QMimeType(QMimeType)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QMimeType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMimeType,
        {0}
    },
    {
        sipNameNr_QMimeType,
        {0, 0, 1},
        15, methods_QMimeType,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMimeType,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMimeType,
    init_type_QMimeType,
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
    dealloc_QMimeType,
    assign_QMimeType,
    array_QMimeType,
    copy_QMimeType,
    release_QMimeType,
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
