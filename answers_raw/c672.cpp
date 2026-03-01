#include <iostream>
using namespace std;
int ch(string b){
	int bl=b.length(),tmp=0;
	for(int i=0;i<bl;++i){
		tmp*=16;
		if(b[i]>='A')
			tmp+=b[i]-'A'+10;
		else
			tmp+=b[i]-'0';
	}
	return tmp;
}
string hc(int b){
	int f=b/16,ff=b%16;
	string ans;
	if(f>=10)
		ans+=f-10+'A';
	else
		ans+=f+'0';
	if(ff>=10)
		ans+=ff-10+'A';
	else
		ans+=ff+'0';
	return ans;
}
int main(){
	string a;
	while(cin >> a){
		if(a[0]=='#'){
			cout << ch(a.substr(1,2)) << " " << ch(a.substr(3,2)) << " " << ch(a.substr(5,2)) << "\n";
		}
		else{
			int aa=0,bb,cc;
			for(int i=0,al=a.length();i<al;++i){
				aa*=10;
				aa+=a[i]-'0';
			}
			cin >> bb >> cc;
			cout << "#" << hc(aa) << hc(bb) << hc(cc) << "\n";
		}
	}
} 
