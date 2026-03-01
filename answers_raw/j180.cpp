#include <iostream>
using namespace std;
int n,m;
int main(){
	while(cin >> n){
		if(n==-1)return 0;
		cin >> m;
		int sum=n*m,ans=0;
		while(sum){
			sum-=sum/m+(sum%m?1:0);
			++ans;
		}
		cout << ans << "\n";
	}
} 
