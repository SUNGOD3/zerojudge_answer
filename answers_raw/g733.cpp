#include <bits/stdc++.h>
using namespace std;
int n,m1,m2,x,y,v,s,t,dis[10005][4];
bool has[10005][4];
vector <pair <int,int>> E1[100005],E2[100005];//go dis
void djsk(){
	priority_queue <pair <int,pair <int,int>>,vector <pair <int,pair <int,int>>>,greater <pair <int,pair <int,int>>>> pq;//dis by go
	for(int i=0;i<4;++i){
		pq.push({0,{i,s}});
		dis[s][i]=0;
	}
	while(!pq.empty()){
		int dt=pq.top().first,by=pq.top().second.first,g=pq.top().second.second;
		pq.pop();
		if(has[g][by])continue;
		has[g][by]=1;
		if(by!=3){//0 1 2
			for(int i=0;i<E1[g].size();++i){
				if(by==1){
					if(dis[E1[g][i].first][2]>dis[g][by]+E1[g][i].second){
						dis[E1[g][i].first][2]=dis[g][by]+E1[g][i].second;
						pq.push({dis[E1[g][i].first][2],{2,E1[g][i].first}});
					}
				} 
				else{
					if(dis[E1[g][i].first][by]>dis[g][by]+E1[g][i].second){
						dis[E1[g][i].first][by]=dis[g][by]+E1[g][i].second;
						pq.push({dis[E1[g][i].first][by],{by,E1[g][i].first}});
					}
				}
			}
		}
		if(by!=2){//0 1 3
			for(int i=0;i<E2[g].size();++i){
				if(by==0){
					if(dis[E2[g][i].first][3]>dis[g][by]+E2[g][i].second){
						dis[E2[g][i].first][3]=dis[g][by]+E2[g][i].second;
						pq.push({dis[E2[g][i].first][3],{3,E2[g][i].first}});
					}
				} 
				else{
					if(dis[E2[g][i].first][by]>dis[g][by]+E2[g][i].second){
						dis[E2[g][i].first][by]=dis[g][by]+E2[g][i].second;
						pq.push({dis[E2[g][i].first][by],{by,E2[g][i].first}});
					}
				}
			}
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m1 >> m2;
	memset(dis,0x3f,sizeof(dis));
	for(int i=0;i<m1;++i){
		cin >> x >> y >> v;
		E1[x].push_back({y,v});
		E1[y].push_back({x,v});
	}
	for(int i=0;i<m2;++i){
		cin >> x >> y >> v;
		E2[x].push_back({y,v});
		E2[y].push_back({x,v});
	}
	cin >> s >> t;
	djsk();
	cout << min(min(dis[t][0],dis[t][1]),min(dis[t][2],dis[t][3]));
} 
