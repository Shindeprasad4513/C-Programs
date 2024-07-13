//Accept Number and display factors of that number
#include<iostream> 
using namespace std;
int main()
{
  int i,n;
  cout<<"Enter Number:";
  cin>>n;
  cout<<"Factors=";
  for(i=1;i<n;i++)
  {
     if(n%i==0)
     {
      cout<<i<<endl;
     }
  }
}