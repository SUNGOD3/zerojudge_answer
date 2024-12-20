#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	
	while(getline(cin,a)){
		int l=0,r=0,k=0,ans;
		bool c=1;
		for(int i=0;i<a.length();i++){
			if(a[i]=='('){
				l++;
			}
			else if(a[i]==')'){
				r++;
			}
		}
		for(int i=0;i<a.length();i++){
			while(a[i]=='('){
				k=i;
				a[i]='0';
				while(a[i]!=')'){
					i++;
					if(i>a.length()){
						c=0;
						break;
					}
				}
				a[i]='0';
				i=k;
				ans++;
			}
		}
		if(l!=r||c==0){
			ans=0;
		}
		cout << ans << endl;
		ans=0;
	}
}
