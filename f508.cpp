#include <iostream>
using namespace std;
long long int fib[70]={0,1},ac,g;
void dp(long long int n,long long int k){
	if(n==1&&k==1){
		cout << "0";
		g=1;
		return;
	}
	else if(n==2&&k==1){
		cout << "1";
		return;
	}
	if(n>69)n=68-n%2;
	long long int size=fib[n];
	if(k>size){
		ac=0;
		return;
	}
	if(n%2){
		long long int xs=fib[n-2];
		if(k<=xs){
			dp(n-2,k);
		}
		else{
			dp(n-1,k-xs);
		}
	}
	else{
		long long int y1s=fib[n-2],xs=fib[n-3];
		if(k<=y1s){
			dp(n-2,k);
		}
		else if(k<=y1s+xs){
			dp(n-3,k-y1s);
		}
		else{
			dp(n-2,k-y1s-xs);
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<70;++i){
		fib[i]=fib[i-1]+fib[i-2];
	}
	long long int m,n,l,r;
	cin >> m;
	while(m--){
		ac=1;
		cin >> n >> l >> r;
		++n;
		g=0;
		for(int i=l;i<=r&&ac;++i){
			if(g==1){
				cout << '1';
				g=0;
			}
			else{
				dp(n,i+1);
			}
		}
		cout << "\n";
	}
} 
