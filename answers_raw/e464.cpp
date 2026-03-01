#include <bits/stdc++.h>
using namespace std;
long long n,r,a[200005];
bool ok(long long m){
	int la=1;
	while(a[la]-a[0]<=r)++la;
	--la;
	--m;
	for(int i=la+1;i<n;++i){
		if(a[i]-a[la]>r){
			if(--m<0)return 0;
			int ti=i;
			while(i<=n&&a[i]-a[ti]<=r)++i;
			--i;
			la=i;
		}
	}
	return 1;
}
long long bs(long long l,long long r){
    if(l>r)return l;
    long long m=(l+r)/2;
    return (ok(m)?bs(l,m-1):bs(m+1,r));
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> r >> n){
		if(n==-1&&r==-1)return 0;
		if(r<0)r=0;
		if(n<=0){
			cout << "0\n";
			continue;
		}
		else if(n==1){
			cout << "1\n";
			continue;
		}
		for(int i=0;i<n;++i)
			cin >> a[i];
		sort(a,a+n);
		cout << bs(1,n) << "\n";
	}
	return 0;
} 
