#include <iostream>
using namespace std;
long long int bm;
inline long long int mod(long long int b,long long int p,long long int m){
	if(p==0)return 1;
	if(p==1)return bm;
	bool o=p&1;
	p>>=1;
	long long int tmp=mod(b,p,m);
	if(o)
		return tmp*tmp*b%m;
	else
		return tmp*tmp%m;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int b,p,m;
	while(cin >> b >> p >> m){
		bm=b%m;
		cout << mod(b,p,m) << "\n";
	}
} 
