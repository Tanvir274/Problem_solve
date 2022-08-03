#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <set>
#include <vector>
#define N 1001000
#define MP make_pair
#define PII pair<int, int>
typedef long long ll;
template <typename T> inline void read(T &x) {
	x = 0; char c = getchar(); bool flag = false;
	while (!isdigit(c)) { if (c == '-')	flag = true; c = getchar(); }
	while (isdigit(c)) { x = (x << 1) + (x << 3) + (c ^ 48); c = getchar(); }
	if (flag)	x = -x;
}
using namespace std;
int n, m, k;
int failcnt = 0;
int col[N];
vector<PII> E1;
PII E2[N];
int Etot;
inline bool cmp(const PII &x, const PII &y) {
	return col[x.first] == col[y.first] ? col[x.second] < col[y.second] :
			col[x.first] < col[y.first];
}

bool vis[N];
int fath[N << 1], siz[N << 1];
int find(int cur) {
	return fath[cur] == cur ? cur : find(fath[cur]);
}
int stk[N << 2], stop;
inline void merge(int x, int y) {
	x = find(x), y = find(y);
	if (x == y)	return ;
	if (siz[x] > siz[y])	swap(x, y);
	fath[x] = y; siz[y] += siz[x];
	stk[++stop] = x;
}
ll ans;
PII E3[N];
int Ect;
inline void cancl(int x) {
	siz[fath[x]] -= siz[x];
	fath[x] = x;
}
inline void work(int cx, int cy) {
	if (vis[cx] || vis[cy])	return ;
	int memo = stop;
	while (Ect) {
		int u = E3[Ect].first, v = E3[Ect].second;
		int uu = u + n, vv = v + n;
		merge(u, vv), merge(v, uu);
		if (find(u) == find(uu) || find(v) == find(vv)) {
			while (stop > memo) {
				cancl(stk[stop]);
				--stop;
			}

			--ans;
			return ;
		}
		--Ect;
	}
	while (stop > memo) {
		cancl(stk[stop]);
		--stop;
	}
}

int main() {
	read(n), read(m), read(k);
	for (int i = 1; i <= n; ++i)	read(col[i]);
	for (int i = 1; i <= m; ++i) {
		int u, v; read(u), read(v);
		if (col[u] > col[v])	swap(u, v);
		if (col[u] == col[v])	E1.push_back(MP(u, v));
		else	E2[++Etot] = MP(u, v);
	}
	for (int i = 1; i <= n + n; ++i)	fath[i] = i, siz[i] = 1;
	for (unsigned int i = 0; i < E1.size(); ++i) {
		int u = E1[i].first, v = E1[i].second;
		int uu = u + n, vv = v + n;
		merge(u, vv), merge(uu, v);
		int fu = find(u), fv = find(v);
		int fuu = find(uu), fvv = find(vv);
		if (fu == fuu || fv == fvv) {
			if (!vis[col[u]])
				vis[col[u]] = true, ++failcnt;
		}
	}
	sort(E2 + 1, E2 + 1 + Etot, cmp);
	int p = 1;
	while (p <= Etot) {
		Ect = 0;
		int ptr = p, jzp = col[E2[p].first], zzz = col[E2[p].second];
		while (ptr <= Etot && col[E2[ptr].first] == jzp && col[E2[ptr].second] == zzz)
			E3[++Ect] = E2[ptr], ++ptr;
		p = ptr;
		work(jzp, zzz);
	}
	ans += (1ll * (k - failcnt) * (k - failcnt - 1) >> 1);
	printf("%lld\n", ans);
	return 0;
}
