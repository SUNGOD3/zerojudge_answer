#include <iostream> 
using namespace std;
int n,m,q,x,y;
bool a[201][201],ans;
void fd(int now,int t,bool c[201]){
	if(now==y){
		ans=1;
		return;
	}
	if(t==n||ans||c[now])return;
	c[now]=1;
	for(int i=0;i<n;++i){
		if(a[now][i]){
			fd(i,t+1,c);
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m >> q;
	while(m--){
		cin >> x >> y;
		a[x][y]=1;
	}
	while(q--){
		cin >> x >> y;
		bool chat[201]={0};
		ans=0;
		fd(x,0,chat);
		if(ans)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
