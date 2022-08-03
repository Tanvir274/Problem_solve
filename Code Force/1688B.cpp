#include <iostream>
using namespace std;
 
int main() {
	int t,n,s,e,i,a,j;
	cin>>t;
	while (t--) {
		cin>>n;
		s=30;
		for (e=i=0; i<n; ++i) {
			cin>>a;
			if (a%2<1) {
				++e;
				for (j=0; a%2<1; ++j) a/=2;
				s=j<s?j:s;
			}
		}
		cout<<(e<n?e:s+e-1)<<'\n';
	}
}

/*
#include<regex>
int a[7<<15],i,n,k;int main(){for(scanf("%*d");~scanf("%d",&n);printf("%d ",
n+((k=__builtin_ctz(i=*std::min_element(a,a+n))-1)>0?k:k*std::count(a,a+n,i))))
for(i=n;i--;)scanf("%d",a+i),a[i]&=-a[i];}
*/
