/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,d,m,res;
    cin>>n>>k;

    d=n/2;
    m=n%2;

    if(m==0)
    {
        if(d>=k)
        {
            res=(k*2)-1;
            cout<<res;
        }
        else
        {
            res=(k-d)*2;
            cout<<res;
        }
    }
    if(m!=0)
    {
        if((d+1)>=k)
        {
            res=(k*2)-1;
            cout<<res;
        }
        else
        {
            res=(k-(d+1))*2;
            cout<<res;
        }
    }
    cout<<endl;
    return main();
}*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,k,res;
    cin>>n>>k;
 
    if(n%2==0)
    {
        if(k<=(n/2))
        {
            res=k+(k-1);
            cout<<res;
        }
        else
        {
            res=2*(k-(n/2));
            cout<<res;
        }
    }
    if(n%2!=0)
    {
        if(k<=(n/2+1))
        {
            res=k+(k-1);
            cout<<res;
        }
        else
        {
            res=2*(k-(n/2+1));
            cout<<res;
        }
    }
}
