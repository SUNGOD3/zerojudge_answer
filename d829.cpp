#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string a;
 	while(cin >> a){
 		if(a=="#")break;
 		bool k=0;
 		while(next_permutation(a.begin(),a.end())){  
        	cout << a << "\n";
			k=1; 
			break; 
   		} 
   		if(k==0)
   			cout << "No Successor\n";
	}
 }
