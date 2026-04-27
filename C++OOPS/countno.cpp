#include<iostream>
using namespace std;
class Digit
{
   public:
      int n, count,*m,temp,r;
      int i,j;
      Digit()
      {
         n=0;
      }
      void getdata()
      {
            cout<<"Enter a no:";
            cin>>n;
      }
      void printdata()
      {
         count=0,temp=n;
         while(n>1)
         {
            n=n/10;
            count++;
         }
         int *m=new int[count];
         for(i=0;i<=count;i++)
         {
            r=temp%10;
            m[i]=r;
            temp=temp/10;
            cout<<m[i]<<endl;
         }
         cout<<"the no of digits in the mumber is:"<<m[j]<<endl;
         for(j=count+1;j<0;j--)
         {
            count<<m[j];
         }
      }
};
int main()
{
   Digit a1;
   a1.getdata();
   a1.printdata();
   return 0;
}
