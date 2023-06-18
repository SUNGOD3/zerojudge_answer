#include <iostream>
using namespace std;
int fa[1000001],sz[1000001],n,ans,ct,x;
int ff(int x){
	if(fa[x]==x)return x;
	return fa[x]=ff(fa[x]);
}
void mg(int x,int y){
	x=ff(x);
	y=ff(y);
	if(x==y)return;
	if(sz[x]<sz[y]){
		swap(x,y);
	}
	sz[x]+=sz[y];
	ans=max(ans,sz[x]);
	++ct;
	sz[y]=0;
	fa[y]=x;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> n){
		ans=ct=0;
		for(int i=1;i<=n;++i){
			fa[i]=i;
			sz[i]=1;
		}
		for(int i=1;i<=n;++i){
			cin >> x;
			mg(x,i);
		}
		cout << n-ct << " " << ans << '\n';
	}
} 
