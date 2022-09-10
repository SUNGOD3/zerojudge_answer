#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	int a,b,r,N;
	while(cin >> a >> b >> N){
		r=a%b;
		cout << a/b;
		cout << ".";
		for(;N>0;N--){
			r*=10;
			cout << r/b;
			r=r%b;	
		}
		cout << endl;
	}
} 
