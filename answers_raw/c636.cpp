#include <iostream>

using namespace std;

int main(){
	
	int i=0;
	while(cin >> i){
		if(i<=0){
			i++;
		}
		while(i<=0){
			i+=12;
		}
		if(i%12==1){
			cout << "¹«" << endl; 
		}
		else if(i%12==2){
			cout << "¤û" << endl; 
		}
		else if(i%12==3){
			cout << "ªê" << endl; 
		}
		else if(i%12==4){
			cout << "¨ß" << endl; 
		}
		else if(i%12==5){
			cout << "Às" << endl; 
		}
		else if(i%12==6){
			cout << "³D" << endl; 
		}
		else if(i%12==7){
			cout << "°¨" << endl; 
		}
		else if(i%12==8){
			cout << "¦Ï" << endl; 
		}
		else if(i%12==9){
			cout << "µU" << endl; 
		}
		else if(i%12==10){
			cout << "Âû" << endl; 
		}
		else if(i%12==11){
			cout << "ª¯" << endl; 
		}
		else if(i%12==0){
			cout << "½Þ" << endl; 
		}
	}
	
} 
