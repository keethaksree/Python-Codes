def Common(L1,L2):
    if L1==L2:
        return True
    elif L1<L2:
        return False
    else:
        return False
def Remove(L1,n):
    L=L1
    for i in L:
        if i==n:
            L.remove(i)
    print("Removed list: ",L)
def Added(L1,L2):
    L3=[]
    for i in L1:
        for j in L2:
            if((i+j)>=40):
                L3.append(i)
                L3.append(j)
    print("Elements with more than 40 when added: ",L3)
L1=[int(i) for i in list(input("Enter list 1: ").split())]
L2=[int(i) for i in list(input("Enter list 2: ").split())]
n=int(input("Enter number to remove: "))
print("Is L1 and L2 same?: ",Common(L1,L2))
Remove(L1,n)
Added(L1,L2)
