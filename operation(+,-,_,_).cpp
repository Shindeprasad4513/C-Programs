/*Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from 
user and performs the corresponding arithmetic operation and display the result. (Use 
switch statement)*/
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  char ch;
  cout<<"Enter two Numbers:";
  cin>>a>>b;
  cout<<"Enter Operator(+,-,*,/):";
  cin>>ch;
  switch(ch) 
  {
    case '+' : c=a+b; cout<<"Addition="<<c; break;
    case '-' : c=a-b; cout<<"Subtraction="<<c; break;
    case '*' : c=a*b; cout<<"Multiplication="<<c; break;
    case '/' : c=a/b; cout<<"Division="<<c; break;
    default: cout<<"invalid choice"; break;
  }
}