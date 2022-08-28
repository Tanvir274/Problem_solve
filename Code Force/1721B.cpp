// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,m,x,y,d;
//         cin>>n>>m>>x>>y>>d;

//         if(((n-x)+(m-y))<=d)
//         {
//             cout<<-1<<endl;
//         }
//         else
//         {
//             int ans=((n-x)*y)+ (m-(y+d));
//             cout<<ans<<endl;

//         }

//     }

// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, m, x, y, d;
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> x >> y >> d;
		if ((1 < x - d && y + d < m) || (1 < y - d && x + d < n))
			cout << n + m - 2 << endl;
		else
			puts("-1");
	}
}