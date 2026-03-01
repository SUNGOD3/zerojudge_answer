#include <iostream>
#include <algorithm>
using namespace std;
string s;
int main(){
	cin >> s;
	while(s.size()>1){	
		if(s.size()>3){
			int r=(s[0]-'0')*(s[1]-'0');
			int l=(s[2]-'0')*(s[3]-'0');
			if(s[2]=='0')l=s[3]-'0';
			string nxt,nxt2;
			while(r){
				nxt+=r%10+'0';
				r/=10;
			}
			reverse(nxt.begin(),nxt.end());
			if(l==0)nxt2="0";
			while(l){
				nxt2+=l%10+'0';
				l/=10;
			}
			reverse(nxt2.begin(),nxt2.end());
			s=nxt+nxt2;
		}
		else if(s.size()>2){
			int r=(s[0]-'0')*(s[1]-'0');
			int l=(s[1]-'0')*(s[2]-'0');
			string nxt,nxt2;
			while(r){
				nxt+=r%10+'0';
				r/=10;
			}
			reverse(nxt.begin(),nxt.end());
			if(l==0)nxt2="0";
			while(l){
				nxt2+=l%10+'0';
				l/=10;
			}
			reverse(nxt2.begin(),nxt2.end());
			s=nxt+nxt2;
		}
		else{
			int r=(s[0]-'0')*(s[1]-'0');
			string nxt;
			while(r){
				nxt+=r%10+'0';
				r/=10;
			}
			reverse(nxt.begin(),nxt.end());
			s=nxt;
		}
	}
	if(s.size()==0)s="0";
	cout << s;
}
