#include <iostream>
#include <cmath>
using namespace std;
long long int kas[33];
int main(){
	int k;
	for(int i=1;i<33;++i)
		kas[i]=((1<<i)-1);
	while(cin >> k){
		if(k==0)break;
		bool ans=1,ak=1;
		for(int i=2,si=sqrt(kas[k]);i<=si;++i){
			if(kas[k]%i==0){
				ans=0;
				break;
			}
		}
		for(int i=2,ki=sqrt(k);i<=ki;++i){
			if(k%i==0){
				ak=0;
				break;
			}
		}
		if(ans)
			cout << "Perfect: " << kas[k]*(1<<k-1) << "!\n";
		else if(ak)
			cout << "Given number is prime. But, NO perfect number is available.\n";
		else
			cout << "Given number is NOT prime! NO perfect number is available.\n";
	}
} 
