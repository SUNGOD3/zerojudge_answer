#include <iostream>
using namespace std;
bool bmap[101][101];
int amap[101][101],n,xa,ya,x,y,xb,yb;
char t;
void dfs(int xx,int yy,int s){
	if(xx>x||yy>y||xx<0||yy<0||bmap[xx][yy]||(amap[xx][yy]<=s&&amap[xx][yy]!=0))return;
	if(amap[xx][yy]==0||amap[xx][yy]>s)
		amap[xx][yy]=s;
	dfs(xx+1,yy,s+1);
	dfs(xx-1,yy,s+1);
	dfs(xx,yy+1,s+1);
	dfs(xx,yy-1,s+1);
}
int main(){
	cin >> n;
	while(n--){
		cin >> x >> y >> xb >> yb >> xa >> ya;
		for(int i=0;i<x;++i){
			for(int j=0;j<y;++j){
				amap[i][j]=0;
				cin >> t;
				bmap[i][j]=t-48;
			}
		}
		dfs(xb-1,yb-1,1);
		cout << amap[xa-1][ya-1] << "\n";
	}
} 
