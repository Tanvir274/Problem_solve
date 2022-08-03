#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int i,j,c=0,l=st.length();
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(st[i]==st[j]&& st[j]!='\0')
            {
             c++;
             st[j]='\0';
            }
        }
    }
    int r=l-c;

    if(r%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
