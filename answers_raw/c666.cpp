#include <iostream>
using namespace std;
int it=0;
string ans[5001]={"2"};
int prime[5001];
string mult(string x,int y){
	int tmp[21001]={0};
	int xl=x.length(),it=0;
	string rt;
	while(y){
		int t=y%10;
		for(int i=0;i<xl;++i)
			tmp[it+i]+=(x[xl-1-i]-48)*t;
		y/=10;
		++it;
	}
	for(int i=0;i<21001;++i)
		if(tmp[i]>=10){
			tmp[i+1]+=tmp[i]/10;
			tmp[i]%=10;
		}
	for(int i=21000;i>=0;--i)
		if(tmp[i]!=0){
			it=i;
			break;
		}
	for(int i=it;i>=0;--i)
		rt+=tmp[i]+'0';
	return rt;
}
bool p[50001]={1,1};
int main(){
	cin.tie(0);ios::sync_with_stdio(false);
	for(int i=2;i<=221;++i)
		for(int j=i+i;j<=48620;j+=i)
			p[j]=1;
	for(int i=0;i<=48620&&it<=5000;++i)
		if(p[i]==0)
			prime[it++]=i;
	for(int i=1;i<=5000;++i)
		ans[i]=mult(ans[i-1],prime[i]);
	while(cin >> it)
		cout << ans[it-1] << "\n";
}
