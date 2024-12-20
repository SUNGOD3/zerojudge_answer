#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
int a[100001],n,full;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	while(cin >> n >> full){
		int h=0;
		a[0]=read();
		for(int i=0;i<n;++i)
			a[i]=read();
		sort(a,a+n);
		for(int i=n-1;i>=0;--i){
			h+=a[i];
			if(h>=full){
				cout << n-i << "\n";
				break;
			}
		}
		if(h<full){
			cout << "OAQ\n";
		}
	}
}
 
