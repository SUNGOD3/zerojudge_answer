#include <iostream>
using namespace std;
int pr[1230],it,ans[10001],n;
bool p[10005]={1,1};
int main(){
	for(int i=2;i<=100;++i)
		for(int j=i+i;j<=10000;j+=i)
			p[j]=1;
	for(int i=2;i<=10000;++i){
		if(p[i]==0){
			pr[it]=i;
			++it;
		}
	}
	for(int i=0;i<it;++i){
		int c=pr[i];
		++ans[c];
		for(int j=i+1;j<it;++j){
			c+=pr[j];
			if(c>10000)break;
			++ans[c];
		}
	}
	while(cin >> n){
		if(n==0)break;
		cout << ans[n] << "\n";
	}
} 
