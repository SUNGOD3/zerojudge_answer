#include <bits/stdc++.h>
using namespace std;
int n,m,dp[1001],ans,dp2[1001];
vector <pair <int,int>> e[1001];
int dfs(int x){
	if(dp2[x]!=-1)return dp2[x];
	dp2[x]=0;
	for(int i=0;i<e[x].size();++i)
		if(dp[e[x][i].first]>dp[x])
			dp2[x]+=dfs(e[x][i].first);
	return dp2[x];
}
int main(){
	while(scanf("%d", &n) == 1 && n){
		scanf("%d",&m);
		ans=0;
		for(int i=1;i<=n;++i){
			dp[i]=dp2[i]=-1;
			e[i].clear();
		}
		for(int i=0,x,y,z;i<m;++i){
			scanf("%d %d %d,",&x,&y,&z);
			e[x].push_back({y,z});
			e[y].push_back({x,z}); 
		}
		priority_queue <pair <int,int>,vector <pair <int,int>>,greater <pair <int,int>>> pq;
		pq.push({0,2});
		while(!pq.empty()){
			int v=pq.top().first,it=pq.top().second;
			pq.pop();
			if(dp[it]!=-1)continue;
			dp[it]=v;
			for(int i=0;i<e[it].size();++i){
				if(dp[e[it][i].first]!=-1)continue;
				pq.push({v+e[it][i].second,e[it][i].first});
			}
		}
		dp2[1]=1;
		printf("%d\n",dfs(2));
	}
}
