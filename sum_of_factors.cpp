//Accept Number and display factors of that number
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
      cout<<"Sum of Factors="<<s<<endl;
}