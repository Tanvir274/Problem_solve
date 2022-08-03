#include<iostream>
using namespace std;


class student
{
public:
    string grade;


    void set_grade(string gr)
    {
        grade=gr;
    }

    string get_grade()
    {
        cout<<"Your Grade: ";
        return grade;
    }
};

int main()
{
    float number;
    cout<<"Enter your number: ";
    cin>>number;

    student s1;

    if(number>100)
    {
        s1.set_grade("Range is not declare")<<endl;
    }
   else if(number>=90)
    {
        s1.set_grade("A+")<<endl;
    }
    else if(number>=85)
    {
        s1.set_grade("A")<<endl;
    }
     else if(number>=80)
    {
        s1.set_grade("B+")<<endl;
    }
     else if(number>=75)
    {
        s1.set_grade("B")<<endl;
    }
     else if(number>=70)
    {
        s1.set_grade("C+")<<endl;
    }
     else if(number>=60)
    {
        s1.set_grade("C")<<endl;
    }
     else if(number>=50)
    {
        s1.set_grade("D")<<endl;
    }
    else
    {
        s1.set_grade("F")<<endl;
    }
        cout<<s1.get_grade();

    return main();

}
