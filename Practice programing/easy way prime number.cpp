#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,r=0;
    cin>>n;
    if(n<=1)
    {
        cout<<"NO"<<endl;
        r=1;
    }
    if(n>=2)
    {
       for(int i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
               cout<<"NO"<<endl;
               r=1;
               break;
           }
       }
    }
    if(r==0)
    {
       cout<<"YES"<<endl;
    }
    return main();
}
