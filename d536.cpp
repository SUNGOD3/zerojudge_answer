#include <iostream>
using namespace std;
int n,e[55][55],ans=55,used[55];
string s;
void dfs(int p,int step){
	if(step>=ans)return;
	//cout << p << " " << step << "\n";
	if(used[p]){
		ans=step;
		return;
	}
	used[p]=1;
	for(int i=0;i<55;++i){
		if(e[p][i]){
			dfs(i,step+1);
		}
	}
	used[p]=0;
}
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> s;
		e[s[0]-'A'][s[1]-'A']=1; 
	}
	for(int i=0;i<55;++i){
		dfs(i,0);
	}
	if(ans!=55){
		cout << ans;
	}
	else{
		cout << "0";
	}
} 
