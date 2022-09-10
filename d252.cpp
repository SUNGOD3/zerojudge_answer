#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	while(getline(cin,a)){
		int n=0;
		getline(cin,b);
		for(int i=0,bl=b.length(),al=a.length();i<bl;i++){
			if(b[i]=='0')
				n=0;
			else if(b[i]=='$'){
				n=al;
			}
			else if(b[i]=='x'&&n!=al){
				string c;
				for(int ii=0;ii<al;ii++)
					if(ii!=n)
						c+=a[ii];
				a=c;
				al=a.length();
			}
			else if(b[i]=='s'&&n!=al&&n!=al-1){
				a[n]^=a[n+1];
				a[n+1]^=a[n];
				a[n]^=a[n+1];
			}
			else if(b[i]=='i'){
				i++;
				string c;
				for(int ii=0;ii<al;ii++){
					if(ii==n)
						c+=b[i];
					c+=a[ii];
				}
				n++;
				a=c;
				al=a.length();
			}
			else if(b[i]=='u'){
				if(a[n]<='z'&&a[n]>='a')
					a[n]-=32;
				n++;
			}
			else if(b[i]=='+'){
				n++;
			}
			else if(b[i]=='-'){
				n--;
			}
		}
		cout << a << "\n";
	}
} 
