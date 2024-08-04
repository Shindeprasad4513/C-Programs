#include<iostream>
using namespace std;
class Date
 {
   public:
   int dd,mm,yyyy;
   Date(int dd,int mm,int yyyy)
   {
    this->dd=dd;
    this->mm=mm;
    this->yyyy=yyyy;
   }  
     
   void disp()
   {
    cout<<"Output:";
     switch(mm)
     {
       case 1 : cout<<dd<<"-"<<"Jan"<<"-" <<yyyy<<endl;
              break;
       case 2 : cout<<dd<<"-"<<"Feb"<<"-"<<yyyy<<endl;
              break;        
       case 3 : cout<<dd<<"-"<<"March"<<"-"<<yyyy<<endl;
              break;
       case 4 : cout<<dd<<"-"<<"April"<<"-"<<yyyy<<endl;
              break;
       case 5 : cout<<dd<<"-"<<"May"<<"-"<<yyyy<<endl;
              break;
       case 6 : cout<<dd<<"-"<<"June"<<"-"<<yyyy<<endl;
              break;        
       case 7 : cout<<dd<<"-"<<"July"<<"-"<<yyyy<<endl;
              break;
       case 8 : cout<<dd<<"-"<<"Aug"<<"-"<<yyyy<<endl;
              break;
       case 9 : cout<<dd<<"-"<<"Sep"<<"-"<<yyyy<<endl;
              break;
       case 10 : cout<<dd<<"-"<<"Oct"<<"-"<<yyyy<<endl;
              break;        
       case 11 : cout<<dd<<"-"<<"Nov"<<"-"<<yyyy<<endl;
              break;
       case 12 : cout<<dd<<"-"<<"Dis"<<"-"<<yyyy<<endl;
              break;
     }
   }
 };
 int main()
 {
 int dd,mm,yyyy;
  cout << "Enter Date As(dd-mm-yyyy):" << endl;
    cin>>dd>>mm>>yyyy;
    Date obj(dd,mm,yyyy);
   obj.disp();
   
 }
 