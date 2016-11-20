TEMPLATE = lib
CONFIG += warn_on plugin
QT += bluetooth
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtBluetooth.pyd
    target.files = QtBluetooth.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtBluetooth.so
    target.files = QtBluetooth.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtBluetooth
sip.files = ../sip/QtBluetooth/qbluetoothtransferrequest.sip ../sip/QtBluetooth/qbluetoothserviceinfo.sip ../sip/QtBluetooth/qbluetoothdeviceinfo.sip ../sip/QtBluetooth/qlowenergycontroller.sip ../sip/QtBluetooth/qbluetoothlocaldevice.sip ../sip/QtBluetooth/qpybluetooth_qlist.sip ../sip/QtBluetooth/qbluetoothhostinfo.sip ../sip/QtBluetooth/qbluetoothtransfermanager.sip ../sip/QtBluetooth/qbluetoothuuid.sip ../sip/QtBluetooth/qbluetoothtransferreply.sip ../sip/QtBluetooth/QtBluetoothmod.sip ../sip/QtBluetooth/qlowenergydescriptor.sip ../sip/QtBluetooth/qbluetoothserver.sip ../sip/QtBluetooth/qbluetooth.sip ../sip/QtBluetooth/qlowenergycharacteristic.sip ../sip/QtBluetooth/qbluetoothdevicediscoveryagent.sip ../sip/QtBluetooth/qbluetoothservicediscoveryagent.sip ../sip/QtBluetooth/qbluetoothaddress.sip ../sip/QtBluetooth/qbluetoothsocket.sip ../sip/QtBluetooth/qpybluetooth_quint128.sip ../sip/QtBluetooth/qlowenergyservice.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtBluetooth.exp
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

TARGET = QtBluetooth
HEADERS = sipAPIQtBluetooth.h
SOURCES = sipQtBluetoothQBluetoothUuid.cpp sipQtBluetoothQBluetoothDeviceDiscoveryAgent.cpp sipQtBluetoothQBluetoothTransferRequest.cpp sipQtBluetoothQLowEnergyDescriptor.cpp sipQtBluetoothQBluetooth.cpp sipQtBluetoothQBluetoothDeviceInfoCoreConfigurations.cpp sipQtBluetoothQList0100QLowEnergyDescriptor.cpp sipQtBluetoothcmodule.cpp sipQtBluetoothQLowEnergyService.cpp sipQtBluetoothQBluetoothSocket.cpp sipQtBluetoothQBluetoothTransferManager.cpp sipQtBluetoothQBluetoothTransferReply.cpp sipQtBluetoothQBluetoothHostInfo.cpp sipQtBluetoothQBluetoothServiceDiscoveryAgent.cpp sipQtBluetoothQBluetoothServiceInfo.cpp sipQtBluetoothQBluetoothServer.cpp sipQtBluetoothQList0100QBluetoothAddress.cpp sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp sipQtBluetoothquint128.cpp sipQtBluetoothQBluetoothLocalDevice.cpp sipQtBluetoothQList0100QBluetoothHostInfo.cpp sipQtBluetoothQList0100QBluetoothDeviceInfo.cpp sipQtBluetoothQLowEnergyController.cpp sipQtBluetoothQLowEnergyCharacteristic.cpp sipQtBluetoothQLowEnergyServiceServiceTypes.cpp sipQtBluetoothQList0100QBluetoothServiceInfo.cpp sipQtBluetoothQBluetoothAddress.cpp sipQtBluetoothQBluetoothDeviceInfo.cpp sipQtBluetoothQBluetoothServiceInfoSequence.cpp sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp sipQtBluetoothQBluetoothSecurityFlags.cpp sipQtBluetoothQList0100QBluetoothUuid.cpp sipQtBluetoothQList1600.cpp sipQtBluetoothQList0100QLowEnergyCharacteristic.cpp
