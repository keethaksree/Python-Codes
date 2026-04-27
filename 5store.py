L1=list(input("Enter list: ").split())
L1=[int(i) for i in L1]
print(L1)
L2=[(i+5) for i in L1]
print("Elements+5: ",L2)
n=max(L2)
print("Max: ",n)
n=min(L2)
print("Min: ",n)
