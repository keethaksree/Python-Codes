#include <iostream>
using namespace std;
class hour
{
   int h,m,s;
   public:
    hour(int a,int b,int c)
    {
       h=a;
       m=b;
       s=c;
    }
    void operator++()
    {
       s++;
       adjust();
    }
    void operator++(int)
    {
       hour temp = *this;
       ++(*this);
    }
    void operator--()
    {
       s--;
       adjust();
    }
    void operator--(int)
    {
       hour temp = *this;
       --(*this);
    }
    void adjust()
    {
       if(s>=60)
       {
          m+=s/60;
          s%=60;
       }
       if(s<0)
       {
          m-=1;
          s=59;
       }
       if(m>=60)
       {
          h+=m/60;
          m%=60;
       }
       if(m<0)
       {
          h-=1;
          m=59;
       }
       if(h==24)
       {
          m=h=s=0;
       }
    }
    void display()
    {
       cout<<"Time:\t"<<h<<":"<<m<<":"<<s<<endl;
    }
};
int main()
{
hour H(7,42,29);
++H;
H.display();
H++;
H.display();
--H;
H.display();
H--;
H.display();
return 0;
}
