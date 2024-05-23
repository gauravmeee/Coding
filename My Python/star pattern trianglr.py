# to print a triangle with given row and coulom by stars
num=int(input('enter the row:'))
for x in range (1,num+1):
    for y in range(1,x+1):
        print('*',end='')
    print()
