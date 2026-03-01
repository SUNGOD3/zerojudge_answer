#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	long long int a=0,b=0,c=1,ans=0;
	while(cin >> a >> b){
		if(a>0||b>0){
			while(c*c<a){
				c++;
			}
			while(c*c<=b){
				c++;
				ans++;
			}
			cout << ans << endl;
			ans=0;
			c=0;
		}
	}
	
} 
