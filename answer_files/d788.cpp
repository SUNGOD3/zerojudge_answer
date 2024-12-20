#include <iostream>
using namespace std;
int MAX_N=100005,BIT[100005];
int lowerbit(int x){
	return (x)&(-x);
}
int sum(int x){
	int rt=0;
	for(int i=x;i<=MAX_N;i+=lowerbit(i))
		rt+=BIT[i];
	return rt;
}
int edit(int x){
	for(int i=x;i>0;i-=lowerbit(i))
		++BIT[i];
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,t;
	while(cin >> n){
		for(int i=0;i<MAX_N;++i){
			BIT[i]=0;
		}
		for(int i=0;i<n;++i){
			cin >> t;
			cout << sum(t)+1 << "\n";
			edit(t);
		} 
	}
}
