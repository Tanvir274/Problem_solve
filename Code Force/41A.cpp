#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int r=0,l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]!=t[l-i-1])
        {
           r=1;
           break;
        }
    }
    if(r==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return main();
}
