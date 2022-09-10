#include <iostream>
#include <set>
using namespace std;
int n,k,p,a[1000005],b[1000005],c[1000005];
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> k){
		k=min(n,k);
		multiset <int> s;
		for(int i=0;i<k;++i){
			cin >> a[i];	
			s.insert(a[i]);
		}
		for(int i=k;i<n;++i){
			cin >> a[i];
			b[i-k]=*s.begin();
			c[i-k]=*--s.end();
			s.erase(a[i-k]);
			s.insert(a[i]);
		}
		b[n-k]=*s.begin();
		c[n-k]=*--s.end();
		for(int i=0;i<=n-k;++i){
			if(i)cout << " ";
			cout << b[i] ;
		}
		cout << "\n";
		for(int i=0;i<=n-k;++i){
			if(i)cout << " ";
			cout << c[i];
		}
		cout << "\n";
	}
} 
