#include<iostream>
using namespace std;
class average{
   int a,b;
   public:
   average(int x,int y){
      a=x;
      b=y;
   }
   void Div()
   {
    try{
       try{
          if(b==0)
             throw 0;
          else
             cout<<"Division of two numbers is:"<<a/b<<endl;
       }
       catch(int m){
          cout<<"Exception:DIVISION BY ZERO ERROR"<<"\n";
          throw;
       }
   }
   catch(...){ cout<<"DefaultException\n"; }
   }
   void Add(){
      try{
         try{
            if(a<0 || b<0)
               throw a;
            else
               cout<<"Addition of two numbers is:"<<a+b<<endl;
         }
         catch(int n){
            cout<<"Exception:NEGATIVE NUMBER FOUND"<<"\n";
            throw;
         }
      }
      catch(...){ cout<<"DefaultException\n"; }
   }
};
int main()
{
   average a1(-10,0);
   a1.Div();
   a1.Add();
   return 0;
}
