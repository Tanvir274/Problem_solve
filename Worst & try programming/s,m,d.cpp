#include<iostream>
using namespace std;

void sum (float a,float b)
{
    cout <<" Sum: "
         <<a+b
         <<endl;
}
void multi(float a,float b)
{
    cout <<" multiplication: "
         <<a*b
         <<endl;

}
void divide(float a,float b)
{
    cout <<" Divide: "
         <<a/b
         <<endl;

}

int main()
{
    float a,b;
    cout<<"Enter two number :";
    cin>>a>>b;

    sum (a,b);
    multi (a,b);
    divide (a,b);
}
