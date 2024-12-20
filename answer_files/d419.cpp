#include <iostream>
using namespace std;
int ans[1000005],n,p[200],sz;
bool isp[1505];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=2;i<=50;++i){
		for(int j=i+i;j<=1100;j+=i){
			isp[j]=1;
		}
	}
	for(int i=2;i<=1100;++i){
		if(isp[i]==0)p[sz++]=i;
	}
	for(int i=2;i<=1000000;++i){
		int tmp=i,ct=0;
		for(int j=0;p[j]*p[j]<=tmp;++j){
			while(tmp%p[j]==0){
				tmp/=p[j];
				++ct;
			}
		}
		if(tmp!=1)++ct;
		ans[i]+=ans[i-1]+ct;
	}
	while(cin >> n){
		cout << ans[n] << "\n";
	}
}
