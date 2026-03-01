#include <iostream>
using namespace std;
int main(){
	int ans,q;
	while(cin >> ans){
		char ac[ans];
		for(int i=0;i<ans;++i)
			cin >> ac[i];
		string t;
		cin >> q;
		while(q--){
			int s=0;
			cin >> t;
			int tl=t.length();
			tl=min(tl,ans);
			for(int i=0;i<tl;++i)
				if(ac[i]==t[i])
					++s;
			cout << 100/ans*s << "\n";
		}
	}
} 
