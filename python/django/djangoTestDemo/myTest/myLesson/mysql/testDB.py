import MySQLdb

conn = MySQLdb.connect("localhost", "root", "root", "test")

cur = conn.cursor()

sql = "select * from entry"

cur.execute(sql)

result = cur.fetchall()

for item in result:
    print(item[0], item[1], item[2])

cur.close()
conn.close()
