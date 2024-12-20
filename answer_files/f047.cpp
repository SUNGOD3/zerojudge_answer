#include <iostream>
using namespace std;
int it=0;
string ans[3],s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		ans[it%3]+=s+" ";
		++it;
	}
	for(int i=0;i<3;++i){
		cout << ans[i] << "\n"; 
	}
} 
