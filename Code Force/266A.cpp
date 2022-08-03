#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    char ch[n];
   for(i=0;i<n;i++)
   {
       cin>>ch[i];
   }
   for(i=0;i<n;i++)
   {
       if((ch[i]=='R'&&ch[i+1]=='R')||(ch[i]=='G'&&ch[i+1]=='G')
            ||(ch[i]=='B'&&ch[i+1]=='B'))
       {
           c++;
       }

   }
   if(c>0)
   {
       cout<<c;
   }
   else
   {
    cout<<0;
   }
}
