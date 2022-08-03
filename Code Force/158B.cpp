#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0,n,m=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] != arr[i + 1])
            m = 0;
    }
    if(m==1)
    {
        if(arr[0]==1)
        {
            int x=n%4,y=n/4;
            if(x==0)
            {
                cout<<y;
            }
            else
            {
                cout<<y+1;
            }
        }
        if(arr[0]==2)
        {
            int x=n%2,y=n/2;
            if(x==0)
            {
                cout<<y;
            }
            else
            {
                cout<<y+1;
            }
        }
        if(arr[0]==3 || arr[0]==4)
        {
            cout<<n;
        }
    }
    else
    {
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
        if(arr[i]==4)
        {
            c++;
            arr[i]=0;
        }
        if(arr[i]<4)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==4)
                {
                    c++;
                    arr[i]=0;
                    arr[j]=0;
                    break;
                }
            }
        }
        if(arr[i]!=4 )
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]<=4)
                {
                    arr[j]=arr[i]+arr[j];
                    arr[i]=0;
                    break;
                }
            }
        }
        }
    }

    for(i=0;i<n;i++)
    {
       if(arr[i]>0)
       {
          c++;
       }
    }
    cout<<c;
    }
    return main();
}
