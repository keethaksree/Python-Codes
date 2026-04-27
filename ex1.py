def find(b,a):
      if b in a:
         print("element exist")
      else:
         print("does not exist")
a={int(i) for i in set(input("Enter the element: ").split())}
print ("The size of the element: ",len(a))
print(a)
b=int(input("Enter to check: "))
find(b,a)
