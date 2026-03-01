#include <iostream>
using namespace std;
int main(){
	int t,x;
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		bool ac=1;
		for(int i=0;i<3;++i){
			cin >> x;
			if(x>20)ac=0;
		}
		cout << "Case " << ca << ": ";
		ac?cout << "good\n":cout << "bad\n";
	}
}
