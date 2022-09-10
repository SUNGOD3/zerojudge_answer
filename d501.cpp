#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a;
	while(cin >> a){
		cout << "A=";
		int b[a];
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		sort(b,b+a);
		if(a%2){
			cout << b[a/2] << "\n";
		}
		else{
			int c=b[a/2-1],d=b[a/2];
			for(;c<=d;c++){
				if(c==d){
					cout << c << "\n";
				}
				else{
					cout << c << "¡B";
				}
			}
		}
	}
} 
