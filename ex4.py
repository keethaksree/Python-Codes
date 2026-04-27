t1=tuple(input("Enter: ").split())
l=[]
for i in t1:
    if i not in l:
        l.append(i)
print("after removing duplicates:",l)
