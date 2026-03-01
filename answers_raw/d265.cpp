#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		if(n==0)break;
		int ans=0,t=0;
		while(n--){
			cin >> t;
			ans^=t;
		}
		if(ans)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
} 
