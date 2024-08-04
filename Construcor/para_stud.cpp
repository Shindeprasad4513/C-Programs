#include<iostream>
using namespace std;
class stud
{
  public:
  int  rno,i;
  char name[20];
  int sub[20],n;
  stud(int rno,char name[],int n) 
  { 
    this->rno=rno;
    strcpy(this->name,name);
    this->n=n;
    cout << "Enter Marks of "<<n<<" Subjects" << endl;
    for(i=1;i<=n;i++)
    {
       cin >>sub[i];
    } 
  }
  void disp()
  {
    cout<<"Roll no="<<rno<<endl; 
    cout<<"Roll name="<<name<<endl; 
    for(i=1;i<=n;i++)
      cout<<"marks of "<<i<<" subject="<<sub[i]<<endl;
    
  }
};
int main()
{
   int i,rno;
   char name[20];
   int n;
   cout << "Enter rno:" << endl;
   cin >> rno;
   cout << "Enter Name" << endl;
   cin >> name;
   cout << "Enter no of Subjects"<< endl;
  cin>>n;
   stud ob(rno,name,n);
   ob.disp();
}