#include <iostream>
using namespace std;
int n,k,ans,a,bit[1005];
int lw(int x){
	return x&-x;
}
void up(int x){
	for(int i=x;i>0;i-=lw(i))
		++bit[i];
}
int sum(int x){
	int rt=0;
	for(int i=x;i<=1000;i+=lw(i))
		rt+=bit[i];
	return rt;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> k;
	for(int i=0;i<n;++i){
		cin >> a;
		ans+=sum(a*k+1);
		up(a);
	}
	cout << ans;
}
