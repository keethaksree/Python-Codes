t1=tuple(input("enter tuple 1:").split())
t2=tuple(input("enter tuple 2:").split())
l1=[]
val=(t1,t2)
print(val)
for i in val:
   for j in i:
      l1.append(j)
print("after flattening:",tuple(l1))
