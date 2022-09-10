#include <bits/stdc++.h>
using namespace std;
int t,xx,yy,z,a[1026][1026],ans;
void dfs(int x,int y,int ct){
	if(a[x][y]<=ct||ct>=ans)return;
	a[x][y]=ct;
	if(x==z||y==z){
		ans=ct;
		return;
	}
	if(x)dfs(0,y,ct+1);
	if(y)dfs(x,0,ct+1);
	if(x!=xx){
		dfs(xx,y,ct+1);
		if(y){
			if(x+y>xx){
				dfs(xx,y-xx+x,ct+1);
			}
			else{
				dfs(x+y,0,ct+1);
			}
		}
	}
	if(y!=yy){
		dfs(x,yy,ct+1);
		if(x){
			if(x+y>yy){
				dfs(x-yy+y,yy,ct+1);
			}
			else{
				dfs(0,x+y,ct+1);
			}
		}
	}
	
}
int main(){
	cin >> t;
	while(t--){
		ans=1001;
		cin >> xx >> yy >> z;
		memset(a,0x3f,sizeof(a));
		dfs(xx,yy,0);
		if(ans>1000)
			cout << "-1\n";
		else
			cout << ans << "\n";
	}
} 
