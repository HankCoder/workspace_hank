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

#include "sipAPIQtQuick.h"

#line 279 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"

#line 183 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"
#line 30 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"


class sipQSGGeometryNode : public QSGGeometryNode
{
public:
    sipQSGGeometryNode();
    sipQSGGeometryNode(const QSGGeometryNode&);
    virtual ~sipQSGGeometryNode();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void preprocess();
    bool isSubtreeBlocked() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGGeometryNode(const sipQSGGeometryNode &);
    sipQSGGeometryNode &operator = (const sipQSGGeometryNode &);

    char sipPyMethods[2];
};

sipQSGGeometryNode::sipQSGGeometryNode(): QSGGeometryNode(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGGeometryNode::sipQSGGeometryNode(const QSGGeometryNode& a0): QSGGeometryNode(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGGeometryNode::~sipQSGGeometryNode()
{
    sipCommonDtor(sipPySelf);
}

void sipQSGGeometryNode::preprocess()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_preprocess);

    if (!sipMeth)
    {
        QSGGeometryNode::preprocess();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQSGGeometryNode::isSubtreeBlocked() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_isSubtreeBlocked);

    if (!sipMeth)
        return QSGGeometryNode::isSubtreeBlocked();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGGeometryNode_setMaterial, "setMaterial(self, QSGMaterial)");

extern "C" {static PyObject *meth_QSGGeometryNode_setMaterial(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometryNode_setMaterial(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGMaterial* a0;
        PyObject *a0Wrapper;
        QSGGeometryNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSGGeometryNode, &sipCpp, &a0Wrapper, sipType_QSGMaterial, &a0))
        {
#line 287 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip"
        sipCpp->setMaterial(a0);
        
        if (sipCpp->flags() & QSGNode::OwnsMaterial)
            sipTransferTo(a0Wrapper, sipSelf);
#line 142 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometryNode, sipName_setMaterial, doc_QSGGeometryNode_setMaterial);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometryNode_material, "material(self) -> QSGMaterial");

extern "C" {static PyObject *meth_QSGGeometryNode_material(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometryNode_material(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometryNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometryNode, &sipCpp))
        {
            QSGMaterial*sipRes;

            sipRes = sipCpp->material();

            return sipConvertFromType(sipRes,sipType_QSGMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometryNode, sipName_material, doc_QSGGeometryNode_material);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometryNode_setOpaqueMaterial, "setOpaqueMaterial(self, QSGMaterial)");

extern "C" {static PyObject *meth_QSGGeometryNode_setOpaqueMaterial(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometryNode_setOpaqueMaterial(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGMaterial* a0;
        PyObject *a0Wrapper;
        QSGGeometryNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSGGeometryNode, &sipCpp, &a0Wrapper, sipType_QSGMaterial, &a0))
        {
#line 296 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip"
        sipCpp->setOpaqueMaterial(a0);
        
        if (sipCpp->flags() & QSGNode::OwnsOpaqueMaterial)
            sipTransferTo(a0Wrapper, sipSelf);
#line 204 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtQuick/sipQtQuickQSGGeometryNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometryNode, sipName_setOpaqueMaterial, doc_QSGGeometryNode_setOpaqueMaterial);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometryNode_opaqueMaterial, "opaqueMaterial(self) -> QSGMaterial");

extern "C" {static PyObject *meth_QSGGeometryNode_opaqueMaterial(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometryNode_opaqueMaterial(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometryNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometryNode, &sipCpp))
        {
            QSGMaterial*sipRes;

            sipRes = sipCpp->opaqueMaterial();

            return sipConvertFromType(sipRes,sipType_QSGMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometryNode, sipName_opaqueMaterial, doc_QSGGeometryNode_opaqueMaterial);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometryNode(void *, int);}
static void release_QSGGeometryNode(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGGeometryNode *>(sipCppV);
    else
        delete reinterpret_cast<QSGGeometryNode *>(sipCppV);
}


extern "C" {static void assign_QSGGeometryNode(void *, SIP_SSIZE_T, const void *);}
static void assign_QSGGeometryNode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSGGeometryNode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSGGeometryNode *>(sipSrc);
}


extern "C" {static void *array_QSGGeometryNode(SIP_SSIZE_T);}
static void *array_QSGGeometryNode(SIP_SSIZE_T sipNrElem)
{
    return new QSGGeometryNode[sipNrElem];
}


extern "C" {static void *copy_QSGGeometryNode(const void *, SIP_SSIZE_T);}
static void *copy_QSGGeometryNode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSGGeometryNode(reinterpret_cast<const QSGGeometryNode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGGeometryNode(sipSimpleWrapper *);}
static void dealloc_QSGGeometryNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGGeometryNode *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGGeometryNode(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGGeometryNode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometryNode(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGGeometryNode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGGeometryNode();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSGGeometryNode* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGGeometryNode, &a0))
        {
            sipCpp = new sipQSGGeometryNode(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGGeometryNode[] = {{21, 255, 1}};


static PyMethodDef methods_QSGGeometryNode[] = {
    {SIP_MLNAME_CAST(sipName_material), meth_QSGGeometryNode_material, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometryNode_material)},
    {SIP_MLNAME_CAST(sipName_opaqueMaterial), meth_QSGGeometryNode_opaqueMaterial, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometryNode_opaqueMaterial)},
    {SIP_MLNAME_CAST(sipName_setMaterial), meth_QSGGeometryNode_setMaterial, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometryNode_setMaterial)},
    {SIP_MLNAME_CAST(sipName_setOpaqueMaterial), meth_QSGGeometryNode_setOpaqueMaterial, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometryNode_setOpaqueMaterial)}
};

PyDoc_STRVAR(doc_QSGGeometryNode, "\1QSGGeometryNode()\n"
    "QSGGeometryNode(QSGGeometryNode)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGGeometryNode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometryNode,
        {0}
    },
    {
        sipNameNr_QSGGeometryNode,
        {0, 0, 1},
        4, methods_QSGGeometryNode,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometryNode,
    -1,
    -1,
    supers_QSGGeometryNode,
    0,
    init_type_QSGGeometryNode,
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
    dealloc_QSGGeometryNode,
    assign_QSGGeometryNode,
    array_QSGGeometryNode,
    copy_QSGGeometryNode,
    release_QSGGeometryNode,
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
