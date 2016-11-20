TEMPLATE = lib
CONFIG += warn_on plugin
QT += quick
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQuick.pyd
    target.files = QtQuick.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtQuick.so
    target.files = QtQuick.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtQuick
sip.files = ../sip/QtQuick/qsgabstractrenderer.sip ../sip/QtQuick/qquicktextdocument.sip ../sip/QtQuick/qsgmaterial.sip ../sip/QtQuick/qsgsimplerectnode.sip ../sip/QtQuick/qsgvertexcolormaterial.sip ../sip/QtQuick/qsgsimpletexturenode.sip ../sip/QtQuick/qsgengine.sip ../sip/QtQuick/qsggeometry.sip ../sip/QtQuick/qsgtextureprovider.sip ../sip/QtQuick/qquickrendercontrol.sip ../sip/QtQuick/qquickimageprovider.sip ../sip/QtQuick/qsgflatcolormaterial.sip ../sip/QtQuick/qsgtexture.sip ../sip/QtQuick/qquickwindow.sip ../sip/QtQuick/qquickitemgrabresult.sip ../sip/QtQuick/qquickframebufferobject.sip ../sip/QtQuick/qsgnode.sip ../sip/QtQuick/QtQuickmod.sip ../sip/QtQuick/qquickpainteditem.sip ../sip/QtQuick/qquickview.sip ../sip/QtQuick/qsgtexturematerial.sip ../sip/QtQuick/qquickitem.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQuick.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += ../qpy/QtQuick

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

TARGET = QtQuick
HEADERS = sipAPIQtQuick.h ../qpy/QtQuick/qpyquick_api.h ../qpy/QtQuick/qpyquick_chimera_helpers.h ../qpy/QtQuick/qpyquickpainteditem.h ../qpy/QtQuick/qpyquickitem.h ../qpy/QtQuick/qpyquickframebufferobject.h ../qpy/QtQuick/qpyquick_register_type.h
SOURCES = sipQtQuickQSGMaterialShader.cpp sipQtQuickQSGTexture.cpp sipQtQuickQQuickCloseEvent.cpp sipQtQuickQSGSimpleTextureNode.cpp sipQtQuickQSGNodeDirtyState.cpp sipQtQuickcmodule.cpp sipQtQuickQSGBasicGeometryNode.cpp sipQtQuickQSGTextureMaterial.cpp sipQtQuickQQuickItemGrabResult.cpp sipQtQuickQSGNodeFlags.cpp sipQtQuickQQuickView.cpp sipQtQuickQQuickItemFlags.cpp sipQtQuickQSGOpacityNode.cpp sipQtQuickQSGAbstractRendererClearMode.cpp sipQtQuickQQuickTextDocument.cpp sipQtQuickQQuickRenderControl.cpp sipQtQuickQSGDynamicTexture.cpp sipQtQuickQQuickAsyncImageProvider.cpp sipQtQuickQSGGeometry.cpp sipQtQuickQSGGeometryPoint2D.cpp sipQtQuickQQuickImageProvider.cpp sipQtQuickQQuickWindowCreateTextureOptions.cpp sipQtQuickQQuickFramebufferObjectRenderer.cpp sipQtQuickQSGGeometryColoredPoint2D.cpp sipQtQuickQSGVertexColorMaterial.cpp sipQtQuickQSGNode.cpp sipQtQuickQSGMaterialFlags.cpp sipQtQuickQSGMaterialType.cpp sipQtQuickQSGOpaqueTextureMaterial.cpp sipQtQuickQSGEngine.cpp sipQtQuickQSGGeometryAttributeSet.cpp sipQtQuickQSGMaterial.cpp sipQtQuickQSGAbstractRenderer.cpp sipQtQuickQSGGeometryNode.cpp sipQtQuickQSGClipNode.cpp sipQtQuickQSGMaterialShaderRenderState.cpp sipQtQuickQQuickItemUpdatePaintNodeData.cpp sipQtQuickQSGEngineCreateTextureOptions.cpp sipQtQuickQQuickPaintedItem.cpp sipQtQuickQQuickFramebufferObject.cpp sipQtQuickQSGTextureProvider.cpp sipQtQuickQSGMaterialShaderRenderStateDirtyStates.cpp sipQtQuickQSGTransformNode.cpp sipQtQuickQQuickItem.cpp sipQtQuickQQuickWindow.cpp sipQtQuickQList0101QQuickItem.cpp sipQtQuickQQuickImageResponse.cpp sipQtQuickQSGGeometryTexturedPoint2D.cpp sipQtQuickQSGFlatColorMaterial.cpp sipQtQuickQQuickPaintedItemPerformanceHints.cpp sipQtQuickQQuickTextureFactory.cpp sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp sipQtQuickQSGSimpleRectNode.cpp sipQtQuickQQuickItemItemChangeData.cpp sipQtQuickQSGGeometryAttribute.cpp ../qpy/QtQuick/qpyquick_chimera_helpers.cpp ../qpy/QtQuick/qpyquick_post_init.cpp ../qpy/QtQuick/qpyquickframebufferobject.cpp ../qpy/QtQuick/qpyquickpainteditem.cpp ../qpy/QtQuick/qpyquickitem.cpp ../qpy/QtQuick/qpyquick_register_type.cpp
