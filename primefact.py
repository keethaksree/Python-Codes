def Prime_Factors(a):
    List=[]
    for i in range (1,a+1):
        if (a%i==0):
            List.append(i)
        List2=[]
        flag=0
        for i in List:
            for j in range(2,i//2):
                if(i%j==0):
                    flag=1
                    break
            if(flag==0):
                List2.append(i)
    print(List2)
Num=int(input("Enter Number: "))
Prime_Factors(Num)
