TEMPLATE = lib
CONFIG += warn_on plugin
QT += designer
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtDesigner
sip.files = ../sip/QtDesigner/qpydesignercustomwidgetplugin.sip ../sip/QtDesigner/container.sip ../sip/QtDesigner/abstractformbuilder.sip ../sip/QtDesigner/qpydesignerpropertysheetextension.sip ../sip/QtDesigner/abstractobjectinspector.sip ../sip/QtDesigner/taskmenu.sip ../sip/QtDesigner/abstractwidgetbox.sip ../sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip ../sip/QtDesigner/qextensionmanager.sip ../sip/QtDesigner/abstractformwindowmanager.sip ../sip/QtDesigner/extension.sip ../sip/QtDesigner/qpydesignermembersheetextension.sip ../sip/QtDesigner/membersheet.sip ../sip/QtDesigner/abstractformwindowcursor.sip ../sip/QtDesigner/qpydesignertaskmenuextension.sip ../sip/QtDesigner/abstractformwindow.sip ../sip/QtDesigner/abstractformeditor.sip ../sip/QtDesigner/abstractpropertyeditor.sip ../sip/QtDesigner/qpydesignercontainerextension.sip ../sip/QtDesigner/abstractactioneditor.sip ../sip/QtDesigner/propertysheet.sip ../sip/QtDesigner/customwidget.sip ../sip/QtDesigner/default_extensionfactory.sip ../sip/QtDesigner/QtDesignermod.sip ../sip/QtDesigner/formbuilder.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDesigner.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += ../qpy/QtDesigner

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"

    equals(QT_MINOR_VERSION, 5) {
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
    }
}

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h ../qpy/QtDesigner/qpydesignercustomwidgetcollectionplugin.h ../qpy/QtDesigner/qpydesignercustomwidgetplugin.h ../qpy/QtDesigner/qpydesignercontainerextension.h ../qpy/QtDesigner/qpydesignertaskmenuextension.h ../qpy/QtDesigner/qpydesignermembersheetextension.h ../qpy/QtDesigner/qpydesignerpropertysheetextension.h
SOURCES = sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignercmodule.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerFormWindowInterface.cpp
