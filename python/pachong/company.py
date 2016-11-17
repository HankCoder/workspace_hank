# _*_ coding: utf-8 _*_

import requests
import re

url = 'https://www.crowdfunder.com'
html = requests.get(url).text

#print html

data = {
    'q':'filter',
    'page': '3',
    'template': 'true',
    'random_seed': '131'
}

html_post = requests.post(url, data=data)
print html_post.text
title = re.findall('"card-title">(.*?)</div>', html_post.text, re.S)
print title
print "output company:"
for each in title:
    print each