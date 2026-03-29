n=int(input("enter the value n:"))
origi=n
rev=0
while(n>0):
   r=(n%10)
   rev=rev+(r*r*r)
   n=(n)/10
if(origi==rev):
   print("the given value is armstrong")
else:
   print("the given value is not armstrong")
