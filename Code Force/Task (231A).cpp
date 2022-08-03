#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,v,t,s=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>p>>v>>t;
    s=p+v+t;
    if(s>1)
    {
       c++;
    }
    }
    cout<<c;
}
