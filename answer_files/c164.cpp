#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		int ans=0;
		for(int j=1,i=1;a>0;j++,a--){
			ans+=i;
			if(i==j){
				i++;
				j=0;
			}
		}
		cout << ans << endl;
	}
} 
