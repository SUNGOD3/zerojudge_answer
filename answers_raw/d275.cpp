#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string b;
	getline(cin,b);
	while(getline(cin,b)){
		int F=0,M=0;
		for(int i=0,bb=b.length();i<bb;i++){
			if(b[i]=='F')
				F++;
			else if(b[i]=='M')
				M++;
		}
		(F==M&&F>1)?cout << "LOOP\n":cout << "NO LOOP\n";
	}
} 
