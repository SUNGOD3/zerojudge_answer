#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		int al=a.length()-1;
		for(int i=0;al>=0;++i){
			if(al==i-1){
				--al;
				cout << "\n";
				i=0;
			}
			if(al==-1)
				break;
			cout << a[i] ;
		}
	}
} 
