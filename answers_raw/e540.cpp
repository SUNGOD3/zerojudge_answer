#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	cin >> n;
	string a;
	while(n--){
		cin >> a;
		int c=0,ans=0;
		for(int i=0,al=a.length();i<al;++i){
			if(a[i]=='O'){
				++c;
				ans+=c;
			}
			else
				c=0;
		}
		cout << ans << "\n";
	}
} 
