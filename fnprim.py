def IsPrime(Num):
    for i in range(2,Num//2):
        if(Num%i==0):
            return 0
    return 1
N=int(input("Enter Number: "))
R=IsPrime(N)
if (R==0):
    print("It is not a prime number")
elif (R==1):
    print("It is a prime number")
else:
    print("Error")
