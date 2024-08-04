
#include<iostream>
using namespace std;
class acct
{
  public:
  int ano,cno,bal;
  char addr[20],hname[20];
  void accept()
  {
    cout<<"Enter account no hname addr contactno and balance:";
    cin>>ano>>hname>>addr>>cno>>bal;
  }
  void disp()
  {
  
   cout<<"Account No="<<ano<<endl;
   cout<<"Holder Name="<<hname<<endl; 
   cout<<"Address="<<addr<<endl;
   cout<<"Contact N0="<<cno<<endl;
   cout<<"Balance="<<bal<<endl;
  }
  void deposit()
  {
    int amt;
    cout << "Enter amount to deposit:" << endl;
    cin>>amt;
    bal=bal+amt;  
    cout << "transaction successfully...!" << endl;
  }
  void disp1()
  {
  
   cout<<"Account No="<<ano<<endl;
   cout<<"Holder Name="<<hname<<endl; 
   cout<<"Address="<<addr<<endl;
   cout<<"Contact N0="<<cno<<endl;
   cout<<"Balance="<<bal<<endl;
  }
};
int main()
{
  acct ob;
  ob.accept();
  ob.disp();
  ob.deposit();
  ob.disp1();
}

 
    