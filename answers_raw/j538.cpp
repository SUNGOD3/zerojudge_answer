#include <iostream>
#include <vector>
using namespace std;
int v[26],mod[26];
string s,n;
vector <int> e[26];
int main(){
	cin >> s >> n;
	for(int i=0;i<s.size();++i){
		if(s[i]>='a'){
			e[s[i]-'a'].push_back(i);
			v[s[i]-'a']+=n[i]-'0';
		}
		else{
			e[s[i]-'A'].push_back(i);
			v[s[i]-'A']+=n[i]-'0';
		}
	}
	for(int i=0;i<26;++i){
		int es=e[i].size();
		if(es==0)continue;
		mod[i]=v[i]%es;//7%4 = 3 = 1 2 2 2
		for(int j=es-1;j>=0;--j){
			if(mod[i]){
				n[e[i][j]]=v[i]/es+1+'0';
				--mod[i];
			}
			else{
				n[e[i][j]]=v[i]/es+'0';
			}
		}
	}
	cout << n;
}
