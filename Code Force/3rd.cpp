#include <bits/stdc++.h>
using namespace std;

void FirstAndLast(string str,int l)
{
    int i;
    char f,s;

    for (i = 0; i < str.length(); i++)
    {

        if (i == 0)
        {
         f=str[i];
        }


        if (i == str.length() - 1)
        {
        s=str[i];
        }
    }
    cout<<f<<l-2<<s<<endl;
}

int main()
{
    int n;
    cin>>n;
    string arr[n];

    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i].size()>10)
        {
            int l=arr[i].size();
            string str =arr[i] ;
            FirstAndLast(str,l);
        }
        else
        {
            cout<<arr[i]<<endl;

        }
    }
}

