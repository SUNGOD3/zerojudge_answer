#include <iostream>
using namespace std;
int a[105][105],n,m,ct,ma,tmp;
char c;
bool has[105][105];
void dfs(int x,int y,int v){
	if(x>=n||y>=m||x<0||y<0||has[x][y]||a[x][y]!=v)return;
	has[x][y]=1;
	++tmp;
	for(int i=-1;i<=1;++i)
		for(int j=-1;j<=1;++j)
			dfs(x+i,y+j,v);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> n >> m){
		if(n==0&&m==0)return 0;
		ct=ma=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin >> c;
				a[i][j]=c-'0';
				has[i][j]=0;
			}
		}
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				if(!has[i][j]&&a[i][j]){
					tmp=0;
					dfs(i,j,a[i][j]);
					ma=max(ma,tmp);
					++ct;
				}
		if(ct>ma){
			cout << "choas\n";
		}
		else{
			cout << "peace\n";
		}
	}
}
