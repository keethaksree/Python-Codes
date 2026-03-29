n=int(input("enter no.."))
l=1
for i in range(l,n+1):
   print(" "*(n-i),"* "*i)
for j in range(n-1,l-1,-1):
   print(" "*(n-j),"* "*j)
