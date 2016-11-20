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

#include "sipAPIQtWidgets.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicslayout.sip"
#include <qgraphicslayout.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicslayoutitem.sip"
#include <qgraphicslayoutitem.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"
#line 161 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"


class sipQGraphicsLayout : public QGraphicsLayout
{
public:
    sipQGraphicsLayout(QGraphicsLayoutItem*);
    virtual ~sipQGraphicsLayout();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QSizeF sizeHint(Qt::SizeHint,const QSizeF&) const;
    void setGeometry(const QRectF&);
    void updateGeometry();
    void removeAt(int);
    QGraphicsLayoutItem* itemAt(int) const;
    int count() const;
    void widgetEvent(QEvent*);
    void invalidate();
    void getContentsMargins(qreal*,qreal*,qreal*,qreal*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsLayout(const sipQGraphicsLayout &);
    sipQGraphicsLayout &operator = (const sipQGraphicsLayout &);

    char sipPyMethods[9];
};

sipQGraphicsLayout::sipQGraphicsLayout(QGraphicsLayoutItem*a0): QGraphicsLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsLayout::~sipQGraphicsLayout()
{
    sipCommonDtor(sipPySelf);
}

QSizeF sipQGraphicsLayout::sizeHint(Qt::SizeHint a0,const QSizeF& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QGraphicsLayout,sipName_sizeHint);

    if (!sipMeth)
        return QSizeF();

    extern QSizeF sipVH_QtWidgets_109(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, Qt::SizeHint,const QSizeF&);

    return sipVH_QtWidgets_109(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

void sipQGraphicsLayout::setGeometry(const QRectF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setGeometry);

    if (!sipMeth)
    {
        QGraphicsLayout::setGeometry(a0);
        return;
    }

    typedef void (*sipVH_QtGui_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QRectF&);

    ((sipVH_QtGui_45)(sipModuleAPI_QtWidgets_QtGui->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsLayout::updateGeometry()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_updateGeometry);

    if (!sipMeth)
    {
        QGraphicsLayout::updateGeometry();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQGraphicsLayout::removeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QGraphicsLayout,sipName_removeAt);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_4)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    ((sipVH_QtCore_4)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[4]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QGraphicsLayoutItem* sipQGraphicsLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QGraphicsLayout,sipName_itemAt);

    if (!sipMeth)
        return 0;

    extern QGraphicsLayoutItem* sipVH_QtWidgets_122(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_122(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

int sipQGraphicsLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QGraphicsLayout,sipName_count);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQGraphicsLayout::widgetEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_widgetEvent);

    if (!sipMeth)
    {
        QGraphicsLayout::widgetEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_invalidate);

    if (!sipMeth)
    {
        QGraphicsLayout::invalidate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQGraphicsLayout::getContentsMargins(qreal*a0,qreal*a1,qreal*a2,qreal*a3) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_getContentsMargins);

    if (!sipMeth)
    {
        QGraphicsLayout::getContentsMargins(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtWidgets_114(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, double*,double*,double*,double*);

    sipVH_QtWidgets_114(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2, a3);
}


PyDoc_STRVAR(doc_QGraphicsLayout_setContentsMargins, "setContentsMargins(self, float, float, float, float)");

extern "C" {static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setContentsMargins(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setContentsMargins, doc_QGraphicsLayout_setContentsMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_getContentsMargins, "getContentsMargins(self) -> Tuple[float, float, float, float]");

extern "C" {static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        const QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::getContentsMargins(&a0,&a1,&a2,&a3) : sipCpp->getContentsMargins(&a0,&a1,&a2,&a3));

            return sipBuildResult(0,"(dddd)",a0,a1,a2,a3);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_getContentsMargins, doc_QGraphicsLayout_getContentsMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_activate, "activate(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_activate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_activate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            sipCpp->activate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_activate, doc_QGraphicsLayout_activate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_isActivated, "isActivated(self) -> bool");

extern "C" {static PyObject *meth_QGraphicsLayout_isActivated(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_isActivated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isActivated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_isActivated, doc_QGraphicsLayout_isActivated);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_invalidate, "invalidate(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::invalidate() : sipCpp->invalidate());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_invalidate, doc_QGraphicsLayout_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_widgetEvent, "widgetEvent(self, QEvent)");

extern "C" {static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QEvent, &a0))
        {
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::widgetEvent(a0) : sipCpp->widgetEvent(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_widgetEvent, doc_QGraphicsLayout_widgetEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_count, "count(self) -> int");

extern "C" {static PyObject *meth_QGraphicsLayout_count(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_count);
                return NULL;
            }

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_count, doc_QGraphicsLayout_count);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_itemAt, "itemAt(self, int) -> QGraphicsLayoutItem");

extern "C" {static PyObject *meth_QGraphicsLayout_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            QGraphicsLayoutItem*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_itemAt);
                return NULL;
            }

            sipRes = sipCpp->itemAt(a0);

            return sipConvertFromType(sipRes,sipType_QGraphicsLayoutItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_itemAt, doc_QGraphicsLayout_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_removeAt, "removeAt(self, int)");

extern "C" {static PyObject *meth_QGraphicsLayout_removeAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_removeAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_removeAt);
                return NULL;
            }

