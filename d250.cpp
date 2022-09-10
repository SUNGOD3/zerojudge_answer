#include <iostream>
using namespace std;
int main(){
	int b=0;
	char a[9][9]={};
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			b+=a[i][j]-48;
		}
		cout << 45-b << endl;
		b=0;
	}
} 
