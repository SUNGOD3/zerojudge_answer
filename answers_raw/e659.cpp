#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	int ans=0;
	while(getline(cin,a)){
		int al=a.length();
		int x=0,y=0,z=0,i;
		char c;
		for(i=0;;i++){
			if(a[i]>='0'&&a[i]<='9'){
				x*=10;
				x+=a[i]-48;
			}
			else{
				c=a[i];
				i++;
				break;	
			}
		}
		for(;;i++){
			if(a[i]>='0'&&a[i]<='9'){
				y*=10;
				y+=a[i]-48;
			}
			else{
				i++;
				break;	
			}
		}
		for(;;i++){
			if(a[i]>='0'&&a[i]<='9'){
				z*=10;
				z+=a[i]-48;
			}
			else
				break;	
		}
		if(c=='+'){
			if(x+y==z){
				ans++;
			}
		}
		else if(c=='-'){
			if(x-y==z){
				ans++;
			}
		}
	}
	cout << ans << "\n";
} 
