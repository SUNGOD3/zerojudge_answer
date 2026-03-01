#include <iostream>
using namespace std;
int fib[20]={2,3},n,it,ans[20];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<20;++i){
		fib[i]+=fib[i-1]+fib[i-2];
	}
	while(cin >> n){
		it=0;
		while(n){
			ans[it]=n%fib[it];
			n/=fib[it];
			++it;
		}
		for(int i=it-1;i>=0;--i){
			cout << ans[i];
			if(i)cout << ','; 
		}
		cout << "\n";
	}
}
