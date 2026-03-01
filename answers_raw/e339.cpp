#include <iostream>

using namespace std;

int main(){
	
	long long int a=0,tem=0;
	while(cin >> a){
		long long int b[a],c[a];
		for(int i=0;i<a;i++){
			cin >> b[i];
			c[i]=0;
		}
		for(int i=1;i<a;i++){
			c[i]+=c[i-1]+b[i-1];
			cout << c[i] << " ";
		}
		cout << b[a-1]+c[a-1];
		cout << endl;
	}
} 
