#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        int cal=q-p;
        if(cal>=2)
        {
            c++;
            cal=0;
        }
    }
    cout<<c;
    return main();
}
