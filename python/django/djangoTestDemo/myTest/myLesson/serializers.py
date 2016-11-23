#!/usr/bin/env python
#-*- coding: utf-8 -*-

"""
@Version: 0.1
@Author: ErrareHest
@Email: luohao0414@gamil.com
@License: Copyright(c) 2016 ND
@filename: serializers.py
@time: 16-11-23 下午3:25
"""

from myLesson.models import Book
from rest_framework import serializers

class BookSerializer(serializers.Serializer):
    # 更简单的方式实现
    # class Meta:
    #     model = Book
    #     field = ('name', 'title', 'author')
    name = serializers.CharField(max_length=100)
    title = serializers.CharField(max_length=100)
    author = serializers.CharField(max_length=100)

    def restore_object(self, attrs, instance=None):
        if instance:
            instance.title = attrs['title']
            instance.name = attrs['name']
            instance.author = attrs['author']

            return instance

        return Book(**attrs)

def main():
    pass

if __name__ == '__main__':
    main()