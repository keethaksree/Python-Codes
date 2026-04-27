def count(s):
    u=0
    l=0
    for char in s:
        if char.isupper():
            u+=1
        elif char.islower():
            l+=1
    return u,l
s=input("Enter a string: ")
upper, lower = count(s)
print("Uppercase letters:", upper)
print("Lowercase letters:", lower)
