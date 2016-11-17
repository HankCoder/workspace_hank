#! /usr/bin/env python  
# -*- coding: utf-8 -*-
'''
Created on 2013-5-31

@author: fants
'''
import sys
from os import getcwd
from PyQt4.QtGui import QSystemTrayIcon,QApplication,QAction,QIcon,QMenu
from PyQt4.QtCore import QTextCodec,Qt
from Services import Service
import AppProperty
from Window import Window
from PyQt4.QtNetwork import QNetworkCookieJar
from NotificationPresenter import NotificationPresenter

reload(sys)
sys.setdefaultencoding('utf8')

def main(args):  
    app = QApplication(args)
    QTextCodec.setCodecForCStrings(QTextCodec.codecForName("UTF-8"))
    initProperty()
    AppProperty.MainWin = Window("login.html",280,600)
    AppProperty.MainWin.show()
    createTray()
    app.exec_()
    
def createTray():
    #托盘 
    AppProperty.TrayIcon=QSystemTrayIcon(AppProperty.AppIcon,AppProperty.MainWin)
    AppProperty.TrayIcon.activated.connect(trayClick)
    AppProperty.TrayIcon.setToolTip("OSChina for PC")
    AppProperty.TrayIcon.setContextMenu(createTrayMenu(AppProperty.TrayIcon))
    AppProperty.TrayIcon.show()

def trayClick(reason):
    if(reason==3):
        if AppProperty.MainWin.isHidden():
            AppProperty.MainWin.show()
        AppProperty.MainWin.activateWindow()
    
def createTrayMenu(trayIcon):
    trayIconMenu = QMenu()
    action = QAction("显示主界面",trayIcon)
    action.triggered.connect(lambda:trayClick(3))
    trayIconMenu.addAction(action)
    action = QAction("取消自动登录",trayIcon)
    action.triggered.connect(AppProperty.MainWin.cancelAutoLogin)
    trayIconMenu.addAction(action) 
    action = QAction("退出",trayIcon)
    action.triggered.connect(QApplication.instance().quit)
    trayIconMenu.addAction(action)
    return trayIconMenu
    
    
def initProperty(): 
    AppProperty.AppTitle = "OSChina"
    AppProperty.AppIcon = QIcon("imgs/icon.png")
    AppProperty.HomeDir = getcwd()
    AppProperty._service_ = Service()
    AppProperty._notifications_ = NotificationPresenter()
    AppProperty.CookieJar = QNetworkCookieJar()
    
if __name__ == "__main__":  
    main(sys.argv)