#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int a1,a2,b1,b2=0;
    while(cin >> a1 >> b1 >> a2 >> b2){
    	if(a1==0){
    		return 0;
		}
    	else if(a1==a2&&b1==b2){
    		cout << 0 << endl;
		}
		else if((a1==a2&&b1!=b2)||(a1!=a2&&b1==b2)){
			cout << 1 << endl;
		}
		else if((a1-a2)==(b1-b2)||(a1-a2)==-(b1-b2)){
			cout << 1 << endl;
		}
		else{
			cout << 2 << endl;
		}
	}
} 
