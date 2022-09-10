#include <iostream>
#include <algorithm>
using namespace std;
int n,a[21],it,o[21],oit,e[21],eit,tmp;
string s;
char d;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(getline(cin,s)){
		tmp=eit=oit=it=0;
		s+=',';
		for(int i=0;i<s.length();++i){
			if(s[i]>='0'&&s[i]<='9'){
				tmp*=10;
				tmp+=s[i]-'0';
			}
			else{
				a[it++]=tmp;
				tmp=0;
			}
		}
		for(int i=0;i<it;++i){
			if(i%2==0)
				o[oit++]=a[i];
			else
				e[eit++]=a[i];
		}
		sort(o,o+oit);
		sort(e,e+eit);
		for(int i=0;i<it;++i){
			if(i%2==0){
				if(i)cout << ',';
				cout << o[i/2];
			}
			else
				cout << ',' << e[i/2];
		}
		cout << '\n';
	}
} 
