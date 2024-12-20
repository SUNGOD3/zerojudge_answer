#include <iostream>
using namespace std;
int a[11],ct,n,m;
void dfs(int x,int y){
	if(y==m){
		for(int i=0;i<m;++i)
			cout << (char)(a[i]+'a');
		cout << "\n";
		return;
	}
	for(int i=x;i<n;++i){
		a[y]=i;
		dfs(i+1,y+1);
	}
}
int main(){
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		for(int i=0;i<=n-m;++i){
			a[0]=i;
			dfs(i+1,1);
		}
	}
}
