#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin >> a;
	while(cin >> a){
		int ans=0;
		bool c=1;
		for(int i=0;i<a.length();i++){
			if(a[i]=='Y')
				ans++;	
			else if(a[i]=='N')
				ans--;
			if(ans<0){
				c=0;
				break;
			}
		}
		if(ans>0)
			c=0;
		if(c==1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
} 
