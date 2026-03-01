#include <iostream>
using namespace std;
int m,h,n,t;
int main(){
	cin >> n;
	int ans[n][2];
	cin >> h >> m;
	for(int i=0;i<n;++i){
		cin >> t;
		m+=t;
		while(m>=60){
			m-=60;
			++h;
		}
		h%=24;
		ans[i][0]=h;
		ans[i][1]=m;
	}
	while(cin >> t){
		if(t==0)break;
		--t;
		if(ans[t][0]<10){
			cout << 0;
		}
		cout << ans[t][0] << ":";
		if(ans[t][1]<10){
			cout << 0;
		}
		cout << ans[t][1] << "\n"; 
	}
} 
