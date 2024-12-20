#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,x;
	while(cin >> n){
		int sum(0),t=n,st;
		if(n==0)
			cout << "0\n";
		else{
			while(n--){
				cin >> x;
				sum+=x;
			}
			st=sum/t;
			(st*t*2)+t<=sum<<1?cout << sum/t+1 << '\n':cout << sum/t << '\n'; 
		}
	}
} 
