#include <bits/stdc++.h>
#define ll long long
#define mxn 1000005
#define MAXN 1000005
using namespace std;
ll n,m,t,x,y,z,k,a[mxn],b[mxn],pre[mxn],pre2[mxn];
int main(){
	scanf("%lld",&n);
	for(ll i=1;i<=n;++i){
		scanf("%lld",&a[i]);
		pre[i]+=pre[i-1]+a[i];
		pre2[i]+=pre2[i-1]+pre[i];
	}
	scanf("%lld",&m);
	for(ll i=1;i<=m;++i){
		scanf("%lld %lld",&x,&y);
		printf("%lld\n",pre2[y]-pre2[x-1]-pre[x-1]*(y-x+1));
	}
	return 0;
}
