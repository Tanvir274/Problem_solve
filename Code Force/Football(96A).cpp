#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i,c=0,f=0,j=a.length();

    for(i=0;i<j;i++)
    {
        if(a[i]=='1')
        {

            while(a[i] =='1')
            {
               c++;
               i++;
            }
            if(c<7)
            {
               c=0;
            }
            else
            {
                cout<<"YES";
                f=1;
                break;
            }
        }

        if(a[i]=='0')
        {
            while(a[i]=='0')
            {
               c++;
               i++;
            }
            if(c<7)
            {
                c=0;
                i--;
            }
            else
            {
                cout<<"YES";
                f=1;
                break;
            }

        }

    }
    if(f==0)
    {
        cout<<"NO";
    }
}

