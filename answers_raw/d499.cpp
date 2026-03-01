#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;
	while(cin >> a >> b){
		int ans[2001]={0},it=2000;
		ans[0]=1;
		while(b--){
			for(int i=0;i<2001;++i){
				ans[i]*=a;
			}
			for(int i=0;i<2000;++i){
				if(ans[i]>9){
					ans[i+1]+=ans[i]/10;
					ans[i]%=10;
				}
			}
		}
		while(ans[it]==0){
			--it;
		}
		for(int i=it;i>=0;--i){
			cout << ans[i];
		}
		cout << "\n";
	}
} 
