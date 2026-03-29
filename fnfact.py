def fact(n):
   if(n==1):
      return n
   else:
      return n*fact(n-1)
num=int(input("enter the no.."))
if(num<0):
   print("factorial for negative values are not exist")
elif(num==0):
   print("factorial is 1")
else:
   print("factorial of",num,"is",fact(num))
