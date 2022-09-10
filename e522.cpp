#include <iostream>
#include <iomanip>
using namespace std;
int t,al,ans,buf0,buf1;
string a,buf[8]={"000","001","010","011","100","101","110","111"};
void io(bool p){
	if(p){
		cout << "1" << buf[buf1] << " ";
		buf1=0;
	}
	else{
		cout << "0" << buf[buf0] << " ";
		buf0=0;
	}
	ans+=4;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	getline(cin,a);
	while(t--){
		getline(cin,a);
		al=a.length();
		ans=buf0=buf1=0;
		int s=1;
		for(int i=0;i<al;++i){
			if(a[i]!='0'&&a[i]!='1'){
				cout << "-1\n";
				s=0;
				break;
			}
		}
		for(int i=0;i<al&&s;++i){
			if(a[i]=='0'){
				++buf0;
				if(buf0==7)
					io(0);
				else if(buf1)
					io(1);
			}
			else if(a[i]=='1'){
				++buf1;
				if(buf0)
					io(0);
				else if(buf1==7)
					io(1);
			}
		}
		if(buf0)
			io(0);
		if(buf1)
			io(1);
		if(s)cout << fixed << setprecision(0) << (double)ans*100/(double)al << "%\n";
	}
}
