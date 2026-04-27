#include<iostream>
using namespace std;
class OD
{
   int oct,dec;
   public:
   OD(){ dec=0;oct=0; }
   OD operator=(int n){
      dec=n;
      int l=0;
      while(n!=0){
         oct+=n%8;
         oct=oct*10;
         n=n/8;
         l++;
      }
      n=0;
      while(l>=0){
         n=n*10;
         n+=oct%10;
         oct=oct/10;
         l--;
      }
      oct=n;
   }
   OD operator+(OD B){
      OD temp;
      temp.dec=dec+B.dec;
      temp=dec+B.dec;
      return temp;
   }
   void Display(){
      cout<<oct<<endl;
   }
};
int main(){
   OD O1,O2,O3;
   O1=40;
   O2=80;
   O3=O1+O2;
   O1.Display();
   O2.Display();
   O3.Display();
   return 0;
}
