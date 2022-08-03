#include<iostream>

using namespace std;

int main()
{
    int n1,n2,m=1;
    cout<<"Enter your first number: ";
    cin>>n1;
    cout<<"Enter your second number: ";
    cin>>n2;
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            m=i;
        }
    }
    cout<<"HCF for "<<n1<<" &&  "<<n2<<" :"<<m;
    cout<<endl<<endl;
    return main();
}

