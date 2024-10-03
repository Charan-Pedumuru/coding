import mysql.connector

my_db=mysql.connector.connect{
    host='Localhost'
    user='root'
    pasword=''
}
print(my_db)
my_cursor=my_db.cursor()
my_cursor.execute("SHOW DATABASES")

for i in my_cursor:
print(i)