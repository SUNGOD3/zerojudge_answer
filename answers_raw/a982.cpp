#include <iostream>
using namespace std;
int m[101][101],n;
void dfs(int x,int y,int t){
	if(m[x][y]==0||m[x][y]>t){
		m[x][y]=t;
		if(x-1>=0&&m[x-1][y]!=-1){
			dfs(x-1,y,t+1);
		}
		if(y-1>=0&&m[x][y-1]!=-1){
			dfs(x,y-1,t+1);
		}
		if(x+1<n&&m[x+1][y]!=-1){
			dfs(x+1,y,t+1);
		}
		if(y+1<n&&m[x][y+1]!=-1){
			dfs(x,y+1,t+1);
		}
	}
	return ;
}
int main(){
	while(cin >> n){
		char c;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin >> c;
				if(c=='#')
					m[i][j]=-1;
				else
					m[i][j]=0;
			}
		}
		dfs(1,1,1);
		if(m[n-2][n-2]==0)
			cout << "No solution!\n";
		else
		cout << m[n-2][n-2] << "\n"; 
	}
} 
