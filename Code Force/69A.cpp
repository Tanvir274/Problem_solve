#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int xi[n],yi[n],zi[n],
        x=0,y=0,z=0;

    for(i=0;i<n;i++)
    {
        cin>>xi[i]>>yi[i]>>zi[i];
    }
    for(i=0;i<n;i++)
    {
        x=x+xi[i];
        y=y+yi[i];
        z=z+zi[i];
    }
    
    if(x==0 & y==0 & z==0)
    {
        cout<<"YES";
    }
    else
    {
       cout<<"NO";
    }

}
