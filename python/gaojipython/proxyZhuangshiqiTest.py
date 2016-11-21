#!/usr/bin/python
# -*- coding: utf-8 -*-

class User(object):
    def __init__(self, roles):
        self.roles = roles

class Unauthorized(Exception):
    pass

def protect(role):
    def _protect(function):
        def __protect(*args, **kw):
            user = globals().get('user')
            if user is None or role not in user.roles:
                raise Unauthorized("I won`t tell you")
            return function(*args, **kw)
        return __protect
    return _protect

class MySecrets(object):
    @protect('admin')
    def waffle_recipe(self):
        print ('use tons of butter!')

def main():
    global user
    tarek = User(('admin', 'user'))
    bill = User(('user',))

    these_are = MySecrets()
    user = tarek
    these_are.waffle_recipe()
    user = bill
    these_are.waffle_recipe()

if __name__ == "__main__":
    main()
