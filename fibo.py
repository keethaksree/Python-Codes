def fibo(x):
   a=0
   b=1
   while a<=x:
      print(a, end=" ")
      a=b
      b=a+b
fibo(50)
