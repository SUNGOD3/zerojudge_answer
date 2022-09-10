#include <iostream>
using namespace std;
int mp[105][105],re[105][105],t,v,n,m,s;
string input;
void dfs(int x,int y){
	if(x<0||x>=n||y<0||y>=m||mp[x][y]==0)
		return;
	re[x][y]=-1;
	++v;
	mp[x][y]=0;
	for(int i=-1;i<=1;++i)
		for(int j=-1;j<=1;++j)
			dfs(x+i,y+j);
}
void upd(){
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			if(re[i][j]==-1)
				re[i][j]=v;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t >> ws;
	while(t--){
		if(s==1)cout << "\n";
		s=1;m=0;
		for(int i=0;i<105;++i)
			for(int j=0;j<105;++j)
				mp[i][j]=re[i][j]=0;
		while(isalpha(cin.peek())){
			getline(cin,input);
			n=input.length();
			for(int i=0;i<n;++i)
				(input[i]=='L')?mp[i][m]=0:mp[i][m]=-1;
			++m;
		}
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
				if(mp[i][j]==-1){
					v=0;
					dfs(i,j);
					upd();
				}
		while(isdigit(cin.peek())){
			int x,y;
			cin >> x >> y >> ws;
			cout << re[y-1][x-1] << "\n";
		}
	}
}
