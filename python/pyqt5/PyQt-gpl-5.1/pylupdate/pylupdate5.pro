TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
target.path = /usr/local/python3/bin
INSTALLS += target
INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/pylupdate
VPATH = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/pylupdate
HEADERS = simtexth.h translator.h metatranslator.h proparser.h
SOURCES = fetchtr.cpp sametexth.cpp proparser.cpp translator.cpp main.cpp merge.cpp metatranslator.cpp numberh.cpp simtexth.cpp