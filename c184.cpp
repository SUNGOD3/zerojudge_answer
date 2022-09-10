#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while (cin>>n,n!=0){
		int x=1,y=1;
		double sn=sqrt(n);
		for(int i=2;i<=sn;i++){
			if(n%i==0 && i!=sn) {
				x+=i; 
				x+=n/i;
			}
			else if(n%i==0 && i==sn) x+=i;
		}
		if(x==n) cout << "=" << n << "\n";
		else{
			double sm=sqrt(x);
			for(int i=2;i<=sm;++i){
				if(x%i==0 && i!=sm) {
					y+=i; 
					y+=x/i;
				}
				else if(x%i==0 && i==sm) y+=i;
			}
			if(y==n) cout << x << "\n";
			else cout << "0\n";
		}
	}
}
