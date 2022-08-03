#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,diff=0,res=0;
    cin>>n>>m;
    int arr[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<m;i++)
    {
       for(j=i+1;j<m;j++)
       {
           if(arr[i]>=arr[j])
           {
            diff=arr[i]-arr[j];
           }
           if(arr[i]<arr[j])
           {
            diff=arr[j]-arr[i];
           }
           if(n<=diff )
           {
               if(res==0)
               {
                   res=diff;
               }
               if(diff<res)
               {
                   res=diff;
               }
           }
       }

    }
    cout<<res;
    return main();
}
