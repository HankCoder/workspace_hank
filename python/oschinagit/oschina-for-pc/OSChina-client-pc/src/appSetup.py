#! /usr/bin/env python  
# -*- coding: utf-8 -*-

from distutils.core import setup
import py2exe
import os,sys
from glob import glob  

path = sys.executable
path = path[0:path.rfind(os.sep)]
imageformats = path+os.sep+"Lib\site-packages\PyQt4\plugins\imageformats\*.*"

setup(  
    options = {  
      "py2exe": {  
        "dll_excludes": ["MSVCP90.dll"],
        "includes":["sip"],
        "compressed": 1,
        "optimize": 2
      }  
    },
    name = 'CSChina For PC',
    version = '0.2 beta',
    author="fants(铂金小鸟)",
    windows = [
        {
            'script':'osc.py',
            'icon_resources': [(1, 'imgs/osc.ico')]
        }
    ],
    data_files = [
        ("imgs", glob(r"imgs/*.*")),
        ("imgs/emoticons", glob(r"imgs/emoticons/*.*")),
        ("imgs/skin", glob(r"imgs/skin/*.*")),
        ("css", glob(r"css/*.*")),
        ("js", glob(r"js/*.*")),
        ("js/jquery-poshytip", glob(r"js/jquery-poshytip/*.*")),
        ("js/jquery-poshytip/tip-yellow", glob(r"js/jquery-poshytip/tip-yellow/*.*")),
        ("html", glob(r"html/*.*")),
        ('imageformats', glob(imageformats))
    ] 
)

