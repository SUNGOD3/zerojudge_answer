#include <iostream>
using namespace std;
int ans[101][101],c,s,q,x,y,v,ca,st;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> c >> s >> q){
		if(!c&&!s&&!q)break;
		for(int i=1;i<=c;++i)
			for(int j=1;j<=c;++j){
				if(i==j)ans[i][j]=0;
				else ans[i][j]=100000000;
			}
		while(s--){
			cin >> x >> y >> v;
			ans[x][y]=min(ans[x][y],v);
			ans[y][x]=min(ans[y][x],v);
		} 
		for(int k=1;k<=c;++k)
			for(int i=1;i<=c;++i)
				for(int j=1;j<=c;++j)
					if(ans[i][j]>max(ans[i][k],ans[k][j]))
						ans[i][j]=max(ans[i][k],ans[k][j]);
		if(st)cout << "\n";
		st=1;
		cout << "Case #" << ++ca << "\n";
		while(q--){
			cin >> x >> y;
			if(ans[x][y]==100000000){
				cout << "no path\n";
			}
			else{
				cout << ans[x][y] << "\n";
			}
		}
	} 
} 
