#include<iostream>
using namespace std;
class car
{
   string brand,model;
   int year,price;
   public:
   car()
   {
      brand="";
      model="";
      year=0;
      price=0;
   }
   ~car()
   {}
   void getdata()
   {
      cout<<"enter the car brand :";
      cin>>brand;
      cout<<"enter the car model :";
      cin>>model;
      cout<<"enter the year :";
      cin>>year;
      cout<<"entre the price :";
      cin>>price;
   }
   void display()
   {
      cout<<"the brand of the car :"<<brand<<endl;
      cout<<"the model of the car :"<<model<<endl;
      cout<<"the price of the car :"<<price<<endl;
      cout<<"the year of the model :"<<year<<endl;
   }
};
int main()
{
   car c;
   c.getdata();
   c.display();
   return 0;
}
