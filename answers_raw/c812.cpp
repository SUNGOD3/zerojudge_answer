#include <iostream>
#include <map>
#include <vector>
using namespace std;
int s,ans,x,y,iv,n,v,q;
bool used[5010];
struct road{
	int rv;
	int g;
};
map <int,vector <road> > p;
void dfs(int no,int mv){
	if(used[no])return;
	used[no]=1;
	if(mv<q)return;
	if(no!=v)++ans;
	for(int i=0;i<p[no].size();++i)
		dfs(p[no][i].g,min(mv,p[no][i].rv));
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> v >> q;
	for(int i=0;i<n-1;++i){
		cin >> x >> y >> iv;
		road tmp,tmp2;
		tmp.g=y;
		tmp2.g=x;
		tmp2.rv=tmp.rv=iv;
		p[x].push_back(tmp);
		p[y].push_back(tmp2); 
	}
	for(int i=0;i<p[v].size();++i)
		dfs(p[v][i].g,p[v][i].rv);
	cout << ans << "\n";
} 
