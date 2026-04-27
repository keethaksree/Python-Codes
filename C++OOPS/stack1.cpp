#include<iostream>
using namespace std;
class Stack{
   int Arr[5],n;
   int count,flag;
   public:
   Stack(){
      count=-1;
      flag=0;
   }
   void SetNum(){
      cout<<"Enter No. of elements: "<<endl;
      cin>>n;
   }
   void Push(int x){
      try{
         if(count<n-1){
            Arr[++count]=x;
            flag=1;
         }
         else
            throw x;
      }
      catch(int y){
         cout<<"Error:StackOverflow"<<endl;
      }
   }
   void Pop(){
      try{
         if (count>=0){
            cout<<"Popped element:"<<Arr[count]<<endl;
            Arr[count]='\0';
            count-=1;
         }
         else
            throw count;
      }
      catch (int y){
            if(y<0 && flag==1){
               cout<<"Error:StackUnderflow"<<endl;
            }
            if(y<0 && flag==0){
               cout<<"Error:EmptyStack"<<endl;
               throw;
            }
         }
   }
};
int main(){
   Stack s1,s2;
   try{
      s1.SetNum();
      s1.Push(7);
      s1.Push(5);
      s1.Pop();
      s1.Pop();
      s2.Pop();
   }
   catch(int e){
      cout<<"ExpcetionInMain"<<endl;
   }
   catch(...){
      cout<<"DefaultExceptionInMain"<<endl;
   }
   return 0;
}
