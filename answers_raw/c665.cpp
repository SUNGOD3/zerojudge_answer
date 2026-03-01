#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	int b,c;
	while(cin >> a >> b >> c){
		int n=0,al=a.length(),k=1;
		for(int i=al-1;i>=0;--i,k*=b){
			if(a[i]<='9')
				n+=(a[i]-48)*k;
			else
				n+=(a[i]-55)*k;
		}
		string ans;
		while(n){
			int nc=n%c;
			if(nc>9)
				ans+=nc+55;
			else
				ans+=nc+48;
			n/=c;
		}
		reverse(ans.begin(),ans.end());
		cout << ans << "\n";
	}
} 
