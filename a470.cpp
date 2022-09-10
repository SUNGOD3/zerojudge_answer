#include <iostream>
#define ll long long
using namespace std;
ll int t,mi,ma,p,q;
void dfs(ll int v,int c){
	if(c==p){
		if(v%q==0){
			if(mi==0)mi=v;
			if(ma==0)ma=v;
			mi=min(v,mi);
			ma=max(v,ma);
		}
		return;
	}
	v*=10;
	dfs(v+1,c+1);
	dfs(v+2,c+1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> p >> q;
		q=1<<q;
		mi=0;
		ma=0;
		dfs(0,0);	
		cout << "Case " << ca << ": ";
		if(mi==ma){
			if(mi==0){
				cout << "impossible\n";
			}
			else{
				cout << mi << "\n";
			}
		}
		else{
			cout << mi << " " << ma << "\n";
		}
	}
}
