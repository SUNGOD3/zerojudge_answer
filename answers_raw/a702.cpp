#include <iostream>
using namespace std;
//<20000000
bool p[18466750]={1,1};
int ans[100001],it,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=3;i<=4300;i+=2)
		for(int j=i+i;j<=18466750;j+=i)
			p[j]=1;
	for(int i=3;i<=18466750&&it<100000;i+=2)
		if(p[i]==0&&p[i+4]==0)
			ans[it++]=i;
	while(cin >> n)
		cout << "(" << ans[n-1] << ", " << ans[n-1]+4 << ")\n";
} 
