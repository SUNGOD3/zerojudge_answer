#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long int n[3001],target;
inline bool bs(int l,int r){
	if(l>r)return 0;
	int m=(l+r)>>1;
	if(n[m]==target)
		return 1;
	else if(n[m]>target)
		return bs(l,m-1);
	return bs(m+1,r);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,ans(0),i,j;
	cin >> a;
	for(i=0;i<a;++i)
		cin >> n[i];
	sort(n,n+a);
	for(i=0;i<a;++i){
		for(j=i+1;j<a;++j){
			target=n[i]*n[i]+n[j]*n[j];
			double c(target);
			c=sqrt(c);
			target=sqrt(target);
			double c2(target);
			if(c2!=c)continue;
			if(bs(0,a))++ans;
		}
	}
	cout << ans;
} 
