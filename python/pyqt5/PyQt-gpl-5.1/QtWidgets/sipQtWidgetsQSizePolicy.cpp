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

#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQSizePolicy.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQSizePolicy.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQSizePolicy.cpp"


PyDoc_STRVAR(doc_QSizePolicy_horizontalPolicy, "horizontalPolicy(self) -> QSizePolicy.Policy");

extern "C" {static PyObject *meth_QSizePolicy_horizontalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_horizontalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            sipRes = sipCpp->horizontalPolicy();

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_horizontalPolicy, doc_QSizePolicy_horizontalPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_verticalPolicy, "verticalPolicy(self) -> QSizePolicy.Policy");

extern "C" {static PyObject *meth_QSizePolicy_verticalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_verticalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            sipRes = sipCpp->verticalPolicy();

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_verticalPolicy, doc_QSizePolicy_verticalPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setHorizontalPolicy, "setHorizontalPolicy(self, QSizePolicy.Policy)");

extern "C" {static PyObject *meth_QSizePolicy_setHorizontalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setHorizontalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSizePolicy, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            sipCpp->setHorizontalPolicy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setHorizontalPolicy, doc_QSizePolicy_setHorizontalPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setVerticalPolicy, "setVerticalPolicy(self, QSizePolicy.Policy)");

extern "C" {static PyObject *meth_QSizePolicy_setVerticalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setVerticalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSizePolicy, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            sipCpp->setVerticalPolicy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setVerticalPolicy, doc_QSizePolicy_setVerticalPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_expandingDirections, "expandingDirections(self) -> Qt.Orientations");

extern "C" {static PyObject *meth_QSizePolicy_expandingDirections(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_expandingDirections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            Qt::Orientations*sipRes;

            sipRes = new Qt::Orientations(sipCpp->expandingDirections());

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_expandingDirections, doc_QSizePolicy_expandingDirections);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setHeightForWidth, "setHeightForWidth(self, bool)");

extern "C" {static PyObject *meth_QSizePolicy_setHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            sipCpp->setHeightForWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setHeightForWidth, doc_QSizePolicy_setHeightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_hasHeightForWidth, "hasHeightForWidth(self) -> bool");

extern "C" {static PyObject *meth_QSizePolicy_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasHeightForWidth();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_hasHeightForWidth, doc_QSizePolicy_hasHeightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_horizontalStretch, "horizontalStretch(self) -> int");

extern "C" {static PyObject *meth_QSizePolicy_horizontalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_horizontalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->horizontalStretch();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_horizontalStretch, doc_QSizePolicy_horizontalStretch);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_verticalStretch, "verticalStretch(self) -> int");

extern "C" {static PyObject *meth_QSizePolicy_verticalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_verticalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->verticalStretch();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_verticalStretch, doc_QSizePolicy_verticalStretch);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setHorizontalStretch, "setHorizontalStretch(self, int)");

extern "C" {static PyObject *meth_QSizePolicy_setHorizontalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setHorizontalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            sipCpp->setHorizontalStretch(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setHorizontalStretch, doc_QSizePolicy_setHorizontalStretch);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setVerticalStretch, "setVerticalStretch(self, int)");

extern "C" {static PyObject *meth_QSizePolicy_setVerticalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setVerticalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            sipCpp->setVerticalStretch(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setVerticalStretch, doc_QSizePolicy_setVerticalStretch);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_transpose, "transpose(self)");

extern "C" {static PyObject *meth_QSizePolicy_transpose(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_transpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            sipCpp->transpose();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_transpose, doc_QSizePolicy_transpose);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_controlType, "controlType(self) -> QSizePolicy.ControlType");

extern "C" {static PyObject *meth_QSizePolicy_controlType(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_controlType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            QSizePolicy::ControlType sipRes;

            sipRes = sipCpp->controlType();

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_ControlType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_controlType, doc_QSizePolicy_controlType);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setControlType, "setControlType(self, QSizePolicy.ControlType)");

extern "C" {static PyObject *meth_QSizePolicy_setControlType(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setControlType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlType a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSizePolicy, &sipCpp, sipType_QSizePolicy_ControlType, &a0))
        {
            sipCpp->setControlType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setControlType, doc_QSizePolicy_setControlType);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_setWidthForHeight, "setWidthForHeight(self, bool)");

