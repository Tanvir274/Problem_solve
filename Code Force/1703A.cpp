#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int r=0,l=str.length();
        transform(str.begin(),str.end(),str.begin(), :: toupper);
       
        for(int i=0;i<l;i++)
        {
            if(str[i]=='Y' || str[i]=='E' || str[i]=='S')
            {
                r++;
            }
        }

        if(r==3)
        {
            cout<<"YES"<<endl;
            r=0;
        }
        else
        {
            cout<<"NO"<<endl;
            r=0;
        }

    }
}