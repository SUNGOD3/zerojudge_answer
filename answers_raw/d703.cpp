#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int s,l;
	while(cin >> s >> l){
		string ans;
		while(s--)
			ans+='S';
		while(l--)
			ans+='L';
		do{
			cout << ans << "\n";
		}while(prev_permutation(ans.begin(),ans.end()));
		cout << "\n";
	}
} 
