#include <iostream>
using namespace std;
int main(){
	int n,ans=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<n;++i){
		int tmp=0;
		for(int ii=i;ii<n;++ii){
			if(a[ii]>=a[i])
				tmp+=a[i];
			else
				break;
		}
		for(int ii=i-1;ii>=0;--ii){
			if(a[ii]>=a[i])
				tmp+=a[i];
			else
				break;
		}
		ans=max(ans,tmp);
	}
	cout << ans;
} 
