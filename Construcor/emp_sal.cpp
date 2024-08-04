#include<iostream>
using namespace std;
class emp
{
  public:
  int eno,sal;
  char ename[20];
  emp()
  {
    cout << "Enter Employee NO Ename Salary:" << endl;
    cin >> eno>>ename>>sal;
  } 
  void amt()
  {
   
    int a;
    cout << "Enter Amount to Add:" << endl;
     cin >> a;
    sal=sal+a;
  }
  void disp()
  {
   cout << "Emp no:"<<eno << endl;
   cout << "Emp Name:"<<ename << endl;
   cout << "Emp Salary:"<<sal << endl;
  }
};
int main()
{
  emp ob;
  ob.amt();
  ob.disp();
}