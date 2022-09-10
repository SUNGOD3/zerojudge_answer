#include <iostream>
using namespace std;
long long int bm;
inline long long int mod(long long int b,long long int p){
	if(p==0)return 1;
	if(p==1)return bm;
	bool o=p&1;
	p>>=1;
	long long int tmp=mod(b,p);
	if(o)
		return tmp*tmp*b%10007;
	else
		return tmp*tmp%10007;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int b,p;
	while(cin >> b >> p){
		bm=b%10007;
		cout << mod(b,p) << "\n";
	}
} 
