import math
print("for 2I/P choice 1 and for 3I/P choice 2")
choice=int(input("enter the choice"))
if(choice==1):
   b=input("enter the value b:")
   h=input("enter the value h:")
   if(b>0 and h>0):
      area =b*h*0.5
      print("the area of triangle is:",area)
   else:
      print("it is invalid")
if(choice==2):
   a=input("enter the value a:")
   b=input("enter the value b:")
   c=input("enter the value c:")
   if(a>0 and b>0 and c>0):
      avg=a+b+c
      s=(avg)/2
      value=math.sqrt(s*(s-a)*(s-b)*(s-c))
      print("the area of a triangle is:",value)
   else:
      print("it is invalid")
