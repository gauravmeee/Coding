
#to calculate th body mass index (BMI) of a person

weight=float(input('enter the weight of person in kg:'))
height=float(input('enter the height of person in foot:'))
height*=0.348

bmi=weight/(height*height)

print(' BMI of the person is :',bmi)

if bmi<=16:
          print(" :(  You Are Underweight")
if bmi>=24:
          print(" : (You are overweight")
if bmi>16 and bmi<24:
    print( " :) You Are Healthy ")
          

