#include <iostream>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a,b,r;
    while(cin >> a >> b){
    	r+=a;
    	while(a>0){
    		r+=a/b;
    		a=(a%b+a/b);
    		if(a<b){
    			break;
			}
		}
		cout << r << endl;
		r=0;
	}
}
