#include <iostream>
using namespace std;
int main(){
	bool ans=0,f=0;
	string a;
	cin >> a;
	int al=a.length(),zero=0,one=0;
	for(int i=0;i<al;++i){
		if(a[i]=='1')++one;
		if(a[i]=='0')++zero;
	}
	if(one+zero!=al){
		cout << "1 ";
		ans=1;
	}
	if(al>12||al<8){
		cout << "2 ";
		ans=1;
	}
	if(zero<2){
		cout << "3 ";
		ans=1;
	}
	if(one<3){
		cout << "4 ";
		ans=1;
	}
	for(int i=0;i<al-2;++i){
		if(a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1'){
			f=1;
			break;
		}
	}
	if(f==0){
		cout << "5 ";
		ans=1;
	}
	if(ans==0)
		cout << "0 ";
} 
