import MySQLdb

conn = MySQLdb.connect("localhost", "root", "root", "test")
cur = conn.cursor()

name = raw_input()
sql = "select * from user"
insert_sql = "insert into user (name) values ('%s')" % (name)
cur.execute(insert_sql)
conn.commit()
cur.execute(sql)

result = cur.fetchall()

for row in result:
    print (row[0], row[1])

conn.close()