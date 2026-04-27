#include<iostream>
using namespace std;
class val
{
    int feet,inches;
    public:
    void GetData()
    {
        cout<<"enter feet: ";
        cin>>feet;
        cout<<"enter inches: ";
        cin>>inches;
        feet=feet+inches/12;
        inches=inches%12;
    }
    void Disp()
    {
        cout<<feet<<"\'"<<inches<<"\""<<endl;
    }
    friend val add(val,val);
};
val add(val A,val B){
    val temp;
    temp.feet=A.feet+B.feet;
    temp.inches=A.inches+B.inches;
    temp.feet=temp.feet+(temp.inches/12);
    temp.inches=temp.inches%12;
    return temp;
}
int main(){
    val v1,v2;
    v1.GetData();
    v2.GetData();
    cout<<"value 1: ";
    v1.Disp();
    cout<<"value 2: ";
    v2.Disp();
    val Result=add(v1,v2);
    cout<<"addition of 2 values: ";
    Result.Disp();
    return 0;
}
