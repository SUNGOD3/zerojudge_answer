#include <iostream>
using namespace std;
int ans[51];
int main(){
	int N,D,it;
	while(cin >> N >> D){
		if(!N)break;
		for(int i=0;i<51;++i)
			ans[i]=0;
		ans[0]=1;
		while(D--){
			for(int i=0;i<51;++i)
				ans[i]*=N;
			for(int i=0;i<51;++i){
				if(ans[i]>9){
					ans[i+1]+=ans[i]/10;
					ans[i]%=10;
				}
			}
		}
		for(int i=50;i>=0;--i)
			if(ans[i]){
				it=i+1;
				break;
			}
		while(it--)
			cout << ans[it];
		cout << "\n";
	}
} 
