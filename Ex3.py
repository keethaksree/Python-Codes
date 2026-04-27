S=input("Enter String: ")
Ch=list(set(S))
Dict=dict()
for c in Ch:
    Dict[c]=S.count(c)
print(Dict)
