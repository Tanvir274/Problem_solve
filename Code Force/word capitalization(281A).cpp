#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int i, c=0,l=st.length(), j=int(st[0]);

    if(j>=97)
    {
       c=j-32;
    }
    else
    {
       c=j;
    }
    cout<<char(c);
    for(i=1;i<l;i++)
    {
       cout<<st[i];
    }
}
