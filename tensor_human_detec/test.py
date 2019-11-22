import pymysql

conn = pymysql.connect(host="172.18.8.111", user="root", password="root", database="cms", charset="utf8")
cursor = conn.cursor()
sql = """INSERT INTO test(tutorial_id) VALUES (%s);"""
id = 11
cursor.execute(sql, [id])
conn.commit()
cursor.close()
conn.close()
# 打印下查询结果
