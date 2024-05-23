
import random
n=random.randint(1,10)

c=1

while c<=3:
    x=int(input('Choose a number between 1 and 10  :-'))

    if x==n:
        print('You Win :)')

        break
    else:
        c+=1
if c>3:
    print(' You Lose :(')

    print('The no. was',n)




    

