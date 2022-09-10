#include <iostream>
using namespace std;
int a[11][11],n,m,x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		a[i][i]=1;
	}
	while(m--){
		cin >> x >> y;
		a[x][y]=1;
		a[y][x]=1;
	}
	for(int i=1;i<=n;++i){
		cout << i << ": ";
		for(int j=1;j<=n;++j){
			if(i!=j&&a[i][j]){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
} 
