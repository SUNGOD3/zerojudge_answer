#include <iostream>
#include <algorithm>
using namespace std;
int n,BIT[100001],MAX_N=100001;
long long int a[100001],b[100001];
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
int getID(long long int x){
	return (lower_bound(b,b+n,x)-b)+1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		for(int i=0;i<=100000;++i){
			BIT[i]=0;
		}
		for(int i=0;i<n;++i){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;++i){
			int tmp=getID(a[i]);
			//cout << tmp << " ";
			cout << sum(tmp)+1 << "\n";
			edit(tmp);
		}
	}
} 
