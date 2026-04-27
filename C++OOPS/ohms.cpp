#include<iostream>
using namespace std;
class ohms
{
   float i,v;
   public:
   ohms()
   {
      i=0.00;
      v=100.00;
   }
   void cal(int r1,int r2)
   {
      float i1,i2;
      i1=v/r1;
      i2=v/r2;
      cout<<"current through resistor1:"<<i1<<endl;
      cout<<"current through resistor2:"<<i2<<endl;
   }
   void cal(int r1,int r2,int r3)
   {
      float i1,i2,i3;
      i1=v/r1;
      i2=v/r2;
      i3=v/r3;
      cout<<"current through resistor1:"<<i1<<endl;
      cout<<"current through resistor2:"<<i2<<endl;
      cout<<"current through resistor3:"<<i3<<endl;
   }
};
int main()
{
   int x,y,z;
   cout<<"resistor Values :";
   cin>>x>>y>>z;
   ohms O1;
   O1.cal(x,y);
   cout<<"\n";
   O1.cal(x,y,z);
   return 0;
}
