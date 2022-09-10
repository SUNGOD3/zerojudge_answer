#include <iostream>
using namespace std;
string a;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a){
		long long int al=a.length(),ans=0,buf=0,buf2=0;
		for(int i=0;i<al;++i){
			if(a[i]>='0'&&a[i]<='9'){
				buf *= 10;
				buf += a[i]-'0';
			}
			else if(a[i]!='.'){
				if(a[i]=='g')
					ans += buf * 8000000000;
				else if(a[i]=='m')
					ans += buf * 8000000;
				else if(a[i]=='k')
					ans += buf * 8000 + buf2 * 800;
				else if(a[i]=='b'){
					if(a[i+1]=='y'){
						++i;
						buf *= 8;
					}
					i+=2;
					ans += buf + buf2;
				}
				if(a[i+1]=='b')++i;
				buf = buf2 = 0;
			}
			else buf2 += a[++i]-'0';
		}
		cout << ans << "\n";
	}
} 
