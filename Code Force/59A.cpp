#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i,u=0,l=0,ll=str.length();

    for(i=0;i<ll;i++)
    {
        if(int(str[i])>=97 && int(str[i])<=122)
        {
            l++;
        }
        if(int(str[i])>=65 && int(str[i])<=90)
        {
            u++;
        }
    }
    if(u>l)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<str;
    }
    if(l>=u)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str;
    }
    return main();
}
