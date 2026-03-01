#include <iostream>
#include <queue>
using namespace std;
struct p{
	int x,y,z,stp;
};
int il,jl,kl;
bool dp[50][50][50];
int w[6][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};//x,y,z,stp
char mp[50][50][50];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> il >> jl >> kl){
		if(il==0&&jl==0&&kl==0)break;
		queue < p > q;
		int ans=-1;
		for(int i=0;i<=40;++i)
			for(int j=0;j<=40;++j)
				for(int k=0;k<=40;++k){
					mp[i][j][k]='#';
					dp[i][j][k]=0;
				}
		for(int i=1;i<=il;++i){
			for(int j=1;j<=jl;++j){
				for(int k=1;k<=kl;++k){
					cin >> mp[i][j][k];
					if(mp[i][j][k]=='S'){
						p a;
						a.x=i;
						a.y=j;
						a.z=k;
						a.stp=0;
						q.push(a);
					}
				}
			}
		}
		while(q.empty()==0&&ans==-1){
			p a=q.front();
			q.pop();
			if(mp[a.x][a.y][a.z]=='#'||dp[a.x][a.y][a.z])continue;
			dp[a.x][a.y][a.z]=1;
			if(mp[a.x][a.y][a.z]=='E'){
				ans=a.stp;
				break;
			}
			for(int i=0;i<6;++i){
				p b;
				b.x=a.x+w[i][0];
				b.y=a.y+w[i][1];
				b.z=a.z+w[i][2];
				b.stp=a.stp+1;
				q.push(b);
			}
		}
		if(ans==-1){
			cout << "Trapped!\n";
		}
		else{
			cout << "Escaped in " << ans << " minute(s).\n";	
		}
	}
} 
