#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],dMax[n],dMin[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int Max=b[0],Min=b[0];
        
        for(int i=1;i<n;i++)
        {
            Max=max(Max,b[i]);
            Min=min(Min,b[i]);
        }

        for(int i=0;i<n;i++)
        {
            dMin[i]=Min-a[i];
            dMax[i]=Max-a[i];

        }

        for(auto i : dMin)
        {
            cout<<i<<" ";
        }

        cout<<endl;
        for(auto i : dMax)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }
}