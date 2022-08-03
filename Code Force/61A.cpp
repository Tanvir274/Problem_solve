#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int l=a.length();

    for(int i=0;i<l;i++)
    {

        if(a[i]=='0' && b[i]=='1')
        {
          cout<<1;
        }
        else if(a[i]=='1' && b[i]=='0')
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }

    }

    return main();
}
