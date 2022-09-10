#include <iostream>
#include <iomanip>
using namespace std;
int ans[105][105];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a(1),w(0),i(51),j(51),n,k(51),na;
	ans[i][j]=1;
	while(k--){
		n=++w;
		while(n--)
			ans[i][++j]=++a;
		n=w;
		while(n--)
			ans[--i][j]=++a;
		n=++w;
		while(n--)
			ans[i][--j]=++a;
		n=w;
		while(n--)
			ans[++i][j]=++a;
	}
	cin >> n;
	while(cin >> n){
		n>>=1;
		na=51+n;
		n=51-n;
		for(int x(n);x<=na;++x){
			for(int y(n);y<=na;++y)
				cout << setw(5) << ans[x][y] ;
			cout << "\n";
		}
		cout << "\n";
	}
}
