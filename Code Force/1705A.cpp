#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>x;
        int output=0, arr[2*n];

        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+2*n);

        

        for(int i=0;i<2*n-1;i++)
        {
          int f =arr[i]+x; 
           
          for(int j=i+1;j<2*n;j++)
          {
            if(arr[j]>=f)
            {
                arr[i]=0;
                arr[j]=0;
                break;

            }
          }
          if(arr[i]!=0)
          {
            output=1;
            break;

          }

        }

        if(output==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }

        


    }
}