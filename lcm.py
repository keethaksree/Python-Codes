print("To find the LCM of 2 numbers")
a=int(input("enter the 1st value:"))
b=int(input("enter the 2nd value:"))
num1=a
num2=b
while(b!=0):
   temp=a
   a=b
   b=temp%b
   LCM=(num1*num2)/a
print("the LCM value is:",LCM)
