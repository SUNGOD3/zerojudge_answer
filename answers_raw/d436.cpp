#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string c;
	cin >> c;
	while(cin >> c){
		sort(c.begin(),c.end());
		do{ 
			cout << c <<"\n";
    	}while(next_permutation(c.begin(),c.end()));
    	cout << "\n";
	}
	/*c="ABCDEFGHI";
	do{  
			cout << c <<"\n";
   	}while(next_permutation(c.begin(),c.end()));
   	cout << "\n";*/
} 
