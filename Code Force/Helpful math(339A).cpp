#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i,a,j=s.length();

    a=(j/2)+1;

  int t=0, arr[a];

  for(i=0;i<j;i++)
  {
      if(i%2==0)
      {
          arr[t]=s[i];
          t++;
      }
  }
  sort(arr, arr+a);
  for(i=0;i<a;i++)
  {
      if(i==(a-1))
      {
         cout<<arr[i]-48;
      }
      else
      {
          cout<<arr[i]-48<<"+";
      }
  }
}

