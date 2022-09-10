#include <iostream>
using namespace std;
int a[1001],ans;
int fa(int n){
	if(n==a[n])return n;
	return a[n]=fa(a[n]);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m,x,y;
	cin >> n >> m;
	for(int i=0;i<n;++i){
		a[i]=i;
	} 
	while(m--){
		cin >> x >> y;
		int ca=fa(a[x]),cb=fa(a[y]),cc=min(ca,cb);
		for(int i=0;i<n;++i){
			if(fa(a[i])==ca||fa(a[i])==cb){
				a[i]=cc;
			}
		}
	}
	for(int i=0;i<n;++i){
		if(fa(a[i])==0){
			++ans;
		}
	}
	cout << ans;
} 
