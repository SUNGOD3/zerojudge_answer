#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a,b,c;
	while(cin >> a >> b >> c){
		cout << a << " �ӻ氮�A";
		if(a/10>c/2){
			cout << b+c/2 << " �����J�O�A";
		}
		else
			cout << b+a/10<< " �����J�O�A";
		cout << c << " �ӳJ�|�C" << endl;	
	}
}
