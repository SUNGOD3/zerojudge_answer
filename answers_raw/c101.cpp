#include <bits/stdc++.h>
using namespace std;
int n,ct,ma;
map <string,int> mp;
string s;
bool rp;
vector <int> e[100005];
void dfs(string ns,int lv){
	if(mp.find(ns)==mp.end())return;
	ma=max(ma,lv);
	ct++;
	e[lv].push_back(mp[ns]);
	dfs(ns+'L',lv+1);
	dfs(ns+'R',lv+1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> s){
		if(s=="()"){
			if(rp){
				cout << "not complete\n";
			}
			else{
				dfs("",0);
				if(ct!=mp.size()){
					cout << "not complete\n";
				}
				else{
					bool st=0;
					for(int i=0;i<=ma;++i){
						for(int j=0;j<e[i].size();++j){
							if(st)cout << " ";
							cout << e[i][j];
							st=1;
						}
					}
					cout << "\n";
				}
				memset(e,0,sizeof(e));
			}
			rp=0;
			ct=0;
			mp.clear();
			continue;
		}
		int tmp=0,i;
		string ts;
		for(i=1;s[i]!=',';++i){
			tmp*=10;
			tmp+=s[i]-'0';
		}
		for(++i;s[i]!=')';++i){
			ts+=s[i];
		}
		if(mp.find(ts)!=mp.end()){
			rp=1;
		}
		mp[ts]=tmp;
	}
}
