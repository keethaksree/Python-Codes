#include <iostream>
#include <cstring>

using namespace std;

class String
{
   public:
      char *data;
      char *con;

      String()
      {
         data = new char[1];
         data[0] = '\0';
      }

      String(const char *s)
      {
         data = new char[strlen(s) + 1];
         strcpy(data,s);
      }

      String(const char *s1,const char *s2)

      {

         data = new char[strlen(s1) + strlen(s2)+1];
         strcpy(data,s1);
         strcat(data,s2);
      }

      char *find()
      {
         int count,index;
         count=index=0;
         for( int i=0 ; data[i]!='\0' ; i++ )
         {
            char ch = tolower(data[i]);
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
               count++;
            }
         }
         char *vowels=new char[count+1];
         for( int i=0 ; data[i]!='\0' ; i++)
         {
            char ch=tolower(data[i]);
            if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
            {
               vowels[index++]=data[i];
            }
         }

         vowels[index] = '\0';
         return vowels;
      }

      void show()
      {
        cout<<"Original string :"<<data<<endl;
      }
      ~String()
      {
         delete []data;
      }
};
int main()
{
   String s1("masonmount");
   s1.show();
   char *vow=s1.find();
   cout<<"Vowels in the string:"<<vow<<endl<<endl;
   String s2("blue","whale");
   s2.show();
   char *vow1=s2.find();
   cout<<"Vowels in the string:"<<vow1<<endl;
   delete []vow;
   delete []vow1;
   return 0;
}
