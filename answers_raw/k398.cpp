#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,w[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
string s;
bool has[105][105];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m >> s;
	has[0][0]=1;
	for(int i=0;i<s.size();++i){
		int ct='0';
		while(ct<s[i]){
			x+=w[i%4][0];
			y+=w[i%4][1];
			if(x<0||y<0||x>=n||y>=m){
				x-=w[i%4][0];
				y-=w[i%4][1];
			}
			has[x][y]=1;
			++ct;
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(has[i][j]){
				cout << "*";
			}
			else{
				cout << ".";
			}
		}
		cout << "\n";
	}
}
