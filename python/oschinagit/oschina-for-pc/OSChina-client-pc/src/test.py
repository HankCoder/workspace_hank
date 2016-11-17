#! /usr/bin/env python  
# -*- coding: utf-8 -*-
'''
Created on 2013-6-2

@author: fants
'''
import xmltodict, json

o = xmltodict.parse('''
<?xml version="1.0" encoding="UTF-8"?>


<oschina>
  <result>
    <errorCode>0</errorCode>
    <errorMessage><![CDATA[用户名或口令错]]></errorMessage>
  </result>
  </oschina>
''')
print json.dumps(o) # '{"e": {"a": ["text", "text"]}}'