#include <iostream>
using namespace std;
int n,m,a[1001][1001],r,ans[1001],total;
void dfs(int x){
	for(int i=1;i<=n;++i){
		if(a[x][i]&&ans[i]==0){
			ans[i]=1;
			++total;
			dfs(i);
		}
	}
}
int main(){
	while(cin >> n){
		if(n==0)break;
		for(int i=1;i<=n;++i){
			ans[i]=0;
			for(int j=1;j<=n;++j)
				a[i][j]=0;
		}
		while(cin >> m){
			if(m==0)break;
			while(cin >> r){
				if(r==0)break;
				a[m][r]=1;
			}
		}
		cin >> m;
		for(int i=0;i<m;++i){
			for(int j=1;j<=n;++j)
				ans[j]=0;
			total=0;
			cin >> r;
			dfs(r);
			cout << n-total;
			for(int j=1;j<=n;++j)
				if(ans[j]==0)
					cout << " " << j;
			cout << '\n';
		}
	}
}
