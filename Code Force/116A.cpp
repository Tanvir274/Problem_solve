#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n,ai,bi,c=0,res=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ai>>bi;
        c=c+(bi-ai);
        if(c>res)
        {
            res=c;
        }
    }
    cout<<res;
}
