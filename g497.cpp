#include <iostream>
using namespace std;
long long n,x,y=1,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		if(x>y){
			ans+=(x-y)*3;
		}
		else{
			ans+=(y-x)*2;
		}
		y=x;
	}
	cout << ans;
} 
