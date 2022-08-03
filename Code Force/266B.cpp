#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    for(i=0;i<t;i++)
    {
        for(int j=0;j<str.length();j++)
        {

                if(str[j]=='B' && str[j+1]=='G')
                {
                    str[j]='G';
                    str[j+1]='B';

                    j=j+1;
                }

        }
    }
    for(i=0;i<str.length();i++)
    {
        cout<<str[i];
    }
    return main();

}
