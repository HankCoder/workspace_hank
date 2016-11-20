TEMPLATE = lib
CONFIG += warn_on plugin
QT += sensors
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSensors.pyd
    target.files = QtSensors.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtSensors.so
    target.files = QtSensors.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtSensors
sip.files = ../sip/QtSensors/qmagnetometer.sip ../sip/QtSensors/qsensor.sip ../sip/QtSensors/qcompass.sip ../sip/QtSensors/qirproximitysensor.sip ../sip/QtSensors/qrotationsensor.sip ../sip/QtSensors/QtSensorsmod.sip ../sip/QtSensors/qambientlightsensor.sip ../sip/QtSensors/qlightsensor.sip ../sip/QtSensors/qholstersensor.sip ../sip/QtSensors/qtiltsensor.sip ../sip/QtSensors/qorientationsensor.sip ../sip/QtSensors/qtapsensor.sip ../sip/QtSensors/qpressuresensor.sip ../sip/QtSensors/qdistancesensor.sip ../sip/QtSensors/qgyroscope.sip ../sip/QtSensors/qaltimeter.sip ../sip/QtSensors/qaccelerometer.sip ../sip/QtSensors/qambienttemperaturesensor.sip ../sip/QtSensors/qproximitysensor.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSensors.exp
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

TARGET = QtSensors
HEADERS = sipAPIQtSensors.h
SOURCES = sipQtSensorsQAccelerometer.cpp sipQtSensorsQIRProximityFilter.cpp sipQtSensorsQAccelerometerReading.cpp sipQtSensorsQPressureReading.cpp sipQtSensorsQGyroscopeFilter.cpp sipQtSensorsQGyroscope.cpp sipQtSensorsQAmbientLightSensor.cpp sipQtSensorsQMagnetometer.cpp sipQtSensorsQPressureSensor.cpp sipQtSensorsQOrientationFilter.cpp sipQtSensorsQRotationFilter.cpp sipQtSensorsQAccelerometerFilter.cpp sipQtSensorsQOrientationSensor.cpp sipQtSensorsQProximitySensor.cpp sipQtSensorsQDistanceReading.cpp sipQtSensorsQTiltReading.cpp sipQtSensorsQProximityFilter.cpp sipQtSensorsQCompassFilter.cpp sipQtSensorsQHolsterFilter.cpp sipQtSensorscmodule.cpp sipQtSensorsQAmbientTemperatureSensor.cpp sipQtSensorsQProximityReading.cpp sipQtSensorsQOrientationReading.cpp sipQtSensorsQSensorReading.cpp sipQtSensorsQTiltSensor.cpp sipQtSensorsQTapSensor.cpp sipQtSensorsQAltimeter.cpp sipQtSensorsQLightFilter.cpp sipQtSensorsQAltimeterFilter.cpp sipQtSensorsQList0100qoutputrange.cpp sipQtSensorsQLightReading.cpp sipQtSensorsQTiltFilter.cpp sipQtSensorsQAmbientLightFilter.cpp sipQtSensorsQIRProximitySensor.cpp sipQtSensorsQRotationReading.cpp sipQtSensorsQMagnetometerFilter.cpp sipQtSensorsQHolsterReading.cpp sipQtSensorsQDistanceFilter.cpp sipQtSensorsQAmbientLightReading.cpp sipQtSensorsQHolsterSensor.cpp sipQtSensorsQSensor.cpp sipQtSensorsQCompass.cpp sipQtSensorsQSensorFilter.cpp sipQtSensorsQLightSensor.cpp sipQtSensorsQAmbientTemperatureFilter.cpp sipQtSensorsQTapFilter.cpp sipQtSensorsQRotationSensor.cpp sipQtSensorsQDistanceSensor.cpp sipQtSensorsqoutputrange.cpp sipQtSensorsQList0101QSensorFilter.cpp sipQtSensorsQCompassReading.cpp sipQtSensorsQAmbientTemperatureReading.cpp sipQtSensorsQAltimeterReading.cpp sipQtSensorsQIRProximityReading.cpp sipQtSensorsQTapReading.cpp sipQtSensorsQPressureFilter.cpp sipQtSensorsQMagnetometerReading.cpp sipQtSensorsQGyroscopeReading.cpp
