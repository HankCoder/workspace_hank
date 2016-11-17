# _*_ coding: utf-8 _*_

import requests

html = requests.get('http://tieba.baidu.com/f?ie=utf-8&kw=python')

print html.text