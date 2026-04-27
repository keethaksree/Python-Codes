#include<iostream>
using namespace std;
template<class t>
class Stack{
   t *A;
   int top;
   public:
   Stack(){
      top=-1;
      A=new t(10);
   }
   void push(t k){
      if(top<9){
	 top=top+1;
	 A[top]=k;
      }
      else{
	 cout<<"Stack Overflow"<<endl;
      }
   }
   void pop(){
      if(top>=0){
	 cout<<A[top]<<endl;
	 top=top-1;
      }
      else{
	 cout<<"Stack Underflow"<<endl;
      }
   }
   ~Stack(){ delete[] A; }
};
int main(){
   Stack<int> A1;
   Stack<float> A2;
   A1.push(10);
   A1.pop();
   A2.push(10.6);
   A2.pop();
   return 0;
}
