#include <iostream>
using namespace std;
int m[12];
int main(){
	while(cin >> m[0]){
		int ans=0,s=0,c=0;
		for(int i=1;i<12;++i){
			cin >> m[i];
		}
		for(int i=0;i<12;++i){
			ans+=300;
			ans-=m[i];
			if(ans<0){
				cout << -(i+1) << "\n";
				c=1;
				break;
			}
			else{
				s+=ans/100;
				ans%=100;
			}
		}
		if(c==0){
			cout << s*120+ans << "\n";
		}
	}
} 
