#include <iostream>
#include <algorithm>
using namespace std;
long long t,x,a[41],ma=5000000;
int main(){
	cin >> t;
	while(t--){
		long long n=0,s=0;
		while(cin >> x){
			if(x==0)break;
			a[n++]=x;
		}
		sort(a,a+n);
		for(int i=n-1,j=0;i>=0;--i,++j){
			long long ba=a[i];
			for(int k=0;k<j;++k){
				if(ba>ma)break;
				ba*=a[i];
			}
			s+=ba*2;
			if(s>ma)break;
		}
		if(s>ma){
			cout << "Too expensive\n";
		}
		else{
			cout << s << "\n";
		}
	}
} 
