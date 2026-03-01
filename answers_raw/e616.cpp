#include <iostream>
#include <algorithm>
using namespace std;
int a[100001],n,c;
inline bool check(int k){
	int tmp=c,s=0;
	for(int i=0;i<n;++i){
		if(a[i]>s){
			--tmp;
			s=a[i]+k;
			if(tmp<=0)return 1;
		}
	}
	return 0;
}
inline int ans(int l,int r){
	if(l>r)return l;
	int m=(l+r)/2;
	if(check(m)==0)
		return ans(l,m-1);
	else
		return ans(m+1,r);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> c;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	cout << ans(0,1000000000) << '\n' ;
} 
