#include <iostream>
using namespace std;
int main(){
	string a;
	char aa[8];
	while(getline(cin,a)){
		cout << "___________\n";
		a+='\n';
		int al=a.length();
		for(int it=0;it<al;++it){
			cout << "|";
			int b=a[it];
			for(int i=0;i<8;++i){
				if(b%2)
					aa[i]='o';
				else
					aa[i]=' ';
				b/=2;
			}
			for(int i=7;i>=0;--i){
				cout << aa[i];
				if(i==3)cout << ".";
			}
			cout << "|\n"; 
		}
			cout << "___________\n";
	}
} 
