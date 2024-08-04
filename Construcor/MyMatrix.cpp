#include<iostream> 
using namespace std;
class MyMatrix
{
   public:
   int r,c,a[20][20],n,i,j,s=0;
   MyMatrix(int r,int c)
   {
     this->r=r;
     this->c=c;
     cout << "Enter Elements of An Matrix:" << endl;
     for(i=0;i<r;i++) 
     {
       for(j=0;j<c;j++)
        {
          cin>>a[i][j];
        }
     }
   }
   void disp()
   {
     s=0;
     for(i=0;i<r;i++) 
     {
       for(j=0;j<c;j++)
        {
          s=s+a[i][j];
        }
     }
   cout<<"Sum="<<s<<endl;
   }
};
int main()
{
   int r,c;
   cout << "Enter How many rows and cols:" << endl;
   cin>>r>>c;
   MyMatrix ob(r,c);
   ob.disp();
}