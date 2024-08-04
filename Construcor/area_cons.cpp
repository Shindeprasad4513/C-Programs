using namespace std;
#include<iostream>
class circle
{
  public:
  float r;
 void area();
};
void circle::area()
{
   cout<<"Enter Radius:";
   cin>>r;
   float a=3.14*r*r;
   cout << "Area of circle=" <<a<< endl;
}
int main()
{
 circle ob;
 ob.area();
}
