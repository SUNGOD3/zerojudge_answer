#include <iostream>
using namespace std;
struct m{
	string name;
	int t;
};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int d=0;
		m a[n];
		for(int i=0;i<n;++i)
			cin >> a[i].name >> a[i].t;
		while(k){
			++d;
			for(int i=0;i<n;++i){
				if(d%a[i].t==0){
					cout << d << " " << a[i].name << "\n";
					--k;
				}
				if(k==0){
					break;
				}
			}
		} 
	}
} 
