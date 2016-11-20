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

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qopengltexture.sip"
#include <qopengltexture.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qopengltexture.sip"
#include <qopengltexture.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"


extern "C" {static int slot_QOpenGLTexture_Features___bool__(PyObject *);}
static int slot_QOpenGLTexture_Features___bool__(PyObject *sipSelf)
{
    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLTexture::Features::Int() != 0);
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTexture::Features* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLTexture_Features, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLTexture::Features::Int() != a0->operator QOpenGLTexture::Features::Int());
#line 81 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"
            sipReleaseType(const_cast<QOpenGLTexture::Features *>(a0),sipType_QOpenGLTexture_Features,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QOpenGLTexture_Features,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTexture::Features* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLTexture_Features, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLTexture::Features::Int() == a0->operator QOpenGLTexture::Features::Int());
#line 117 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"
            sipReleaseType(const_cast<QOpenGLTexture::Features *>(a0),sipType_QOpenGLTexture_Features,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QOpenGLTexture_Features,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLTexture_Features)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLTexture::Features(*sipCpp ^ a0);
#line 156 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTexture::Features* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLTexture_Features, &a0, &a0State, &a1))
        {
            QOpenGLTexture::Features*sipRes;

            sipRes = new QOpenGLTexture::Features((*a0 ^ a1));
            sipReleaseType(a0,sipType_QOpenGLTexture_Features,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLTexture_Features,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLTexture_Features)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLTexture::Features(*sipCpp | a0);
#line 228 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTexture::Features* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLTexture_Features, &a0, &a0State, &a1))
        {
            QOpenGLTexture::Features*sipRes;

            sipRes = new QOpenGLTexture::Features((*a0 | a1));
            sipReleaseType(a0,sipType_QOpenGLTexture_Features,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLTexture_Features,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLTexture_Features)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QOpenGLTexture::Features::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTexture::Features* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLTexture_Features, &a0, &a0State, &a1))
        {
            QOpenGLTexture::Features*sipRes;

            sipRes = new QOpenGLTexture::Features((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLTexture_Features,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLTexture_Features,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___invert__(PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___invert__(PyObject *sipSelf)
{
    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;


    {
        {
            QOpenGLTexture::Features*sipRes;

            sipRes = new QOpenGLTexture::Features(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLTexture_Features,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLTexture_Features___int__(PyObject *);}
static PyObject *slot_QOpenGLTexture_Features___int__(PyObject *sipSelf)
{
    QOpenGLTexture::Features *sipCpp = reinterpret_cast<QOpenGLTexture::Features *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLTexture_Features));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLTexture_Features(void *, int);}
static void release_QOpenGLTexture_Features(void *sipCppV,int)
{
    delete reinterpret_cast<QOpenGLTexture::Features *>(sipCppV);
}


extern "C" {static void assign_QOpenGLTexture_Features(void *, SIP_SSIZE_T, const void *);}
static void assign_QOpenGLTexture_Features(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QOpenGLTexture::Features *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QOpenGLTexture::Features *>(sipSrc);
}


extern "C" {static void *array_QOpenGLTexture_Features(SIP_SSIZE_T);}
static void *array_QOpenGLTexture_Features(SIP_SSIZE_T sipNrElem)
{
    return new QOpenGLTexture::Features[sipNrElem];
}


extern "C" {static void *copy_QOpenGLTexture_Features(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLTexture_Features(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QOpenGLTexture::Features(reinterpret_cast<const QOpenGLTexture::Features *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLTexture_Features(sipSimpleWrapper *);}
static void dealloc_QOpenGLTexture_Features(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLTexture_Features(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QOpenGLTexture_Features(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLTexture_Features(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QOpenGLTexture::Features *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QOpenGLTexture::Features();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QOpenGLTexture::Features(a0);

            return sipCpp;
        }
    }

    {
        const QOpenGLTexture::Features* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QOpenGLTexture_Features, &a0, &a0State))
        {
            sipCpp = new QOpenGLTexture::Features(*a0);
            sipReleaseType(const_cast<QOpenGLTexture::Features *>(a0),sipType_QOpenGLTexture_Features,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QOpenGLTexture_Features(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLTexture_Features(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QOpenGLTexture::Features **sipCppPtr = reinterpret_cast<QOpenGLTexture::Features **>(sipCppPtrV);

#line 116 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLTexture::Features is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLTexture_Feature)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLTexture_Features, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLTexture_Feature)))
{
    *sipCppPtr = new QOpenGLTexture::Features(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLTexture::Features *>(sipConvertToType(sipPy, sipType_QOpenGLTexture_Features, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 496 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQOpenGLTextureFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLTexture_Features[] = {
    {(void *)slot_QOpenGLTexture_Features___bool__, bool_slot},
    {(void *)slot_QOpenGLTexture_Features___ne__, ne_slot},
    {(void *)slot_QOpenGLTexture_Features___eq__, eq_slot},
    {(void *)slot_QOpenGLTexture_Features___ixor__, ixor_slot},
    {(void *)slot_QOpenGLTexture_Features___xor__, xor_slot},
    {(void *)slot_QOpenGLTexture_Features___ior__, ior_slot},
    {(void *)slot_QOpenGLTexture_Features___or__, or_slot},
    {(void *)slot_QOpenGLTexture_Features___iand__, iand_slot},
    {(void *)slot_QOpenGLTexture_Features___and__, and_slot},
    {(void *)slot_QOpenGLTexture_Features___invert__, invert_slot},
    {(void *)slot_QOpenGLTexture_Features___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLTexture_Features, "\1QOpenGLTexture.Features()\n"
    "QOpenGLTexture.Features(Union[QOpenGLTexture.Features, QOpenGLTexture.Feature])\n"
    "QOpenGLTexture.Features(QOpenGLTexture.Features)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLTexture_Features = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLTexture__Features,
        {0}
    },
    {
        sipNameNr_Features,
        {151, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLTexture_Features,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLTexture_Features,
    init_type_QOpenGLTexture_Features,
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
    dealloc_QOpenGLTexture_Features,
    assign_QOpenGLTexture_Features,
    array_QOpenGLTexture_Features,
    copy_QOpenGLTexture_Features,
    release_QOpenGLTexture_Features,
    0,
    convertTo_QOpenGLTexture_Features,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
