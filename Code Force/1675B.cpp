#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#define PI acos(-1)
#define INF 0x3f3f3f3f
#define LL_INF (1<<63)-1
using namespace std;
typedef long long ll;
const double eps = 1.0e-6;
typedef unsigned long long ull;
template<class T>
inline void read(T& x) {
	x = 0; int sign = 1; char c;
	do { c = getchar(); if (c == '-') sign = -1; } while (!isdigit(c));
	do { x = x * 10 + c - '0', c = getchar(); } while (isdigit(c));
	x *= sign;
}
inline ll gcd(ll a, ll b) {
	return b ? gcd(b, a % b) : a;
}
inline ll QuickPow(ll base, ll power, ll mod)
{
	ll ans = 1;
	while (power > 0)
	{
		if (power & 1)	ans = (ans * base);
		power >>= 1;
		base = (base * base);
	}
	return ans;
}
 
int t, n;
ll a[50];
void solve()
{
	for (int i = 1; i <= n; i++) read(a[i]);
	a[n + 1] = 2*INF;
	int cnt = 0;
	while (true) {
		bool flag = true;
		for (int i = 1; i <= n; i++) {
			if (a[i] >= a[i + 1]) {
				if (a[i] / 2 == a[i]) {
					puts("-1");
					return;
				}
				cnt++;
				a[i] /= 2;
				flag = false;
			}
		}
		if (flag) {
			printf("%d\n", cnt);
			return;
		}
	}
}
int main()
{
	read(t);
	a[0] = -1;
	while (t--)
	{
		read(n);
		solve();
	}
	return 0;
}