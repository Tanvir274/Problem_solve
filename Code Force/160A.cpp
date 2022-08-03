#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  i, arr[n];
    int res=0,sum=0,det=0,coin=0;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    res=(sum/2)+1;

    for(i=n-1;i>=0;i--)
    {
        det=det+arr[i];
        coin++;
        if(det>=res)
        {
            break;

        }

    }
    cout<<coin;

    cout<<endl; 
    return main();
}
