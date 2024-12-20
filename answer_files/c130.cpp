#include <bits/stdc++.h>
using namespace std;
int t,n,ca,a[13],stk[13],x,y;
set <vector <int>> st;
set <vector <int>> :: iterator it;
void dfs(int it,int sum,int sz){
	if(sum==t){
		vector <int> a;
		for(int i=0;i<sz;++i){
			a.push_back(-stk[i]);
		}
		st.insert(a);
		return;
	} 
	for(int i=it+1;i<=n;++i){
		if(sum+a[i]<=t){
			stk[sz]=a[i];
			dfs(i,sum+a[i],sz+1);
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> t >> n){
		if(t==0&&n==0)break;
		st.clear();
		for(int i=1;i<=n;++i)
			cin >> a[i];
		cout << "Sums of " << t << ":\n";
		dfs(0,0,0);
		if(st.empty()){
			cout << "NONE\n";
		}
		for(it=st.begin();it!=st.end();++it){
			for(int i=0;i<(*it).size();++i){
				if(i)cout << "+";
				cout << -(*it)[i];
			}
			cout << "\n";
		}
	}
}
