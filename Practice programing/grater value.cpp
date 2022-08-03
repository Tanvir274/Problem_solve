#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"ENTER YOUR FIRST NUMBER : "<<endl;

    cin>>a;

    cout<<"ENTER YOUR SECOND NUMBER : "<<endl;

    cin>>b;

    if(a>b)
    {
        cout<<"("<<a<<")"<<" First number is grater than second Number "<<"( "<<b<<")";

    }
    else if(b>a)
    {
        cout<<"("<<b<<")"<<" Second number is grater than first Number "<<"( "<<a<<")";
    }
    else
    {
        cout<<"TWO NUMBER IS EQUAL";
    }
    cout<<endl<<"............"<<endl;
    return main();
}
