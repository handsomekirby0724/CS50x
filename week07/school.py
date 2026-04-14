import sqlite3

# 连接数据库
conn = sqlite3.connect('school.db')
cursor = conn.cursor()

# 创建表
# cursor.execute('''
# CREATE TABLE IF NOT EXISTS school (
#     id INTEGER PRIMARY KEY AUTOINCREMENT,
#     name TEXT,
#     address TEXT,
#     phone TEXT,
#     email TEXT
# )
# ''')
# conn.commit()

# 插入数据
# cursor.execute('''
# INSERT INTO students (name, gender, class, dob, email)
# VALUES (?, ?, ?, ?, ?)
# ''', ('Justin', 'M', '9T', '2011-08-12', '29jiaji'))
# conn.commit()

#delete data
# cursor.execute('''
# DELETE FROM students
# WHERE sid = 5
# ''')
# conn.commit()
# 查询数据

# update data
# cursor.execute('''
#  UPDATE students
#  SET class = '9T'
#  WHERE sid = 2
#  ''')
# conn.commit()

# cursor.execute('''
# SELECT * FROM students
# WHERE dob < '2011-07-01'
# ''')

cursor.execute('''
SELECT * FROM students
''')
rows = cursor.fetchall()
for row in rows:
    if '01' <= row[4][5:7] <= '06':
        print(row)
conn.close()
