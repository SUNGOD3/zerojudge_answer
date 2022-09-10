#include <iostream>
using namespace std;
int ans[2000],it,n,a,b;
char g;
inline bool chat(int k){
	int tmp=k,tmp2=0;
	while(tmp){
		tmp2*=10;
		tmp2+=tmp%10;
		tmp/=10;
	}
	if(tmp2==k)
		return 1;
	else
		return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<=2359;++i){
		if(i%100<60&&chat(i)){
			ans[it]=i;
			++it;
		}
	}
	cin >> n;
	while(n--){
		cin >> a >> g >> b;
		b+=a*100;
		for(int i=0;i<it;++i){
			if(b<ans[i]){
				cout << ans[i]/1000 << (ans[i]%1000)/100 << ":" << (ans[i]%100)/10 << ans[i]%10 << "\n";
				break;
			}
			if(i==it-1){
				cout << "00:00\n";
				break;
			}
		}
	}
} 
