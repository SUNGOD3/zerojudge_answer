#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,a[105];
void dfs(int rm,int ma,int it){
	if(rm==0){
		for(int i=0;i<it;++i){
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int j=min(ma,rm);j>=1;--j){
		a[it]=j;
		dfs(rm-j,j,it+1);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> n){
		for(int i=n;i>=1;--i){
			a[0]=i;
			dfs(n-i,i,1);
		}
	}
} 
