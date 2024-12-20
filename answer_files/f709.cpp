#include <iostream>
using namespace std;
int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string ans[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,m,d;
	cin >> t;
	while(t--){
		cin >> m >> d;
		for(int i=1;i<m;++i)
			d+=arr[i];
		cout << ans[d%7] << "\n";
	}
} 
