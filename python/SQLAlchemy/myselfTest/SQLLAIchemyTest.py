#!/usr/bin/env python
# -*- coding: utf-8 -*-

from sqlalchemy.orm import mapper, sessionmaker

from sqlalchemy import create_engine, Table, Column, Integer, MetaData
from sqlalchemy.sql.expression import Cast
from sqlalchemy.ext.compiler import compiles
from sqlalchemy.dialects.mssql import *

metadata = MetaData()
userTable = Table(
    "wzp_user", metadata,
    Column('user_id', Integer, primary_key=True),
    Column('user_name', VARCHAR(50), unique=True, nullable=False),
    Column('password', VARCHAR(40), nullable=True)
)

#mysql_db = create_engine('mysql://root:root@localhost:3306/sqlalchemytest')
mysql_db = create_engine('mysql+mysqlconnector://root:root@localhost:3306/sqlalchemytest')
metadata.create_all(mysql_db)

class User(object):
    pass
mapper(User, userTable)
Session = sessionmaker()
Session.configure(bind=mysql_db)
session = Session()

def main():
    u = User()
    u.user_name='testdb2'
    u.password = '123456'
    session.add(u)
    session.flush()
    session.commit()

    query = session.query(User)
    print list(query)
    print query.get(1)
    print query.filter_by(user_name='testdb2').first()

    u = query.filter_by(user_name='testdb2').first()
    u.password = '654321'
    session.commit()
    print query.get(1).password

    for instance in session.query(User).order_by(User.user_id):
        print instance.user_name, instance.password

    session.close()

if __name__ == '__main__':
    main()