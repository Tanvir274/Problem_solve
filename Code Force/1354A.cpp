#include<iostream>
using namespace std;

int main()
{
    int t,res=0;
    cin>>t;

    int arr[t];

    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<t;i++)
    {
        if(arr[i]>2 && arr[i]%2==0)
        {
            res=arr[i]/2;
            cout<<res-1<<endl;
        }
        else if(arr[i]>2 && arr[i]%2!=0)
        {
            res=arr[i]/2;
            cout<<res<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }

    cout<<endl;
    return main();
}