#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,v=1,c=1, arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]<=arr[i+1] && i<=n-2 )
       {
           c++;
       }
       if(arr[i]>arr[i+1] || i==n-1)
       {
           if(c>=v)
           {
               v=c;
               c=1;
           }
           else
           {
               c=1;
           }
       }
    }
    cout<<v;
    return main();
}
