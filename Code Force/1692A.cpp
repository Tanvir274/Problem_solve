#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[4];

    while(n--)
    {
        cin>>arr[0];
        for(int i=1;i<4;i++)
        {
            cin>>arr[i];
            if(arr[i]>arr[0])
            {
                count++;
            }
        }

        cout<<count<<endl;
        count=0;

        

    }
}