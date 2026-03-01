#include <bits/stdc++.h>
using namespace std;
int ans[256];
vector <int> a;
string s;
int main(){
	cin >> s;
	for(int i=0;i<s.size();++i){
		ans[s[i]]=i+1;
	}
	for(int i=0;i<256;++i){
		if(ans[i])a.push_back(ans[i]);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<256;++i){
		if(ans[i]){
			cout << find(a.begin(),a.end(),ans[i])-a.begin()+1;
		}
	}
}
