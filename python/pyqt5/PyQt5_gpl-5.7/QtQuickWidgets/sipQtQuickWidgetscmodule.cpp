/*
 * Module code.
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

#include "sipAPIQtQuickWidgets.h"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuickWidgets/sipQtQuickWidgetscmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtQuickWidgets[] = {
    'Q', 'Q', 'u', 'i', 'c', 'k', 'W', 'i', 'd', 'g', 'e', 't', ':', ':', 'R', 'e', 's', 'i', 'z', 'e', 'M', 'o', 'd', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'o', 'u', 'b', 'l', 'e', 'C', 'l', 'i', 'c', 'k', 'E', 'v', 'e', 'n', 't', 0,
    'Q', 'Q', 'u', 'i', 'c', 'k', 'W', 'i', 'd', 'g', 'e', 't', ':', ':', 'S', 't', 'a', 't', 'u', 's', 0,
    'S', 'i', 'z', 'e', 'R', 'o', 'o', 't', 'O', 'b', 'j', 'e', 'c', 't', 'T', 'o', 'V', 'i', 'e', 'w', 0,
    'S', 'i', 'z', 'e', 'V', 'i', 'e', 'w', 'T', 'o', 'R', 'o', 'o', 't', 'O', 'b', 'j', 'e', 'c', 't', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'Q', 'u', 'i', 'c', 'k', 'W', 'i', 'd', 'g', 'e', 't', 's', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'P', 'r', 'e', 'v', 'C', 'h', 'i', 'l', 'd', 0,
    'a', 't', 't', 'a', 'c', 'h', 'e', 'd', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 0,
    'h', 'a', 's', 'H', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'Q', 'u', 'e', 'r', 'y', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'm', 'i', 'n', 'i', 'm', 'u', 'm', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    's', 'c', 'e', 'n', 'e', 'G', 'r', 'a', 'p', 'h', 'E', 'r', 'r', 'o', 'r', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'g', 'r', 'a', 'b', 'F', 'r', 'a', 'm', 'e', 'b', 'u', 'f', 'f', 'e', 'r', 0,
    'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '_', 'f', 'o', 'r', 'm', 'a', 't', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'h', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'r', 'a', 'g', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'g', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'h', 'a', 'r', 'e', 'd', 'P', 'a', 'i', 'n', 't', 'e', 'r', 0,
    's', 'e', 't', 'C', 'l', 'e', 'a', 'r', 'C', 'o', 'l', 'o', 'r', 0,
    's', 'e', 't', 'R', 'e', 's', 'i', 'z', 'e', 'M', 'o', 'd', 'e', 0,
    'd', 'r', 'a', 'g', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 't', 'a', 't', 'u', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'o', 'c', 'u', 's', 'O', 'u', 't', 'E', 'v', 'e', 'n', 't', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'Q', 'Q', 'u', 'i', 'c', 'k', 'W', 'i', 'd', 'g', 'e', 't', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'f', 'o', 'c', 'u', 's', 'I', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'q', 'u', 'i', 'c', 'k', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'i', 'n', 'i', 't', 'P', 'a', 'i', 'n', 't', 'e', 'r', 0,
    'n', 'a', 't', 'i', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'S', 'i', 'z', 'e', 0,
    'r', 'o', 'o', 't', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    't', 'a', 'b', 'l', 'e', 't', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'a', 't', 'c', 'h', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'e', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'l', 'o', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'M', 'o', 'd', 'e', 0,
    'r', 'o', 'o', 't', 'O', 'b', 'j', 'e', 'c', 't', 0,
    'f', 'o', 'r', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'w', 'h', 'e', 'e', 'l', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'v', 'e', 'n', 't', 0,
    'g', 'e', 'n', 'M', 'i', 'p', 'M', 'a', 'p', 's', 0,
    's', 'e', 't', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'S', 'o', 'u', 'r', 'c', 'e', 0,
    'd', 'r', 'o', 'p', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 'd', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'h', 'o', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'n', 'a', 'm', 'e', 'T', 'y', 'p', 'e', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'L', 'o', 'a', 'd', 'i', 'n', 'g', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'b', 'u', 'f', 'f', 'e', 'r', 's', 0,
    's', 'o', 'u', 'r', 'c', 'e', 's', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'd', 'e', 'v', 'T', 'y', 'p', 'e', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    'e', 'r', 'r', 'o', 'r', 's', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    's', 't', 'r', 'i', 'd', 'e', 0,
    'm', 'e', 't', 'r', 'i', 'c', 0,
    'e', 'n', 'g', 'i', 'n', 'e', 0,
    's', 'o', 'u', 'r', 'c', 'e', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    's', 't', 'a', 't', 'u', 's', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'R', 'e', 'a', 'd', 'y', 0,
    'b', 'r', 'u', 's', 'h', 0,
    't', 'y', 'p', 'e', 's', 0,
    'o', 'r', 'd', 'e', 'r', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 't', 'e', 0,
    'p', 'o', 'r', 't', 0,
    'N', 'u', 'l', 'l', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'p', 'e', 'n', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QQuickWidget(void **);}
static const sipTypeDef *sipSubClass_QQuickWidget(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtQuickWidgets/qquickwidget.sip"
    sipType = (sipCpp->inherits(sipName_QQuickWidget) ? sipType_QQuickWidget : 0);
#line 189 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtQuickWidgets/sipQtQuickWidgetscmodule.cpp"

    return sipType;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QQuickWidget__Status, {0}}, sipNameNr_Status, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QQuickWidget__ResizeMode, {0}}, sipNameNr_ResizeMode, 0, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtQuickWidgets_QQuickWidget.super.ctd_base,
    &enumTypes[1].etd_base,
    &enumTypes[0].etd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", 1, NULL},
    {"PyQt5.QtGui", -1, NULL},
    {"PyQt5.QtWidgets", -1, NULL},
    {"PyQt5.QtNetwork", -1, NULL},
    {"PyQt5.QtQml", -1, NULL},
    {"PyQt5.QtQuick", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QQuickWidget, {165, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtQuickWidgets = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt5_QtQuickWidgets,
    0,
    -1,
    sipStrings_QtQuickWidgets,
    importsTable,
    NULL,
    3,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtQuickWidgets;
const sipExportedModuleDef *sipModuleAPI_QtQuickWidgets_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtQuickWidgets_QtGui;
const sipExportedModuleDef *sipModuleAPI_QtQuickWidgets_QtWidgets;
const sipExportedModuleDef *sipModuleAPI_QtQuickWidgets_QtNetwork;
const sipExportedModuleDef *sipModuleAPI_QtQuickWidgets_QtQml;
const sipExportedModuleDef *sipModuleAPI_QtQuickWidgets_QtQuick;

sip_qt_metaobject_func sip_QtQuickWidgets_qt_metaobject;
sip_qt_metacall_func sip_QtQuickWidgets_qt_metacall;
sip_qt_metacast_func sip_QtQuickWidgets_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtQuickWidgets
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtQuickWidgets
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.QtQuickWidgets",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt5_QtQuickWidgets, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt5_QtQuickWidgets), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtQuickWidgets = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtQuickWidgets = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtQuickWidgets == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtQuickWidgets,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtQuickWidgets_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtQuickWidgets_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtQuickWidgets_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtQuickWidgets_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtQuickWidgets,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtQuickWidgets_QtCore = sipModuleAPI_QtQuickWidgets.em_imports[0].im_module;
    sipModuleAPI_QtQuickWidgets_QtGui = sipModuleAPI_QtQuickWidgets.em_imports[1].im_module;
    sipModuleAPI_QtQuickWidgets_QtWidgets = sipModuleAPI_QtQuickWidgets.em_imports[2].im_module;
    sipModuleAPI_QtQuickWidgets_QtNetwork = sipModuleAPI_QtQuickWidgets.em_imports[3].im_module;
    sipModuleAPI_QtQuickWidgets_QtQml = sipModuleAPI_QtQuickWidgets.em_imports[4].im_module;
    sipModuleAPI_QtQuickWidgets_QtQuick = sipModuleAPI_QtQuickWidgets.em_imports[5].im_module;

    SIP_MODULE_RETURN(sipModule);
}
