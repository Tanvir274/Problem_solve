#include<iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    int sal;

public:
    Employee()
    {
   id;
   name;
   sal;

    }
showInfo()
{
cout<<id<<endl;
cout<<name<<endl;
cout<<sal<<endl;
}
};
class Teacher : public Employee{
private:
    float sal;
public:
    Teacher(float s)
    {
    id=111;
    name="Md Tariq";
    sal=s;

    }
showInfo(){

cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Salary:"<<sal<<endl<<endl;


}

};


class Admin : public Employee
{
private:
    float sal;
public:
    Admin(float s){
        id=222;
    name="Md Rohim";
    sal=s;

    }
showInfo(){

cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Salary:"<<sal<<endl<<endl;


}

};

class Attendant : public Employee{
private:
    float sal;
public:
    Attendant(float s){
        id=333;
    name="Md Karim";
    sal=s;

    }
showInfo(){

cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Salary:"<<sal<<endl<<endl;

}

};



int main(){


Teacher t1(5000.00);
t1.showInfo();

Admin a1(6000.00);
a1.showInfo();

Attendant at1(7000.00);
at1.showInfo();

}
