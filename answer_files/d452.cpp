#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N,m,k;
	cin >> N;
	while(N--){
		cin >>  m;
		int a[m],ans=0,k=m/2;
		for(int i=0;i<m;i++){
			cin >> a[i];
		}
		sort(a,a+m);
		for(int i=0;i<m;i++){
			ans+=abs(a[i]-a[m/2]);
		}
		cout << ans << "\n";
	}
} 
