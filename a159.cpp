#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,e,o,t,i;
	string b;
	cin >> a;
	while(a--){
		for(i=0,e=0,o=0;i<4;i++){
			cin >> b;
			t=(b[0]-48)*2;
			(t>9)?o+=t/10+t%10:o+=t;
			t=(b[2]-48)*2;
			(t>9)?o+=t/10+t%10:o+=t;	
			e+=b[1]+b[3];
		}
		e-=384;
		((o+e)%10==0)?cout << "Valid\n":cout << "Invalid\n";
	}
}
