#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp=1;
    cin>>n;

    pair<string,string> str[n];


    for(int i=0;i<n;i++)
    {
        cin>>str[i].first;
    }

    
    for(int i=0;i<n-1;i++)
    {
        if(str[i].first!="0")
        {
            for(int j=i+1;j<n;j++)
            {
                if(str[i].first==str[j].first)
                {
                    string s=to_string(temp);
                    str[j].second=str[j].first+s;
                    str[j].first="0";
                    temp++;
                }

            }
            str[i].second="OK";
            temp=1;

        }
        

    }

    for(int i=0;i<n-1;i++)
    {
        cout<<str[i].second<<endl;
    }

    if(str[n-1].first !="0")
    {
        cout<<"OK";
    }
    else
    {
        cout<<str[n-1].second;

    }

    return main();
}