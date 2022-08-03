#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,
        i,Tt=0,Oo=0,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            a++;
        }
        if(arr[i]==2)
        {
            b++;
        }
        if(arr[i]==3)
        {
            c++;
        }
        if(arr[i]==4)
        {
            d++;
        }
    }

    if(c>0 && a>=0)
    {
        if(c>=a)
        {
            a=0;
        }
        if(a>c)
        {
            a=a-c;
        }
    }
    if(b>0)
    {
        int x=b%2;
        int y=b/2;
        if(x==0 && y!=0)
        {
            Tt=y;
        }
        if(x!=0 && y!=0)
        {

            Tt=y+1;
            if(a==1)
            {
                a=0;
            }
            if(a>1)
            {
                a=a-2;
            }
        }
        if(x!=0 && y==0)
        {

            Tt=1;
            if(a==1)
            {
                a=0;
            }
            if(a>1)
            {
                a=a-2;
            }
        }
    }
    if(a>0)
    {
        int x=a%4;
        int y=a/4;
        if(x==0 && y!=0)
        {
            Oo=y;
        }
        if(x!=0 && y!=0)
        {
            Oo=y+1;
        }
        if(x!=0 && y==0)
        {
            Oo=1;
        }
    }
cout<<d+c+Tt+Oo;
return main();
}
