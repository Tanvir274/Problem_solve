#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int b,p,f=1;

    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter power: ";
    cin>>p;

    for(int i=1; i<=p;i++)
    {
        f=f*b;
    }
    cout<<"Result :"<<f;
    cout<<endl<<endl;

    cout<<"Result: "<<pow(b,p);
    cout<<endl;
}

