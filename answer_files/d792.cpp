#include <iostream>
using namespace std;
int a[105][105],n,t,r,s,d,g[105],ans;
/*void dfs(int time,int it,int total){
	if(time>=ans)return;
	else if(total==n){
		ans=min(ans,time+a[it][d]);
		return;
	}
	g[it]=1;
	for(int i=0;i<n;++i){
		if(g[i]==0){
			dfs(time+a[it][i],i,total+1);
		}
	}
	g[it]=0;
}*/
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		ans=0;
		cin >> n >> r;
		for(int i=0;i<n;++i){
			g[i]=0;
			for(int j=0;j<n;++j){
				a[i][j]=10000000;
				if(i==j)a[i][j]=0;
			}
		}
		for(int i=0;i<r;++i){
			cin >> s >> d;
			a[s][d]=a[d][s]=1;
		}
		for(int k=0;k<n;++k){
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
					a[j][i]=a[i][j]=min(a[i][k]+a[k][j],a[i][j]);
				}
			}
		}
		cin >> s >> d;
		for(int i=0;i<n;++i){
			ans=max(a[s][i]+a[i][d],ans);
		}
		cout << "Case " << ca << ": " << ans << '\n';
	}
} 
