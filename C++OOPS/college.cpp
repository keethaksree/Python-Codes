#include<iostream>
using namespace std;
class Student
{
   int Reg,Code;
   public:
   Student(int R,int C)
{
      Reg=R;
      Code=C;
}
   Student(Student &temp)
{
      Code=temp.Code;
}
   void Display()
{
      cout<<"Register no: "<<Reg<<endl;
      cout<<"College code: "<<Code<<endl;
}
};
int main()
{
   int Re,Co;
   cout<<"Enter Reg.no. and college code: ";
   cin>>Re>>Co;
   Student S(Re,Co);
   Student S1(S);
   Student S2=S;
   S.Display();
   S1.Display();
   S2.Display();
}
