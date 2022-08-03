#include<iostream>
using namespace std;
int main()
{
    int a;
    char c =a;
    int b=c;
    cout<<"Enter a number:";
    cin>>a;
    if(a!=b)
        cout<<"oops!:"<<a<<"!="<<b<<"\n";
    else
        cout<<"Wow!we have large characters\n";
}

