#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int a,ans=0;
	int b[10];
	while(1){
		for(int i=0;i<10;i++){
			cin >> b[i];
		}
		cin >> a;
		for(int i=0;i<10;i++){
			if(b[i]<=a+30){
				ans++;
			}
		} 
		cout << ans << endl;
		ans=0;
		break;
	}
} 
