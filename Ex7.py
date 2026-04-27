s=input("Enter a string: ")
alpha=0
num=0
spaces=0
for char in s:
    if char.isalpha():
        alpha+=1
    elif char.isdigit():
        num+=1
    elif char.isspace():
        spaces+=1
print("Alphabets:",alpha)
print("Numbers:",num)
print("Spaces:", spaces)
