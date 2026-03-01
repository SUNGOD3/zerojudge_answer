#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	string a,b;
	cin >> n;
	getline(cin,a);
	while(n--){
		getline(cin,a);
		getline(cin,b);
		int al=a.length(),bl=b.length();
		string aa,bb;
		for(int i=0;i<al;++i){
			if(a[i]>='a'&&a[i]<='z')
				aa+=a[i];
			else if(a[i]>='A'&&a[i]<='Z')
				aa+=a[i]+'a'-'A';
		}
		for(int i=0;i<bl;++i){
			if(b[i]>='a'&&b[i]<='z')
				bb+=b[i];
			else if(b[i]>='A'&&b[i]<='Z')
				bb+=b[i]+'a'-'A';
		}
		sort(aa.begin(),aa.end());
		sort(bb.begin(),bb.end());
		if(aa!=bb)cout << "0\n";
		else
			cout << "1\n";
	}
} 
