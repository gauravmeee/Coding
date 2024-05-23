n=int(input("Enter a number:"))
b=0
while(n>0):
    dig=n%10
    b=b+dig
    n=n//10
print("The total sum of digits is:",b)
