#include <iostream>
#include <memory.h>
using namespace std;
int t,n,a[100005],x,y,times;
bool c[100005],used[100005];
void dfs(int n){ 
	if(used[n])return;
	++times;
	c[n]=used[n]=1;
	dfs(a[n]);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n;
		for(int i=1;i<=n;++i){
			a[i]=i;
			used[i]=c[i]=0;
		}
		for(int i=1;i<=n;++i){
			cin >> x >> y;
			a[x]=y;
		}
		int ans=0,ansm=0;
		for(int i=1;i<=n;++i){
			memset(used,0,n+1);
			times=0;
			if(c[i]==0){
				dfs(i);
			}
			if(times>ans){
				ans=times;
				ansm=i;
			}
		}
		cout << "Case " << ca << ": " << ansm << "\n";
	}
} 
