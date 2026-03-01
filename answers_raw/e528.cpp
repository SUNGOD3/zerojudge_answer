#include <iostream>
using namespace std;
int ans[10001][10],n,t;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<=10000;++i){
		int tmp=i;
		for(int j=0;j<10;++j)
			ans[i][j]=ans[i-1][j];
		while(tmp){
			++ans[i][tmp%10];
			tmp/=10; 
		}
	}
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<10;++i){
			cout << ans[n][i] ;
			if(i==9)cout << '\n';
			else cout << " ";
		}
	}
} 
