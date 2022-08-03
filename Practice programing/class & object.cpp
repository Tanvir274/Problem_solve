#include<iostream>
using namespace std;



class student
{
public:
    int id;
    double cgpa;
    void display()
    {
        cout<<"ID :"<<id<<"  CGPA: "<<cgpa <<endl<<endl;
    }

    void value(int x,double y)
    {
        id=x;
        cgpa=y;
    }
};

int main()
{
   student tanvir,shahadat;
   tanvir.value(111,3.777);
   shahadat.value(222,3.999);
   tanvir.display();
   shahadat.display();
}
