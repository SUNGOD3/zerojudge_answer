#include <iostream>
using namespace std;
int n,m,k,q[51][51],ans=10000001,f[51][51];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> k;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin >> q[i][j];
	while(k--){
		for(int i=0;i<m;++i)
			for(int j=0;j<m;++j)
				f[i][j]=0;
		int tn,tmp=0;
		for(int i=0;i<n;++i){
			cin >> tn;
			tmp+=q[i][tn];
			for(int j=0;j<m;++j)
				if(tn!=j)f[tn][j]+=q[i][j];
		}
		for(int i=0;i<m;++i){
			for(int j=0;j<m;++j){
				if(f[i][j]>1000)
					tmp+=f[i][j]*2+1000;
				else
					tmp+=f[i][j]*3;
			}
		}
		ans=min(tmp,ans);
	}
	cout << ans ; 
} 
