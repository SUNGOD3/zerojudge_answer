#include <iostream>
using namespace std;
int xg,yg,t,n,m,ans;
string input;
char a[101][101];
void dfs(int x,int y){
	if(x>=n||y>=m||x<0||y<0||a[x][y]=='1'){
		return;
	}
	++ans;
	a[x][y]='1';
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	int s=0;
	while(t--){
		if(s)
			cout << "\n";
		s=1;
		for(int i=0;i<101;++i)
			for(int j=0;j<101;++j)
				a[i][j]='1';
		cin >> xg >> yg;
		getline(cin,input);
		n=m=ans=0;
		while(getline(cin,input)&&input.size()){
			m=input.length();
			for(int i=0;i<m;++i)
				a[n][i]=input[i];
			++n;
		}
		if(xg-1>=n||yg-1>=m)
			cout << "0\n";
		else{
			dfs(xg-1,yg-1);
			cout << ans << "\n";
		}
	}
} 
