#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		int al=a.length(),i=0;
		string b;
		for(;i<al;i++){
			if(a[i]=='.')break;
			b+=a[i];
		}
		a+="000";
		int x=0,t=0;
		for(i++;t<3;i++,t++){
			x*=10;
			x+=a[i]-48;
		}
		if(x%10>4){
			x+=10;
		}
		if(x>=1000||x==0){
			int y=0,bl=b.length(),j=0;
			bool ans=0;
			if(b[0]=='-'){
				j++;
				ans=1;
			}
			for(;j<bl;j++){
				y*=10;
				y+=b[j]-48;
			}
			if(x>=1000)y++;
			if(ans==1&&x!=0)cout << '-';
			cout << y << '.' << "00\n"; 
		}
		else{
			if(x<5&&b=="-0"){
				cout << "0.00\n";
			}
			else if(x<100){
				cout << b << ".0" << x/10 << "\n";
			}
			else
				cout << b << "." << x/10 << "\n";
		}
	}
} 
