#include <iostream>
using namespace std;
long long int s;
long long int ans(long long int l,long long int r){
	if(l>r)return l;
	long long int m = (l+r)/2,n = ((m+1)*m)/2;
	if(n>s){
		return ans(l,m-1);
	}
	else{
		return ans(m+1,r);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		if(s==0)break;
		int tmp = ans(0,100000001);
		cout << ((tmp+1)*tmp)/2-s << " " << tmp << "\n";
	}
}
