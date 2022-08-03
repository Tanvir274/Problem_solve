#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,d=0,i, n;
    cin>>n;
    char arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]=='A')
        {
            a++;
        }
        if(arr[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton";
    }
    if(d>a)
    {
        cout<<"Danik";
    }
    if(a==d)
    {
        cout<<"Friendship";
    }
    return main();
}
