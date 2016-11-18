# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'editor.ui'
#
# Created: Fri Nov 18 11:16:00 2016
#      by: PyQt4 UI code generator 4.9.1
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    _fromUtf8 = lambda s: s

class Ui_notepad(object):
    def setupUi(self, notepad):
        notepad.setObjectName(_fromUtf8("notepad"))
        notepad.resize(400, 300)
        self.button_open = QtGui.QPushButton(notepad)
        self.button_open.setGeometry(QtCore.QRect(20, 10, 98, 27))
        self.button_open.setObjectName(_fromUtf8("button_open"))
        self.button_save = QtGui.QPushButton(notepad)
        self.button_save.setGeometry(QtCore.QRect(150, 10, 98, 27))
        self.button_save.setObjectName(_fromUtf8("button_save"))
        self.pushButton_3 = QtGui.QPushButton(notepad)
        self.pushButton_3.setGeometry(QtCore.QRect(280, 10, 98, 27))
        self.pushButton_3.setObjectName(_fromUtf8("pushButton_3"))
        self.editor_window = QtGui.QTextEdit(notepad)
        self.editor_window.setGeometry(QtCore.QRect(10, 50, 381, 241))
        self.editor_window.setObjectName(_fromUtf8("editor_window"))

        self.retranslateUi(notepad)
        QtCore.QMetaObject.connectSlotsByName(notepad)

    def retranslateUi(self, notepad):
        notepad.setWindowTitle(QtGui.QApplication.translate("notepad", "Form", None, QtGui.QApplication.UnicodeUTF8))
        self.button_open.setText(QtGui.QApplication.translate("notepad", "open", None, QtGui.QApplication.UnicodeUTF8))
        self.button_save.setText(QtGui.QApplication.translate("notepad", "save", None, QtGui.QApplication.UnicodeUTF8))
        self.pushButton_3.setText(QtGui.QApplication.translate("notepad", "close", None, QtGui.QApplication.UnicodeUTF8))

