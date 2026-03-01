#include <iostream>
using namespace std;
int main(){
	int t,m;
	cin >> t >> m;
	int a[t+1]={0},b,c,ans=0;
	while(m--){
		cin >> b >> c;
		for(int i=t-b;i>=0;--i){
			if(a[i]||i==0){
				a[i+b]=max(a[i+b],a[i]+c);
				ans=max(a[i+b],ans);
			}
		}
	}
	cout << ans;
} 
