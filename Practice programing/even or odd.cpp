#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER YOUR NUMBER : ";
    cin>>a;
    cout<<endl;


    if(a==0)
    {
        cout<<"NEITHER EVEN NOR ODD";
    }
    else if(a%2==0)
    {
        cout<<"EVEN NUMBER ";
    }
    else
    {
        cout<<"ODD NUMBER";
    }
    cout<<endl;
    return main();
}
