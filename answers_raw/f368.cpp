#include <iostream>
using namespace std;
int sl,ans;
string s,pw[1005]={"1"};
string add(string a,string b){
	int tmp[306]={0},al=a.length(),bl=b.length();
	string c;
	for(int i=0;i<al;++i)tmp[al-i-1]+=a[i]-'0';
	for(int i=0;i<bl;++i)tmp[bl-i-1]+=b[i]-'0';
	for(int i=0;i<305;++i)
		if(tmp[i]>9){
			++tmp[i+1];
			tmp[i]-=10;
		}
	for(int i=305;i>=0;--i)
		if(tmp[i]){
			al=i;
			break;
		}
	for(int i=al;i>=0;--i)c+=tmp[i]+'0';
	return c;
}
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<=1000;++i){
		pw[i]=add(pw[i-1],pw[i-1]);
	}
	while(cin >> s){
		sl=s.size();
		ans=0;
		for(int i=0;i<sl;++i){
			if(s[i]=='R'){
				if(s[i+1]=='E'&&s[i+2]=='D'){
					i+=2;
					++ans;		
				}
			} 
			else if(s[i]=='G'){
				if(s[i+1]=='R'&&s[i+2]=='E'&&s[i+3]=='E'&&s[i+4]=='N'){
					i+=4;
					++ans;
				}
			}
		}	
		cout << "1/" << pw[ans] << "\n";
	}
} 
