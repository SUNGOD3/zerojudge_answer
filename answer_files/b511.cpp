#include <iostream>
using namespace std;
int c[5],n,total,ans[5];
void dfs(int now,int it){
	if(now<0)return;
	if(now==0){
		cout << "(";
		for(int i=0;i<n-1;++i)
			cout << ans[i] << ",";
		cout << ans[n-1] << ")\n";
		return;
	}
	if(it>=n)return;
	int mt=now/c[it];
	for(int i=0;i<=mt;++i){
		ans[it]=i;
		dfs(now-c[it]*i,it+1);
	}
}
int main(){
	while(cin >> n ){
		for(int i=0;i<n;++i)
			cin >> c[i];
		cin >> total;
		dfs(total,0);
	}
} 
