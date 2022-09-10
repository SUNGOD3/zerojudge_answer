#include <iostream>
using namespace std;
int a[32768],b[1000001]={0};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,ans=0;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(a[i]>=0&&b[a[i]])
			continue;
		int tmp=1000001;
		if(i==0)tmp=a[0];
		for(int j=0;j<i&&tmp;++j)
			tmp=min(abs(a[i]-a[j]),tmp);
		ans+=tmp;
		if(a[i]>=0)b[a[i]]=1;
	}
	cout << ans << '\n';
} 
