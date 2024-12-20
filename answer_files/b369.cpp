#include <iostream>
using namespace std;
int n,pr[4001],it,k;
bool p[30001]={1,1};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=174;++i)
		for(int j=i+i;j<=30000;j+=i)
			p[j]=1;
	for(int i=0;i<=30000;++i)
		if(p[i]==0)
			pr[it++]=i;
	while(cin >> k){
		int tmp[30001]={0},mait=0;
		for(int i=2;i<=k;++i){
			n=i;
			it=0;
			while(n!=1){
				while(n%pr[it]==0&&n!=1){
					++tmp[it];
					n/=pr[it];
				}
				++it;
			}
			mait=max(it,mait);
		} 
		cout << k << "!=";
		for(int i=0;i<mait;++i)
			cout << tmp[i] << " ";
		cout << "\n";
	}
} 
