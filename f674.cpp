#include <iostream>
using namespace std;
int n,t[51][2],a,l,r;
inline void dfs(int no,int type){
	if(no==-1)return;
	if(type==0)cout << no << " ";
	dfs(t[no][0],type);
	if(type==1)cout << no << " ";
	dfs(t[no][1],type);
	if(type==2)cout << no << " ";
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >> l >> r;
		t[a][0]=l;
		t[a][1]=r;
	}
	for(int i=0;i<3;++i){
		dfs(0,i);
		cout << "\n";
	}
} 
