#include <iostream>
#include <queue>
#include <set>
#define INF 10000000
using namespace std;
int n,m,dis[1000005],a[1005][1005],vis[1000005],w[4][2]={{-1,0},{1,0},{0,1},{0,-1}},t;
vector < pair <int,int> > vp[1000005];
int getID(int x,int y){
	return x*m+y; 
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> m;
		int ed=getID(n-1,m-1);
		for(int i=0;i<=n*m;++i){
			dis[i]=INF;
			vis[i]=0;
			vp[i].clear();
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				for(int k=0;k<4;++k){
					int x=i+w[k][0],y=j+w[k][1];
					if(x>=0&&x<n&&y>=0&&y<m){
						vp[getID(i,j)].push_back(make_pair(a[x][y],getID(x,y)));
					}
				} 
			}
		}
		dis[0]=0;
		set <pair <int,int> > q; // dis : goto
		pair <int,int> t;
		q.insert(make_pair(0,0));
		while(q.empty()==0&&dis[ed]==INF){
			t = *q.begin();
			q.erase(t);
			int x=t.first,y=t.second;
			if(vis[y]==0){
				vis[y]=1;
				for(auto it:vp[y]){
					if(dis[it.second]>dis[y]+it.first){
						q.erase({dis[it.second], it.second});
						dis[it.second]=dis[y]+it.first;
						q.insert({dis[it.second],it.second});//insert the edge which is shortest to {0,0} 
					}
				}
			}
		}
		cout << dis[ed]+a[0][0] << "\n";
	}
} 
