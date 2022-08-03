#include<iostream>

using namespace std;

int main()
{
    int n1,n2,m=1;
    cout<<"Enter your first number: ";
    cin>>n1;
    cout<<"Enter your second number: ";
    cin>>n2;
    for(int i=n1;;i++)
    {
        if(i%n1==0&&i%n2==0)
        {
            m=i;
            break;
        }
    }
    cout<<"LCM for "<<n1<<" &&  "<<n2<<" :"<<m;
    cout<<endl<<endl;
    return main();
}
