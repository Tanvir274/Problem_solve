#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int f=1,a=0, i,l=str.length();

    for(i=0;i<l;i++)
    {
        if(!(int(str[i])>=65 && int(str[i])<=90))
        {
            a=1;
        }
        if(i==0 &&(int(str[i])>=97 && int(str[i])<=122))
        {
            for(i=1;i<l;i++)
            {
                if(int(str[i])>=65 && int(str[i])<=90)
                {
                    f++;
                }
            }
        }
    }

    if(a==0)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str;
    }
    else if(f==l)
    {
        int v=int(str[0])-32;
        cout<<char(v);
        for(i=1;i<l;i++)
        {
          v= int(str[i])+32;
          cout<<char(v);
        }
    }
    else
    {
       cout<<str;
    }
    return main();

}
