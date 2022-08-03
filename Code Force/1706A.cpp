#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        string s="BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;i++)
        {
            int a=arr[i] ,b=m+1-arr[i];

            if(a<b && s[a-1]=='B')
            {
                s[a-1]='A';

            }
            else
            {
                s[b-1]='A';

            }
           
            
        }

        for(int i=0;i<m;i++)
        {
            cout<<s[i];
        }
        cout<<endl;


    }
}