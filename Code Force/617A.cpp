#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y=0,z=0,x;
    cin>>x;
    y=x%5;
    z=x/5;
    if(y==0 && z!=0)
    {
        cout<<z;
    }
    if(y!=0 && z==0)
    {
        cout<<1;
    }
    if(y!=0 && z!=0)
    {
        cout<<z+1;
    }

    return main();
}
