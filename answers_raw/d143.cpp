#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int a,b;
    cin >> a;
    while(cin >> a >> b){
    	if(a>b){
    		cout << ">" << endl;
		}
		else if(a<b){
			cout << "<" << endl;
		}
		else{
			cout << "=" << endl;
		}
	}
} 
