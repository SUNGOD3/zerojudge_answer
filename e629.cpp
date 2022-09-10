#include <iostream>
#include <cmath>
using namespace std;
int s,ca,ans[1001];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<1001;++i)
		ans[i]=-1;
	for(int i=1;i<1001;++i){
		int tmp=0,sqi=sqrt(i);
		for(int j=1;j<=sqi;++j)
			if(i%j==0){
				tmp+=j;
				tmp+=i/j;
			}
		if(sqi*sqi==i)
			tmp-=sqi;
		if(tmp<1001)
			ans[tmp]=i;
	}
	while(cin >> s){
		if(s==0)break;
		cout << "Case " << ++ca << ": " << ans[s] << '\n';
	}
} 
