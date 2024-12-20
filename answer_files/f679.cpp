#include <iostream>
#include <map>
using namespace std;
map <string,bool> ans;
string a;
int n,m;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	while(n--){
		cin >> a;
		ans[a]=1;
	}
	while(m--){
		cin >> a;
		if(ans[a]){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
} 
