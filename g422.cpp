#include <iostream>
#include <vector>
#include <queue>
using namespace std;
long long n,m,b,x,y,w,dp[100005];
vector <pair <long long,long long>> e[100005];
queue <pair <long long,long long>> q;//v dis
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> b;
	for(int i=0;i<n;++i){
		dp[i]=1e15;
	}
	for(int i=0;i<m;++i){
		cin >> x >> y >> w;
		e[x].push_back({y,w});
		e[y].push_back({x,w});
	}
	q.push({0,0});
	while(q.empty()==0){
		pair <long long,long long> tmp=q.front();
		q.pop();
		if(tmp.second>=dp[tmp.first])continue;
		dp[tmp.first]=tmp.second;
		for(int i=0;i<e[tmp.first].size();++i){
			q.push({e[tmp.first][i].first,tmp.second+e[tmp.first][i].second});
		}
	}
	cout << dp[b];
}
