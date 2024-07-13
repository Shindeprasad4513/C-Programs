//maximum number of three number
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter Three Numbers:";
  cin>>a>>b>>c;
  if(a>b && a>c)
   cout<<"Maximum Number="<<a;
  else if(b>a && b>c)
   cout<<"Maximum Number="<<b;
  else
   cout<<"Maximum Number="<<c;   
}