#include<iostream>
using namespace std;

int main()
{
    int i,add,res,car=0,carr=0;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,9};
    int r[5],n[5];
    for(i=0;i<=4;i++)
    {
        r[i]=0;
    }

    cout<<"REVERSE FIRST ARRAY:";
    for(i=4;i>=0;i--)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl<<"REVERSE SEAND ARRAY:";
    for(i=4;i>=0;i--)
    {
        cout<<b[i]<<"  ";
    }
    cout<<endl<<"added two array reversely :";

    for(i=0;i<=4;i++)
    {
        add=a[i]+b[i]+car;
        if(add>=10)
        {
           res=add%10;
           car=add/10;
           r[i]=res;
        }
        else
        {
            r[i]=add;

        }

    }
    for(i=4;i>=0;i--)
    {
        if(i>4)
        {
            cout<<r[i];
        }
        else
        {
            cout<<r[i]+10;
        }
    }
    cout<<endl<<"Normal add two array: ";

    for(i=4;i>=0;i--)
    {
        add=a[i]+b[i]+carr;
        if(add>=10)
        {
           res=add%10;
           carr=add/10;
           n[i]=res;
        }
        else
        {
            n[i]=add;

        }

    }
    for(i=0;i<=4;i++)
    {
         cout<<n[i];
    }
}
