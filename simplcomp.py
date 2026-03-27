print("for the simple intreset choose choice1 and for compound intreset choose choice2")
choice=int(input("enter the choice"))
if(choice==1):
   P=float(input("enter the value p"))
   N=float(input("enter the value N"))
   R=float(input("enter the value R"))
   simple=(P*N*R)/100
   print("the simple intreset is",simple)
if(choice==2):
      P=float(input("enter the value P"))
      N=float(input("entre the value N"))
      R=float(input("enter the value R"))
      T=float(input("enter the value T"))
      compound=(P*((1+(R/N)))**(N*T)))-P
      print("the compound intreset is ",compound)
