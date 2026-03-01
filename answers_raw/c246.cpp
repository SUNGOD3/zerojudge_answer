#include <bits/stdc++.h>
using namespace std;
int n,m,s,t,ca,dp[105],x,y,v;
int main(){
	cin >> ca;
	while(ca--){
		cin >> n >> s >> t >> m;
		priority_queue <pair <int,int>,vector  <pair <int,int>>,greater <pair <int,int>>> q;//t it
		vector <pair <int,int>> e[n+1];
		memset(dp,0x3f,sizeof(dp));
		q.push({0,s});
		for(int i=0;i<m;++i){
			cin >> x >> y >> v;
			e[y].push_back({x,v});
		}
		while(!q.empty()){
			pair <int,int> tp=q.top();
			int ti=tp.first,it=tp.second;
			q.pop();
			if(ti>t||dp[it]<=ti)continue;
			dp[it]=ti;
			for(int i=0;i<e[it].size();++i){
				q.push({ti+e[it][i].second,e[it][i].first});
			}
		}
		int ans=0;
		for(int i=1;i<=n;++i){
			if(dp[i]<=t)++ans;
		}
		cout << ans << "\n\n";
	}
} 
