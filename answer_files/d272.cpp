#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,n;
	string s;
	cin >> t;
	while(t--){
		cin >> n;
		int ans=0,la[26]={0},tmp=0;
		for(int i=0;i<n;++i){
			cin >> s;
			int k[26]={0};
			for(int j=0;j<s.length();++j){
				k[s[j]-'a']=1;
			}
			for(int i=0;i<26;++i){
				if(la[i]){
					if(k[i]==0){
						la[i]=0;
						--tmp;
					}
				}
			}
			if(tmp==0){
				++ans;
				for(int j=0;j<s.length();++j){
					la[s[j]-'a']=1;
					++tmp;
				}
			}
		}
		cout << ans-1 << "\n";
	}
}
