#include <iostream>
using namespace std;
int n,ofs='a'-'A';
string b[13]={"the", "a", "an", "in", "on", "at", "of", "for", "by", "to", "and", "or", "but"},a[505],s;
int main(){
	while(cin >> s){
		for(int i=0;i<s.size();++i){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]+=ofs;
			}
		}
		a[n++]=s;
	}
	for(int i=0;i<n;++i){
		bool isc=0;
		for(int j=0;j<13;++j){
			if(a[i]==b[j]){
				isc=1;
				break;
			}
		}
		if(isc){
			if(i==0||i==n-1){
				a[i][0]-=ofs;
			}
		}
		else a[i][0]-=ofs;
		cout << a[i] << " "; 
	}
}
