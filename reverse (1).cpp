//accept Number and reverse it.
#include<iostream>
using namespace std; 
int main()
{
  int n,i,r=0,d;
  cout<<"Enter Number:";
  cin>>n;
  while(n>0)
  {
    d=n%10;
    r=r*10+d;
    n=n/10;
  }
  cout<<"Reverse Number="<<r;
}