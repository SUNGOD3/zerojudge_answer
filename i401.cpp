#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,x,y,z,w=3,ans;
vector <pair <int,int>> a[60005][2];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x >> y >> z;
		a[x+30000][0].push_back({y,z});
		a[y+30000][1].push_back({x,z});
	} 
	for(int i=0;i<2;++i)
		for(int j=0;j<=60000;++j)
			sort(a[j][i].begin(),a[j][i].end());
	x=y=0;
	while(1){
		bool out=0;
		if(w==0){
			int it=lower_bound(a[x+30000][w/2].begin(),a[x+30000][w/2].end(),make_pair(y,2))-a[x+30000][w/2].begin();
			if(it>=a[x+30000][w/2].size())out=1;
			else{
				++ans;
				y=a[x+30000][w/2][it].first;
				(a[x+30000][w/2][it].second)?w=2:w=3;
			}
		}
		else if(w==1){
			int it=lower_bound(a[x+30000][w/2].begin(),a[x+30000][w/2].end(),make_pair(y,0))-a[x+30000][w/2].begin()-1;
			if(it<0)out=1;
			else{
				++ans;
				y=a[x+30000][w/2][it].first;
				(a[x+30000][w/2][it].second)?w=3:w=2;
			}
		}
		else if(w==2){
			int it=lower_bound(a[y+30000][w/2].begin(),a[y+30000][w/2].end(),make_pair(x,0))-a[y+30000][w/2].begin()-1;
			if(it<0)out=1;
			else{
				++ans;
				x=a[y+30000][w/2][it].first;
				(a[y+30000][w/2][it].second)?w=0:w=1;
			}
		}
		else{
			int it=lower_bound(a[y+30000][w/2].begin(),a[y+30000][w/2].end(),make_pair(x,2))-a[y+30000][w/2].begin();
			if(it>=a[y+30000][w/2].size())out=1;
			else{
				++ans;
				x=a[y+30000][w/2][it].first;
				(a[y+30000][w/2][it].second)?w=1:w=0;
			}
		}
		if(out)break;
	}
	cout << ans;
} 
