#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	while(cin >> a >> b >> c >> d){
		int k=0;
		a-=37*c+(b%8)*8;
		if(b>0){
			k+=(b/8+1);
			if(b%8==0)
				k--;	
		}
		if(a>0){
			k+=(a/64+1);
			if(a%64==0)
				k--;
		}
		cout << d+c+k << "\n";
	}
}
