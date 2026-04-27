S1,S2=input("Enter string: ").split()
Char = S1[0]
S1 = S2[0] + S1[1:]
S2 = Char + S2[1:]
print(S1,S2)
