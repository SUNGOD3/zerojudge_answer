#include <iostream> 
#include <string.h>
using namespace std;
int t,n,m,a[105][105],x,y,r[105],ansp[105],ans;
void dfs(int np,int b){ 
	if(np>n){//dfs stop when np > n and check the answer
		((b>ans)&&(memcpy(ansp,r,sizeof(r)))&&(ans=max(ans,b)));
		return;
	}
	if(n-np+b<ans)return; 
	for(int i=1,bl=1;i<=n&&bl;++i)
		if(a[np][i]&&r[i]==1)//check if r[np] can set black
			bl=0;
		else if(i==n){
			r[np]=1;
			dfs(np+1,b+1);//set black and dfs next point
		}
	r[np]=-1;
	dfs(np+1,b);//set white and dfs next point
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> m;
		ans=0;
		for(int i=0;i<=n;++i){
			r[i]=ansp[i]=0;
			for(int j=0;j<=n;++j)
				a[i][j]=0;
		}
		for(int i=0;i<m;++i){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		dfs(1,0);
		for(int i=1,s=0;i<=n;++i)
			if(ansp[i]==1)
				(s)?cout << " " << i:cout << ans << "\n" << i,s=1;
		cout << "\n";
	}
}
