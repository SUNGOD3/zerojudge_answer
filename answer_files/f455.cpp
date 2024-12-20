#include <iostream>
using namespace std;
int t,n,bp[100001],a,b,ans2;
float ans=0;
string name,nk;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t >> n;
	while(n--){
		cin >> nk >> a >> b;
		float aa=a,bb=b;
		if(aa/bb>ans){
			ans=aa/bb;
			name=nk;
		}
		for(int i=t-b;i>=0;--i)
			if(bp[i]||i==0)
				bp[i+b]=max(bp[i+b],bp[i]+a);
	}
	for(int i=0;i<=t;++i)
		ans2=max(bp[i],ans2);
	cout << ans2 << "\n" << name ;
} 
