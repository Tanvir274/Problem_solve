#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int c=0, arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        {
            c++;
        }
    }
    cout<<c;
    return main();
}
