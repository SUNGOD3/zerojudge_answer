#include <iostream>
using namespace std;
long long int fib[49]={0,1};
long long int dp(long long int n,long long int k){
	if(n==1&&k==1)return 0;
	else if(n==2&&k==1)return 1;
	while(n>48)n-=2;
	long long int size=fib[n];
	if(k>size)return -1;
	if(n%2){
		long long int xs=fib[n-2],ys=fib[n-1];
		if(k<=xs){
			return dp(n-2,k);
		}
		else{
			return dp(n-1,k-xs);
		}
	}
	else{
		long long int y1s=fib[n-2],xs=fib[n-3],y2s=fib[n-2];
		if(k<=y1s){
			return dp(n-2,k);
		}
		else if(k<=y1s+xs){
			return dp(n-3,k-y1s);
		}
		else{
			return dp(n-2,k-y1s-xs);
		}
	}
}
int main(){
	for(int i=2;i<49;++i){
		fib[i]=fib[i-1]+fib[i-2];
	}
	long long int m,n,k;
	cin >> m;
	while(m--){
		cin >> n >> k;
		cout << dp(n,k) << "\n";
	}
} 
