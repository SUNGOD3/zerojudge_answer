#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,ss=0;
	string a;
	cin >> n;
	while(n--){
		if(ss)cout << '\n';
		ss=1;
		cin >> a;
		int al=a.length(),s=0;
		string b;
		for(int i=0;i<al&&!s;++i){
			b+=a[i];
			if(al%(i+1)==0){
				string tmp;
				int t=al/(i+1);
				for(int j=0;j<t;++j){
					tmp+=b;
				}
				if(a==tmp){
					cout << b.length() << "\n";
					s=1;
				}
			}
		}
	}
} 
