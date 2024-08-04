#include<iostream> 
using namespace std;
class Add
{
   public:
   Add(int a,int b) 
   {
     int c=a+b;
     cout << "Addition="<< c << endl;
   }
};
int main()
{
  Add ob1(100,2000);
  Add ob2(100,200);
}