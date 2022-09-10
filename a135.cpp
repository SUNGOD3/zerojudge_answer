#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	int i=0;
	while(cin >> a){
		i++;
		if(a=="#"){
			break;
		}
		else if(a=="HELLO"){
			cout << "Case " << i << ": ENGLISH" << endl; 
		}
		else if(a=="HOLA"){
			cout << "Case " << i << ": SPANISH" << endl;
		}
		else if(a=="HALLO"){
			cout << "Case " << i << ": GERMAN" << endl;
		}
		else if(a=="BONJOUR"){
			cout << "Case " << i << ": FRENCH" << endl;
		}
		else if(a=="CIAO"){
			cout << "Case " << i << ": ITALIAN" << endl;
		}
		else if(a=="ZDRAVSTVUJTE"){
			cout << "Case " << i << ": RUSSIAN" << endl;
		}
		else{
			cout << "Case " << i << ": UNKNOWN" << endl;
		}
	}
	
	
} 
