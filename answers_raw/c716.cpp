#include <iostream>
#include <string>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	string a;
	while(getline(cin,a)){
		cout << "Go, " << a << ", go go" << endl;
	}
	
} 
