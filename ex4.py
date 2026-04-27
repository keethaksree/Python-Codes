L1=[int(i) for i in list(input("Enter list: ").split())]
L2=[]
for i in L1:
    if i%2==0:
        L2.append(i)
print(L2)
L3=[]
for i in L1:
    if i not in L2:
        L3.append(i)
L4=L2+L3
print(L4)

