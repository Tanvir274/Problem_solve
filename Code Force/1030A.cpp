#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, c=0, n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            c=1;
        }
    }

    if(c==0)
    {
        cout<<"EASY";
    }
    if(c==1)
    {
        cout<< "HARD";
    }
    return main();
}
