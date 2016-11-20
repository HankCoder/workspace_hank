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

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplacereview.sip"
#include <qplacereview.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceReview.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplacecontent.sip"
#include <qplacecontent.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceReview.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceReview.cpp"
#line 300 "sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceReview.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplaceuser.sip"
#include <qplaceuser.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceReview.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtLocation/qplacesupplier.sip"
#include <qplacesupplier.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtLocation/sipQtLocationQPlaceReview.cpp"


class sipQPlaceReview : public QPlaceReview
{
public:
    sipQPlaceReview();
    sipQPlaceReview(const QPlaceContent&);
    sipQPlaceReview(const QPlaceReview&);
    ~sipQPlaceReview();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPlaceReview(const sipQPlaceReview &);
    sipQPlaceReview &operator = (const sipQPlaceReview &);
};

sipQPlaceReview::sipQPlaceReview(): QPlaceReview(), sipPySelf(0)
{
}

sipQPlaceReview::sipQPlaceReview(const QPlaceContent& a0): QPlaceReview(a0), sipPySelf(0)
{
}

sipQPlaceReview::sipQPlaceReview(const QPlaceReview& a0): QPlaceReview(a0), sipPySelf(0)
{
}

sipQPlaceReview::~sipQPlaceReview()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QPlaceReview_dateTime, "dateTime(self) -> QDateTime");

extern "C" {static PyObject *meth_QPlaceReview_dateTime(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_dateTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceReview, &sipCpp))
        {
            QDateTime*sipRes;

            sipRes = new QDateTime(sipCpp->dateTime());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_dateTime, doc_QPlaceReview_dateTime);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_setDateTime, "setDateTime(self, Union[QDateTime, datetime.datetime])");

extern "C" {static PyObject *meth_QPlaceReview_setDateTime(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_setDateTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceReview, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            sipCpp->setDateTime(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_setDateTime, doc_QPlaceReview_setDateTime);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_text, "text(self) -> str");

extern "C" {static PyObject *meth_QPlaceReview_text(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceReview, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_text, doc_QPlaceReview_text);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_setText, "setText(self, str)");

extern "C" {static PyObject *meth_QPlaceReview_setText(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceReview, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_setText, doc_QPlaceReview_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_language, "language(self) -> str");

extern "C" {static PyObject *meth_QPlaceReview_language(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_language(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceReview, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->language());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_language, doc_QPlaceReview_language);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_setLanguage, "setLanguage(self, str)");

extern "C" {static PyObject *meth_QPlaceReview_setLanguage(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_setLanguage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceReview, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setLanguage(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_setLanguage, doc_QPlaceReview_setLanguage);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_rating, "rating(self) -> float");

extern "C" {static PyObject *meth_QPlaceReview_rating(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_rating(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceReview, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->rating();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_rating, doc_QPlaceReview_rating);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_setRating, "setRating(self, float)");

extern "C" {static PyObject *meth_QPlaceReview_setRating(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_setRating(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPlaceReview, &sipCpp, &a0))
        {
            sipCpp->setRating(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_setRating, doc_QPlaceReview_setRating);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_reviewId, "reviewId(self) -> str");

extern "C" {static PyObject *meth_QPlaceReview_reviewId(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_reviewId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceReview, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->reviewId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_reviewId, doc_QPlaceReview_reviewId);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_setReviewId, "setReviewId(self, str)");

extern "C" {static PyObject *meth_QPlaceReview_setReviewId(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_setReviewId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceReview, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setReviewId(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_setReviewId, doc_QPlaceReview_setReviewId);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_title, "title(self) -> str");

extern "C" {static PyObject *meth_QPlaceReview_title(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceReview, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->title());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_title, doc_QPlaceReview_title);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceReview_setTitle, "setTitle(self, str)");

extern "C" {static PyObject *meth_QPlaceReview_setTitle(PyObject *, PyObject *);}
static PyObject *meth_QPlaceReview_setTitle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPlaceReview *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPlaceReview, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setTitle(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceReview, sipName_setTitle, doc_QPlaceReview_setTitle);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlaceReview(void *, int);}
static void release_QPlaceReview(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPlaceReview *>(sipCppV);
    else
        delete reinterpret_cast<QPlaceReview *>(sipCppV);
}


extern "C" {static void assign_QPlaceReview(void *, SIP_SSIZE_T, const void *);}
static void assign_QPlaceReview(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPlaceReview *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPlaceReview *>(sipSrc);
}


extern "C" {static void *array_QPlaceReview(SIP_SSIZE_T);}
static void *array_QPlaceReview(SIP_SSIZE_T sipNrElem)
{
    return new QPlaceReview[sipNrElem];
}


extern "C" {static void *copy_QPlaceReview(const void *, SIP_SSIZE_T);}
static void *copy_QPlaceReview(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPlaceReview(reinterpret_cast<const QPlaceReview *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPlaceReview(sipSimpleWrapper *);}
static void dealloc_QPlaceReview(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPlaceReview *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPlaceReview(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPlaceReview(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlaceReview(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPlaceReview *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPlaceReview();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPlaceContent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceContent, &a0))
        {
            sipCpp = new sipQPlaceReview(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPlaceReview* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceReview, &a0))
        {
            sipCpp = new sipQPlaceReview(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPlaceReview[] = {{51, 255, 1}};


static PyMethodDef methods_QPlaceReview[] = {
    {SIP_MLNAME_CAST(sipName_dateTime), meth_QPlaceReview_dateTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_dateTime)},
    {SIP_MLNAME_CAST(sipName_language), meth_QPlaceReview_language, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_language)},
    {SIP_MLNAME_CAST(sipName_rating), meth_QPlaceReview_rating, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_rating)},
    {SIP_MLNAME_CAST(sipName_reviewId), meth_QPlaceReview_reviewId, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_reviewId)},
    {SIP_MLNAME_CAST(sipName_setDateTime), meth_QPlaceReview_setDateTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_setDateTime)},
    {SIP_MLNAME_CAST(sipName_setLanguage), meth_QPlaceReview_setLanguage, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_setLanguage)},
    {SIP_MLNAME_CAST(sipName_setRating), meth_QPlaceReview_setRating, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_setRating)},
    {SIP_MLNAME_CAST(sipName_setReviewId), meth_QPlaceReview_setReviewId, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_setReviewId)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QPlaceReview_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_setText)},
    {SIP_MLNAME_CAST(sipName_setTitle), meth_QPlaceReview_setTitle, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_setTitle)},
    {SIP_MLNAME_CAST(sipName_text), meth_QPlaceReview_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_text)},
    {SIP_MLNAME_CAST(sipName_title), meth_QPlaceReview_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceReview_title)}
};

PyDoc_STRVAR(doc_QPlaceReview, "\1QPlaceReview()\n"
    "QPlaceReview(QPlaceContent)\n"
    "QPlaceReview(QPlaceReview)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QPlaceReview = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPlaceReview,
        {0}
    },
    {
        sipNameNr_QPlaceReview,
        {0, 0, 1},
        12, methods_QPlaceReview,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlaceReview,
    -1,
    -1,
    supers_QPlaceReview,
    0,
    init_type_QPlaceReview,
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
    dealloc_QPlaceReview,
    assign_QPlaceReview,
    array_QPlaceReview,
    copy_QPlaceReview,
    release_QPlaceReview,
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
