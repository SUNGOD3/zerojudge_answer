#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,k,t,ac=0,v;
	cin >> n >> k >> t;
	for(int i=0;i<n;++i){
		int mi=1005,ma=0,s=0;
		for(int j=0;j<k;++j){
			cin >> v;
			mi=min(v,mi);
			ma=max(v,ma);
			s+=v;
		}
		if((s-mi-ma)/(k-2)>=t){
			ac=1;
			cout << i << "\n";
		}
	}
	if(ac==0){
		cout << "A is for apple.";
	}
} 
