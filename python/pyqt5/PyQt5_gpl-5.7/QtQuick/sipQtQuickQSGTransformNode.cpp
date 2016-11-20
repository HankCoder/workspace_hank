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

#include "sipAPIQtQuick.h"

#line 311 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTransformNode.cpp"

#line 30 "sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTransformNode.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTransformNode.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTransformNode.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuick/sipQtQuickQSGTransformNode.cpp"


class sipQSGTransformNode : public QSGTransformNode
{
public:
    sipQSGTransformNode();
    virtual ~sipQSGTransformNode();

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
    sipQSGTransformNode(const sipQSGTransformNode &);
    sipQSGTransformNode &operator = (const sipQSGTransformNode &);

    char sipPyMethods[2];
};

sipQSGTransformNode::sipQSGTransformNode(): QSGTransformNode(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGTransformNode::~sipQSGTransformNode()
{
    sipCommonDtor(sipPySelf);
}

void sipQSGTransformNode::preprocess()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_preprocess);

    if (!sipMeth)
    {
        QSGTransformNode::preprocess();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQSGTransformNode::isSubtreeBlocked() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_isSubtreeBlocked);

    if (!sipMeth)
        return QSGTransformNode::isSubtreeBlocked();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGTransformNode_setMatrix, "setMatrix(self, QMatrix4x4)");

extern "C" {static PyObject *meth_QSGTransformNode_setMatrix(PyObject *, PyObject *);}
static PyObject *meth_QSGTransformNode_setMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix4x4* a0;
        QSGTransformNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGTransformNode, &sipCpp, sipType_QMatrix4x4, &a0))
        {
            sipCpp->setMatrix(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTransformNode, sipName_setMatrix, doc_QSGTransformNode_setMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTransformNode_matrix, "matrix(self) -> QMatrix4x4");

extern "C" {static PyObject *meth_QSGTransformNode_matrix(PyObject *, PyObject *);}
static PyObject *meth_QSGTransformNode_matrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGTransformNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTransformNode, &sipCpp))
        {
            QMatrix4x4*sipRes;

            sipRes = new QMatrix4x4(sipCpp->matrix());

            return sipConvertFromNewType(sipRes,sipType_QMatrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTransformNode, sipName_matrix, doc_QSGTransformNode_matrix);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGTransformNode(void *, int);}
static void release_QSGTransformNode(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGTransformNode *>(sipCppV);
    else
        delete reinterpret_cast<QSGTransformNode *>(sipCppV);
}


extern "C" {static void dealloc_QSGTransformNode(sipSimpleWrapper *);}
static void dealloc_QSGTransformNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGTransformNode *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGTransformNode(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGTransformNode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGTransformNode(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGTransformNode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGTransformNode();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGTransformNode[] = {{56, 255, 1}};


static PyMethodDef methods_QSGTransformNode[] = {
    {SIP_MLNAME_CAST(sipName_matrix), meth_QSGTransformNode_matrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTransformNode_matrix)},
    {SIP_MLNAME_CAST(sipName_setMatrix), meth_QSGTransformNode_setMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTransformNode_setMatrix)}
};

PyDoc_STRVAR(doc_QSGTransformNode, "\1QSGTransformNode()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGTransformNode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGTransformNode,
        {0}
    },
    {
        sipNameNr_QSGTransformNode,
        {0, 0, 1},
        2, methods_QSGTransformNode,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGTransformNode,
    -1,
    -1,
    supers_QSGTransformNode,
    0,
    init_type_QSGTransformNode,
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
    dealloc_QSGTransformNode,
    0,
    0,
    0,
    release_QSGTransformNode,
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
