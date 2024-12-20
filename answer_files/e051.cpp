#include <iostream>
#include <string>
 
using namespace std;

int main(){
	
	string A;
	
	cin >> A;
	cout << A[0];
	for(int i=0;i<A.size()-2;i++){
		cout << "_";
	}
	cout << A[A.length()-1];
	return 0;
}
