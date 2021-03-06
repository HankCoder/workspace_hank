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

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtCore/sipQtCoreQEvent.cpp"



class sipQEvent : public QEvent
{
public:
    sipQEvent(QEvent::Type);
    sipQEvent(const QEvent&);
    ~sipQEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQEvent(const sipQEvent &);
    sipQEvent &operator = (const sipQEvent &);
};

sipQEvent::sipQEvent(QEvent::Type a0): QEvent(a0), sipPySelf(0)
{
}

sipQEvent::sipQEvent(const QEvent& a0): QEvent(a0), sipPySelf(0)
{
}

sipQEvent::~sipQEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QEvent_type, "type(self) -> QEvent.Type");

extern "C" {static PyObject *meth_QEvent_type(PyObject *, PyObject *);}
static PyObject *meth_QEvent_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            QEvent::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QEvent_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_type, doc_QEvent_type);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_spontaneous, "spontaneous(self) -> bool");

extern "C" {static PyObject *meth_QEvent_spontaneous(PyObject *, PyObject *);}
static PyObject *meth_QEvent_spontaneous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->spontaneous();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_spontaneous, doc_QEvent_spontaneous);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_setAccepted, "setAccepted(self, bool)");

extern "C" {static PyObject *meth_QEvent_setAccepted(PyObject *, PyObject *);}
static PyObject *meth_QEvent_setAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QEvent, &sipCpp, &a0))
        {
            sipCpp->setAccepted(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_setAccepted, doc_QEvent_setAccepted);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_isAccepted, "isAccepted(self) -> bool");

extern "C" {static PyObject *meth_QEvent_isAccepted(PyObject *, PyObject *);}
static PyObject *meth_QEvent_isAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAccepted();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_isAccepted, doc_QEvent_isAccepted);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_accept, "accept(self)");

extern "C" {static PyObject *meth_QEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_accept, doc_QEvent_accept);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_ignore, "ignore(self)");

extern "C" {static PyObject *meth_QEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            sipCpp->ignore();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_ignore, doc_QEvent_ignore);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_registerEventType, "registerEventType(hint: int = -1) -> int");

extern "C" {static PyObject *meth_QEvent_registerEventType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QEvent_registerEventType(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_hint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|i", &a0))
        {
            int sipRes;

            sipRes = QEvent::registerEventType(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_registerEventType, doc_QEvent_registerEventType);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QEvent(void *, int);}
static void release_QEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQEvent *>(sipCppV);
    else
        delete reinterpret_cast<QEvent *>(sipCppV);
}


extern "C" {static void dealloc_QEvent(sipSimpleWrapper *);}
static void dealloc_QEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQEvent *sipCpp = 0;

    {
        QEvent::Type a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QEvent_Type, &a0))
        {
            sipCpp = new sipQEvent(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QEvent, &a0))
        {
            sipCpp = new sipQEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QEvent[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QEvent_accept, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_accept)},
    {SIP_MLNAME_CAST(sipName_ignore), meth_QEvent_ignore, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_ignore)},
    {SIP_MLNAME_CAST(sipName_isAccepted), meth_QEvent_isAccepted, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_isAccepted)},
    {SIP_MLNAME_CAST(sipName_registerEventType), (PyCFunction)meth_QEvent_registerEventType, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QEvent_registerEventType)},
    {SIP_MLNAME_CAST(sipName_setAccepted), meth_QEvent_setAccepted, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_setAccepted)},
    {SIP_MLNAME_CAST(sipName_spontaneous), meth_QEvent_spontaneous, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_spontaneous)},
    {SIP_MLNAME_CAST(sipName_type), meth_QEvent_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_type)}
};

