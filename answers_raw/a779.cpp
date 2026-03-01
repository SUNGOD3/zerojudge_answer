#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		string b;
		bool c=0;
		for(int i=0;i<a.length();i++){
			if(a[i]<='Z'&&a[i]>='A')
				b+=(a[i]+32);
			else if((a[i]<='z'&&a[i]>='a')||(a[i]<='9'&&a[i]>='0'))
				b+=a[i];
		}
		for(int i=0;i<b.length()&&c==0;i++)
			if(b[i]!=b[b.length()-1-i])
				c=1;
		if(c==0)
			cout << a << "\n-- is a palindrome\n";
		else
			cout << a << "\n-- is not a palindrome\n";
	}
} 
