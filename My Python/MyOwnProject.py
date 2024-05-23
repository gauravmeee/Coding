print( """ 1) To Show Database
2) Use Database
3) To Show Tables Present in The Database
4) To Show Table Structure 
5)To Create Database""")

c=int(input("Enter Your Choice : "))
       

import mysql.connector as minesql
mydb=minesql.connect ( host="localhost",user="root",passwd="MyPw" )
mycursor=mydb.cursor()
#1 To Show Databases

if  c==1:
    print(">>>To Show Databases<<<")
    c=mycursor.execute("SHOW DATABASES ")
    for x in mycursor:
        print(x)
    c=int(input("Enter Your Choice : "))

#2 To Use Database

if c==2:
    print(">>>To Use Database<<<")
    n=str(input("Database Name:"))
    m="use " + n
    mycursor.execute(x)
    print("Database Changed to" ,n )
    
    c=int(input("Enter Your Choice : "))

#3 To Show Tables

if c==3:
    print(">>>To Show Tables<<<")
    mycursor.execute("SHOW TABLES")
    for x in mycursor:
        print(x)
        
    c=int(input("Enter Your Choice : "))

#4 To Show Table Structure

if c==4:
    print(">>>To Show Table Structure<<<")
    n=str(input("Table Name :"))
    n="DESC " + n      
    mycursor.execute(n)

    for x in mycursor:
        print(x)
#5 To Create A Database

if c==5:
    print(">>>To Create A Database<<<")
    n=str(input("Database Name :"))
    n= "CREATE DATABASE " + n
    mycursor.execute(n)
    print("Database Created Successfully :)")
    c=int(input("Enter Your Choice : "))
    

