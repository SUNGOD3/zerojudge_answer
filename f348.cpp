#include <iostream>
using namespace std;
int n,ans;
bool a[1000005];
bool ise(int k){
	while(k){
		if(k%2)return 0;
		k/=10;
	}
	return 1;
}
int main(){
	for(int i=0;i<=1000000;i+=2){
		a[i]=ise(i);	
	}
	cin >> n;
	for(int i=n;i<=1000000;++i){
		if(a[i]){
			ans=i-n;
			break;
		}
	}
	if(ans==0&&a[n]==0){
		ans=1000000;
	}
	for(int i=n;i>=0;--i){
		if(a[i]){
			ans=min(ans,n-i);
			break;
		}
	}
	cout << ans;
} 
