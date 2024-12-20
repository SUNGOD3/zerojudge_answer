#include <iostream>
using namespace std;
int ans[1299710],tmp;
bool p[1299710]={1,1};
int main() {
	cin.tie(0);cin.sync_with_stdio(0);
	for(int i=2;i<=1140;++i)
		for(int j=i+i;j<1299710;j+=i)
			p[j]=1;
	for(int i=2;i<1299710;++i){
		if(p[i]==0){
			ans[i]=0;
			int it=i-1;
			while(p[it]&&it)
				ans[it--]=tmp;
			tmp=0;
		}
		else
			++tmp;
	}
	while(cin >> tmp){
		if(tmp==0)break;
		if(ans[tmp])cout << ans[tmp]+1 << "\n";
		else cout << "0\n";
	}
	return 0;
}
