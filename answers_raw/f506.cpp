#include <iostream>
#include <algorithm>
using namespace std;
int fa[1005],n,m,k;
pair <int,pair <int,int> > edge[30005];
int ff(int x){
	if(fa[x]==x)return x;
	return fa[x]=ff(fa[x]);
}
void merge(int x,int y){
	x=ff(x);
	y=ff(y);
	if(x==y)return;
	fa[x]=y;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		int ac=0;
		for(int i=0;i<=n;++i){
			fa[i]=i;
		}
		for(int i=0;i<m;++i){
			cin >> edge[i].second.first >> edge[i].second.second >> edge[i].first;
		}
		sort(edge,edge+m);
		for(int i=0;i<m;++i){
			if(ff(edge[i].second.first)!=ff(edge[i].second.second)){
				merge(edge[i].second.first,edge[i].second.second);
			}
			else{
				if(ac)cout << " ";
				cout << edge[i].first;
				ac=1;
			}
		}
		if(ac==0){
			cout << "forest";
		} 
		cout << "\n";
	}
}
