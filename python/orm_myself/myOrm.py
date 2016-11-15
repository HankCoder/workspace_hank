#!/usr/bin/env python
# _*_ coding:utf-8 _*_
__author__ = 'ErrareHest'

# orm.py
tables = []
class Field(object):
    _count = 0
    def __init__(self,**kw):
        print 'aaa'
        self.name = kw.get('name',None)
        self._default = kw.get('default',None)
        self.nullable = kw.get('nullable',False)
        self.primary_key = kw.get('primary_key',False)
        self._order = Field._count
        Field._count = Field._count + 1
        print 'xxx'
        self.ddl = kw.get('ddl','')

    @property
    def default(self):
        d = self._default
        return d() if callable(d) else d
    def __str__(self):
        s = ['<%s:%s,%s,default(%s),' % (self.__class__.__name__,self.name,self.ddl,self._default)]
        self.nullable and s.append('N')
        s.append('>')
        return ''.join(s)
class StringField(Field):
    def __init__(self,**kw):
        if not 'default' in kw:
            kw['default'] = ''
        if not 'ddl' in kw:
            kw['ddl'] = 'varchar(250)'
        super(StringField,self).__init__(**kw)
_triggers = frozenset(['pre_insert','pre_update','pre_insert'])
def _gen_sql(table_name,mappings):
    pk = None
    sql = ['create table `%s` (' % table_name]
    for f in sorted(mappings.values(),lambda x,y:cmp(x._order, y._order)):
        if not hasattr(f,'ddl'):
            raise StandardError('No ddl in field `%s`' % n)
        ddl = f.ddl
        nullable = f.nullable
        if f.primary_key:
            pk = f.name
        sql.append(nullable and ' `%s` %s' % (f.name,ddl) or ' `%s` %s not null' % (f.name,ddl))
        if pk:
            sql.append(' primary key,')
        pk = None
    sql.append(');')
    return '\n'.join(sql)

class ModelMetaclass(type):
    def __new__(cls,name,bases,attrs):
        if name == 'Model':
            return type.__new__(cls,name,bases,attrs)
        print ('Found model: %s' % name)
        mappings = dict()
        primary_key = None
        li = []
        for k,v in attrs.iteritems():
            if isinstance(v,Field):
                if not v.name:
                    v.name = k
                if v.primary_key:
                    if primary_key:
                        raise TypeError('Cannot define more than one primary key in class: %s' % name)
                    if v.nullable:
                        v.nullable = False
                    primary_key = v
                mappings[k] = v
        if not primary_key:
            raise TypeError('Primary key not defined in class: %s' % name)
        for k in mappings.iterkeys():
            attrs.pop(k)
        attrs['__table__'] = name.lower()
        attrs['__mappings__'] = mappings
        attrs['__primary_key__'] = primary_key
        attrs['__sql__'] =  _gen_sql(attrs['__table__'],mappings)
        print str(attrs['__sql__'])
        tables.append(attrs['__sql__'])
        for trigger in _triggers:
            if not trigger in attrs:
                attrs[trigger] = None
        return type.__new__(cls,name,bases,attrs)

class Model(dict):
    __metaclass__ = ModelMetaclass

    def __init__(self,**kw):
        super(Model,self).__init__(**kw)

    def __getattr__(self,key):
        try:
            return self[key]
        except KeyError:
            raise AttributeError(r"'Model' object has no attribute '%s'" % key)

    def __setattr__(self,key,value):
        self[key] = value
        print '%s: %s' % self,value
    def save(self):
        fields = []
        params = []
        args = []
        for k,v in self.__mappings__.iteritems():
            fields.append(v.name)
            params.append('?')
            args.append(getattr(self,k,None))
        sql = 'insert into %s (%s) values(%s)' % (self.__table__,','.join(fields),','.join(params))
        print sql
        print ('ARGS: %s' % str(args))

class User(Model):

    id = StringField(primary_key=True,ddl='varchar(50)')
    name = StringField(ddl='varchar(50)')
print (tables)
sql = ''.join(tables)
sql = sql.replace('`','')
print sql
import mysql.connector
config = {'user':'root','password':'root','host':'127.0.0.1','port':3306,'database':'test'}
cxn = mysql.connector.connect(**config)
cursor = cxn.cursor()
cursor.execute(sql)
