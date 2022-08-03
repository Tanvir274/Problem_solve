#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter your number : ";
    int n,c=1;
    cin>>n;

    if(n<=1)
    {
      c=0;
    }
    else
    {
    for(int i=2;i*i<=n;i++)
    {
       if(n%i==0)
       {
           c=0;
           break;
       }
    }
    }

    if(c==0)
    {
        cout<<endl<<"Not prime";
    }
    else
    {
       cout<<endl<<"Prime";
    }
}
