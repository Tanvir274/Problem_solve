#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,de=0,in=0;
    char x,x1,x2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>x>>x1>>x2;
       if((x=='+'||x=='X')&&(x1=='+')&&(x2=='+'||x2=='X'))
       {
         in++;
       }
       if((x=='-'||x=='X')&&(x1=='-')&&(x2=='-'||x2=='X'))
       {
         de++;
       }
    }
    cout<<in-de;
}
