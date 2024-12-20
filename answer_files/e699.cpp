#include <iostream>
using namespace std;
char mp[1001][1001];
int fire[1001][1001],road[1001][1001];
int x,y,ans;
inline void bffs(int xx,int yy,int step){
	if(fire[xx][yy]&&step>=fire[xx][yy])return;
	fire[xx][yy]=step;
	++step;
	if(xx+1<x&&mp[xx+1][yy]!='#')
		bffs(xx+1,yy,step);
	if(xx-1>=0&&mp[xx-1][yy]!='#')
		bffs(xx-1,yy,step);
	if(yy+1<y&&mp[xx][yy+1]!='#')
		bffs(xx,yy+1,step);
	if(yy-1>=0&&mp[xx][yy-1]!='#')
		bffs(xx,yy-1,step);
}
inline void bfs(int xx,int yy,int step){
	if((ans&&step>=ans)||(fire[xx][yy]&&step>=fire[xx][yy])||(road[xx][yy]&&step>=road[xx][yy]))return;
	road[xx][yy]=step;
	if(xx==x-1||!xx||yy==y-1||!yy){
		if(!ans)ans=step;
		else ans=min(step,ans);
	}
	++step;
	if(xx+1<x&&mp[xx+1][yy]!='#')
		bfs(xx+1,yy,step);
	if(xx-1>=0&&mp[xx-1][yy]!='#')
		bfs(xx-1,yy,step);
	if(yy+1<y&&mp[xx][yy+1]!='#')
		bfs(xx,yy+1,step);
	if(yy-1>=0&&mp[xx][yy-1]!='#')
		bfs(xx,yy-1,step);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		cin >> x >> y;
		ans=0;
		for(int i(0);i<x;++i)
			for(int j(0);j<y;++j){
				fire[i][j]=0;
				road[i][j]=0;
				cin >> mp[i][j];
			}
		for(int i(0);i<x;++i)
			for(int j(0);j<y;++j)
				if(mp[i][j]=='F')
					bffs(i,j,1);
		for(int i(0);i<x;++i){
			for(int j(0);j<y;++j){
				if(mp[i][j]=='J'){
					bfs(i,j,1);
					i=x;
					break;
				}
			}
		}
		if(ans)
			cout << ans << "\n";
		else
			cout << "IMPOSSIBLE\n";
	}
} 
