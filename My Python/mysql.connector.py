import mysql.connector as minesql
mydb=minesql.connect ( host="localhost",user="root",passwd="MyPw" )
mycursor=mydb.cursor()
mycursor.execute("Create Database Gk_Test )")



