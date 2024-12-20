#include <iostream>
using namespace std;
long long n,j;
long long bs(long long l,long long r){
	if(l>r)return l;
	long long m=(l+r)/2;
	if(m*m*m-j*j*j<n)return bs(m+1,r);
	else return bs(l,m-1);
}
int  main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)return 0;
		bool ac=0;
		for(j=1;j<=100;++j){
			long long i=bs(0,100);
			if(i*i*i-j*j*j==n){
				cout << i << " " << j << "\n";
				ac=1;
				break;
			}
		}
		if(!ac)
			cout << "No solution\n";
	}
} 
