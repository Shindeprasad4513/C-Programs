//Accept Number and Check Prime or Not
#include<iostream> 
using namespace std;
int main()
{
  int n,s=0;
  cout<<"Enter Number:";
  cin>>n;
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
      {
        s=s+i;
      }
  }
  if(s==0)
   cout<<"Number is Prime";
  else
    cout<<"Number is not Prime";
}