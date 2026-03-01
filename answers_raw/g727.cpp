#include <iostream>
using namespace std;
int n,ans,k,x,y,fa[100005];
int ff(int v){
	return fa[v]==v ? v:fa[v]=ff(fa[v]);
}
void merge(int x,int y){
	x=ff(x);
	y=ff(y);
	if(x==y){
		++ans;
		return;
	}
	fa[x]=y;
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> k;
	for(int i=0;i<n;++i){
		fa[i]=i;
	}
	for(int i=0;i<k;++i){
		cin >> x >> y;
		merge(x,y);
	}
	cout << ans;
}
