#include <bits/stdc++.h> 
using namespace std;
int n,e[26][26],v;
char x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		memset(e,0x3f,sizeof(e));
		for(int i=0;i<n;++i){
			cin >> x >> y >> v;
			x-='A';
			y-='A';
			e[x][y]=e[y][x]=min(e[x][y],v);
		}
		for(int k=0;k<26;++k)
			for(int i=0;i<26;++i)
				for(int j=0;j<26;++j)
					e[i][j]=min(e[i][j],e[i][k]+e[k][j]);
		cin >> x >> y;
		x-='A';
		y-='A';
		if(x==y){
			cout << "0\n";
		}
		else{
			if(e[x][y]>1e6)cout << "NoRoute\n";
			else cout << e[x][y] << "\n";
		} 
	}
}
