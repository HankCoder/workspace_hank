import MySQLdb

conn = MySQLdb.connect("localhost", "root", "root", "test")

cur = conn.cursor()

def addUser(username, password):
    sql = "insert into user1 (username, password) values ('%s', '%s')" % (username, password)
    cur.execute(sql)
    conn.commit()
    conn.close()

def isExisted(username, password):
    sql = "select * from user1 where username = '%s' " \
          "and password = '%s'" % (username, password)
    cur.execute(sql)
    result = cur.fetchall()
    if len(result) == 0:
        return False
    else:
        return True

def testAddUser():
    addUser('test1', '1234567890')

def testIsExisted():
    print('test start')
    print(isExisted('test1', '1234567890'))
    print(isExisted('luohao', '11111111111'))
    print('test end')
if __name__ == '__main__':
    # testAddUser()
    # testIsExisted()
    pass