#include <iostream>

using namespace std;

int main (){
	
	int M;
	int D;
	
	while(cin >> M >> D){
		if((M*2+D)%3==0){
			cout << "´¶³q" << endl;
		}
		if((M*2+D)%3==1){
			cout << "¦N" << endl;
		}
		if((M*2+D)%3==2){
			cout << "¤j¦N" << endl;
		}
	}
}
