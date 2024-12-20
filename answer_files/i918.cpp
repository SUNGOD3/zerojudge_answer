#include <iostream>
using namespace std;
int n;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> s;
		int c[26]={},ans=1e9;
		for(int j=0;j<s.size();++j)
			++c[s[j]-'A'];
		ans=min(ans,c['M'-'A']);
		ans=min(ans,c['A'-'A']/3);
		ans=min(ans,c['R'-'A']/2);
		ans=min(ans,c['G'-'A']);
		ans=min(ans,c['I'-'A']);
		ans=min(ans,c['T'-'A']);
		cout << ans << '\n';
	}
}
