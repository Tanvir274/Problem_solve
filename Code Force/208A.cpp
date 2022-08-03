#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B' )
        {
            str[i]='\0';
            str[i+1]='\0';
            str[i+2]='\0';
            i=i+2;
        }
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='\0')
        {
            cout<<str[i];
            if(str[i+1]=='\0')
            {
                cout<<" ";
            }
        }
    }
    return main();
}
