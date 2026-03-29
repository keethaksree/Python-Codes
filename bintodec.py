n=str(input("Enter a binary number: "))
l=n.split(",")
t=[]
for i in l:
        if (int(i,2))%5==0:
           t.append(i)
print (t)
