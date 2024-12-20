#include <iostream>
#include <map>
#define INF 500
using namespace std;
int a[55][55],n,m,ca;
string x,y;
int main(){
	cin.tie(0); 
	cout.tie(0);
	ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		int id=0,ac=1,mi=0;
		for(int i=0;i<=n;++i){
			for(int j=0;j<=n;++j){
				a[i][j]=INF;
				if(i==j)a[i][j]=0;
			}
		}
		map <string,int> mp;
		while(m--){
			cin >> x >> y;
			if(mp.find(x)==mp.end()){
				mp[x]=id++;
			}
			if(mp.find(y)==mp.end()){
				mp[y]=id++;
			}
			a[mp[x]][mp[y]]=a[mp[y]][mp[x]]=1;
		}
		for(int k=0;k<n;++k){
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
					a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
				}
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(a[i][j]==INF){
					ac=0;
				}
				else{
					mi=max(a[i][j],mi);
				}
			}
		}
		cout << "Network " << ++ca << ": ";
		if(ac){
			cout << mi << "\n";
		}
		else{
			cout << "DISCONNECTED\n";
		}
		cout << "\n";
	}
}
