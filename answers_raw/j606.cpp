#include <iostream>
using namespace std;
int k,q,r,x;
char ans[25][25];
string s,nxt;
int main(){
	cin >> k >> q >> r >> s;
	nxt=s;
	for(int i=0;i<q;++i){
		for(int j=0;j<k;++j){
			cin >> x;
			nxt[x-1]=s[j];
		}
		s=nxt;
		for(int j=0;j<r;++j)
			ans[j][i]=s[j];
	}
	for(int i=0;i<r;++i){
		for(int j=0;j<q;++j)
			cout << ans[i][j];
		cout << "\n";
	}
} 
