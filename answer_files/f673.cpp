#include <iostream>
using namespace std;
int t[101][2],n,a,b,c,ans;
void dfs(int no,int step){
	if(no==-1)return;
	ans=max(step,ans);
	dfs(t[no][0],step+1);
	dfs(t[no][1],step+1);
}
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >> b >> c;
		t[a][0]=b;
		t[a][1]=c;
	}
	dfs(0,0);
	cout << ans;
} 
