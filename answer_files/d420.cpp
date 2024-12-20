#include <iostream>
using namespace std;
long long int step(long long int a,long long int l,long long int n){
	if(a==1){
		return n;
	}
	else if(a%2==0)
		return step(a/2,l,n+1);
	else{
		if(a*3+1>l)
			return n;
		return step(3*a+1,l,n+1);
	}
}
int main(){
	int a,l,i=1;
	while(cin >> a >> l){
		if(a<0&&l<0)break;
		cout << "Case " << i++ << ": A = " << a << ", limit = " << l << ", number of terms = " << step(a,l,1) << "\n";
	}
}
