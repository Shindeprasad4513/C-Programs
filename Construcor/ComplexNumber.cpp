 #include<iostream>
 using namespace std;
 class ComplexNumber
 {
   public:
   int r,i;
   ComplexNumber()
   {
     cout << "Enter Real and Imaginary Number:" << endl;
     cin>>r>>i;
   }
   void disp()
   {
     cout <<"Complex Number in [x+iy] Format::";
    if (i >= 0) 
       {
        cout << "[" << r << "+i" << i << "]" << endl;
       } 
      else 
       {
       cout << "[" << r << "-i" << -i << "]" << endl;
       }
  }
 };
 int main()
 {
  ComplexNumber ob;
  ob.disp();
  
 }