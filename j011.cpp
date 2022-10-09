#include <iostream>
using namespace std;
int n,t;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n;
		if(ca!=1)cout << "\n";
		cout << "Case " << ca << ":\n";
		getline(cin,s);
		for(int i=0;i<n;++i){
			getline(cin,s);
			bool sp=0;
			for(int j=0;j<s.size();++j){
				if(s[j]==' '){
					if(sp==0)cout << ' ';
					sp=1;
				}
				else{
					sp=0;
					cout << s[j];
				}
			}
			cout << "\n";
		}
	}
} 
