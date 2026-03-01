#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	while(cin >> a){
		getline(cin,b);
		getline(cin,b);
		int al=a.length(),bl=b.length();
		for(int i=0;i<al;i++){
			if(a[i]>='A'&&a[i]<='Z')
				a[i]+=32;
		}
		for(int i=0;i<bl;i++){
			if(b[i]>='A'&&b[i]<='Z')
				b[i]+=32;
		}
		b+=' ';
		string c;
		int chat=-1,ans=0,n=0;
		for(int i=0;i<=bl;i++){
			if(b[i]==' '){
				if(c==a){
					if(chat==-1)
						chat=n;
					ans++;
				}	
				c.clear();
				n=i+1;
			}
			else
				c+=b[i];
		}
		if(chat==-1)
			cout << "-1\n";
		else
			cout << ans << " " << chat << "\n";
	}
} 
