#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int sum=0;

    for(int i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    

    if(n>=sum)
    {
        cout<<0;
    }
    else
    {
        cout<<sum-n;

    }
   

}
