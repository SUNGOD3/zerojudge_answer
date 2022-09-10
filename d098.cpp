#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		string b;
		int al=a.length(),ans=0;
		for(int i=0;i<=al;i++){
			if(a[i]!=' '&&i!=al){
				b+=a[i];
			}
			else{
				int bl=b.length();
				bool c=0;
				for(int j=0;j<bl;j++){
					if(b[j]>'9'||b[j]<'0'){
						c=1;
						break;
					}
				}
				if(c!=1){
					int x=0;
					for(int j=0;j<bl;j++){
						x*=10;
						x+=b[j]-48;
					}
					ans+=x;
				}
				b.clear();
			}
		}
		cout << ans << "\n";
	}
} 
