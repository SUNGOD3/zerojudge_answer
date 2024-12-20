#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    double a=0.0;
    while(cin >> a){
    	if(a==0){
    		return 0;
		}
    	int b=sqrt(a);
    	if(sqrt(a)==b){
    		cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
}
