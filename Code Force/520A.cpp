#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;

    string str;
    cin>>str;

    if(n<26)
    {
        cout<<"NO";
    }
    else
    {
        transform(str.begin(),str.end(),str.begin(), :: tolower);

        sort(str.begin(),str.end());

        for(int i=0;i<n;i++)
        {
            if(str[i] !=str[i+1])
            {
                count++;
            }
        }
        if(count==26)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";

        }


    }

}