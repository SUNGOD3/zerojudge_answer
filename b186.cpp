#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a,b,c;
	while(cin >> a >> b >> c){
		cout << a << " 個餅乾，";
		if(a/10>c/2){
			cout << b+c/2 << " 盒巧克力，";
		}
		else
			cout << b+a/10<< " 盒巧克力，";
		cout << c << " 個蛋糕。" << endl;	
	}
}
