#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    long long int count=0;
    cin>>n>>m;

    int arr[m];

    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    count=arr[0]-1;
    for(int i=1;i<m;i++)
    {
        if(arr[i-1]<arr[i])
        {
           count=count+(arr[i]-arr[i-1]) ;
        }
        if(arr[i-1]>arr[i])
        {
           count=count+(n-arr[i-1])+arr[i] ;
        }
     
    }
    cout<<count;
    return main();

}