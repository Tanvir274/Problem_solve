#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,a,m1=0,n1=0,r=0,f=1;
    cin>>n>>m>>a;
    if(n%a==0 && m%a==0)
    {
        r=(m*n)/(a*a);
        cout<<r;
    }
    else
    {
        if(n%a !=0 && m%a !=0)
        {

            n1=n/a;
            n=a+(n1*a);
            m1=m/a;
            m=a+(m1*a);
            r=(m*n)/(a*a);
            cout<<r;

        }
        else if(n%a ==0 && m%a !=0)
        {

            m1=m/a;
            m=a+(m1*a);
            r=(m*n)/(a*a);
            cout<<r;
        }
        else
        {
            n1=n/a;
            n=a+(n1*a);
            r=(m*n)/(a*a);
            cout<<r;
            }
        }
}
