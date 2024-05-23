from tkinter import *
from tkinter import messagebox
top=Tk()
L1=Label(top,text="Encrypt")
L1.grid(column=0, row=0)

E1=Entry(top,bd=5)
E1.grid(column=1,row=0)
E2=Entry(top,bd=5)
E2.grid(column=2,row=0)

alphabet = 'abcdefghijklmnopqrstuvwxyz'
key = 4
newmsg= ''

def submit():
 messagebox.showinfo("CONFIRMATION", E1.get() +" - your data")
 global newmsg
 for character in E1.get():
   position = alphabet.find(character)
   newposition = (position-key)%26
   newchar = alphabet[newposition]
   print('new character is', newchar)
   newmsg+= newchar
 print(newmsg)
 E2.insert(0, newmsg)

redbutton=Button(top,text="Submit", fg="red" , command=submit)
redbutton.grid(column=1,row=1)
top.mainloop()
