#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;
        int arr[4];

        cin>>arr[1]>>arr[2]>>arr[3];

        int ch=0;

        if(arr[x]>0)
        {
            ch=arr[x];
            if(arr[ch]>0)
            {
                ch=arr[ch];
                if(arr[ch]==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

        
    }
}