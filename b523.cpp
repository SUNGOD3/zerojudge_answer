#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	map <string,int> ans;
	string a;
	while(getline(cin,a)){
		ans[a]++;
		(ans[a]==1)?cout << "NO\n":cout << "YES\n";
	}
} 
