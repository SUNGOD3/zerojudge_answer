#include <iostream>
#include <string>
using namespace std;
int main(){
	long long int y,i;
	string a;
	string w[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	while(cin >> a){
		cin >> y;
		for(i=0;i<7;i++){
			if(a==w[i]){
				break;
			}
		}
		cout << w[(i+y)%7] << "\n";
	}
} 
