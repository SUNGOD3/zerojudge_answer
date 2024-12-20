#include <iostream>
using namespace std;
bool a[101][101],ans=0;
inline void dfs(int no,int g){
	if(ans)return;
	if(no==g)ans=1;
	for(int i=0;i<101;++i){
		if(!ans&&a[no][i]){
			a[no][i]=0;
			dfs(i,g);
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,k,x,y;
	while(cin >> n >> k){
		for(int i=0;i<101;++i)
			for(int j=0;j<101;++j)
				a[i][j]=0;
		while(k--){
			cin >> x >> y;
			a[x][y]=1;
		}
		ans=0;
		dfs(0,n);
		if(ans)
			cout << "Ok!\n";
		else
			cout << "Impossib1e!\n";
	}
} 
