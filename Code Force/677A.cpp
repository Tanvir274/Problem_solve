#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int i,c=0, arr[n];

   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]<=t)
       {
           c=c+1;
       }
       if(arr[i]>t && arr[i]<=2*t)
       {
           c=c+2;
       }
   }
   cout<<c;
   return main();
}
