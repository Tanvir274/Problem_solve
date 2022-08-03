#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    if(n%2!=0)
    {
        long long int res=n/2+1;
        cout<<-res;
    }

    return main();
}
