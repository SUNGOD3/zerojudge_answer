#include <iostream>
using namespace std;
long long int t,a[21];
int n,k;
bool ans;
inline void dfs(int it,long long int mon,int tk){
	if(ans)return;
	if(mon==t&&tk==k){
		ans=1;
		return;
	}
	for(int i=it+1;i<n;++i)
		dfs(i,mon+a[i],tk+1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> k >> t){
		ans=0;
		for(int i=0;i<n;++i)
			cin >> a[i];
		for(int i=0;i<n;++i)
			dfs(i,a[i],1);
		if(ans)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
} 