static sipEnumMemberDef enummembers_QEvent[] = {
    {sipName_ActionAdded, static_cast<int>(QEvent::ActionAdded), 47},
    {sipName_ActionChanged, static_cast<int>(QEvent::ActionChanged), 47},
    {sipName_ActionRemoved, static_cast<int>(QEvent::ActionRemoved), 47},
    {sipName_ActivationChange, static_cast<int>(QEvent::ActivationChange), 47},
    {sipName_ApplicationActivate, static_cast<int>(QEvent::ApplicationActivate), 47},
    {sipName_ApplicationActivated, static_cast<int>(QEvent::ApplicationActivated), 47},
    {sipName_ApplicationDeactivate, static_cast<int>(QEvent::ApplicationDeactivate), 47},
    {sipName_ApplicationDeactivated, static_cast<int>(QEvent::ApplicationDeactivated), 47},
    {sipName_ApplicationFontChange, static_cast<int>(QEvent::ApplicationFontChange), 47},
    {sipName_ApplicationLayoutDirectionChange, static_cast<int>(QEvent::ApplicationLayoutDirectionChange), 47},
    {sipName_ApplicationPaletteChange, static_cast<int>(QEvent::ApplicationPaletteChange), 47},
    {sipName_ApplicationStateChange, static_cast<int>(QEvent::ApplicationStateChange), 47},
    {sipName_ApplicationWindowIconChange, static_cast<int>(QEvent::ApplicationWindowIconChange), 47},
    {sipName_ChildAdded, static_cast<int>(QEvent::ChildAdded), 47},
    {sipName_ChildPolished, static_cast<int>(QEvent::ChildPolished), 47},
    {sipName_ChildRemoved, static_cast<int>(QEvent::ChildRemoved), 47},
    {sipName_Clipboard, static_cast<int>(QEvent::Clipboard), 47},
    {sipName_Close, static_cast<int>(QEvent::Close), 47},
    {sipName_CloseSoftwareInputPanel, static_cast<int>(QEvent::CloseSoftwareInputPanel), 47},
    {sipName_ContextMenu, static_cast<int>(QEvent::ContextMenu), 47},
    {sipName_CursorChange, static_cast<int>(QEvent::CursorChange), 47},
    {sipName_DeferredDelete, static_cast<int>(QEvent::DeferredDelete), 47},
    {sipName_DragEnter, static_cast<int>(QEvent::DragEnter), 47},
    {sipName_DragLeave, static_cast<int>(QEvent::DragLeave), 47},
    {sipName_DragMove, static_cast<int>(QEvent::DragMove), 47},
    {sipName_Drop, static_cast<int>(QEvent::Drop), 47},
    {sipName_DynamicPropertyChange, static_cast<int>(QEvent::DynamicPropertyChange), 47},
    {sipName_EnabledChange, static_cast<int>(QEvent::EnabledChange), 47},
    {sipName_Enter, static_cast<int>(QEvent::Enter), 47},
    {sipName_EnterWhatsThisMode, static_cast<int>(QEvent::EnterWhatsThisMode), 47},
    {sipName_Expose, static_cast<int>(QEvent::Expose), 47},
    {sipName_FileOpen, static_cast<int>(QEvent::FileOpen), 47},
    {sipName_FocusAboutToChange, static_cast<int>(QEvent::FocusAboutToChange), 47},
    {sipName_FocusIn, static_cast<int>(QEvent::FocusIn), 47},
    {sipName_FocusOut, static_cast<int>(QEvent::FocusOut), 47},
    {sipName_FontChange, static_cast<int>(QEvent::FontChange), 47},
    {sipName_Gesture, static_cast<int>(QEvent::Gesture), 47},
    {sipName_GestureOverride, static_cast<int>(QEvent::GestureOverride), 47},
    {sipName_GrabKeyboard, static_cast<int>(QEvent::GrabKeyboard), 47},
    {sipName_GrabMouse, static_cast<int>(QEvent::GrabMouse), 47},
    {sipName_GraphicsSceneContextMenu, static_cast<int>(QEvent::GraphicsSceneContextMenu), 47},
    {sipName_GraphicsSceneDragEnter, static_cast<int>(QEvent::GraphicsSceneDragEnter), 47},
    {sipName_GraphicsSceneDragLeave, static_cast<int>(QEvent::GraphicsSceneDragLeave), 47},
    {sipName_GraphicsSceneDragMove, static_cast<int>(QEvent::GraphicsSceneDragMove), 47},
    {sipName_GraphicsSceneDrop, static_cast<int>(QEvent::GraphicsSceneDrop), 47},
    {sipName_GraphicsSceneHelp, static_cast<int>(QEvent::GraphicsSceneHelp), 47},
    {sipName_GraphicsSceneHoverEnter, static_cast<int>(QEvent::GraphicsSceneHoverEnter), 47},
    {sipName_GraphicsSceneHoverLeave, static_cast<int>(QEvent::GraphicsSceneHoverLeave), 47},
    {sipName_GraphicsSceneHoverMove, static_cast<int>(QEvent::GraphicsSceneHoverMove), 47},
    {sipName_GraphicsSceneMouseDoubleClick, static_cast<int>(QEvent::GraphicsSceneMouseDoubleClick), 47},
    {sipName_GraphicsSceneMouseMove, static_cast<int>(QEvent::GraphicsSceneMouseMove), 47},
    {sipName_GraphicsSceneMousePress, static_cast<int>(QEvent::GraphicsSceneMousePress), 47},
    {sipName_GraphicsSceneMouseRelease, static_cast<int>(QEvent::GraphicsSceneMouseRelease), 47},
    {sipName_GraphicsSceneMove, static_cast<int>(QEvent::GraphicsSceneMove), 47},
    {sipName_GraphicsSceneResize, static_cast<int>(QEvent::GraphicsSceneResize), 47},
    {sipName_GraphicsSceneWheel, static_cast<int>(QEvent::GraphicsSceneWheel), 47},
    {sipName_Hide, static_cast<int>(QEvent::Hide), 47},
    {sipName_HideToParent, static_cast<int>(QEvent::HideToParent), 47},
    {sipName_HoverEnter, static_cast<int>(QEvent::HoverEnter), 47},
    {sipName_HoverLeave, static_cast<int>(QEvent::HoverLeave), 47},
    {sipName_HoverMove, static_cast<int>(QEvent::HoverMove), 47},
    {sipName_IconDrag, static_cast<int>(QEvent::IconDrag), 47},
    {sipName_IconTextChange, static_cast<int>(QEvent::IconTextChange), 47},
    {sipName_InputMethod, static_cast<int>(QEvent::InputMethod), 47},
    {sipName_InputMethodQuery, static_cast<int>(QEvent::InputMethodQuery), 47},
    {sipName_KeyPress, static_cast<int>(QEvent::KeyPress), 47},
    {sipName_KeyRelease, static_cast<int>(QEvent::KeyRelease), 47},
    {sipName_KeyboardLayoutChange, static_cast<int>(QEvent::KeyboardLayoutChange), 47},
    {sipName_LanguageChange, static_cast<int>(QEvent::LanguageChange), 47},
    {sipName_LayoutDirectionChange, static_cast<int>(QEvent::LayoutDirectionChange), 47},
    {sipName_LayoutRequest, static_cast<int>(QEvent::LayoutRequest), 47},
    {sipName_Leave, static_cast<int>(QEvent::Leave), 47},
    {sipName_LeaveWhatsThisMode, static_cast<int>(QEvent::LeaveWhatsThisMode), 47},
    {sipName_LocaleChange, static_cast<int>(QEvent::LocaleChange), 47},
    {sipName_MaxUser, static_cast<int>(QEvent::MaxUser), 47},
    {sipName_MetaCall, static_cast<int>(QEvent::MetaCall), 47},
    {sipName_ModifiedChange, static_cast<int>(QEvent::ModifiedChange), 47},
    {sipName_MouseButtonDblClick, static_cast<int>(QEvent::MouseButtonDblClick), 47},
    {sipName_MouseButtonPress, static_cast<int>(QEvent::MouseButtonPress), 47},
    {sipName_MouseButtonRelease, static_cast<int>(QEvent::MouseButtonRelease), 47},
    {sipName_MouseMove, static_cast<int>(QEvent::MouseMove), 47},
    {sipName_MouseTrackingChange, static_cast<int>(QEvent::MouseTrackingChange), 47},
    {sipName_Move, static_cast<int>(QEvent::Move), 47},
    {sipName_None, static_cast<int>(QEvent::None), 47},
    {sipName_OkRequest, static_cast<int>(QEvent::OkRequest), 47},
    {sipName_OrientationChange, static_cast<int>(QEvent::OrientationChange), 47},
    {sipName_Paint, static_cast<int>(QEvent::Paint), 47},
    {sipName_PaletteChange, static_cast<int>(QEvent::PaletteChange), 47},
    {sipName_ParentAboutToChange, static_cast<int>(QEvent::ParentAboutToChange), 47},
    {sipName_ParentChange, static_cast<int>(QEvent::ParentChange), 47},
    {sipName_PlatformPanel, static_cast<int>(QEvent::PlatformPanel), 47},
    {sipName_Polish, static_cast<int>(QEvent::Polish), 47},
    {sipName_PolishRequest, static_cast<int>(QEvent::PolishRequest), 47},
    {sipName_QueryWhatsThis, static_cast<int>(QEvent::QueryWhatsThis), 47},
    {sipName_RequestSoftwareInputPanel, static_cast<int>(QEvent::RequestSoftwareInputPanel), 47},
    {sipName_Resize, static_cast<int>(QEvent::Resize), 47},
    {sipName_Scroll, static_cast<int>(QEvent::Scroll), 47},
    {sipName_ScrollPrepare, static_cast<int>(QEvent::ScrollPrepare), 47},
    {sipName_Shortcut, static_cast<int>(QEvent::Shortcut), 47},
    {sipName_ShortcutOverride, static_cast<int>(QEvent::ShortcutOverride), 47},
    {sipName_Show, static_cast<int>(QEvent::Show), 47},
    {sipName_ShowToParent, static_cast<int>(QEvent::ShowToParent), 47},
    {sipName_SockAct, static_cast<int>(QEvent::SockAct), 47},
    {sipName_StateMachineSignal, static_cast<int>(QEvent::StateMachineSignal), 47},
    {sipName_StateMachineWrapped, static_cast<int>(QEvent::StateMachineWrapped), 47},
    {sipName_StatusTip, static_cast<int>(QEvent::StatusTip), 47},
    {sipName_StyleChange, static_cast<int>(QEvent::StyleChange), 47},
    {sipName_TabletEnterProximity, static_cast<int>(QEvent::TabletEnterProximity), 47},
    {sipName_TabletLeaveProximity, static_cast<int>(QEvent::TabletLeaveProximity), 47},
    {sipName_TabletMove, static_cast<int>(QEvent::TabletMove), 47},
    {sipName_TabletPress, static_cast<int>(QEvent::TabletPress), 47},
    {sipName_TabletRelease, static_cast<int>(QEvent::TabletRelease), 47},
    {sipName_Timer, static_cast<int>(QEvent::Timer), 47},
    {sipName_ToolBarChange, static_cast<int>(QEvent::ToolBarChange), 47},
    {sipName_ToolTip, static_cast<int>(QEvent::ToolTip), 47},
    {sipName_ToolTipChange, static_cast<int>(QEvent::ToolTipChange), 47},
    {sipName_TouchBegin, static_cast<int>(QEvent::TouchBegin), 47},
    {sipName_TouchCancel, static_cast<int>(QEvent::TouchCancel), 47},
    {sipName_TouchEnd, static_cast<int>(QEvent::TouchEnd), 47},
    {sipName_TouchUpdate, static_cast<int>(QEvent::TouchUpdate), 47},
    {sipName_UngrabKeyboard, static_cast<int>(QEvent::UngrabKeyboard), 47},
    {sipName_UngrabMouse, static_cast<int>(QEvent::UngrabMouse), 47},
    {sipName_UpdateLater, static_cast<int>(QEvent::UpdateLater), 47},
    {sipName_UpdateRequest, static_cast<int>(QEvent::UpdateRequest), 47},
    {sipName_User, static_cast<int>(QEvent::User), 47},
    {sipName_WhatsThis, static_cast<int>(QEvent::WhatsThis), 47},
    {sipName_WhatsThisClicked, static_cast<int>(QEvent::WhatsThisClicked), 47},
    {sipName_Wheel, static_cast<int>(QEvent::Wheel), 47},
    {sipName_WinEventAct, static_cast<int>(QEvent::WinEventAct), 47},
    {sipName_WinIdChange, static_cast<int>(QEvent::WinIdChange), 47},
    {sipName_WindowActivate, static_cast<int>(QEvent::WindowActivate), 47},
    {sipName_WindowBlocked, static_cast<int>(QEvent::WindowBlocked), 47},
    {sipName_WindowDeactivate, static_cast<int>(QEvent::WindowDeactivate), 47},
    {sipName_WindowIconChange, static_cast<int>(QEvent::WindowIconChange), 47},
    {sipName_WindowStateChange, static_cast<int>(QEvent::WindowStateChange), 47},
    {sipName_WindowTitleChange, static_cast<int>(QEvent::WindowTitleChange), 47},
    {sipName_WindowUnblocked, static_cast<int>(QEvent::WindowUnblocked), 47},
    {sipName_ZOrderChange, static_cast<int>(QEvent::ZOrderChange), 47},
};

PyDoc_STRVAR(doc_QEvent, "\1QEvent(QEvent.Type)\n"
    "QEvent(QEvent)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QEvent,
        {0}
    },
    {
        sipNameNr_QEvent,
        {0, 0, 1},
        7, methods_QEvent,
        138, enummembers_QEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QEvent,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QEvent,
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
    dealloc_QEvent,
    0,
    0,
    0,
    release_QEvent,
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
