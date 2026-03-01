#include <bits/stdc++.h>
using namespace std;
int n,w[4][2]={{0,1},{0,-1},{1,0},{-1,0}},ans;
bool cu[20],has[105][105];
char a[105][105];
void bfs(){
	int ct=0,cnt=1;
	queue <pair <int,int>> q; // used x y
	memset(has,0,sizeof(has));
	if(cu[a[0][0]]==0)return;
	q.push({0,0});
	while(!has[n-1][n-1]&&!q.empty()&&ct<ans){
		++ct;
		queue <pair <int,int>> nxt;
		while(!q.empty()){
			pair <int,int> tp = q.front();
			int x=tp.first,y=tp.second;
			q.pop();
			if(has[x][y])continue;
			has[x][y]=1;
			for(int i=0;i<4;++i){
				int xt=x+w[i][0],yt=y+w[i][1];
				if(xt>=0&&xt<n&&yt>=0&&yt<n&&cu[a[xt][yt]])
					nxt.push({xt,yt});
			}
		}
		q=nxt;
	}
	if(has[n-1][n-1])ans=ct;
	return;
}
void dfs(int it){
	if(it==10){
		bfs();
		return;
	}
	cu[it]=1;
	cu[it+10]=0;
	dfs(it+1);
	cu[it]=0;
	cu[it+10]=1;
	dfs(it+1);
}
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				cin >> a[i][j];
				if(a[i][j]>='a')a[i][j]=a[i][j]-'a'+'A'+10;
				a[i][j]-='A';
			}
		if(abs(a[0][0]-a[n-1][n-1])==10){
			cout << "-1\n";
			continue;
		}
		ans=10000;
		dfs(0);
		if(ans==10000){
			cout << "-1\n";
		}
		else{
			cout << ans << '\n';
		}
	}
} 
