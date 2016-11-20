TEMPLATE = lib
CONFIG += warn_on plugin
QT += sensors
CONFIG += release

win32 {
    PY_MODULE = QtSensors.pyd
    target.files = QtSensors.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtSensors.so
    target.files = QtSensors.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtSensors
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qmagnetometer.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qcompass.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qirproximitysensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qrotationsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/QtSensorsmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qambientlightsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qlightsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qholstersensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qtiltsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qorientationsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qtapsensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qpressuresensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qgyroscope.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qaltimeter.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qaccelerometer.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qambienttemperaturesensor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSensors/qproximitysensor.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtSensors
HEADERS = sipAPIQtSensors.h
SOURCES = sipQtSensorsQAccelerometer.cpp sipQtSensorsQIRProximityFilter.cpp sipQtSensorsQList0600QPair18001800.cpp sipQtSensorsQAccelerometerReading.cpp sipQtSensorsQPressureReading.cpp sipQtSensorsQGyroscopeFilter.cpp sipQtSensorsQGyroscope.cpp sipQtSensorsQAmbientLightSensor.cpp sipQtSensorsQMagnetometer.cpp sipQtSensorsQPressureSensor.cpp sipQtSensorsQOrientationFilter.cpp sipQtSensorsQRotationFilter.cpp sipQtSensorsQAccelerometerFilter.cpp sipQtSensorsQOrientationSensor.cpp sipQtSensorsQProximitySensor.cpp sipQtSensorsQTiltReading.cpp sipQtSensorsQProximityFilter.cpp sipQtSensorsQCompassFilter.cpp sipQtSensorsQHolsterFilter.cpp sipQtSensorscmodule.cpp sipQtSensorsQAmbientTemperatureSensor.cpp sipQtSensorsQProximityReading.cpp sipQtSensorsQOrientationReading.cpp sipQtSensorsQSensorReading.cpp sipQtSensorsQTiltSensor.cpp sipQtSensorsQTapSensor.cpp sipQtSensorsQAltimeter.cpp sipQtSensorsQLightFilter.cpp sipQtSensorsQAltimeterFilter.cpp sipQtSensorsQList0100qoutputrange.cpp sipQtSensorsQLightReading.cpp sipQtSensorsQTiltFilter.cpp sipQtSensorsQAmbientLightFilter.cpp sipQtSensorsQIRProximitySensor.cpp sipQtSensorsQRotationReading.cpp sipQtSensorsQMagnetometerFilter.cpp sipQtSensorsQHolsterReading.cpp sipQtSensorsQAmbientLightReading.cpp sipQtSensorsQHolsterSensor.cpp sipQtSensorsQSensor.cpp sipQtSensorsQCompass.cpp sipQtSensorsQSensorFilter.cpp sipQtSensorsQLightSensor.cpp sipQtSensorsQAmbientTemperatureFilter.cpp sipQtSensorsQTapFilter.cpp sipQtSensorsQRotationSensor.cpp sipQtSensorsqoutputrange.cpp sipQtSensorsQList0101QSensorFilter.cpp sipQtSensorsQCompassReading.cpp sipQtSensorsQAmbientTemperatureReading.cpp sipQtSensorsQAltimeterReading.cpp sipQtSensorsQIRProximityReading.cpp sipQtSensorsQTapReading.cpp sipQtSensorsQPressureFilter.cpp sipQtSensorsQMagnetometerReading.cpp sipQtSensorsQGyroscopeReading.cpp