#include <iostream>
using namespace std;
int n,m,k,w[25][25],ans,x,y,used[25];
void dfs(int it,int v){
	if(ans<v){
		ans=v;
		/*for(int i=0;i<v;++i){
			cout << used[i] << " ";
		}
		cout << "\n";*/
	}
	for(int i=it+1;i<=n;++i){
		int ac=1;
		for(int j=0;j<v&&ac;++j){
			if(w[i][used[j]]==0)ac=0;
		}
		if(ac){
			used[v]=i;
			dfs(i,v+1);
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<=n;++i){
		w[i][i]=1;
	}
	for(int i=0;i<m;++i){
		cin >> x >> y;
		w[x][y]=w[y][x]=1;
	}
	for(int i=1;i<=n;++i){
		used[0]=i;
		dfs(i,1);
	}
	cout << ans;
} 
