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
			cout << "��" << endl; 
		}
		else if(i%12==2){
			cout << "��" << endl; 
		}
		else if(i%12==3){
			cout << "��" << endl; 
		}
		else if(i%12==4){
			cout << "��" << endl; 
		}
		else if(i%12==5){
			cout << "�s" << endl; 
		}
		else if(i%12==6){
			cout << "�D" << endl; 
		}
		else if(i%12==7){
			cout << "��" << endl; 
		}
		else if(i%12==8){
			cout << "��" << endl; 
		}
		else if(i%12==9){
			cout << "�U" << endl; 
		}
		else if(i%12==10){
			cout << "��" << endl; 
		}
		else if(i%12==11){
			cout << "��" << endl; 
		}
		else if(i%12==0){
			cout << "��" << endl; 
		}
	}
	
} 
