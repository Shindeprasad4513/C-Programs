
#include<iostream>
using namespace std; 
class Calculator
{
   public:
   int a,b;
  Calculator(int a,int b)
  { 
    int c=a+b;
    cout << "Addition=" <<c<< endl;
  }
  Calculator(int a,long int b)
  { 
    int c=a-b;
    cout << "Subtraction=" <<c<< endl;
  }
  Calculator(int a,double b)
  { 
    int c=a*b;
   cout << "Multiplication=" <<c<< endl; 
  }
  Calculator(int a,float b)
  { 
    int c=a/b;
    cout << "Division=" <<c<< endl;
  }
 } ;
int main()
 {
  int a,b;
  cout << "Enter Two Numbers:" << endl;
  cin >>a>>b;
  Calculator ob1(a,(int)b);
  Calculator ob2(a,(long int)b);
  Calculator ob3(a,(double)b);
  Calculator ob4(a,(float)b);
 }