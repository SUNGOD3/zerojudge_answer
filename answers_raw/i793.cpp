#include <iostream>
#include <queue>
using namespace std;
int a[1001][1001],dp[1001][1001],n,m,x,y;
queue <pair <int,pair <int,int>>> q;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> x >> y;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j){
			dp[i][j]=-1;
			cin >> a[i][j];
		}
	q.push({0,{x,y}});
	while(!q.empty()){
		int tx=q.front().second.first,ty=q.front().second.second,stp=q.front().first;q.pop();
		if(tx<0||tx>=n||ty<0||ty>=m||a[tx][ty]==1||dp[tx][ty]!=-1)continue;
		if(a[tx][ty]==2){
			cout << stp;
			return 0;
		}
		dp[tx][ty]=stp;
		q.push({stp+1,{tx+1,ty}});
		q.push({stp+1,{tx-1,ty}});
		q.push({stp+1,{tx,ty+1}});
		q.push({stp+1,{tx,ty-1}});
	}
	cout << "WAKUWAKU";
} 
