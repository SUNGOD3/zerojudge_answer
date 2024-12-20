#include <iostream>
using namespace std;
int main(){
	unsigned long long a,b;
	while(cin >> a >> b){
		if(a>b)swap(a,b);
		unsigned long long bit[101],bit2[101],it=0,it2=0,tmp=a,tmp2=b,t=1,ans=0;
		for(int i=0;i<101;++i){
			bit[i]=bit2[i]=0;
		}
		while(tmp){
			bit[it++]=tmp%2;
			tmp/=2;
		}
		while(tmp2){
			bit2[it2++]=tmp2%2;
			tmp2/=2;
		}
		for(int i=it2-1;i>=0;--i){
			if(bit2[i]!=bit[i]){
				t=0;
			}
			if(t==0){
				bit2[i]=0;
			}
		}
		for(int i=it2-1;i>=0;--i){
			ans*=2;
			if(bit2[i]){
				++ans;
			}
		}
		cout << ans << "\n";
	}
}
