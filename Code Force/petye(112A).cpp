/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,c1=0,c2=0,r=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for(i=0;i<s1.length();i++)
    {
        c1=c1+int(s1[i]);
        c2=c2+int(s2[i]);

    }
    cout<<c1<<"  "<<c2;
    if(c1>c2)
    {
        r=1;
    }
    else if(c2>c1)
    {
        r=-1;
    }
    else
    {
       r=0;
    }
    cout<<r;
    return main();
}
*/
//solve

#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define int long long

string a, b;

void solve() {
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		a[i] = tolower(a[i]); b[i] = tolower(b[i]);
	}
	cout << a.compare(b);
}

main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int test(1);
//	cin >> test;
	for(int i=1; i<=test; i++) solve();
}
