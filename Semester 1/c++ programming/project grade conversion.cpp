#include<iostream>
using namespace std;

class result
{
    public:
    string name;
    int id;
    float number;
    string grade;
    result(/*string n,int i,float n1,*/string g)
    {
        name=n;
        id=i;
        number=n1;
        grade=g;
    }
/*void set_name(string n)
   {
       name=n;
   }
void set_id(int id)
   {
       id=i;
   }
void set_number(number n1)
   {
       namber=n1;
   }

void set_grade(char g)
   {
       grade=g;
   }
string get_name()
{
    cout<<"NAME: ";
    return name;
}
int get_id()
{
    cout<<"ID: ";
    return id;
}
float get_number()
{
    cout<<"NUMBER: ";
    return number;
}*/
string get_grade()
{
    cout<<"Your grade is:";
    return grade;
}
};
int main()
{
    result  s("yudhghfv");
    s.get_grade();

    float number;
    int id;
    cout<<"Enter your ID: ";
    cin>>id;
    cout<<"Enter your number: ";
    cin>>number;

   /* if(number>100)
    {
        cout<<s.get_grade("Range is not declare")<<endl;
    }
   else if(number>=90)
    {
        cout<<s.get_grade("A+")<<endl;
    }
    else if(number>=85)
    {
        cout<<s.get_grade("A")<<endl;
    }
     else if(number>=80)
    {
        cout<<s.get_grade("B+")<<endl;
    }
     else if(number>=75)
    {
        cout<<s.get_grade("B")<<endl;
    }
     else if(number>=70)
    {
        cout<<s.get_grade("C+")<<endl;
    }
     else if(number>=60)
    {
        cout<<s..get_grade("C")<<endl;
    }
     else if(number>=50)
    {
        cout<<s.get_grade("D")<<endl;
    }
    else
    {
        cout<<s.get_grade("F")<<endl;
    }*/




   // cout<<endl<<endl;
   // return main();
}



