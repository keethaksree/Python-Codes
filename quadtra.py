a=int(input("enter the value of a:"))
b=int(input("enter the value of b:"))
c=int(input("enter the value of c:"))
d=(b*b)-(4*a*c)
x=(-b)/(2*a)
if(d>0):
   f=(-b+(d**0.5))/(2*a)
   g=(-b-(d**0.5))/(2*a)
   print("the roots are:",f,"and",g)
elif(d<0):
   h=((-d)**0.5)/(2*a)
   print("the roots are:",x,"+j",h,"and",x,"-j",h)
else:
   f=(-b+((-d)**0.5))/(2*a)
   print("the roots are equal:",f)
