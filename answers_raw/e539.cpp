#include <iostream>
using namespace std;
int dp[1000005],x,y;
bool p[1000005]={1,1};
bool isrecprime(int v){
	int t=v,k=1;
	while(t){
		t/=10;
		k*=10;
	}
	for(int i=0;i<8;++i){
		if(p[v])return 0;
		v+=k*(v%10);
		v/=10;
	}
	return 1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=1000;++i){
		for(int j=i+i;j<=1000000;j+=i){
			p[j]=1;
		}
	}
	for(int i=2;i<=1000000;++i){
		if(isrecprime(i)){
			dp[i]=dp[i-1]+1;
		}
		else{
			dp[i]=dp[i-1];
		}
	}	
	while(cin >> x){
		if(x==-1)break;
		cin >> y;
		int ans=dp[y]-dp[x-1];
		if(!ans){
			cout << "No Circular Primes.\n";
		}
		else if(ans==1){
			cout << ans << " Circular Prime.\n";
		}
		else{
			cout << ans << " Circular Primes.\n";
		}
	}
}
