# Factorial Using While Loop
n=int(input("number whoes factorial you need:"))
fact=1
if n<0:
    print( "Factorial for Negative No. not defined")
    
elif n==0:
    print ("factorial of 0 = 1")

else:
   while n>=1:
    fact*=n
    n-=1
print(fact)
    
