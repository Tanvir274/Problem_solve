#include<iostream>
using namespace std;

class student
{
public:
    int id;
    string name;
    float number;
    string grade;
    student(int i,string na)
    {
        id=i;
        name=na;

    }

    void set_number(float nu)
    {
        number=nu;
    }
    void set_grade(string g)
    {
        grade=g;
    }
    int get_id()
    {
        cout<<"Id:";
        return id;
    }
    string get_name()
    {
        cout<<"Name:";
        return name;
    }
    float get_number()
    {
        cout<<"Number:";
        return number;
    }
    string get_grade()
    {
        cout<<"Grade:";
        return grade;
    }
};





int main()
{
    int id;
    float number;
    cout<<"Enter your ID:";
    cin>>id;
    cout<<"Enter your Number:";
    cin>>number;

    student s1(1000,"Tanvir");
    student s2(2000,"Karim");
    student s3(3000,"Rahim");
    student s4(4000,"Zakir");
    student s5(5000,"Emon");
    student s6(6000,"AL Amin");


switch(id)
{
   case 1000:

     s1.set_number(number);
     if(number>100)
    {
        s1.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s1.set_grade("A+");
    }
    else if(number>=85)
    {
        s1.set_grade("A");
    }
     else if(number>=80)
    {
        s1.set_grade("B+");
    }
     else if(number>=75)
    {
        s1.set_grade("B");
    }
     else if(number>=70)
    {
        s1.set_grade("C+");
    }
     else if(number>=60)
    {
        s1.set_grade("C");
    }
     else if(number>=50)
    {
        s1.set_grade("D");
    }
    else
    {
        s1.set_grade("F");
    }
     cout<<s1.get_id()<<endl;
    cout<<s1.get_name()<<endl;
    cout<<s1.get_number()<<endl;
    cout<<s1.get_grade()<<endl<<endl;
    break;

   case 2000:
    s2.set_number(number);
     if(number>100)
    {
        s2.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s2.set_grade("A+");
    }
    else if(number>=85)
    {
        s2.set_grade("A");
    }
     else if(number>=80)
    {
        s2.set_grade("B+");
    }
     else if(number>=75)
    {
        s2.set_grade("B");
    }
     else if(number>=70)
    {
        s2.set_grade("C+");
    }
     else if(number>=60)
    {
        s2.set_grade("C");
    }
     else if(number>=50)
    {
        s2.set_grade("D");
    }
    else
    {
        s2.set_grade("F");
    }
     cout<<s2.get_id()<<endl;
    cout<<s2.get_name()<<endl;
    cout<<s2.get_number()<<endl;
    cout<<s2.get_grade()<<endl<<endl;
   break;

   case 3000:
    s3.set_number(number);
     if(number>100)
    {
        s3.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s3.set_grade("A+");
    }
    else if(number>=85)
    {
        s3.set_grade("A");
    }
     else if(number>=80)
    {
        s3.set_grade("B+");
    }
     else if(number>=75)
    {
        s3.set_grade("B");
    }
     else if(number>=70)
    {
        s3.set_grade("C+");
    }
     else if(number>=60)
    {
        s3.set_grade("C");
    }
     else if(number>=50)
    {
        s3.set_grade("D");
    }
    else
    {
        s3.set_grade("F");
    }
     cout<<s3.get_id()<<endl;
    cout<<s3.get_name()<<endl;
    cout<<s3.get_number()<<endl;
    cout<<s3.get_grade()<<endl<<endl;
   break;

   case 4000:
    s4.set_number(number);
     if(number>100)
    {
        s4.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s4.set_grade("A+");
    }
    else if(number>=85)
    {
        s4.set_grade("A");
    }
     else if(number>=80)
    {
        s4.set_grade("B+");
    }
     else if(number>=75)
    {
        s4.set_grade("B");
    }
     else if(number>=70)
    {
        s4.set_grade("C+");
    }
     else if(number>=60)
    {
        s4.set_grade("C");
    }
     else if(number>=50)
    {
        s4.set_grade("D");
    }
    else
    {
        s4.set_grade("F");
    }
     cout<<s4.get_id()<<endl;
    cout<<s4.get_name()<<endl;
    cout<<s4.get_number()<<endl;
    cout<<s4.get_grade()<<endl<<endl;
   break;

   case 5000:
     s5.set_number(number);
     if(number>100)
    {
        s5.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s5.set_grade("A+");
    }
    else if(number>=85)
    {
        s5.set_grade("A");
    }
     else if(number>=80)
    {
        s5.set_grade("B+");
    }
     else if(number>=75)
    {
        s5.set_grade("B");
    }
     else if(number>=70)
    {
        s5.set_grade("C+");
    }
     else if(number>=60)
    {
        s5.set_grade("C");
    }
     else if(number>=50)
    {
        s5.set_grade("D");
    }
    else
    {
        s5.set_grade("F");
    }
     cout<<s5.get_id()<<endl;
    cout<<s5.get_name()<<endl;
    cout<<s5.get_number()<<endl;
    cout<<s5.get_grade()<<endl<<endl;
   break;

   case 6000:
     s6.set_number(number);
     if(number>100)
    {
        s6.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s6.set_grade("A+");
    }
    else if(number>=85)
    {
        s6.set_grade("A");
    }
     else if(number>=80)
    {
        s6.set_grade("B+");
    }
     else if(number>=75)
    {
        s6.set_grade("B");
    }
     else if(number>=70)
    {
        s6.set_grade("C+");
    }
     else if(number>=60)
    {
        s6.set_grade("C");
    }
     else if(number>=50)
    {
        s6.set_grade("D");
    }
    else
    {
        s6.set_grade("F");
    }
     cout<<s6.get_id()<<endl;
    cout<<s6.get_name()<<endl;
    cout<<s6.get_number()<<endl;
    cout<<s6.get_grade()<<endl<<endl;
    break;

   default:
   cout<<"No match Id"<<endl;
    s1.set_number(number);
     if(number>100)
    {
        s1.set_grade("Range is not declare");
    }
   else if(number>=90)
    {
        s1.set_grade("A+");
    }
    else if(number>=85)
    {
        s1.set_grade("A");
    }
     else if(number>=80)
    {
        s1.set_grade("B+");
    }
     else if(number>=75)
    {
        s1.set_grade("B");
    }
     else if(number>=70)
    {
        s1.set_grade("C+");
    }
     else if(number>=60)
    {
        s1.set_grade("C");
    }
     else if(number>=50)
    {
        s1.set_grade("D");
    }
    else
    {
        s1.set_grade("F");
    }

    cout<<s1.get_number()<<endl;
    cout<<s1.get_grade()<<endl<<endl;


}


return main();

}
