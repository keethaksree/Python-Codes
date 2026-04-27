p=input("enter keyword:")
l=[]
while True:
   x=input()
   if x==p:
      break
   l.append(x)
print(tuple(l))
