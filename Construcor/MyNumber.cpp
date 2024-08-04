#include<iostream> 
using namespace std; 
class MyNumber
{
   public:
   int a,b,c;
   MyNumber()
   {
     a=10,b=20,c=30;
   }
   MyNumber(int a,int b,int c)
   {
     this->a=a;
     this->b=b;
     this->c=c;
   }
   MyNumber(int a,int b)
   {
     this->a=a;
     this->b=b;
     this->c=c;
   }
   void avg() 
   {
     int d=(a+b+c)/3;
     cout << "Average="<<d<< endl;
   }
};
int main()
{
  MyNumber ob;
  ob.avg();
  MyNumber ob1(101,202,303);
  ob1.avg();
  MyNumber ob2(100,20,20);
  ob2.avg(); 
}