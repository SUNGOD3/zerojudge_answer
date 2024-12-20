#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);cin.tie(0);
	string a;
	while(getline(cin,a)){
		int ans[55]={0},ma=0,al=a.length();
		for(int i=0;i<al;++i){
			if(a[i]>='A'&&a[i]<='Z'){
				++ans[a[i]-'A'];
				ma=max(ans[a[i]-'A'],ma);
			}
			else if(a[i]>='a'&&a[i]<='z'){
				++ans[a[i]-'a'+26];
				ma=max(ans[a[i]-'a'+26],ma);
			}
		}
		for(int i=0;i<26;++i)
			if(ans[i]==ma)
				cout << (char)('A'+i);
		for(int i=26;i<55;++i)
			if(ans[i]==ma)
				cout << (char)('a'+i-26);
		cout << " " << ma << "\n";
	}
}