extern "C" {static PyObject *meth_QSizePolicy_setWidthForHeight(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setWidthForHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            sipCpp->setWidthForHeight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setWidthForHeight, doc_QSizePolicy_setWidthForHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QSizePolicy_hasWidthForHeight, "hasWidthForHeight(self) -> bool");

extern "C" {static PyObject *meth_QSizePolicy_hasWidthForHeight(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_hasWidthForHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasWidthForHeight();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_hasWidthForHeight, doc_QSizePolicy_hasWidthForHeight);

    return NULL;
}


extern "C" {static PyObject *slot_QSizePolicy___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy *sipCpp = reinterpret_cast<QSizePolicy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizePolicy, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QSizePolicy::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QSizePolicy,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy *sipCpp = reinterpret_cast<QSizePolicy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizePolicy, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QSizePolicy::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QSizePolicy,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSizePolicy(void *, int);}
static void release_QSizePolicy(void *sipCppV,int)
{
    delete reinterpret_cast<QSizePolicy *>(sipCppV);
}


extern "C" {static void assign_QSizePolicy(void *, SIP_SSIZE_T, const void *);}
static void assign_QSizePolicy(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSizePolicy *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSizePolicy *>(sipSrc);
}


extern "C" {static void *array_QSizePolicy(SIP_SSIZE_T);}
static void *array_QSizePolicy(SIP_SSIZE_T sipNrElem)
{
    return new QSizePolicy[sipNrElem];
}


extern "C" {static void *copy_QSizePolicy(const void *, SIP_SSIZE_T);}
static void *copy_QSizePolicy(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSizePolicy(reinterpret_cast<const QSizePolicy *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSizePolicy(sipSimpleWrapper *);}
static void dealloc_QSizePolicy(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSizePolicy(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSizePolicy(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSizePolicy(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSizePolicy *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSizePolicy();

            return sipCpp;
        }
    }

    {
        QSizePolicy::Policy a0;
        QSizePolicy::Policy a1;
        QSizePolicy::ControlType a2 = QSizePolicy::DefaultType;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "EE|E", sipType_QSizePolicy_Policy, &a0, sipType_QSizePolicy_Policy, &a1, sipType_QSizePolicy_ControlType, &a2))
        {
            sipCpp = new QSizePolicy(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QVariant* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant, &a0, &a0State))
        {
#line 57 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtWidgets/qsizepolicy.sip"
        sipCpp = new QSizePolicy(a0->value<QSizePolicy>());
#line 630 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtWidgets/sipQtWidgetsQSizePolicy.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    {
        const QSizePolicy* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSizePolicy, &a0))
        {
            sipCpp = new QSizePolicy(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSizePolicy[] = {
    {(void *)slot_QSizePolicy___ne__, ne_slot},
    {(void *)slot_QSizePolicy___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSizePolicy[] = {
    {SIP_MLNAME_CAST(sipName_controlType), meth_QSizePolicy_controlType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_controlType)},
    {SIP_MLNAME_CAST(sipName_expandingDirections), meth_QSizePolicy_expandingDirections, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_expandingDirections)},
    {SIP_MLNAME_CAST(sipName_hasHeightForWidth), meth_QSizePolicy_hasHeightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_hasHeightForWidth)},
    {SIP_MLNAME_CAST(sipName_hasWidthForHeight), meth_QSizePolicy_hasWidthForHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_hasWidthForHeight)},
    {SIP_MLNAME_CAST(sipName_horizontalPolicy), meth_QSizePolicy_horizontalPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_horizontalPolicy)},
    {SIP_MLNAME_CAST(sipName_horizontalStretch), meth_QSizePolicy_horizontalStretch, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_horizontalStretch)},
    {SIP_MLNAME_CAST(sipName_setControlType), meth_QSizePolicy_setControlType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setControlType)},
    {SIP_MLNAME_CAST(sipName_setHeightForWidth), meth_QSizePolicy_setHeightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setHeightForWidth)},
    {SIP_MLNAME_CAST(sipName_setHorizontalPolicy), meth_QSizePolicy_setHorizontalPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setHorizontalPolicy)},
    {SIP_MLNAME_CAST(sipName_setHorizontalStretch), meth_QSizePolicy_setHorizontalStretch, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setHorizontalStretch)},
    {SIP_MLNAME_CAST(sipName_setVerticalPolicy), meth_QSizePolicy_setVerticalPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setVerticalPolicy)},
    {SIP_MLNAME_CAST(sipName_setVerticalStretch), meth_QSizePolicy_setVerticalStretch, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setVerticalStretch)},
    {SIP_MLNAME_CAST(sipName_setWidthForHeight), meth_QSizePolicy_setWidthForHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_setWidthForHeight)},
    {SIP_MLNAME_CAST(sipName_transpose), meth_QSizePolicy_transpose, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_transpose)},
    {SIP_MLNAME_CAST(sipName_verticalPolicy), meth_QSizePolicy_verticalPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_verticalPolicy)},
    {SIP_MLNAME_CAST(sipName_verticalStretch), meth_QSizePolicy_verticalStretch, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizePolicy_verticalStretch)}
};

