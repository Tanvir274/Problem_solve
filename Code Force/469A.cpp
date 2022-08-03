#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q ,i,count=0;;
    cin>>n;

    int arr[2*n];

    cin>>p;
    for(i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(i=p;i<p+q;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+(p+q));

    for(i=0;i<p+q;i++)
    {
        if(arr[i] !=arr[i+1])
        {
            count++;

        }
    }

    if(n==count)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";

    }

    cout<<endl;
    return main();



}
