# -*- coding: utf-8 -*-

__author__  = 'ErrareHest'
__email__   = ''
__date__    = ''

import sys, os
import configparser as parser
# import ctypes
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtPrintSupport import QPrintDialog, QPrinter

QtCore.QTextCodec.setCodecForLocale(QtCore.QTextCodec.codecForName("UTF-8"))
CONFIG_FILE_PATH = "notepadtest.ini"

class Notepad(QtWidgets.QMainWindow):

    def __init__(self):
        self.judgeConfigFile()
        """全局变量"""
        # 剪切板
        self.clipboard = QtWidgets.QApplication.clipboard()
        #上次搜索内容
        self.lastSearchText = ""
        # 上一次替换内容
        self.lastReplaceSearchText = ""
        # 是否重置
        self.reset = False
        # 配置文件
        self.config = parser.ConfigParser()
        self.config.read(CONFIG_FILE_PATH)

        QtWidgets.QMainWindow.__init__(self)
        self.initUI()

    def initUI(self):
        self.setWindowTitle("无标题 - 记事本")

        if os.sys.platform == "darwin":
            pass
        else:
            self.setWindowTitle("image/notepad.png")
        self.initEditText()

        self.createActions()
        self.createStatusBar()
        self.createMenubars()
        self.createToolBars()

        self.readSettings()

        self.text.document().contentsChanged.connect(self.documentWasModified)

        self.setCurrentFile('')

    def initEditText(self):
        #设置编辑区
        self.text = QtWidgets.QPlainTextEdit()
        self.text.setContextMenuPolicy(QtCore.Qt.CustomContextMenu)
        self.text.customContextMenuRequested.connect(self.customContextMenu)
        self.setCentralWidget(self.text)

    def customContextMenu(self):
        menu = QtWidgets.QMenu(self)
        menu.addAction(self.undoAction)
        menu.addSeparator()
        menu.addAction(self.cutAction)
        menu.addAction(self.copyAction)
        menu.addAction(self.pasteAction)
        menu.addAction(self.deleteAction)
        menu.addSeparator()
        menu.addAction(self.selectAllAction)
        menu.exec_(QtGui.QCursor.pos())

        return menu

    def documentWasModified(self):
        self.setWindowModified(self.text.document().isModified)
        if "" != self.text.toPlainText():
            self.findAction.setEnabled(True)
            self.findNextAction.setEnabled(True)
        else:
            self.findAction.setEnabled(False)
            self.findNextAction.setEnabled(False)

    def readSettings(self):
        #宽度，高度


def getConfig(config, selection, option, default=""):
    if config is None:
        return default
    else:
        try:
            return config.get(selection, option)
        except:
            return default

def writeConfig(config, selection, option, value):
    if not config.has_section(selection):
        config.add_section(selection)
    config.set(selection, option, value)

def main():
    # 设置Windows任务栏的图标
    # ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID("nodepad")
    app = QtWidgets.QApplication(sys.argv)
    notepad = Notepad()
    notepad.show()
    app.exec_()

if __name__ == '__main__':
    main()