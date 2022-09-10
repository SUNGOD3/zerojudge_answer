#include <iostream>
using namespace std;
int a,b;
int w(int tmp){
	int k=1;
	while(tmp/=10){
		++k;
	}
	return k;
}
int main(){
	cin >> a >> b;
	int l=w(a*b),al=w(a),bl=w(b),ab=a*b;
	l=max(l,max(al,bl));
	int t=l-al;
	while(t){
		--t;
		cout << " ";
	}
	cout << a << "\n";
	t=l-bl;
	while(t){
		--t;
		cout << " ";
	}
	cout << b << "\n";
	t=l;
	while(t){
		--t;
		cout << "-";
	}
	cout << "\n";
	t=bl;
	for(int i=0;i<t;++i){
		int ks=b%10;
		b/=10;
		int tt=l-w(ks*a)-i;
		while(tt){
			--tt;
			cout << " ";
		}
		cout << ks*a ;
		int ii=i;
		while(ii){
			--ii;
			cout << " ";
		}
		cout << "\n";
	}
	t=l;
	while(t){
		--t;
		cout << "-";
	}
	cout << "\n";
	cout << ab;
} 
