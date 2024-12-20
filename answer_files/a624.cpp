#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		int ans=0;
		bool A=0;
		bool b=0;
		if(a.length()>=8)
			ans++;
		for(int i=0;i<a.length();i++){
			if(a[i]<='z'&&a[i]>='a')
				b=1;
			else if(a[i]>='A'&&a[i]<='Z')
				A=1;
		} 
		if(b==1&&A==1)
			ans++;
		if(b==1||A==1){
			for(int i=0;i<a.length();i++){
				if(a[i]<'A'||(a[i]>'Z'&&a[i]<'a')||a[i]>'z'){
					ans++;
					break;
				}
			}
		}
		if(ans==3)
			cout << "This password is STRONG\n";
		else if(ans==2)
			cout << "This password is GOOD\n";
		else if(ans==1)
			cout << "This password is ACCEPTABLE\n";
		else
			cout << "This password is WEAK\n";
	}
} 
