#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;

    cin>>n;
    unsigned long long  int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
return main();

}
