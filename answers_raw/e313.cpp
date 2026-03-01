#include <iostream>
using namespace std;
int n,ma;
string s,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> s;
		int ct=0;
		bool x[26]={};
		for(int j=0;j<s.size();++j)
			x[s[j]-'A']=1;
		for(int j=0;j<26;++j)
			ct+=x[j];
		if(i==0||ct<ma||(ct==ma&&s<ans)){
			ans=s;
			ma=ct;
		}
	}
	cout << ans;
}
