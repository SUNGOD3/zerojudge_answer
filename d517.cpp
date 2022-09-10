#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	string a;
	while(cin >> n){
		int b=1;
		map <string,int> ans;
		while(n--){
			cin >> a;
			if(ans.find(a)==ans.end()){
				ans[a]=b;
				cout << "New! " << b << "\n";
				b++;
			}
			else{
				cout << "Old! " << ans[a] << "\n"; 
			}
		}
	}
} 
