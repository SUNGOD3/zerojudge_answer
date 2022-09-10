#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		int b[a]={0};
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		int c,x,y;
		cin >> c;
		for(int i=0;i<c;i++){
			cin >> x >> y;
			cout << b[x]+b[y] << endl;
		}
	}
} 
