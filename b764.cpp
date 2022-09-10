#include <iostream>
#include <map>
using namespace std;
map <string,char> ans;
int n;
string a;
int main(){
	ans["00"]='A';
	ans["01"]='B';
	ans["100"]='0';
	ans["101"]='1';
	ans["1100"]='2';
	ans["1101"]='3';
	ans["11100"]='4';
	ans["11101"]='5';
	ans["111100"]='6';
	ans["111101"]='7';
	ans["111110"]='8';
	ans["111111"]='9';
	while(cin >> n){
		for(int i=0;i<n;++i){
			cin >> a;
			int al=a.length();
			string op,tmp;
			for(int j=0;j<al;++j){
				tmp+=a[j];
				if(ans[tmp]){
					op+=ans[tmp];
					tmp.clear();
				}
			}
			int ol=op.length();
			for(int j=0;j<ol;++j){
				if(j==4)cout << ',';
				cout << op[j];
			}
			cout << "\n";
		}
	}
} 
