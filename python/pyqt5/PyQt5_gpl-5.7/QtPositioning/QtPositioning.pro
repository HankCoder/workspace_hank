TEMPLATE = lib
CONFIG += warn_on plugin
QT += positioning
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtPositioning.pyd
    target.files = QtPositioning.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtPositioning.so
    target.files = QtPositioning.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtPositioning
sip.files = ../sip/QtPositioning/qgeoareamonitorinfo.sip ../sip/QtPositioning/qgeoshape.sip ../sip/QtPositioning/qgeoaddress.sip ../sip/QtPositioning/qgeosatelliteinfo.sip ../sip/QtPositioning/qnmeapositioninfosource.sip ../sip/QtPositioning/qgeolocation.sip ../sip/QtPositioning/qgeorectangle.sip ../sip/QtPositioning/QtPositioningmod.sip ../sip/QtPositioning/qgeopositioninfo.sip ../sip/QtPositioning/qgeoareamonitorsource.sip ../sip/QtPositioning/qgeocircle.sip ../sip/QtPositioning/qgeocoordinate.sip ../sip/QtPositioning/qgeopositioninfosource.sip ../sip/QtPositioning/qgeosatelliteinfosource.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtPositioning.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m

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

TARGET = QtPositioning
HEADERS = sipAPIQtPositioning.h
SOURCES = sipQtPositioningQGeoAreaMonitorInfo.cpp sipQtPositioningQGeoRectangle.cpp sipQtPositioningQGeoShape.cpp sipQtPositioningQGeoSatelliteInfoSource.cpp sipQtPositioningcmodule.cpp sipQtPositioningQGeoAreaMonitorSourceAreaMonitorFeatures.cpp sipQtPositioningQGeoSatelliteInfo.cpp sipQtPositioningQList0100QGeoCoordinate.cpp sipQtPositioningQGeoPositionInfoSource.cpp sipQtPositioningQGeoPositionInfoSourcePositioningMethods.cpp sipQtPositioningQGeoAreaMonitorSource.cpp sipQtPositioningQGeoPositionInfo.cpp sipQtPositioningQList0100QGeoSatelliteInfo.cpp sipQtPositioningQList0100QGeoAreaMonitorInfo.cpp sipQtPositioningQGeoCoordinate.cpp sipQtPositioningQGeoAddress.cpp sipQtPositioningQGeoCircle.cpp sipQtPositioningQGeoLocation.cpp sipQtPositioningQNmeaPositionInfoSource.cpp
