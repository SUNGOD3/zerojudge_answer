#include <iostream>
using namespace std;
int ans,a[101],n,m,w[10001],it;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	it=m;
	for(int i=0;i<n;++i){
		cin >> w[i];
		if(i<it){
			a[i]=w[i];
		}
	}
	while(it<=n){
		int tmp=101;
		for(int i=0;i<m;++i){
			tmp=min(tmp,a[i]);
		}
		ans+=tmp;
		for(int i=0;i<m;++i){
			a[i]-=tmp;
			if(a[i]==0){
				if(it<n)a[i]=w[it];
				++it;
			}
		} 
	}
	int tmp=0;
	for(int i=0;i<m;++i){
		tmp=max(a[i],tmp);
	}
	cout << ans+tmp;
} 
