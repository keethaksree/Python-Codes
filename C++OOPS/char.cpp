#include <iostream>
using namespace std;
class STR
{
   string value,data;
   public:
   STR(string s)
   {
      value = s;
   }
   void operator-(char c)
   {
      data="";
      for (int i=0; value[i]!='\0';i++)
      {
         if(value[i]!=c)
         {
          data+=value[i];
         }
      }
   }
   void display()
   {
         cout<<"original string is..:"<<value<<endl;
         cout<<"after subtract the character:"<<data<<endl;
   }
};

int main()
{
   char S1;
   STR s("lewandowski");
   cout<<"enter a character to remove:"<<endl;
   cin>>S1;
   s-S1;
   s.display();
   return 0;
}
