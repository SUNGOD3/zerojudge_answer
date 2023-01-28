#include <bits/stdc++.h>
using namespace std;
int n;
string a[100005];
struct trie{
	int ct=0;
	bool has=0;
	trie* nxt[26];
};
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	while(cin >> n){
		int v=0;
		trie* root = new trie();
		for(int i=0;i<n;++i){
			cin >> a[i];
			v+=a[i].size();
			trie* it=root;
			for(int j=0;j<a[i].size();++j){
				if(it->nxt[a[i][j]-'a']==nullptr){
					++it->ct;
					it->nxt[a[i][j]-'a']=new trie();
				}
				it=it->nxt[a[i][j]-'a'];
				if(j==a[i].size()-1)it->has=1;
			}
		}
		for(int i=0;i<n;++i){
			trie* it=root;
			for(int j=0;j<a[i].size();++j){
				if(it->ct==1&&it->has==0&&j)--v;
				it=it->nxt[a[i][j]-'a'];
			}
		}
		double ans=round((double)v/(double)n*100)/100;
		cout << fixed << setprecision(2) << ans << "\n";
	}
} 
