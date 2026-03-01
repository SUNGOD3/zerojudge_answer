#include <iostream>
using namespace std;
int ax[300],bx[300],ac=1,ct;
string a,b,c;
int main(){
	cin >> a >> b >> c;
	for(int i=0;i<a.length();++i){
		if(ax[a[i]]==0){
			if(bx[b[i]]){
				ac=0;
			}
			bx[b[i]]=1;
			ax[a[i]]=b[i];
		}
		else{
			if(ax[a[i]]!=b[i])ac=0;
		}
	}
	for(int i=0;i<300;++i){
		if(ax[i]){
			++ct;
		}
	}
	if(ct<26)ac=0;
	if(ac==0){
		cout << "Failed";
	}
	else{
		for(int i=0;i<c.length();++i){
			cout << (char)ax[c[i]];
		}
	}
} 
