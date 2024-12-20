#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		int b[a],ans=0,c[a]={0},h=0;
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		for(int i=0;i<a;i++){
			if(b[i]!=b[i+1]){
				c[h]=b[i];
				h++;
			}
		}
		for(int i=1;i<h-1;i++){
			if(c[i]>c[i+1]&&c[i]>c[i-1]){
				ans++;
			}
		}
		cout << ans << "\n";
	}
} 
