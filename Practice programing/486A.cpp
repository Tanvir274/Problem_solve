#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=0;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        if(i%2!=0)
        {
            sum=sum-i;
        }
    }
    cout<<sum;
    return main();
}
