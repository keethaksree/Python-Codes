L1=[int(i) for i in list(input("Enter list: ").split())]
L2=list(set(L1))
print("No order: ",L2)
L3=[]
for i in L1:
    if i not in L3:
        L3.append(i)
print("In order: ",L3)
