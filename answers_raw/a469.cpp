#include <iostream>
using namespace std;
string in;
int il;
inline void dfs(int s,string tmp){
	if(s==il){
		cout << tmp << "\n";
		return;
	}
	tmp=in[s]+tmp;
	for(int i=1;i<=s+1;++i){
		dfs(s+1,tmp);
		swap(tmp[i],tmp[i-1]);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int s=0;
	while(cin >> in){
		if(s)cout << "\n";
		s=1;
		il=in.length();
		string st;
		st+=in[0];
		dfs(1,st);
	}
} 
