#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
struct yt{
	long long int a,b;
};
inline long long int read(){
	long long int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline bool cmp(yt x,yt y){
	if(x.a*y.b>x.b*y.a)
		return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int n,ans=0,t=0;n=read();
	yt a[n];
	for(int i=0;i<n;++i){
		a[i].a=read();
		a[i].b=read();
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i){
		t+=a[i].b;
		ans+=a[i].a*t;
	}
	cout << ans;
} 
