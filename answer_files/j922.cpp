#include <iostream>
using namespace std;
int fr=-1,oft='a'-'A';
string s,a,c,d;
int main(){
	getline(cin,s);
	for(int i=0;i<s.size();++i){
		if(s[i]!=' '&&fr==-1)fr=i;
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=oft;
		}
	}
	a=d=c=s;
	a[fr]-=oft;
	for(int i=0;i<s.size();++i){
		if(s[i]>='a'&&s[i]<='z'){
			if(i==0||!((s[i-1]>='a'&&s[i-1]<='z')||(s[i-1]>='A'&&s[i-1]<='Z'))){
				c[i]-=oft;
			}
			s[i]-=oft;
		}
	}
	cout << a << "\n" << s << "\n" << c << "\n" << d;
}
