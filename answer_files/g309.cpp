#include <iostream>
using namespace std;
int n,tr[15][3],k;
void dfs(int p){
	if(p==-1||(tr[p][0]+tr[p][1]==-2)||tr[p][2]==0)return;
	if(tr[p][0]!=-1&&tr[p][1]!=-1){
		tr[tr[p][0]][2]+=tr[p][2]/3;
		tr[tr[p][1]][2]+=tr[p][2]/3;
		tr[p][2]=tr[p][2]/3+tr[p][2]%3;
		dfs(tr[p][0]);
		dfs(tr[p][1]);
	}
	else if(tr[p][0]!=-1){
		tr[tr[p][0]][2]+=tr[p][2]/2;
		tr[p][2]=tr[p][2]/2+tr[p][2]%2;
		dfs(tr[p][0]);
	}
	else{
		tr[tr[p][1]][2]+=tr[p][2]/2;
		tr[p][2]=tr[p][2]/2+tr[p][2]%2;
		dfs(tr[p][1]);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> tr[0][2];
	for(int i=0;i<n;++i){
		cin >> k >> tr[k][0] >> tr[k][1];
	}
	dfs(0);
	for(int i=0;i<n;++i){
		cout << tr[i][2] << " ";
	}
} 
