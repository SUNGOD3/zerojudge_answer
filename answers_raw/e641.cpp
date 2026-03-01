#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		int al=a.length();
		bool x=0;
		for(int i=0;i<al;i++){
			if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V'){
				cout << '1';
				x=1;
				while(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V')
					i++;
			}
			if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z'){
				cout << '2';
				x=1;
				while(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z')
					i++;
			}
			if(a[i]=='D'||a[i]=='T'){
				cout << '3';
				x=1;
				while(a[i]=='D'||a[i]=='T')
					i++;	
			}
			if(a[i]=='L'){
				cout << '4';
				x=1;
				while(a[i]=='L')
					i++;	
			}
			if(a[i]=='M'||a[i]=='N'){
				cout << '5';
				x=1;
				while(a[i]=='M'||a[i]=='N')
					i++;
			}	
			if(a[i]=='R'){
				cout << '6';
				x=1;
				while(a[i]=='R')
					i++;
			}
			if(x==1){
				i--;
				x=0;
			}
		}
		cout << "\n";
	}
} 
