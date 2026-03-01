#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string a;//abcde l5
	
	while(cin >> a){
		
		for(int i=0;i<a.length();i++){
			for(int j=i;j<a.length()+i;j++){
				if(j<a.length()){// a[0]=a 
					cout << a[j];
				}
				if(j>=a.length()){
					cout << a[j-a.length()];
				}
			}
			cout << endl;
		}
	}
	
} 
