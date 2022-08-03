#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    while(m--)
    {
        int x,y,res=0;
        cin>>x>>y;

        if(x<y)
        {
            for(int i=x;i<y;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    res=res+(arr[i]-arr[i+1]);
                    

                }
                
            }
        }
        else
        {
            for(int i=x;i>y;i--)
            {
                if(arr[i]>arr[i-1])
                {
                    res=res+(arr[i]-arr[i-1]);
                    
                }
                
            }

        }

        cout<<res<<endl;
        
    }
}