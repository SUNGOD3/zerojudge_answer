#include <iostream>
using namespace std;
long long a,n,c[101];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		int ans=0;
		for(int i=0;i<=100;++i){
			c[i]=0;
		}
		for(int i=0;i<n;++i){
			cin >> a;
			++c[a%100];
		}
		for(int i=1;i<=49;++i){
			ans+=c[i]*c[100-i];
		}
		long long k=c[50];
		if(k>1)ans+=k*(k-1)/2;
		k=c[0];
		if(k>1)ans+=k*(k-1)/2;
		cout << ans << "\n"; 
	}
} 
