#! /usr/bin/env python  
# -*- coding: utf-8 -*-
from PyQt4.QtGui import QSystemTrayIcon,QApplication
import AppProperty
from bs4 import BeautifulSoup,Comment

#根据字符串，获得QT的托盘图标
def getQtTrayIconFromString(str):
    if(str=="info"):
        return QSystemTrayIcon.Information
    if(str=="warn"):
        return QSystemTrayIcon.Warning
    if(str=="error"):
        return QSystemTrayIcon.Critical
    return QSystemTrayIcon.NoIcon

def getDesktopCenterPoint(frame):
    desktop = QApplication.desktop()
    x = (desktop.width() - frame.width())/2
    y = (desktop.height() - frame.height())/2
    return {"x":x,"y":y}

def useLocalResource(html):
    home = "file:///"+AppProperty.HomeDir.replace("\\","/")
    html = html.replace("/js/2012/jquery-1.7.1.min.js",home+"/js/jquery-1.7.1.min.js")
    html = html.replace("/js/2012/jquery.form.js",home+"/js/jquery.form.js")
    html = html.replace("/js/2011/oschina.js",home+"/js/oschina.js")
    html = html.replace("/js/jquery/jquery.atwho.js",home+"/js/jquery.atwho.js")
    html = html.replace("/js/jquery/jquery.atwho.css",home+"/css/jquery.atwho.css")
    soup = BeautifulSoup(str(html))
    less = soup.find("link", rel="stylesheet/less")
    less["href"]=home+"/css/styles.css"
    less["rel"]="stylesheet"
    soup.find("script",src="/js/2012/less-1.3.0.min.js").extract()
    soup.find("script",src="/js/scrolltopcontrol.js").extract()
    soup.find("script",src="/js/2011/fancybox/jquery.fancybox-1.3.4.pack.js").extract()
    soup.find("link",href="/js/2011/fancybox/jquery.fancybox-1.3.4.css").extract()
    soup.find("script",src="/js/2012/poshytip/jquery.poshytip.min.js").extract()
    soup.find("link",href="/js/2012/poshytip/tip-yellowsimple/tip-yellowsimple.css").extract()
    return str(soup)