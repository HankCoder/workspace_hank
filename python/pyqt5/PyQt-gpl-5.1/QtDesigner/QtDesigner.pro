TEMPLATE = lib
CONFIG += warn_on plugin
QT += designer
CONFIG += release

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtDesigner
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignercustomwidgetplugin.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/container.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractformbuilder.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignerpropertysheetextension.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractobjectinspector.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/taskmenu.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractwidgetbox.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qextensionmanager.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractformwindowmanager.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/extension.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignermembersheetextension.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/membersheet.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractformwindowcursor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignertaskmenuextension.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractformwindow.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractformeditor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractpropertyeditor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/qpydesignercontainerextension.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/abstractactioneditor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/propertysheet.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/customwidget.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/default_extensionfactory.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/QtDesignermod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDesigner/formbuilder.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/qpy/QtDesigner
LIBS += -L../qpy/QtDesigner -lqpydesigner

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h
SOURCES = sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignercmodule.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerFormWindowInterface.cpp