#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		if(n==0)break;
		int a[n],b[n],ans=0;
		for(int i=0;i<n;++i)
			cin >> a[i];
		for(int i=0;i<n;++i)
			cin >> b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0,j=n-1;i<n;++i){
			if(a[i]+b[j]>10){
				++ans;
				--j;
			}
		}
		cout << ans << " " << ans*200 << "\n";
	}
} 
