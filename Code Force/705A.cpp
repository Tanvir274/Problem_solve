#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0 && i<n)
        {
            cout<<"I hate that ";
        }
        if(i%2!=0 && i==n)
        {
            cout<<"I hate ";
        }
        if(i%2==0 && i<n)
        {
            cout<<"I love that ";
        }
        if(i%2==0 && i==n)
        {
            cout<<"I love ";
        }

    }
    cout<<"it";
    return main();
}
