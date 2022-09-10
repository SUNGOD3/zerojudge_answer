#include <iostream>
using namespace std;
int main(){
	string a;
	int t;
	cin >> t;
	while(t--){
		cin >> a;
		int al=a.length(),ans=0;
		for(int i=al-1,k=1;i>=0;--i,k*=36){
			if(a[i]>'9')
				ans+=(a[i]-'A'+10)*k;
			else
				ans+=(a[i]-'0')*k;
			ans%=1688;
			k%=1688;
		}
		cout << ans+1 << '\n';
	}
} 