            sipCpp->removeAt(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_removeAt, doc_QGraphicsLayout_removeAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_updateGeometry, "updateGeometry(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::updateGeometry() : sipCpp->updateGeometry());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_updateGeometry, doc_QGraphicsLayout_updateGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_addChildLayoutItem, "addChildLayoutItem(self, QGraphicsLayoutItem)");

extern "C" {static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem* a0;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ:", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            sipCpp->addChildLayoutItem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_addChildLayoutItem, doc_QGraphicsLayout_addChildLayoutItem);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *);}
static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *sipSelf)
{
    QGraphicsLayout *sipCpp = reinterpret_cast<QGraphicsLayout *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsLayout));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 597 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtWidgets/sipQtWidgetsQGraphicsLayout.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsLayout(void *, int);}
static void release_QGraphicsLayout(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsLayout *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsLayout *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsLayout(sipSimpleWrapper *);}
static void dealloc_QGraphicsLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsLayout *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsLayout(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGraphicsLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsLayout *sipCpp = 0;

    {
        QGraphicsLayoutItem* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QGraphicsLayoutItem, &a0, sipOwner))
        {
            sipCpp = new sipQGraphicsLayout(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsLayout[] = {{129, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsLayout[] = {
    {(void *)slot_QGraphicsLayout___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGraphicsLayout[] = {
    {SIP_MLNAME_CAST(sipName_activate), meth_QGraphicsLayout_activate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_activate)},
    {SIP_MLNAME_CAST(sipName_addChildLayoutItem), meth_QGraphicsLayout_addChildLayoutItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_addChildLayoutItem)},
    {SIP_MLNAME_CAST(sipName_count), meth_QGraphicsLayout_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_count)},
    {SIP_MLNAME_CAST(sipName_getContentsMargins), meth_QGraphicsLayout_getContentsMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_getContentsMargins)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QGraphicsLayout_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_invalidate)},
    {SIP_MLNAME_CAST(sipName_isActivated), meth_QGraphicsLayout_isActivated, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_isActivated)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QGraphicsLayout_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_itemAt)},
    {SIP_MLNAME_CAST(sipName_removeAt), meth_QGraphicsLayout_removeAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_removeAt)},
    {SIP_MLNAME_CAST(sipName_setContentsMargins), meth_QGraphicsLayout_setContentsMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_setContentsMargins)},
    {SIP_MLNAME_CAST(sipName_updateGeometry), meth_QGraphicsLayout_updateGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_updateGeometry)},
    {SIP_MLNAME_CAST(sipName_widgetEvent), meth_QGraphicsLayout_widgetEvent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_widgetEvent)}
};

PyDoc_STRVAR(doc_QGraphicsLayout, "\1QGraphicsLayout(parent: QGraphicsLayoutItem = None)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsLayout = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsLayout,
        {0}
    },
    {
        sipNameNr_QGraphicsLayout,
        {0, 0, 1},
        11, methods_QGraphicsLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsLayout,
    -1,
    -1,
    supers_QGraphicsLayout,
    slots_QGraphicsLayout,
    init_type_QGraphicsLayout,
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
    dealloc_QGraphicsLayout,
    0,
    0,
    0,
    release_QGraphicsLayout,
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
