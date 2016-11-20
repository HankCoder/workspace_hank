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
        #self.createToolBars()

        self.readSettings()

        self.text.document().contentsChanged.connect(self.documentWasModified)

#        self.setCurrentFile('')

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
        width = getConfig(self.config, "Display", "width", "1000")
        height = getConfig(self.config, "Display", "height", "600")
        size = QtCore.QSize(int(width), int(height))

        #屏幕位置
        screen = QtWidgets.QDesktopWidget().screenGeometry()
        pos_x = getConfig(self.config, "Display", "x", (screen.width() - 1000) // 2)
        pos_y = getConfig(self.config, "Display", "y", (screen.height() - 600) // 2)
        pos = QtCore.QPoint(int(pos_x), int(pos_y))

        # 是否显示工具栏
        toolbar = getConfig(self.config, "Display", "toolbar", "True")

        #是否自动换行
        wrapMode = getConfig(self.config, "TextEdit", "wrapmode", "True")

        #字体
        fontFamile = getConfig(self.config, "TextEdit", "font", "Consolas")
        fontSize = getConfig(self.config, "TextEdit", "size", 14)
        fonts = QtGui.QFont(fontFamile, int(fontSize))
        # if "True" == wrapMode:
        #     self.autoWrapAction.setIcon(QtGui.QIcon("images/check.png"))
        #     wrapMode = QtWidgets.QPlainTextEdit.WidgetWidth
        # else:
        #     self.autoWrapAction.setIcon(QtGui.QIcon("images/check_no.png"))
        #     wrapMode = QtWidgets.QPlainTextEdit.NoWrap
        #
        # if "True" == toolbar:
        #     self.toolBar.show()
        #     self.toolBarAction.setIcon(QtGui.QIcon("images/check.png"))
        # else:
        #     self.toolBar.hide()
        #     self.toolBarAction.setIcon(QtGui.QIcon("images/check_no.png"))

        self.resize(size)
        self.move(pos)
        # self.text.setLineWrapMode(wrapMode)
        self.text.setFont(fonts)

    def resetSettings(self):
        # 宽度、高度
        writeConfig(self.config, "Display", "width", "1000")
        writeConfig(self.config, "Display", "height", "600")
        # 位置
        screen = QtWidgets.QDesktopWidget().screenGeometry()
        writeConfig(self.config, "Display", "x", str((screen.width() - 1000) // 2))
        writeConfig(self.config, "Display", "y", str((screen.height() - 600) // 2))
        # 工具栏
        writeConfig(self.config, "Display", "toolbar", "True")
        # 自动换行
        writeConfig(self.config, "TextEdit", "wrapmode", "True")
        # 字体
        writeConfig(self.config, "TextEdit", "font", "Consolas")
        # 大小
        writeConfig(self.config, "TextEdit", "size", "14")

        # 回写
        self.config.write(open(CONFIG_FILE_PATH, "w"))

        QtWidgets.QMessageBox.information(self, "记事本", "重置成功，请重启记事本！")
        self.reset = True
        self.close()

    def writeSettings(self):
        # 宽度、高度
        writeConfig(self.config, "Display", "height", str(self.size().height()))
        writeConfig(self.config, "Display", "width", str(self.size().width()))
        # 位置
        writeConfig(self.config, "Display", "x", str(self.pos().x()))
        writeConfig(self.config, "Display", "y", str(self.pos().y()))
        # 工具栏
        writeConfig(self.config, "Display", "toolbar", str(not self.toolBar.isHidden()))
        # 自动换行
        writeConfig(self.config, "TextEdit", "wrapmode",
                    str(self.text.lineWrapMode() == QtWidgets.QPlainTextEdit.WidgetWidth))
        # 字体
        writeConfig(self.config, "TextEdit", "font", self.text.font().family())
        # 大小
        writeConfig(self.config, "TextEdit", "size", str(self.text.font().pointSize()))

        # 回写
        self.config.write(open(CONFIG_FILE_PATH, "w"))

    def judgeConfigFile(self):
        if not os.path.exists(CONFIG_FILE_PATH):
            f = open(CONFIG_FILE_PATH, mode="w", encoding="UTF-8")
            f.close()

    def createActions(self):
        self.newAction = QtWidgets.QAction(QtGui.QIcon('images/new.png'), "&新建", self,
                                           shortcut=QtGui.QKeySequence.New, statusTip="创建文件",
                                           triggered=self.newFile)

        # self.openAction = QtWidgets.QAction(QtGui.QIcon('images/open.png'), "&打开...",
        #                                     self, shortcut=QtGui.QKeySequence.Open,
        #                                     statusTip="打开文件", triggered=self.openFileEvent)
        #
        # self.saveAction = QtWidgets.QAction(QtGui.QIcon('images/save.png'), "&保存", self,
        #                                     shortcut=QtGui.QKeySequence.Save,
        #                                     statusTip="保存文件", triggered=self.save)
        #
        # self.saveAsAction = QtWidgets.QAction(QtGui.QIcon('images/save.png'), "另存为...", self,
        #                                       shortcut=QtGui.QKeySequence.SaveAs,
        #                                       statusTip="另存文件",
        #                                       triggered=self.saveAs)
        #
        # self.printAction = QtWidgets.QAction(QtGui.QIcon('images/print.png'), "打印...", self,
        #                                      shortcut=QtGui.QKeySequence.Print,
        #                                      statusTip="打印文件",
        #                                      triggered=self.printText)
        #
        # self.exitAction = QtWidgets.QAction(QtGui.QIcon('images/exit.png'), "退出", self, shortcut="Ctrl+Q",
        #                                     statusTip="退出程序", triggered=self.close)
        #
        # self.undoAction = QtWidgets.QAction(QtGui.QIcon('images/undo.png'), "撤销", self,
        #                                     shortcut=QtGui.QKeySequence.Undo,
        #                                     statusTip="撤销编辑",
        #                                     triggered=self.text.undo)
        #
        # self.cutAction = QtWidgets.QAction(QtGui.QIcon('images/cut.png'), "剪切", self,
        #                                    shortcut=QtGui.QKeySequence.Cut,
        #                                    statusTip="剪切选中的文本",
        #                                    triggered=self.text.cut)
        #
        # self.copyAction = QtWidgets.QAction(QtGui.QIcon('images/copy.png'), "复制", self,
        #                                     shortcut=QtGui.QKeySequence.Copy,
        #                                     statusTip="复制选中的文本",
        #                                     triggered=self.text.copy)
        #
        # self.pasteAction = QtWidgets.QAction(QtGui.QIcon('images/paste.png'), "粘贴", self,
        #                                      shortcut=QtGui.QKeySequence.Paste,
        #                                      statusTip="粘贴剪切板的文本",
        #                                      triggered=self.text.paste)
        #
        # self.clearAction = QtWidgets.QAction(QtGui.QIcon('images/clear.png'), "清空剪切板", self,
        #                                      statusTip="清空剪切板",
        #                                      triggered=self.clearClipboard)
        #
        # self.deleteAction = QtWidgets.QAction(QtGui.QIcon("images/delete.png"), "删除", self,
        #                                       statusTip="删除选中的文本",
        #                                       triggered=self.delete)
        #
        # self.findAction = QtWidgets.QAction(QtGui.QIcon("images/find.png"), "查找", self,
        #                                     statusTip="查找文本", triggered=self.findText, shortcut=QtGui.QKeySequence.Find)
        #
        # self.findNextAction = QtWidgets.QAction(QtGui.QIcon("images/find.png"), "查找下一个", self,
        #                                         statusTip="查找文本", triggered=self.findNextText,
        #                                         shortcut=QtGui.QKeySequence.FindNext)
        #
        # self.replaceAction = QtWidgets.QAction(QtGui.QIcon("images/replace.png"), "替换", self,
        #                                        statusTip="替换文本", triggered=self.replaceText,
        #                                        shortcut=QtGui.QKeySequence.Replace)
        #
        # self.selectAllAction = QtWidgets.QAction(QtGui.QIcon('images/selectAll.png'), "全选", self,
        #                                          shortcut=QtGui.QKeySequence.SelectAll,
        #                                          statusTip="全选",
        #                                          triggered=self.text.selectAll)
        #
        # self.dateAction = QtWidgets.QAction(QtGui.QIcon("images/date.png"), "时间/日期", self, shortcut="F5",
        #                                     statusTip="插入时间/日期",
        #                                     triggered=self.dateEvent)
        #
        # self.autoWrapAction = QtWidgets.QAction(QtGui.QIcon("images/check.png"), "自动换行", self,
        #                                         statusTip="设置自动换行",
        #                                         triggered=self.setWrap)
        #
        # self.fontAction = QtWidgets.QAction(QtGui.QIcon("images/font.png"), "字体", self,
        #                                     statusTip="设置字体", triggered=self.setFont_)
        #
        # self.toolBarAction = QtWidgets.QAction(QtGui.QIcon("images/check.png"), "工具栏", self,
        #                                        statusTip="工具栏",
        #                                        triggered=self.toggleToolBar)
        #
        # self.settingsAction = QtWidgets.QAction(QtGui.QIcon("images/settings.png"), "首选项", self,
        #                                         statusTip="偏好设置", triggered=self.preferences)
        #
        # self.resetAction = QtWidgets.QAction(QtGui.QIcon("images/reset.png"), "重置", self,
        #                                      statusTip="重置所有属性",
        #                                      triggered=self.resetSettings)
        #
        # self.aboutAction = QtWidgets.QAction(QtGui.QIcon("images/about.png"), "关于", self, triggered=self.about)
        #
        # self.aboutQtAction = QtWidgets.QAction(QtGui.QIcon("images/qt.png"), "关于Qt", self,
        #                                        triggered=QtWidgets.QApplication.instance().aboutQt)
        #
        # self.undoAction.setEnabled(False)
        # self.cutAction.setEnabled(False)
        # self.copyAction.setEnabled(False)
        # self.deleteAction.setEnabled(False)
        # if "" == self.clipboard.text():
        #     self.pasteAction.setEnabled(False)
        #     self.clearAction.setEnabled(False)
        # if "" == self.text.toPlainText():
        #     self.findAction.setEnabled(False)
        #     self.findNextAction.setEnabled(False)
        #
        # self.text.undoAvailable.connect(self.undoAction.setEnabled)
        # self.text.copyAvailable.connect(self.cutAction.setEnabled)
        # self.text.copyAvailable.connect(self.copyAction.setEnabled)
        # self.text.copyAvailable.connect(self.deleteAction.setEnabled)
        #
        # self.clipboard.dataChanged.connect(self.enabledSomeActionByClipboard)

    def enabledSomeActionByClipboard(self):
        if ("" != self.clipboard.text()):
            self.pasteAction.setEnabled(True)
            self.clearAction.setEnabled(True)

    def clearClipboard(self):
        self.clipboard.clear()
        self.pasteAction.setEnabled(False)
        self.clearAction.setEnabled(False)

    def createStatusBar(self):
        self.statusBar().showMessage("准备就绪")

    def createMenubars(self):
        file = self.menuBar().addMenu("文件")
        file.addAction(self.newAction)

    def newFile(self):
        pass

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