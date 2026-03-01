#include <iostream>
#include <string> 
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	string a,b;
	bool c=false;
	while(cin >> a){
		b.clear();
		for(int i=0;i<a.length();i++){
			if(a[i]>=65&&a[i]<=90){
				b+=a[i]+32;
			}
			else if(a[i]>=97&&a[i]<=122){
				b+=a[i];
			}
		}
		c=true;
		if(b.length()%2==0){
			for(int i=0;i<b.length();i++){
				for(int j=i+1;j<b.length();j++){
					if(b[i]==b[j]&&b[i]!='0'&&b[j]!='0'){
						b[i]='0';
						b[j]='0';
					}
				}
			}
			for(int i=0;i<b.length();i++){
				if(b[i]!='0'){
					c=false;
					break;
				}
			}
		}
		else{
			int d=true;
			for(int i=0;i<b.length();i++){
				for(int j=i+1;j<b.length();j++){
					if(b[i]==b[j]&&b[i]!='0'&&b[j]!='0'){
						b[i]='0';
						b[j]='0';
					}
				}
			}
			for(int i=0;i<b.length();i++){
				if(b[i]!='0'){
					if(d==false){
						c=false;
						break;
					}
					d=false;
				}
			}
		}
		if(c==true){
			cout << "yes !" << endl;
		}
		else{
			cout << "no..." << endl;
		}
	}
}
