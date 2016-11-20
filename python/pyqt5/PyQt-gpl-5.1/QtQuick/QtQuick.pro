TEMPLATE = lib
CONFIG += warn_on plugin
QT += quick
CONFIG += release

win32 {
    PY_MODULE = QtQuick.pyd
    target.files = QtQuick.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtQuick.so
    target.files = QtQuick.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtQuick
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qquicktextdocument.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgmaterial.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgsimplerectnode.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgvertexcolormaterial.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgsimpletexturenode.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsggeometry.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgtextureprovider.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qquickimageprovider.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgflatcolormaterial.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgtexture.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qquickwindow.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgnode.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/QtQuickmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qquickpainteditem.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qquickview.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qsgtexturematerial.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQuick/qquickitem.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/qpy/QtQuick
LIBS += -L../qpy/QtQuick -lqpyquick

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtQuick
HEADERS = sipAPIQtQuick.h
SOURCES = sipQtQuickQSGMaterialShader.cpp sipQtQuickQSGTexture.cpp sipQtQuickQSGSimpleTextureNode.cpp sipQtQuickQSGNodeDirtyState.cpp sipQtQuickcmodule.cpp sipQtQuickQSGBasicGeometryNode.cpp sipQtQuickQSGTextureMaterial.cpp sipQtQuickQSGNodeFlags.cpp sipQtQuickQQuickView.cpp sipQtQuickQQuickItemFlags.cpp sipQtQuickQSGOpacityNode.cpp sipQtQuickQQuickTextDocument.cpp sipQtQuickQSGDynamicTexture.cpp sipQtQuickQSGGeometry.cpp sipQtQuickQSGGeometryPoint2D.cpp sipQtQuickQQuickImageProvider.cpp sipQtQuickQQuickWindowCreateTextureOptions.cpp sipQtQuickQSGGeometryColoredPoint2D.cpp sipQtQuickQSGVertexColorMaterial.cpp sipQtQuickQSGNode.cpp sipQtQuickQSGMaterialFlags.cpp sipQtQuickQSGMaterialType.cpp sipQtQuickQSGOpaqueTextureMaterial.cpp sipQtQuickQSGGeometryAttributeSet.cpp sipQtQuickQSGMaterial.cpp sipQtQuickQSGGeometryNode.cpp sipQtQuickQSGClipNode.cpp sipQtQuickQSGMaterialShaderRenderState.cpp sipQtQuickQQuickItemUpdatePaintNodeData.cpp sipQtQuickQQuickPaintedItem.cpp sipQtQuickQSGTextureProvider.cpp sipQtQuickQSGMaterialShaderRenderStateDirtyStates.cpp sipQtQuickQSGTransformNode.cpp sipQtQuickQQuickItem.cpp sipQtQuickQQuickWindow.cpp sipQtQuickQList0101QQuickItem.cpp sipQtQuickQSGGeometryTexturedPoint2D.cpp sipQtQuickQSGFlatColorMaterial.cpp sipQtQuickQQuickPaintedItemPerformanceHints.cpp sipQtQuickQQuickTextureFactory.cpp sipQtQuickQSGSimpleRectNode.cpp sipQtQuickQQuickItemItemChangeData.cpp sipQtQuickQSGGeometryAttribute.cpp