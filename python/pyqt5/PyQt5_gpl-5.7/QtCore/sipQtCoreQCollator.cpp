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

#line 50 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qcollator.sip"
#include <qcollator.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCollator.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCollator.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qcollator.sip"
#include <qcollator.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCollator.cpp"
#line 27 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCollator.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtCore/sipQtCoreQCollator.cpp"


PyDoc_STRVAR(doc_QCollator_swap, "swap(self, QCollator)");

extern "C" {static PyObject *meth_QCollator_swap(PyObject *, PyObject *);}
static PyObject *meth_QCollator_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCollator* a0;
        QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCollator, &sipCpp, sipType_QCollator, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_swap, doc_QCollator_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_setLocale, "setLocale(self, QLocale)");

extern "C" {static PyObject *meth_QCollator_setLocale(PyObject *, PyObject *);}
static PyObject *meth_QCollator_setLocale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLocale* a0;
        QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCollator, &sipCpp, sipType_QLocale, &a0))
        {
            sipCpp->setLocale(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_setLocale, doc_QCollator_setLocale);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_locale, "locale(self) -> QLocale");

extern "C" {static PyObject *meth_QCollator_locale(PyObject *, PyObject *);}
static PyObject *meth_QCollator_locale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCollator, &sipCpp))
        {
            QLocale*sipRes;

            sipRes = new QLocale(sipCpp->locale());

            return sipConvertFromNewType(sipRes,sipType_QLocale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_locale, doc_QCollator_locale);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_caseSensitivity, "caseSensitivity(self) -> Qt.CaseSensitivity");

extern "C" {static PyObject *meth_QCollator_caseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QCollator_caseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCollator, &sipCpp))
        {
            Qt::CaseSensitivity sipRes;

            sipRes = sipCpp->caseSensitivity();

            return sipConvertFromEnum(sipRes,sipType_Qt_CaseSensitivity);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_caseSensitivity, doc_QCollator_caseSensitivity);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_setCaseSensitivity, "setCaseSensitivity(self, Qt.CaseSensitivity)");

extern "C" {static PyObject *meth_QCollator_setCaseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QCollator_setCaseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::CaseSensitivity a0;
        QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QCollator, &sipCpp, sipType_Qt_CaseSensitivity, &a0))
        {
            sipCpp->setCaseSensitivity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_setCaseSensitivity, doc_QCollator_setCaseSensitivity);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_setNumericMode, "setNumericMode(self, bool)");

extern "C" {static PyObject *meth_QCollator_setNumericMode(PyObject *, PyObject *);}
static PyObject *meth_QCollator_setNumericMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QCollator, &sipCpp, &a0))
        {
            sipCpp->setNumericMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_setNumericMode, doc_QCollator_setNumericMode);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_numericMode, "numericMode(self) -> bool");

extern "C" {static PyObject *meth_QCollator_numericMode(PyObject *, PyObject *);}
static PyObject *meth_QCollator_numericMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCollator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->numericMode();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_numericMode, doc_QCollator_numericMode);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_setIgnorePunctuation, "setIgnorePunctuation(self, bool)");

extern "C" {static PyObject *meth_QCollator_setIgnorePunctuation(PyObject *, PyObject *);}
static PyObject *meth_QCollator_setIgnorePunctuation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QCollator, &sipCpp, &a0))
        {
            sipCpp->setIgnorePunctuation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_setIgnorePunctuation, doc_QCollator_setIgnorePunctuation);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_ignorePunctuation, "ignorePunctuation(self) -> bool");

extern "C" {static PyObject *meth_QCollator_ignorePunctuation(PyObject *, PyObject *);}
static PyObject *meth_QCollator_ignorePunctuation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCollator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ignorePunctuation();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_ignorePunctuation, doc_QCollator_ignorePunctuation);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_compare, "compare(self, str, str) -> int");

extern "C" {static PyObject *meth_QCollator_compare(PyObject *, PyObject *);}
static PyObject *meth_QCollator_compare(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QCollator, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            int sipRes;

            sipRes = sipCpp->compare(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_compare, doc_QCollator_compare);

    return NULL;
}


PyDoc_STRVAR(doc_QCollator_sortKey, "sortKey(self, str) -> QCollatorSortKey");

extern "C" {static PyObject *meth_QCollator_sortKey(PyObject *, PyObject *);}
static PyObject *meth_QCollator_sortKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QCollator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCollator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QCollatorSortKey*sipRes;

            sipRes = new QCollatorSortKey(sipCpp->sortKey(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCollatorSortKey,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollator, sipName_sortKey, doc_QCollator_sortKey);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCollator(void *, int);}
static void release_QCollator(void *sipCppV,int)
{
    delete reinterpret_cast<QCollator *>(sipCppV);
}


extern "C" {static void assign_QCollator(void *, SIP_SSIZE_T, const void *);}
static void assign_QCollator(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCollator *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCollator *>(sipSrc);
}


extern "C" {static void *array_QCollator(SIP_SSIZE_T);}
static void *array_QCollator(SIP_SSIZE_T sipNrElem)
{
    return new QCollator[sipNrElem];
}


extern "C" {static void *copy_QCollator(const void *, SIP_SSIZE_T);}
static void *copy_QCollator(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCollator(reinterpret_cast<const QCollator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCollator(sipSimpleWrapper *);}
static void dealloc_QCollator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCollator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCollator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCollator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCollator *sipCpp = 0;

    {
        const QLocale& a0def = QLocale();
        const QLocale* a0 = &a0def;

        static const char *sipKwdList[] = {
            sipName_locale,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J9", sipType_QLocale, &a0))
        {
            sipCpp = new QCollator(*a0);

            return sipCpp;
        }
    }

    {
        const QCollator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCollator, &a0))
        {
            sipCpp = new QCollator(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QCollator[] = {
    {SIP_MLNAME_CAST(sipName_caseSensitivity), meth_QCollator_caseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_caseSensitivity)},
    {SIP_MLNAME_CAST(sipName_compare), meth_QCollator_compare, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_compare)},
    {SIP_MLNAME_CAST(sipName_ignorePunctuation), meth_QCollator_ignorePunctuation, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_ignorePunctuation)},
    {SIP_MLNAME_CAST(sipName_locale), meth_QCollator_locale, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_locale)},
    {SIP_MLNAME_CAST(sipName_numericMode), meth_QCollator_numericMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_numericMode)},
    {SIP_MLNAME_CAST(sipName_setCaseSensitivity), meth_QCollator_setCaseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_setCaseSensitivity)},
    {SIP_MLNAME_CAST(sipName_setIgnorePunctuation), meth_QCollator_setIgnorePunctuation, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_setIgnorePunctuation)},
    {SIP_MLNAME_CAST(sipName_setLocale), meth_QCollator_setLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_setLocale)},
    {SIP_MLNAME_CAST(sipName_setNumericMode), meth_QCollator_setNumericMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_setNumericMode)},
    {SIP_MLNAME_CAST(sipName_sortKey), meth_QCollator_sortKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_sortKey)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QCollator_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollator_swap)}
};

PyDoc_STRVAR(doc_QCollator, "\1QCollator(locale: QLocale = QLocale())\n"
    "QCollator(QCollator)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QCollator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCollator,
        {0}
    },
    {
        sipNameNr_QCollator,
        {0, 0, 1},
        11, methods_QCollator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCollator,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QCollator,
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
    dealloc_QCollator,
    assign_QCollator,
    array_QCollator,
    copy_QCollator,
    release_QCollator,
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
