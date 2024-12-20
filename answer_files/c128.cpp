#include <iostream>
#include <map> 
using namespace std;
int n,m,a[201][201],ip,v,ca;
string x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		ip=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				a[i][j]=0;
		map <string,int> mp;
		while(m--){
			cin >> x >> y >> v;
			if(mp.find(x)==mp.end())
				mp[x]=ip++;
			if(mp.find(y)==mp.end())
				mp[y]=ip++;
			a[mp[x]][mp[y]]=a[mp[y]][mp[x]]=v;
		}
		//Floyd-Warshall
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				for(int k=0;k<n;++k){
					a[j][k]=max(a[j][k],min(a[j][i],a[i][k]));
				}
			}
		}
		cin >> x >> y;
		cout << "Scenario #" << ++ca << "\n" << a[mp[x]][mp[y]] << " tons\n\n"; 
	}
} 
