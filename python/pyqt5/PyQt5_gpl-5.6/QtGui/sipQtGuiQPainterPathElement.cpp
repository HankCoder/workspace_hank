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

#include "sipAPIQtGui.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 41 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 31 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQPainterPathElement.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 35 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtGui/sipQtGuiQPainterPathElement.cpp"


PyDoc_STRVAR(doc_QPainterPath_Element_isMoveTo, "isMoveTo(self) -> bool");

extern "C" {static PyObject *meth_QPainterPath_Element_isMoveTo(PyObject *, PyObject *);}
static PyObject *meth_QPainterPath_Element_isMoveTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPainterPath::Element *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPath_Element, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isMoveTo();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Element, sipName_isMoveTo, doc_QPainterPath_Element_isMoveTo);

    return NULL;
}


PyDoc_STRVAR(doc_QPainterPath_Element_isLineTo, "isLineTo(self) -> bool");

extern "C" {static PyObject *meth_QPainterPath_Element_isLineTo(PyObject *, PyObject *);}
static PyObject *meth_QPainterPath_Element_isLineTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPainterPath::Element *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPath_Element, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLineTo();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Element, sipName_isLineTo, doc_QPainterPath_Element_isLineTo);

    return NULL;
}


PyDoc_STRVAR(doc_QPainterPath_Element_isCurveTo, "isCurveTo(self) -> bool");

extern "C" {static PyObject *meth_QPainterPath_Element_isCurveTo(PyObject *, PyObject *);}
static PyObject *meth_QPainterPath_Element_isCurveTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPainterPath::Element *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPath_Element, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCurveTo();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Element, sipName_isCurveTo, doc_QPainterPath_Element_isCurveTo);

    return NULL;
}


extern "C" {static PyObject *slot_QPainterPath_Element___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPainterPath_Element___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainterPath_Element));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPainterPath::Element* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPainterPath_Element, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPainterPath::Element::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPainterPath_Element,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPainterPath_Element___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPainterPath_Element___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainterPath_Element));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPainterPath::Element* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPainterPath_Element, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QPainterPath::Element::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPainterPath_Element,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPainterPath_Element(void *, int);}
static void release_QPainterPath_Element(void *sipCppV,int)
{
    delete reinterpret_cast<QPainterPath::Element *>(sipCppV);
}


extern "C" {static void assign_QPainterPath_Element(void *, SIP_SSIZE_T, const void *);}
static void assign_QPainterPath_Element(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPainterPath::Element *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPainterPath::Element *>(sipSrc);
}


extern "C" {static void *array_QPainterPath_Element(SIP_SSIZE_T);}
static void *array_QPainterPath_Element(SIP_SSIZE_T sipNrElem)
{
    return new QPainterPath::Element[sipNrElem];
}


extern "C" {static void *copy_QPainterPath_Element(const void *, SIP_SSIZE_T);}
static void *copy_QPainterPath_Element(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPainterPath::Element(reinterpret_cast<const QPainterPath::Element *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPainterPath_Element(sipSimpleWrapper *);}
static void dealloc_QPainterPath_Element(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPainterPath_Element(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPainterPath_Element(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPainterPath_Element(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPainterPath::Element *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPainterPath::Element();

            return sipCpp;
        }
    }

    {
        const QPainterPath::Element* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPainterPath_Element, &a0))
        {
            sipCpp = new QPainterPath::Element(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPainterPath_Element[] = {
    {(void *)slot_QPainterPath_Element___ne__, ne_slot},
    {(void *)slot_QPainterPath_Element___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPainterPath_Element[] = {
    {SIP_MLNAME_CAST(sipName_isCurveTo), meth_QPainterPath_Element_isCurveTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QPainterPath_Element_isCurveTo)},
    {SIP_MLNAME_CAST(sipName_isLineTo), meth_QPainterPath_Element_isLineTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QPainterPath_Element_isLineTo)},
    {SIP_MLNAME_CAST(sipName_isMoveTo), meth_QPainterPath_Element_isMoveTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QPainterPath_Element_isMoveTo)}
};


extern "C" {static PyObject *varget_QPainterPath_Element_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainterPath_Element_type(void *sipSelf, PyObject *, PyObject *)
{
    QPainterPath::ElementType sipVal;
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipSelf);

    sipVal = sipCpp->type;

    return sipConvertFromEnum(sipVal, sipType_QPainterPath_ElementType);
}


extern "C" {static int varset_QPainterPath_Element_type(void *, PyObject *, PyObject *);}
static int varset_QPainterPath_Element_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QPainterPath::ElementType sipVal;
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipSelf);

    sipVal = (QPainterPath::ElementType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainterPath_Element_x(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainterPath_Element_x(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainterPath_Element_x(void *, PyObject *, PyObject *);}
static int varset_QPainterPath_Element_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainterPath_Element_y(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainterPath_Element_y(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainterPath_Element_y(void *, PyObject *, PyObject *);}
static int varset_QPainterPath_Element_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainterPath::Element *sipCpp = reinterpret_cast<QPainterPath::Element *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_QPainterPath_Element[] = {
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QPainterPath_Element_type, (PyMethodDef *)varset_QPainterPath_Element_type, NULL, NULL},
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_QPainterPath_Element_x, (PyMethodDef *)varset_QPainterPath_Element_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_QPainterPath_Element_y, (PyMethodDef *)varset_QPainterPath_Element_y, NULL, NULL},
};

PyDoc_STRVAR(doc_QPainterPath_Element, "\1QPainterPath.Element()\n"
    "QPainterPath.Element(QPainterPath.Element)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPainterPath_Element = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPainterPath__Element,
        {0}
    },
    {
        sipNameNr_Element,
        {206, 255, 0},
        3, methods_QPainterPath_Element,
        0, 0,
        3, variables_QPainterPath_Element,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPainterPath_Element,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPainterPath_Element,
    init_type_QPainterPath_Element,
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
    dealloc_QPainterPath_Element,
    assign_QPainterPath_Element,
    array_QPainterPath_Element,
    copy_QPainterPath_Element,
    release_QPainterPath_Element,
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
