#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	cout << "         NAME                     SOUNDEX CODE\n";
	while(cin >> a){
		cout << "         " << a;
		int tmpl=a.length();
		while(tmpl<25){
			cout << " ";
			++tmpl;
		}
		string ans;
		ans+=a[0];
		int it=1;
		char tmp;
		for(int i=0,al=a.length();i<al;++i){
			if(a[i]=='B'||a[i]=='P'||a[i]=='F'||a[i]=='V'){
				a[i]='1';
			}
			else if(a[i]=='C'||a[i]=='S'||a[i]=='K'||a[i]=='G'||a[i]=='J'||a[i]=='Q'||a[i]=='X'||a[i]=='Z'){
				a[i]='2';
			}
			else if(a[i]=='D'||a[i]=='T'){
				a[i]='3';
			}
			else if(a[i]=='L'){
				a[i]='4';
			}
			else if(a[i]=='M'||a[i]=='N'){
				a[i]='5';
			}
			else if(a[i]=='R'){
				a[i]='6';
			}
			else{
				a[i]='0';
			}
		}
		tmp=a[0];
		for(int i=1,al=a.length();i<al;++i){
			if(a[i]!='0'&&a[i]!=tmp){
				ans+=a[i];
			}
			tmp=a[i];
		}
		int ansl=ans.length();
		if(ansl<4){
			cout << ans;
			while(ansl<4){
				cout << '0';
				++ansl;
			}
			cout << "\n";
		}
		else{
			for(int i=0;i<4;++i){
				cout << ans[i];
			}
			cout << "\n";
		}
	}
	cout << "                   END OF OUTPUT\n";
} 
