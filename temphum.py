t=input("enter the state of temperature")
h=input("enter the state of humidity")
if(t=="warm" or t=="cold" and h=="humid" or h=="dry"):
   if(t=="warm" and h=="dry"):
      print("the activity is to play basketabll")
   elif(t=="warm" and h=="humid"):
      print("the activity is to play tennis")
   elif(t=="cold" and h=="dry"):
      print("the activity is to play cricket")
   elif(t=="cold" and h=="humid"):
      print("the activty is to swim")
else:
   print("it is invalid")
