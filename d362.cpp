#include <iostream>
using namespace std;
int p[700],n,it,ans[100005],it2,k;
bool isp[5005];
bool jp(int x){
	for(int i=0;i<it&&p[i]<x;++i){
		if(x%p[i]==0)return 0;
	}
	return 1;
}
int main(){
	cin.tie(0); cout.tie(0); 
	ios::sync_with_stdio(false);
	for(int i=2;i<=67;++i){
		for(int j=i+i;j<=4500;j+=i){
			isp[j]=1;
		}
	}
	for(int i=2;i<=4500;++i){
		if(isp[i]==0){
			p[it]=i;
			++it;
		}
	}
	for(int i=3;it2<100000;i+=2){
		if(jp(i+2)==0){
			i+=2;
		}
		else{
			if(jp(i)){
				ans[it2]=i;
				++it2;
			}
		}
	}
	while(cin >> n){
		
		cout << "(" << ans[n-1] << ", " << ans[n-1]+2 << ")\n";
	}
} 
