//Accept Number and Check perfect or Not
#include<iostream> 
using namespace std;
int main()
{
  int i,n,s=0;
  cout<<"Enter Number:";
  cin>>n;
  for(i=1;i<n;i++)
  {
    if(n%i==0)
      {
        s=s+i;
      }
  }
  if(s==n)
   cout<<"Number is perfect";
  else
    cout<<"Number is not perfect";
}