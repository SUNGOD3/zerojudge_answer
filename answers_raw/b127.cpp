#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		int i=1,ans=0,j=1;
		for(;n>0;n--){
			ans+=j;
			j=i;
			i=ans;
		}
		cout << ans << endl;
	}
} 
