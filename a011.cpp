#include <iostream>
#include <string>

using namespace std;

int main(){
	int ans=0;
	bool b=false;
	string a;
	while(getline(cin,a)){
		for(int i=0;i<a.length();i++){
			if(a[i]<=122&&a[i]>=97||a[i]>=65&&a[i]<=90){
				if(b==false){
					ans++;
				}
				b=true;
			}
			else{
				b=false;
			}
		}
		b=true;
		cout << ans << endl;
		ans=1;
	}
	
} 
