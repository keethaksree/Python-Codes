#include<iostream>
using namespace std;
class avgB;
class avgA
{
    int avg1;
    friend class avgB;
    public:
    void getdata(){
        cout<<"enter number: ";
        cin>>avg1;
    }
};
class avgB{
    int avg2;
    public:
    void getdata(){
        cout<<"enter number: ";
        cin>>avg2;
    }
    void average(avgA tempA){
        cout<<"average of the two no..is : "<<(avg2+tempA.avg1)/2<<endl;
    }
    void Max(avgA tempA){
        if(avg2>tempA.avg1) cout<<"Max: "<<avg2<<endl;
        else cout<<"maximum of the two no..is : "<<tempA.avg1<<endl;
    }
};
int main(){
    avgA a1;
    a1.getdata();
    avgB b1;
    b1.getdata();
    b1.Max(a1);
    b1.average(a1);
    return 0;
}
