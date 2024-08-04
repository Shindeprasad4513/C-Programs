#include <iostream>
using namespace std;
class Stud 
{
public:
    int rno;
    char name[20];
    int m[6];
    float per;
    Stud();
    void calculate();
    void disp();
};

Stud::Stud() 
{
    cout<<"Enter rno:";
    cin>>rno;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter 6 Subjects marks:";
    for(int i=0;i<6;i++) 
    {
        cin>>m[i];
    }
}

void Stud::calculate() 
{
    int s=0;
    for (int i=0; i<6;i++) 
    {
        s=s+m[i];
    }
    per=s/6;
}

void Stud::disp() 
{
    cout << "\nRno = "<<rno;
    cout << "\nName = "<<name;
    cout << "\nPercentage ="<<per;
}
int main() 
{
    Stud ob;
    ob.calculate();
    ob.disp();
    return 0;
}