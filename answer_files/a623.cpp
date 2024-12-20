#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
		long long int n=1,m=1;
		for(int i=1;i<=a;i++){
			n*=i;
		}
		for(int i=1;i<=a-b;i++){
			m*=i;
		}
		for(int i=b;i>0;i--){
			m*=i;
		}
		cout << n/m << endl;
	}
}
