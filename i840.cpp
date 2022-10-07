#include <iostream>
using namespace std;
char a[5][5];
int main(){
	for(int i=0;i<5;++i)
		for(int j=0;j<5;++j)
			cin >> a[i][j];
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j)
			cout << a[j][i];
		cout << "\n"; 
	}
} 
