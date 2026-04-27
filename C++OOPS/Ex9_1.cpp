#include<iostream>
using namespace std;
template<class T>
T Great(T x,T y){
	if(x>y)
		return x;
	else
		return y;
}
int main(){
	int a1,b1,R1;
	float a2,b2,R2;
	char a3,b3,R3;
	cout<<"Enter 2 integer numbers: ";
	cin>>a1>>b1;
	cout<<"Enter 2 float numbers: ";
	cin>>a2>>b2;
	cout<<"Enter 2 character values: ";
	cin>>a3>>b3;
	R1=Great(a1,b1);
	R2=Great(a2,b2);
	R3=Great(a3,b3);
	cout<<R1<<endl;
	cout<<R2<<endl;
	cout<<R3<<endl;
	return 0;
}
