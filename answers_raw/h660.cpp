#include <iostream>
using namespace std;
int ans,d,v,b,x,s;
int main(){
	cin >> ans >> d >> v >> b;
	for(int i=0;i<b;++i){
		cin >> x >> s;
		if(abs(ans-x)<=d){
			if(s<=v){
				ans=x;
			}
			else{
				if(x>=ans){
					ans-=15;
				}
				else{
					ans+=15;
				}
			}
		}
	}
	cout << ans;
} 
