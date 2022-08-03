#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,aa=0,bb=0,a[3],b[3];

    for(i=0; i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0; i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
       if(a[i]>b[i])
        {
          aa++;
        }
       else if(a[i]<b[i])
        {
          bb++;
        }
       else
       {
           aa;
           bb;
       }

    }

    cout<<aa<<" "<<bb;
}