static sipEnumMemberDef enummembers_QSizePolicy[] = {
    {sipName_ButtonBox, static_cast<int>(QSizePolicy::ButtonBox), 262},
    {sipName_CheckBox, static_cast<int>(QSizePolicy::CheckBox), 262},
    {sipName_ComboBox, static_cast<int>(QSizePolicy::ComboBox), 262},
    {sipName_DefaultType, static_cast<int>(QSizePolicy::DefaultType), 262},
    {sipName_ExpandFlag, static_cast<int>(QSizePolicy::ExpandFlag), 265},
    {sipName_Expanding, static_cast<int>(QSizePolicy::Expanding), 264},
    {sipName_Fixed, static_cast<int>(QSizePolicy::Fixed), 264},
    {sipName_Frame, static_cast<int>(QSizePolicy::Frame), 262},
    {sipName_GroupBox, static_cast<int>(QSizePolicy::GroupBox), 262},
    {sipName_GrowFlag, static_cast<int>(QSizePolicy::GrowFlag), 265},
    {sipName_IgnoreFlag, static_cast<int>(QSizePolicy::IgnoreFlag), 265},
    {sipName_Ignored, static_cast<int>(QSizePolicy::Ignored), 264},
    {sipName_Label, static_cast<int>(QSizePolicy::Label), 262},
    {sipName_Line, static_cast<int>(QSizePolicy::Line), 262},
    {sipName_LineEdit, static_cast<int>(QSizePolicy::LineEdit), 262},
    {sipName_Maximum, static_cast<int>(QSizePolicy::Maximum), 264},
    {sipName_Minimum, static_cast<int>(QSizePolicy::Minimum), 264},
    {sipName_MinimumExpanding, static_cast<int>(QSizePolicy::MinimumExpanding), 264},
    {sipName_Preferred, static_cast<int>(QSizePolicy::Preferred), 264},
    {sipName_PushButton, static_cast<int>(QSizePolicy::PushButton), 262},
    {sipName_RadioButton, static_cast<int>(QSizePolicy::RadioButton), 262},
    {sipName_ShrinkFlag, static_cast<int>(QSizePolicy::ShrinkFlag), 265},
    {sipName_Slider, static_cast<int>(QSizePolicy::Slider), 262},
    {sipName_SpinBox, static_cast<int>(QSizePolicy::SpinBox), 262},
    {sipName_TabWidget, static_cast<int>(QSizePolicy::TabWidget), 262},
    {sipName_ToolButton, static_cast<int>(QSizePolicy::ToolButton), 262},
};

PyDoc_STRVAR(doc_QSizePolicy, "\1QSizePolicy()\n"
    "QSizePolicy(QSizePolicy.Policy, QSizePolicy.Policy, type: QSizePolicy.ControlType = QSizePolicy.DefaultType)\n"
    "QSizePolicy(QVariant)\n"
    "QSizePolicy(QSizePolicy)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QSizePolicy = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSizePolicy,
        {0}
    },
    {
        sipNameNr_QSizePolicy,
        {0, 0, 1},
        16, methods_QSizePolicy,
        26, enummembers_QSizePolicy,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSizePolicy,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSizePolicy,
    init_type_QSizePolicy,
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
    dealloc_QSizePolicy,
    assign_QSizePolicy,
    array_QSizePolicy,
    copy_QSizePolicy,
    release_QSizePolicy,
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
