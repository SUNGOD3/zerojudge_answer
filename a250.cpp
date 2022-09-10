#include <iostream>
#include <algorithm>
using namespace std;
struct so{
	int num=0,it=0;
};
bool cmp(so x,so y){
	if(x.num<y.num)return 1;
	if(x.num==y.num&&x.it<y.it)return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		if(n==0)break;
		int a[n],k,ans1=1000001,ans2=1000001;
		so b[n+1];
		bool ans=0;
		for(int i=0;i<n;++i)cin >> a[i];
		cin >> k;
		for(int i=1;i<=n;++i){
			b[i].num=a[i-1];
			b[i].num+=b[i-1].num;
			b[i].num%=k;
			if(b[i].num<0)b[i].num+=k;
			b[i].it=i;
		}
		sort(b,b+n+1,cmp);
		for(int i=0;i<=n;++i){
			if(b[i].num==b[i+1].num){
				if(b[i].it+1<ans1){
					ans1=b[i].it+1;
					ans2=b[i+1].it;
					ans=1;
				}
			}
		}
		if(ans==0)
			cout << "no solutions.\n";
		else
			cout << ans1 << " " << ans2 << "\n";
	}
}
