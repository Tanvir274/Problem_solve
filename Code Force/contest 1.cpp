#include <bits/stdc++.h>
using namespace std;

int a[1010],b[1010];

int main()
{
int t;
int n,i,j,k,x,s,f;
cin>>t;
while (t--)
	{
	cin>>n>>x;
	for (i=1;i<=n;i++)cin>>a[i];
	for (j=n;j>=1;j--)cin>>b[j];

	f=0;
	for (i=1;i<=n;i++)if (a[i]+b[i]>x)f=1;
	if (f)cout<<"No\n";else cout<<"Yes\n";

	}


return 0;
}
