def Slice(L1,Index):
    L2=[]
    L3=[]
    for i in range(0,len(L1)):
        if(i<Index):
            L2.append(L1[i])
        elif(i>=Index):
            L3.append(L1[i])
    print("List before index: ",L2)
    print("List after index: ",L3)
def Filter(L1):
    L2=[]
    L3=[]
    for i in L1:
        if i%2==0:
            L2.append(i)
    for i in L1:
        if i not in L2:
            L3.append(i)
    L4=L2+L3
    print("Odd number at end: ",L4)
L1=[int(i) for i in list(input("Enter list: ").split())]
n=int(input("Enter index: "))
Slice(L1,n)
Filter(L1)
