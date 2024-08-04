/*
Create a C++ class FixDeposit with data members 
FD_No, Cust_Name, FD_Amt, Interest rate, Maturity amt, 
Number_of_months. Create and Initialize all values of 
FixDeposit object by using parameterized constructor with 
default value for interest rater Calculate maturity amt using 
interest rate and display all the details.
*/
#include<iostream>
using namespace std;
class FixDeposit
{
  public:
  int fid,famt,Irate,Mamt,mon;
  char cname[20]; 
  FixDeposit(int fid,char cname[],int famt,int Irate, int Mamt,int mon)
  {
    this->fid=fid;
    strcpy(this->cname,cname);
    this->famt=famt;
    this->Irate=Irate;
    this->Mamt=Mamt;
    this->mon=mon;
  }
  void Calculate()
   {
       Mamt=famt+(famt*Irate*mon/12);
   }
  void disp()
  {
    cout << "Fd Id="<<fid << endl;
    cout << "Customer Name="<<cname << endl;
    cout << "Fd Amount="<<famt << endl;
    cout << "Interest Rate="<<Irate*100<< endl;
    cout << "Maturity Amount="<<Mamt<< endl;
    cout << "Number of months="<<mon<< endl;
  }
};
int main()
{
   int fid,famt,Irate,Mamt,mon;
   char cname[20]; 
   cout << "Enter fd_id cname Fd_amt Interest_rate Maturity_amt And No_of_Months" << endl;
   cin>>fid>>cname>>famt>>Irate>>Mamt>>mon;
   FixDeposit ob(fid,cname,famt,Irate,Mamt,mon);
   ob.Calculate();
   ob.disp();
}