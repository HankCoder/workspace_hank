TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtMultimedia QtMultimediaWidgets QtNetwork QtOpenGL QtPrintSupport QtQml QtQuick QtSql QtSvg QtTest QtWidgets QtXml QtXmlPatterns QtDesigner QtDBus _QOpenGLFunctions_2_0 _QOpenGLFunctions_2_1 _QOpenGLFunctions_4_1_Core QtSensors QtSerialPort QtX11Extras QtBluetooth QtPositioning QtQuickWidgets QtWebSockets QtWebChannel QtWebEngineWidgets QtLocation QtNfc QtWebEngineCore Qt pylupdate pyrcc

init_py.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/__init__.py
init_py.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += init_py

uic_package.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/pyuic/uic
uic_package.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += uic_package

pyuic5.files = pyuic5
pyuic5.path = /usr/local/python3/bin
INSTALLS += pyuic5

pep484_stubs.files = QtCore.pyi QtGui.pyi QtHelp.pyi QtMultimedia.pyi QtMultimediaWidgets.pyi QtNetwork.pyi QtOpenGL.pyi QtPrintSupport.pyi QtQml.pyi QtQuick.pyi QtSql.pyi QtSvg.pyi QtTest.pyi QtWidgets.pyi QtXml.pyi QtXmlPatterns.pyi QtDesigner.pyi QtDBus.pyi _QOpenGLFunctions_2_0.pyi _QOpenGLFunctions_2_1.pyi _QOpenGLFunctions_4_1_Core.pyi QtSensors.pyi QtSerialPort.pyi QtX11Extras.pyi QtBluetooth.pyi QtPositioning.pyi QtQuickWidgets.pyi QtWebSockets.pyi QtWebChannel.pyi QtWebEngineWidgets.pyi QtLocation.pyi QtNfc.pyi QtWebEngineCore.pyi Qt.pyi
pep484_stubs.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += pep484_stubs
