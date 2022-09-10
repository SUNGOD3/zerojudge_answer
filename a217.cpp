#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		bool b=1;
		a+='\n';
		for(int i=0,al=a.length();i<al;i++){
			if(b==1&&a[i]>='a'&&a[i]<='z'){
				a[i]-=32;
				b=0;
			}
			else if(a[i]=='?'||a[i]=='!'||a[i]=='.')
				b=1;
			else if(a[i]=='i'&&(a[i+1]>'z'||a[i+1]<'a')){
				if(i==0)
					a[i]-=32;
				else if((a[i-1]>'z'||a[i-1]<'a')&&(a[i-1]>'Z'||a[i-1]<'A'))
					a[i]-=32;
			}
			cout << a[i];
		}
	}
} 
