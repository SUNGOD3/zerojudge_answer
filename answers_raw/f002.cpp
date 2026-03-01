#include <iostream>
#include <algorithm>
using namespace std;
long long n;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> s;
		if(s[0]>='0'&&s[0]<='9'){
			long long v=0,ac=0;
			for(int j=0;j<s.size();++j){
				v*=10;
				v+=s[j]-'0';
			}
			string rt;
			while(v){
				--v;
				rt+=v%26+'A';
				v/=26;	
			}
			reverse(rt.begin(),rt.end());
			cout << rt << "\n";
		}
		else{
			long long v=0;
			for(int j=0;j<s.size();++j){
				v*=26;
				v+=s[j]-'A'+1;
			}
			cout << v << "\n";
		}
	} 
}
