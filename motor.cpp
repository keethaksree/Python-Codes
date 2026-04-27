#include <iostream>

using namespace std;

class motor
{
  public:
    float v,ra,rsh;
    int rse;

    void emf(int r,int v=220,double ra=1.2,int i=5)
       {
         float eb;
         eb = v-(i*(ra+r));
         cout<<" series motor back emf:"<<eb<<endl;
        }

    void emf(double r,double v=220,float ra=1.2,int i=5)
       {
         float ish,ia,eb;
         ish = v/r;
         ia = i - ish;
         eb = v - (ia * ra);
         cout<<" shunt motor back emf:"<<eb<<endl;
       }

    void emf(int r1,double r2,float v=220,float ra=1.2)
      {
        float eb,ish,ia;
        int i=5;
        ish = v/r2;
        ia = i - ish;
        eb = v - ((ia * ra) + (ia * r1));
        cout<<" compund motor back emf:"<<eb<<endl;
      }
};

int main()
{
 motor m1;
 m1.emf(10);
 m1.emf(90.0);
 m1.emf(5,70.0);
 return 0;
}
