#include <iostream>
using namespace std;
int pw(int base,int p){
	if(p==0)return 1;
	else if(p==1)return base;
	int k=pw(base,p/2);
	if(p%2)return k*k*base;
	return k*k;
}
int main() {
	cin.tie(0);cin.sync_with_stdio(0);
	int n,a,line=0;
	while(cin >> a >> n){
		if(a==0&&n==0)break;
		cout << pw(a,n) << "\n";
	}
	while(cin >> a >> n)
		++line;
	cout << "All Over. Exceeded " << 65536 << " lines!\n";
	return 0;
}
