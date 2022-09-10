#include <iostream>
using namespace std;
struct trie{
	trie* nxt[26];
	int cnt = 0;
	int sz = 0;
};
trie* root = new trie();
int t,n,ans;
string s;
void insert(string s){
	trie* now=root;
	for(int i=0;i<s.length();++i){
		now->sz++;
		if(now->nxt[s[i]-'a']==nullptr){
			now->nxt[s[i]-'a'] = new trie();
		}
		now = now->nxt[s[i]-'a'];
	}
	now->sz++;
	now->cnt++;
}
void dfs(trie* now,int it){
	if(now->sz==1&&it!=0){
		ans+=it;
		return;
	}
	for(int i=0;i<26;++i){
		if(now->nxt[i]!=nullptr){
			dfs(now->nxt[i],it+1);
		}
	}
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n;
		root = new trie();
		for(int i=0;i<n;++i){
			cin >> s;
			insert(s);
		}
		ans=0;
		dfs(root,0);
		cout << ans << "\n";
	} 
}
