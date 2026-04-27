R1=[int(i) for i in list(input("Enter Row1: ").split())]
R2=[int(i) for i in list(input("Enter Row2: ").split())]
R3=[int(i) for i in list(input("Enter Row3: ").split())]
M=[]
T=[[],[],[]]
M.append(R1)
M.append(R2)
M.append(R3)
for i in range(0,3):
    for j in range(0,3):
        T[j].append(M[i][j])
print(T)
