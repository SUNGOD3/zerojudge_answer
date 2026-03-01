#include <iostream>
using namespace std;
int main(){
	int c=0,n;
	while(cin >> n){
		cout << "Case #" << ++c << ": The maximum product is ";
		int a[n];
		for(int i=0;i<n;++i)
			cin >> a[i];
		long long int ans=0;
		for(int i=0;i<n;++i){
			long long int temp=1;
			for(int j=i;j<n;++j){
				temp*=a[j];
				if(temp>ans)ans=temp;
			}
		}
		cout << ans << ".\n\n";
	}
} 
