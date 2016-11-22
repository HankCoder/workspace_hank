import MySQLdb

conn = MySQLdb.connect("localhost", "root", "root", "test")

cur = conn.cursor()

def addUser(username, password):
    sql = "insert into user1 (username, password) values ('%s', '%s')" % (username, password)
    cur.execute(sql)
    conn.commit()
    conn.close()

def testAddUser():
    addUser('test1', '1234567890')

if __name__ == '__main__':
    testAddUser()