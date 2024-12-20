#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	while(getline(cin,a)){
		int ans=0,aa[5]={},bb[5]={};
		getline(cin,b);
		for(int i=0,k=0;i<a.length();i++){
			if(a[i]!=','&&a[i]!=' '){
				aa[k]+=a[i]-48;
				i++;
				aa[k]*=10;
				aa[k]+=a[i]-48;
				k++;
			}
		}
		for(int i=0,k=0;i<b.length();i++){
			if(b[i]!=','&&b[i]!=' '){
				bb[k]+=b[i]-48;
				i++;
				bb[k]*=10;
				bb[k]+=b[i]-48;
				k++;
			}
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(aa[i]==bb[j]){
					ans++;
					aa[i]=-1;
				}
			}
		}
		cout << ans << endl;
	}
} 
