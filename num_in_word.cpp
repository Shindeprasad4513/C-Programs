//Accept number and display in words ex 12 one two
#include<iostream> 
using namespace std;
int main()
{
  int i,n,r=0,d;
  cout<<"Enter Number:";
  cin>>n;
  while(n>0)
  {
    d=n%10;
    r=r*10+d;
    n=n/10;
  }
  while(r>0) 
  {
   d=r%10;
   r=r/10;
   switch(d)
   {
    case 0 : cout<<"Zero "; break;
    case 1 : cout<<"One "; break;
    case 2 : cout<<"Two "; break;
    case 3 : cout<<"Three "; break;
    case 4 : cout<<"four "; break;
    case 5 : cout<<"five "; break;
    case 6 : cout<<"six "; break;
    case 7 : cout<<"seven "; break;
    case 8 : cout<<"Eight "; break;
    case 9 : cout<<"Nine "; break;
   }
  }
}