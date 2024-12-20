#include <iostream>
using namespace std;
long long int p[10001]={1,1},it,pri[2001],bm;
long long int mod(long long int b,long long int p,long long int m){
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
	long long int ans=1,n;
	for(int i=2;i<=100;++i)
		for(int j=i+i;j<=10000;j+=i)
			p[j]=1;
	for(int i=0;i<=10000;++i)
		if(p[i]==0)
			pri[it++]=i;
	it=0;
	while(cin >> n){ 
		bm=pri[it]%76543;
		ans*=mod(pri[it++],n,76543);
		ans%=76543;
	}
	cout << ans;
} 
