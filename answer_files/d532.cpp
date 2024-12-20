#include <iostream>

using namespace std;

int main (){
	
	int a=0,b=0,ans=0;
	while(cin >> a >> b){
		for(int i=a;i<=b;i++){
			if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
				ans++;
			}
		}
		cout << ans << endl;
		ans=0;
	}
	
} 
